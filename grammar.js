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
	  [$.dotatom],
	  [$.phrase],
	  [$.cfws],
	  [$.atom2, $.dotatom_text],
	  [$.atom2],
	  [$.msg_id],
	  [$.ccontent],
	  [$.date_time],
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
			$.ref,
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
		$.message_idfield,
	),

	ref: $ => seq(
		$.midkind,
		":",
		$.references_field
	), 
	
	midkind: $ => choice(
		$.in_reply_to,
		$.references,
	),
	
	
	addrkind: $ => choice(
		$.to,
		$.from,
		$.cc,
		$.bcc,
		$.sender,
		$.replyto,
	),
	
	// Address headers
	to: _ => reservedWord("to"),
	from: _ => reservedWord("from"),
	cc: _ => reservedWord("cc"),
	bcc: _ => reservedWord("bcc"),
	sender: _ => reservedWord("sender"),
	replyto: _ => reservedWord("reply-to"),

	// message ids
	message_id: _ => reservedWord("message-id"),
	in_reply_to: _ => reservedWord("in-replay-to"),
	references: _ => reservedWord("references"),

	// other named headers
	date: _ => reservedWord("date"),
	subject: _ => reservedWord("subject"),
	comments: _ => reservedWord("comments"),
	keywords: _ => reservedWord("keywords"),
	
	mid: $ => alias($._fieldbody, $.midfield),
	_subjectfield: $ => alias($._fieldbody, $.subjectfield),
	// _datefield: $ => alias($._fieldbody, $.datefield),
	_datefield: $ => seq($.date_time, $._line_break),

	headertype: $ => /[!-9;-~]+/,
	headerentry: $ => $._fieldbody,
	lspw: $ => repeat1(choice(
		$.wsp,
		seq($._line_break, $.wsp)
	)),
	
	date_time: $ => seq(
		optional(seq($.day_of_week, ",")),
		$.datefield,
		$.time,
		optional($.cfws)
	),
	
	day_of_week: $ => seq(
		optional($.fws),
		$.day_name,
	),

	day_name: _ => choice(
		"Mon", "Tue", "Wed", "Thu",
		"Fri", "Sat", "Sun"
	),
	
	datefield: $ => seq(
		$.day,
		$.month,
		$.year
	),
	day: $ => seq(
		optional($.fws),
		repeat1(/\d\d/),
		$.fws,
	),

	month: $ => choice(
		"Jan", "Feb", "Mar", "Apr",
		"May", "Jun", "Jul", "Aug",
		"Sep", "Oct", "Nov", "Dec"
	),
	year: $ => seq(
		$.fws,
		/\d\d\d\d/,
		repeat(/\d/),
		$.fws,
	),
	time: $ => seq(
		$.time_of_day,
		$.zone,
	),
	
	time_of_day: $ => seq(
		$.hour,
		":",
		$.minute,
		optional(
			seq(
				":",
				$.second,
			)
		)
	),
	
	hour: _ => /\d\d/,
	minute: _ => /\d\d/,
	second: _ => /\d\d/,
	
	zone: $ => seq(
		$.fws, 
		choice("+", "-"),
		/\d\d\d\d/,
	),
	
	message_idfield: $ => seq(
		$.msg_id, 
		$._line_break
	),
	
	references_field: $ => seq(
		repeat1($.msg_id),
		$._line_break
	),
	
	msg_id: $ => seq(
		optional($.cfws),
		"<",
		$.dotatom_text,
		"@",
		$.dotatom_text,
		">",
		optional($.cfws),
	),
	
	// ctext: () => /[!-\'*-\[-\]-~]+/,

	
	ccontent: $ => repeat1(
			seq(/[^\\\n()]+/,
				optional(choice(
					/\\\)/,
					/\\\(/,
					$.comment2,
				)),
		)
	),

	comment: $ => seq(
		"(",
		// seq(repeat(seq(optional($.fws), $.ccontent)), optional($.fws)), 
		repeat(
			seq(/[^\\\n()]+/,
				optional(choice(
					/\\\)/,
					/\\\(/,
					$.comment,
				)),
		)),
		")",
	),

	comment2: $ => seq(
		"(",
		repeat(
			seq(
				optional($.fws),
				$.ccontent
			)
		),
		optional($.fws),
		")",
	),

	fws: $ => prec.left(seq(optional(seq(repeat($.wsp), $._line_break)), repeat1($.wsp))),
	cfws2: $ => prec.right(choice(
		seq(repeat1(seq(optional($.fws), $.comment)), repeat($.fws)),
		repeat1($.fws),
	)),
	cfws: $ => prec.right(choice(
		seq(repeat1(seq(optional($.wsp), $.comment)), repeat($.wsp)),
		repeat1($.wsp),
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
		$._line_break,
	),
	internetaddress: $ => choice(
		$.mailbox,
		$.mailgroup,
	),
	
	mailgroup: $ => prec.right(seq (
		optional($.fws),
		$.phrase,
		":",
		choice(
			optional($.group_list),
			$.fws,
		),
		";",
		optional($.cfws),
	)),

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
			optional($.phrase),
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
	phrase: $ => seq(
		// optional($.cfws),
		repeat1($.word),
		// optional($.cfws),
	),

	word: $ => choice(
		prec(1, $.atom2),
		prec(2, $.quoted_string),
	),

	unstructured: $ => seq(
		repeat(
			seq(
				$.fws,
				/[^\n]/
			)
		),
		repeat($.wsp)
	),

	atom2: $ => seq(
		optional($.cfws),
		$.atom,
		optional($.cfws),
	),

	atom: $ => /[^()<>\[\]:;@\\,. \n\"]+/,
	dotatom: $ => seq(
		optional($.cfws),
		$.dotatom_text,
		optional($.cfws),
	),
	dotatom_text: $ => seq(
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

