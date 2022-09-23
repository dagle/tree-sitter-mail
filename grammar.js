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
    source_file: $ => seq(
		$.headers,
		// $.mime
	),
	headers: $ => repeat1(choice(
		$.addressheader,
		$.dateheader,
		$.subjectheader,
		$.midheader,
		$.headerextra,
		// prec(1, $.headerextra,
		// prec(1, $.addressheader,
		// prec(1, $.dateheader,
		// prec(1, $.subjectheader),
		// prec(2, $.midheader),
	)),
	headerextra: $ =>
		seq(
			$.identifier,
			':',
			$.headerbody,
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
	
	mid: $ => /.+/,
	subject: $ => /.+/,
	date: $ => /.+/,

	// identifier: $ => /[a-z]+/,
	// identifier: $ => /[a-z]+/,
	identifier: $ => /[^:^ ^\t^\n]+/,
	// identifier: $ => "autosubmitted",
	// todo-multiline etc
	headerbody: $ => seq($._bodycontent, repeat(seq($._line_break, $._lwsp, $._bodycontent)), $._line_break),
	lwspp: $ => /[ \t]/,
	_bodycontent: $ => /[^:^\n]+/,
	addresslist: $ => choice(
		$.mailbox,
		// $.mailgroup,
	),
	mailbox: $ => choice(
		$.addrspec,
		// seq($.phrase, $.routeaddr)
	),
	// fix this
	// phrase: $ => /[^<\n,]+/,
	routeaddr: $ => seq(
		"<",
		$.addrspec,
		">",
	),
	// don't insert newline here butin addrlist
	addrspec: $ => seq($.local, "@", $.domain, $._line_break),
	domain: $ => seq($.word, repeat(seq(".", $.word))),
	local: $ => seq($.word, repeat(seq(".", $.word))),
	// word: $ => /[^)<>@ \t]+/,
	word: $ => /[a-zA-Z\-]+/,
	
	mime: $ => repeat1($.mimeline),
	// mime: $ => /.*/,
	mimeline: $ => /.+/,
  }
})
function reserved(regex) {
  return token(prec(2, new RegExp(regex)))
}

function reservedWord(word) {
  //return word
  return alias(reserved(caseInsensitive(word)), word)
}

function caseInsensitive(word) {
  return word.split('')
    .map(letter => `[${letter}${letter.toUpperCase()}]`)
    .join('')
}

