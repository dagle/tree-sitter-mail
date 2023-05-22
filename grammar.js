// I feel like this is really slow (idk for a fact that it is)
// Somebody good at treesitter should fix it
module.exports = grammar({
  name: 'mail',
  
  externals: $ => [
	$._line_break,
	$.wsp,
	$._eof,
  ],
  precedences: $ => [
	  [$.cfws, $.lspw],
  ],

  conflicts: $ => [
	  [$.addresslist, $.lspw],
	  [$.angle_addr],
	  [$.cfws, $.fws],
  ],

  rules: {
    message: $ => seq(
		// optional($.specialFrom)
		$.headers,
		optional(seq($._line_break, $.emailbody)),
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
	// add support for comments
	header: $ => seq(
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

	headertype: $ => /[!-9;-~]+/,
	// headertype: $ => /.+/,
	// _wsp: () => /[ \t]/,
	headerentry: $ => $._fieldbody,
	lspw: $ => repeat1(choice(
		$.wsp,
		seq($._line_break, $.wsp)
	)),
	
	ctext: () => /[!-\'*-\[-\]-~]+/,
	// ctext: () => /[^\(\)\\\"]/,

	fws: $ => prec.left(seq(optional(seq(repeat($.wsp), $._line_break)), repeat1($.wsp))),
	
	ccontent: $ => choice(
		$.ctext,
		// $.qouted_pair,
		$.comment,
		// $.obs-text,
	),
	comment: $ => seq(
		"(",
		// seq(repeat(seq(optional($.fws), $.ccontent)), optional($.fws)), 
		/[^\n)]+/,
		")",
	),
	cfws: $ => prec.right(choice(
		seq(repeat1(seq(optional($.wsp), $.comment))),
		repeat1($.wsp),
		// seq(repeat1(seq(optional($.fws), $.comment)), optional($.fws)),
		// $.fws,
	)),

	_bodycontent: $ => /[^\n]+/,

	_fieldbody: $ => seq(
		$._bodycontent, 
		repeat(seq(optional($.lspw), $._bodycontent)),
		$._line_break
	),

	addresslist: $ => seq(
		$.internetaddress,
		repeat(seq(optional($.lspw), ",", $.internetaddress)),
		// repeat($.wsp),
		$._line_break,
	),
	internetaddress: $ => choice(
		$.mailbox,
		$.mailgroup,
	),
	
	mailgroup: $ => seq (
		$.name,
		":",
		optional($.group_list),
		";",
		// CFWS
	),

	group_list: $ => choice(
		$.mailbox_list,
		// CFWS
	),

	mailbox_list: $ => seq(
		$.mailbox,
		repeat(seq(",", $.mailbox)),
	),

	mailbox: $ => choice(
		seq(
			optional($.fws),
			$.addrspec,
		),
		seq(
			optional($.fws),
			optional($.name),
			$.angle_addr
		)
	),
	angle_addr: $ => prec.right(seq(
		optional($.cfws),
		"<",
		$.addrspec,
		">",
		// $.cfws,
		optional($.cfws),
	)),

	addrspec: $ => seq($.local, "@", $.domain),
	domain: $ => choice(
		$.dotatom, 
		// $.domainliteral
	),

	domainliteral: $ => /.+/,

	local: $ => choice($.dotatom, $.quoted_string),
	name: $ => repeat1($.word),
	word: $ => choice(
		prec(1, $.atom),
		prec(2, $.quoted_string),
	),

	atom: $ => /[^()<>\[\]:;@\\,. \n\"]+/,
	dotatom: $ => seq(
		// optional($.cfws),
		$.atom,
		repeat(seq(".", $.atom))
		// optional($.cfws),
	),

	domain_literal: $ => seq(
		optional($.cfws),
		"[",
		repeat(seq($.fws, /[^\\\n\[\]]+/)), 
		"]",
		optional($.cfws),
	),
	quoted_string: $ => seq(
		// optional($.cfws),
		"\"",
		repeat(seq(optional($.fws), /[^\n\"]+/)),
		optional($.fws),
		"\"",
		// optional($.cfws),
	),
	
	quotedstring: $ => seq(
		"\"",
		/[^\"]*/,
		"\""
	),
	
	// emailbody: $ => repeat1(choice(
	// 	$._quoted,
	// 	$.textline,
	// )),
	
	emailbody: $ => seq(
		$.block,
		optional($.footer)
	),

	// _fieldbody: $ => seq($._bodycontent, 
	// 	repeat(seq(optional($._seperator), $._bodycontent)),
	// 	$._line_break
	// ),
    block: ($) => seq(
	  repeat1($.line),
    ),

    _blank: () => field('blank', '\n'),
	// block: $ => seq(
	// 	$.textline
	// 	// seq($.textline, optional(token.immediate("\n")))
	// ),
	// block: $ => repeat1(
	// 	seq($.textline, optional(token.immediate("\n")))
	// ),
	// textline: $ => token(prec(-2, /.*/)),
	line: $ => token(seq(/[^\r\n]+/)),
	line_line: $ => token(seq(/[^\r\n]+/)),

	textline3: $ => token(seq(/[^\r\n]+/)),
	textline: $ => token(seq(/[^\r\n]+/)),
	textline2: $ => token(seq(/[^\r\n]+/,)),
	// textblock: $ => repeat1(seq($.textline, $._line_break)),
	// textblock: $ => repeat1(seq($.textline, token.immediate("\n"))),

    _eol: $ => choice('\n', '\r', $._eof),

	_textline: $ => /.+/,
	_text: $ => /.+/,
	_quote: $ => token(prec(2, /[ \t]*>/)),
    blank: $ => field('blank', '\n'),

	text: $ => /.*/,
	quote1: $ => seq(
		$._quote,
		$._text,
	),
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
	footertext: $ => repeat1(seq($.footerline, $._eol)),
	footerline: $ => /.+/,

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

