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
		$.headers,
		$._line_break,
		$.mime
	),
	headers: $ => repeat1(choice(
		$.addressheader,
		$.dateheader,
		$.subjectheader,
		$.midheader,
		$.headerextra,
	)),
	headerextra: $ =>
		seq(
			$.fieldname,
			// token(prec(-1, $.fieldname)),
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
	// mimetest: $ => seq($._line_break, token(prec(-1, /[A-Za-z]+/))),

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
	_bodycontent: $ => /[^:^\n]+/,
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

	// don't insert newline here butin addrlist
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
		// We should be able to match \" and not terminate
		/[^\"]*/,
		"\""
	),
	
	// mime: $ => repeat1(seq($.mimeline, $._line_break)),
	mime: $ => repeat1(seq($.mimeline, $._line_break)),
	mimeline: $ => /.+/,
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

