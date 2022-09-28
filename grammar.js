// I feel like this is really slow (idk for a fact that it is)
// Somebody good at treesitter should fix it
module.exports = grammar({
  name: 'mail',
  
  externals: $ => [
	$._line_break,
	$._lwsp,
  ],

  rules: {
    message: $ => seq(
		// optional($.specialFrom)
		$.headers,
		optional($._line_break),
		optional($.emailbody),
		optional($.footer),
	),
	headers: $ => repeat1(seq(
		choice(
			$.addressheader,
			$.dateheader,
			$.subjectheader,
			$.midheader,
			$.headerextra),
	)),
	specialFrom: $ => seq(
		reservedWord("from"),
		':',
		$.fieldbody,
	),
	headerextra: $ =>
		seq(
		    $.fieldname,
			':',
			$.fieldbody,
		),
	addressheader: $ => seq(
		$.addrkind,
		':',
		$.addresslist,
	),
	dateheader: $ => seq(
		reservedWord("date"),
		':',
		$.date
	),
	subjectheader: $ => seq(
		reservedWord("subject"),
		':',
		$.subject
	),
	midheader: $ => seq(
		reservedWord("message-id"),
		':',
		$.mid
	),
	
	addrkind: $ => choice(
		$.to,
		$.from,
		$.cc,
		$.bcc,
		$.sender,
		$.replyto,
	),
	to: $ => reservedWord("to"),
	from: $ => reservedWord("from"),
	cc: $ => reservedWord("cc"),
	bcc: $ => reservedWord("bcc"),
	sender: $ => reservedWord("sender"),
	replyto: $ => reservedWord("reply-to"),
	
	mid: $ => alias($._fieldbody, $.midfield),
	subject: $ => alias($._fieldbody, $.subjectfield),
	date: $ => alias($._fieldbody, $.datefield),

	fieldname: $ => /[^:\t\n]+/,
	fieldbody: $ => $._fieldbody,
	_fieldbody: $ => seq($._bodycontent, repeat(seq($.seperator, $._bodycontent)), $._line_break),
	seperator: $ => repeat1(choice(
		$._lwsp,
		seq($._line_break, $._lwsp)
	)),
	lwspp: $ => /[ \t]/,
	_bodycontent: $ => /[^\n]+/,
	addresslist: $ => seq(
		$.ia,
		repeat(seq(optional($.seperator), ",", $.ia)),
		$._line_break,
	),
	ia: $ => choice(
		$.mailbox,
		// $.mailgroup,
	),
	mailbox: $ => choice(
		$.addrspec,
		seq($.phrase, $.routeaddr)
	),
	routeaddr: $ => seq(
		"<",
		$.addrspec,
		">",
	),

	addrspec: $ => seq($.local, "@", $.domain),
	domain: $ => seq($._word, repeat(seq(".", $._word))),
	// XXX shouldn't this be just $._word?
	// local: $ => seq($._word, repeat(seq(".", $._word))),
	local: $ => $._word,
	phrase: $ => repeat1($._word),
	_word: $ => choice(
		$._atom,
		$.quotedstring,
	),
	_specails: $ => /[<>,;:\\@\".\[\]]/,
	_atom: $ => /[^. <>,;:\\@\".\[\]\n]+/,
	quotedstring: $ => seq(
		"\"",
		/[^\"]*/,
		"\""
	),
	
	emailbody: $ => repeat1(
		choice(
			$.line,
			$._quoted,
			$.git,
		)
	),
	line: $ => token(prec(-2, /.+/)),
	// this should be in the scanner
	_quote: $ => token(prec(-1, /[ \t]*>/)),
	quote1: $ => seq(
		$._quote,
		$.line,
	),
	quote2: $ => seq(
		$._quote,
		$._quote,
		$.line,
	),
	quote3: $ => seq(
		$._quote,
		$._quote,
		$._quote,
		$.line,
	),
	quote4: $ => seq(
		$._quote,
		$._quote,
		$._quote,
		$._quote,
		$.line,
	),
	quote5: $ => seq(
		$._quote,
		$._quote,
		$._quote,
		$._quote,
		$._quote,
		$.line,
	),
	quote6: $ => seq(
		$._quote,
		$._quote,
		$._quote,
		$._quote,
		$._quote,
		$._quote,
		$.line,
	),
	
	// this is ugly but works for now
	_quoted: $ => choice(
		$.quote1, $.quote2, $.quote3,
		$.quote4, $.quote5, $.quote6
	),
	footer: $ => seq(
	),
	footer: $ => seq(
		'-- \n',
		$.footertext,
	),
	footertext: $ => seq(/.+/),
	
	// move all of this to another module?
	git: $ => seq(
		'diff --',
		choice('git', 'cc', 'combined'),
		/.+/,
		repeat1($.actions),
		$.patch,
	),
	actions: $ => choice(
		$.old,
		$.newmode,
		$.deleted,
		$.newfile,
		$.copyfrom,
		$.copyto,
		$.renamefrom,
		$.renameto,
		$.similarity,
	    $.dissimilarity,
		$.index,
	),
	_hash: $ => /[\da-f]+/,
	_mode: $ => /\d+/,
	_path: $ => /\w/, // FIXME
	old: $ => seq(
		'old',
		'mode',
		$._mode,
	),
	newmode: $ => seq(
		'new',
		'mode',
		$._mode,
	),
	deleted: $ => seq(
		'deleted',
		'file',
		'mode',
		$._mode,
	),
	newfile: $ => seq(
		'new',
		'file',
		'mode',
		$._mode,
	),
	copyfrom: $ => seq(
		'copy',
		'from',
		$._path,
	),
	copyto: $ => seq(
		'copy',
		'to',
		$._path,
	),
	renamefrom: $ => seq(
		'rename',
		'from',
		$._path,
	),
	renameto: $ => seq(
		'rename',
		'to',
		$._path,
	),
	similarity: $ => seq(
		'similarity',
		'index',
		/\d+/,
	),
	dissimilarity: $ => seq(
		'dissimilarity',
		'index',
		/\d+/,
	),
	index: $ => seq(
		'index',
		$._hash,
		'..', 
		$._hash,
		optional($._mode),
	),
	dirname: $ =>
		token(prec(-1, /\/?([^\s\/]+\/)+/)),
	file: $ =>
		token(prec(-2, /[^\s\.\/]+/)),
	filetype: $ => 
		/[^\s]+/,
	patch: $ => seq(
		$.oldfile,
		$.newfile,
	),
	oldfile: $ => seq(
		'---',
		$.dirname,
		$.file,
		optional(seq('.', $.filetype)),
	),
	newfile: $ => seq(
		'+++',
		$.dirname,
		$.file,
		optional(seq('.', $.filetype)),
		$.diff,
	),
	diff: $ => repeat1(seq(token(prec(-1, /.+/)), $._line_break)),
  }
})
function reservedWord(word) {
  return alias(reserved(caseInsensitive(word)), word)
}

function reserved(regex) {
  return token(prec(2, new RegExp(regex)))
}

function caseInsensitive(word) {
  return word.split('')
    .map(letter => `[${letter}${letter.toUpperCase()}]`)
    .join('')
}

