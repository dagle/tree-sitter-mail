// I feel like this is really slow (idk for a fact that it is)
// Somebody good at treesitter should fix it
module.exports = grammar({
  name: 'mail',
  
  externals: $ => [
	$._line_break,
	// $.wsp,
	$._eof,
  ],
  precedences: $ => [
	  [$.cfws],
  ],

  conflicts: $ => [
	  [$.addresslist],
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
	  [$.cfws],
	  [$.block],
	  [$.cfws, $.mailbox],
	  [$.mailgroup, $.mailbox, $.cfws],
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
		$._day,
		$.month,
		$._year
	),
	_day: $ => seq(
		optional($.fws),
		$.day,
		$.fws,
	),
	
	day: $ => choice(
		/\d/,
		/\d\d/,
	),

	month: $ => choice(
		"Jan", "Feb", "Mar", "Apr",
		"May", "Jun", "Jul", "Aug",
		"Sep", "Oct", "Nov", "Dec"
	),
	_year: $ => seq(
		$.fws,
		$.year,
		$.fws,
	),

	year: _ => seq(
		/\d\d\d\d/,
		repeat(/\d/)
	),

	time: $ => seq(
		$.time_of_day,
		$._zone,
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
	
	_zone: $ => seq(
		$.fws, 
		$.zone,
	),

	zone: _ => seq(
		choice("+", "-"),
		/\d\d\d\d/,
	),
	
	message_idfield: $ => seq(
		$.msg_id, 
		$._eol,
	),
	
	references_field: $ => seq(
		repeat1($.msg_id),
		$._eol,
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
	
	line_break: $ => $._line_break,

	wsp: _ => /[\t ]/,

	fws: $ => prec.right(seq(optional(seq(repeat($.wsp), $.line_break)), repeat1($.wsp))),

	cfws: $ => choice(
		seq(repeat1(seq(optional($.fws), $.comment)), repeat($.fws)),
		repeat1($.fws),
	),

	_bodycontent: $ => /[^\n]+/,

	_fieldbody: $ => seq(
		repeat1(seq(optional($.fws), /[^\n]+/)),
		$._line_break
	),
	
	addresslist: $ => seq(
		$.internetaddress,
		repeat(seq(",", $.internetaddress)),
		$._line_break,
	),
	internetaddress: $ => choice(
		$.mailbox,
		$.mailgroup,
	),
	
	mailgroup: $ => prec.left(seq (
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
		// $.cfws
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
	angle_addr: $ => prec.left(seq(
		optional($.cfws),
		"<",
		$.addrspec,
		">",
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
		optional($.cfws),
		repeat1($.word),
		optional($.cfws),
	),

	word: $ => choice(
		prec(1, $.atom2),
		prec(2, $.quoted_string),
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
	
	emailbody: $ => seq(
		$.blocks,
		optional($.footer)
	),
	
	blocks: $ => (seq(
		repeat1($.block)
	)),

    block: $ => choice(
	  repeat1($.line),
	  repeat1($.quote1),
	  repeat1($.quote2),
	  repeat1($.quote3),
	  repeat1($.quote4),
	  repeat1($.quote5),
	  repeat1($.quote6),
	  repeat1($.quote7),
	  repeat1($.quote8),
    ),

	line: $ => /[^\n]+/,

    _eol: $ => choice($._line_break, $._eof),

	_text: $ => /[^\n]+/,
	_quote1: $ => token(prec(1, 
		">"
	)),
	_quote2: $ => token(prec(2, seq(
		">",
		">",
	))),
	_quote3: $ => token(prec(3, seq(
		">", 
		">",
		">",
	))),
	_quote4: $ => token(prec(4, seq(
		">", 
		">", 
		">",
		">",
	))),
	_quote5: $ => token(prec(5, seq(
		">", 
		">", 
		">", 
		">",
		">",
	))),
	_quote6: $ => token(prec(6, seq(
		">", 
		">", 
		">", 
		">", 
		">",
		">",
	))),
	_quote7: $ => token(prec(7, seq(
		">", 
		">", 
		">", 
		">", 
		">", 
		">",
		">",
	))),
	_quote8: $ => token(prec(8, seq(
		">", 
		">", 
		">", 
		">", 
		">", 
		">", 
		">",
		">",
	))),

	text: $ => /.*/,
	quote1: $ => seq(
		$._quote1,
		$._text,
	),
	quote2: $ => seq(
		$._quote2,
		$._text,
	),
	quote3: $ => seq(
		$._quote3,
		$._text,
	),
	quote4: $ => seq(
		$._quote4,
		$._text,
	),
	quote5: $ => seq(
		$._quote5,
		$._text,
	),
	quote6: $ => seq(
		$._quote6,
		$._text,
	),
	quote7: $ => seq(
		$._quote7,
		$._text,
	),
	quote8: $ => seq(
		$._quote8,
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

