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
			$.header),
	)),
	// specialFrom: $ => seq(
	// 	reservedWord("from"),
	// 	':',
	// 	$.fieldbody,
	// ),
	header: $ =>
		seq(
		    $.headertype,
			':',
			$.headerentry,
		),
	addressheader: $ => seq(
		$.addrkind,
		':',
		$.addresslist,
	),
	dateheader: $ => seq(
		$.date,
		':',
		$._datefield
	),
	subjectheader: $ => seq(
		$.subject,
		':',
		$._subjectfield
	),
	midheader: $ => seq(
		$.message_id,
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

	date: $ => reservedWord("date"),
	subject: $ => reservedWord("subject"),
	message_id: $ => reservedWord("message-id"),
	
	mid: $ => alias($._fieldbody, $.midfield),
	_subjectfield: $ => alias($._fieldbody, $.subjectfield),
	_datefield: $ => alias($._fieldbody, $.datefield),

	headertype: $ => /[^:\t\n]+/,
	headerentry: $ => $._fieldbody,
	_fieldbody: $ => seq($._bodycontent, repeat(seq($.seperator, $._bodycontent)), $._line_break),
	seperator: $ => repeat1(choice(
		$._lwsp,
		seq($._line_break, $._lwsp)
	)),
	lwspp: $ => /[ \t]/,
	_bodycontent: $ => /[^\n]+/,
	addresslist: $ => seq(
		$.internetaddress,
		repeat(seq(optional($.seperator), ",", $.internetaddress)),
		$._line_break,
	),
	internetaddress: $ => choice(
		$.mailbox,
		// $.mailgroup,
	),
	mailbox: $ => choice(
		$._addrspec,
		seq($.name, $._routeaddr)
	),
	_routeaddr: $ => seq(
		"<",
		$._addrspec,
		">",
	),

	_addrspec: $ => seq($.local, "@", $.domain),
	domain: $ => seq($._word, repeat(seq(".", $._word))),
	// XXX shouldn't this be just $._word?
	// this is wrong imo
	local: $ => seq($._word, repeat(seq(".", $._word))),
	name: $ => repeat1($._word),
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
	
	// emailbody: $ => repeat1(
	// 	choice(
	// 		$.textblock,
	// 		// $._quoted,
	// 		// $.git,
	// 	)
	// ),
	emailbody: $ => repeat1(choice(
		$._quoted,
		$.textline,
	)),
	textblock: $ => /[ \t]*[^>].*/,
	textline: $ => token(prec(-2, /.*/)),
	// quoteline: $ => prec(2, seq(
	// 	/[ \t]*>/,
	// 	$.textline,
	// )),
	// textblock: $ => prec(-2, $._textblock),
	_textblock: $ => seq($._textline, $._textblock),
	_textline: $ => /.+/,
	// this should be in the scanner
	// _quote: $ => prec(-1, repeat1(/[ \t]*>/)),
	// quote: $ => repeat1($._qoute1),
	_text: $ => /.+/,
	_quote: $ => token(prec(2, /[ \t]*>/)),

	text: $ => /.*/,
	quote1: $ => seq(
		$._quote,
		$._text,
	),
	// quote: $ => seq(
	// 	$._quote,
	// 	$.text,
	// ),
	quote2: $ => seq(
		$._quote,
		$._quote,
		$._text,
	),
	quote3: $ => seq(
		$._quote,
		$._quote,
		$._quote,
		$._text,
	),
	quote4: $ => seq(
		$._quote,
		$._quote,
		$._quote,
		$._quote,
		$._text,
	),
	quote5: $ => seq(
		$._quote,
		$._quote,
		$._quote,
		$._quote,
		$._quote,
		$._text,
	),
	quote6: $ => seq(
		$._quote,
		$._quote,
		$._quote,
		$._quote,
		$._quote,
		$._quote,
		$._text,
	),
	
	// this is ugly but works for now
	_quoted: $ => choice(
		$.quote1, $.quote2, $.quote3,
		$.quote4, $.quote5, $.quote6
	),
	footer: $ => seq(
		$.footersep,
		optional($.footertext),
	),
	footersep: $ => '-- \n',
	footertext: $ => repeat1($.footerline),
	footerline: $ => /.+/,

	// // move all of this to another module?
	// git: $ => seq(
	// 	'diff --',
	// 	choice('git', 'cc', 'combined'),
	// 	/.+/,
	// 	repeat1($.actions),
	// 	$.patch,
	// ),
	// actions: $ => choice(
	// 	$.old,
	// 	$.newmode,
	// 	$.deleted,
	// 	$.newfile,
	// 	$.copyfrom,
	// 	$.copyto,
	// 	$.renamefrom,
	// 	$.renameto,
	// 	$.similarity,
	//     $.dissimilarity,
	// 	$.index,
	// ),
	// _hash: $ => /[\da-f]+/,
	// _mode: $ => /\d+/,
	// _path: $ => /\w/, // FIXME
	// old: $ => seq(
	// 	'old',
	// 	'mode',
	// 	$._mode,
	// ),
	// newmode: $ => seq(
	// 	'new',
	// 	'mode',
	// 	$._mode,
	// ),
	// deleted: $ => seq(
	// 	'deleted',
	// 	'file',
	// 	'mode',
	// 	$._mode,
	// ),
	// newfile: $ => seq(
	// 	'new',
	// 	'file',
	// 	'mode',
	// 	$._mode,
	// ),
	// copyfrom: $ => seq(
	// 	'copy',
	// 	'from',
	// 	$._path,
	// ),
	// copyto: $ => seq(
	// 	'copy',
	// 	'to',
	// 	$._path,
	// ),
	// renamefrom: $ => seq(
	// 	'rename',
	// 	'from',
	// 	$._path,
	// ),
	// renameto: $ => seq(
	// 	'rename',
	// 	'to',
	// 	$._path,
	// ),
	// similarity: $ => seq(
	// 	'similarity',
	// 	'index',
	// 	/\d+/,
	// ),
	// dissimilarity: $ => seq(
	// 	'dissimilarity',
	// 	'index',
	// 	/\d+/,
	// ),
	// index: $ => seq(
	// 	'index',
	// 	$._hash,
	// 	'..', 
	// 	$._hash,
	// 	optional($._mode),
	// ),
	// dirname: $ =>
	// 	token(prec(-1, /\/?([^\s\/]+\/)+/)),
	// file: $ =>
	// 	token(prec(-2, /[^\s\.\/]+/)),
	// filetype: $ => 
	// 	/[^\s]+/,
	// patch: $ => seq(
	// 	$.oldfile,
	// 	$.newfile,
	// ),
	// oldfile: $ => seq(
	// 	'---',
	// 	$.dirname,
	// 	$.file,
	// 	optional(seq('.', $.filetype)),
	// ),
	// newfile: $ => seq(
	// 	'+++',
	// 	$.dirname,
	// 	$.file,
	// 	optional(seq('.', $.filetype)),
	// 	$.diff,
	// ),
	// diff: $ => repeat1(seq(token(prec(-1, /.+/)), $._line_break)),
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

