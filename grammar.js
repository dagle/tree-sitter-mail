module.exports = grammar({
  name: 'mail',
  
  externals: $ => [
	$._line_break,
	$._lwsp
    // $.indent,
    // $.dedent,
    // $.newline
  ],

  rules: {
    // TODO: add the actual grammar rules
    message: $ => seq(
		// optional($.specialFrom)
		$.headers,
		// optional($._line_break),
		optional($._line_break),
		optional($.emailbody),
		optional($.footer),
	),
	headers: $ => repeat1(choice(
		$.addressheader,
		$.dateheader,
		$.subjectheader,
		$.midheader,
		$.headerextra,
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
	// mimetest: $ => seq(token(prec(-1, /[A-Za-z]+/)), $._line_break),

	to: $ => reservedWord("to"),
	from: $ => reservedWord("from"),
	cc: $ => reservedWord("cc"),
	bcc: $ => reservedWord("bcc"),
	sender: $ => reservedWord("sender"),
	replyto: $ => reservedWord("reply-to"),
	
	mid: $ => seq(/.+/, $._line_break),
	subject: $ => seq(/.+/, $._line_break),
	date: $ => seq(/.+/, $._line_break),

	fieldname: $ => /[^:\t\n]+/,
	fieldbody: $ => seq($._bodycontent, repeat(seq($.seperator, $._bodycontent)), $._line_break),
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
	local: $ => seq($._word, repeat(seq(".", $._word))),
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
			$.quoted1,
			$.git,
		)
	),
	line: $ => token(prec(-2, /.+/)),
	
	// TODO do qoutes!
	// mailQuoted, we need to do this is in scanner1 but it's fine for now
	quoted1: $ => seq(
		token(prec(-1, /([ \t]*>[ \t]*)/)),
		$.line,
	),
	footer: $ => seq(
		'-- \n',
		$.footertext,
	),
	footertext: $ => seq(/.+/),
	git: $ => seq(
		'diff --',
		choice('git', 'cc', 'combined'),
		/.+/,
		$.index,
		$.patch,
	),
	actions: $ => /.+/,
	index: $ => seq(
		'index',
		/[\da-f]+/,
		optional(seq('..', /[\da-f]+/)),
		optional(/\d+/),
	),
	dirname: $ =>
		token(prec(-1, /([^\s\/]+\/)+/)),
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

