module.exports = grammar({
  name: 'email',

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => seq(
		$.headers,
		$.mime
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
	headerextra: $ => seq(
		$.identifier,
		':',
		$.headervalue
	),
	addressheader: $ => seq(
		$.addrkind,
		':',
		$.address,
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
	identifier: $ => /[A-Za-z\-]+/,
	// todo-multiline etc
	headervalue: $ => /.+/,
	address: $ => choice(
		$.mailbox,
		// $.mailgroup,
	)
	
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

