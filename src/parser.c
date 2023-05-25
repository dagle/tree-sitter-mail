#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 332
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 149
#define ALIAS_COUNT 1
#define TOKEN_COUNT 66
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_COLON = 1,
  aux_sym_to_token1 = 2,
  aux_sym_from_token1 = 3,
  aux_sym_cc_token1 = 4,
  aux_sym_bcc_token1 = 5,
  aux_sym_sender_token1 = 6,
  aux_sym_replyto_token1 = 7,
  aux_sym_message_id_token1 = 8,
  aux_sym_in_reply_to_token1 = 9,
  aux_sym_references_token1 = 10,
  aux_sym_date_token1 = 11,
  aux_sym_subject_token1 = 12,
  aux_sym_comments_token1 = 13,
  aux_sym_keywords_token1 = 14,
  sym_headertype = 15,
  anon_sym_COMMA = 16,
  anon_sym_Mon = 17,
  anon_sym_Tue = 18,
  anon_sym_Wed = 19,
  anon_sym_Thu = 20,
  anon_sym_Fri = 21,
  anon_sym_Sat = 22,
  anon_sym_Sun = 23,
  aux_sym_day_token1 = 24,
  aux_sym_day_token2 = 25,
  anon_sym_Jan = 26,
  anon_sym_Feb = 27,
  anon_sym_Mar = 28,
  anon_sym_Apr = 29,
  anon_sym_May = 30,
  anon_sym_Jun = 31,
  anon_sym_Jul = 32,
  anon_sym_Aug = 33,
  anon_sym_Sep = 34,
  anon_sym_Oct = 35,
  anon_sym_Nov = 36,
  anon_sym_Dec = 37,
  aux_sym_year_token1 = 38,
  anon_sym_PLUS = 39,
  anon_sym_DASH = 40,
  anon_sym_LT = 41,
  anon_sym_AT = 42,
  anon_sym_GT = 43,
  aux_sym_ccontent_token1 = 44,
  aux_sym_ccontent_token2 = 45,
  aux_sym_ccontent_token3 = 46,
  anon_sym_LPAREN = 47,
  anon_sym_RPAREN = 48,
  sym_wsp = 49,
  aux_sym__bodycontent_token1 = 50,
  anon_sym_SEMI = 51,
  aux_sym_domainliteral_token1 = 52,
  sym_atom = 53,
  anon_sym_DOT = 54,
  anon_sym_LBRACK = 55,
  anon_sym_RBRACK = 56,
  anon_sym_DQUOTE = 57,
  aux_sym_quoted_string_token1 = 58,
  anon_sym_LF = 59,
  aux_sym_line_token1 = 60,
  anon_sym_CR = 61,
  sym__quote = 62,
  sym_footersep = 63,
  sym__line_break = 64,
  sym__eof = 65,
  sym_message = 66,
  sym_headers = 67,
  sym_header = 68,
  sym_addressheader = 69,
  sym_dateheader = 70,
  sym_subjectheader = 71,
  sym_midheader = 72,
  sym_ref = 73,
  sym_midkind = 74,
  sym_addrkind = 75,
  sym_to = 76,
  sym_from = 77,
  sym_cc = 78,
  sym_bcc = 79,
  sym_sender = 80,
  sym_replyto = 81,
  sym_message_id = 82,
  sym_in_reply_to = 83,
  sym_references = 84,
  sym_date = 85,
  sym_subject = 86,
  sym__subjectfield = 87,
  sym__datefield = 88,
  sym_headerentry = 89,
  sym_date_time = 90,
  sym_day_of_week = 91,
  sym_day_name = 92,
  sym_datefield = 93,
  sym_day = 94,
  sym_month = 95,
  sym_year = 96,
  sym_time = 97,
  sym_time_of_day = 98,
  sym_hour = 99,
  sym_minute = 100,
  sym_second = 101,
  sym_zone = 102,
  sym_message_idfield = 103,
  sym_references_field = 104,
  sym_msg_id = 105,
  sym_comment = 106,
  sym_line_break = 107,
  sym_fws = 108,
  sym_cfws = 109,
  sym__fieldbody = 110,
  sym_addresslist = 111,
  sym_internetaddress = 112,
  sym_mailgroup = 113,
  sym_group_list = 114,
  sym_mailbox_list = 115,
  sym_mailbox = 116,
  sym_angle_addr = 117,
  sym_addrspec = 118,
  sym_domain = 119,
  sym_local = 120,
  sym_phrase = 121,
  sym_word = 122,
  sym_atom2 = 123,
  sym_dotatom = 124,
  sym_dotatom_text = 125,
  sym_quoted_string = 126,
  sym_emailbody = 127,
  sym_block = 128,
  sym_line = 129,
  sym__eol = 130,
  sym_footer = 131,
  sym_footertext = 132,
  sym_footerline = 133,
  aux_sym_headers_repeat1 = 134,
  aux_sym_year_repeat1 = 135,
  aux_sym_references_field_repeat1 = 136,
  aux_sym_comment_repeat1 = 137,
  aux_sym_fws_repeat1 = 138,
  aux_sym_cfws_repeat1 = 139,
  aux_sym_cfws_repeat2 = 140,
  aux_sym__fieldbody_repeat1 = 141,
  aux_sym_addresslist_repeat1 = 142,
  aux_sym_mailbox_list_repeat1 = 143,
  aux_sym_phrase_repeat1 = 144,
  aux_sym_dotatom_text_repeat1 = 145,
  aux_sym_quoted_string_repeat1 = 146,
  aux_sym_block_repeat1 = 147,
  aux_sym_footertext_repeat1 = 148,
  alias_sym_subjectfield = 149,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON] = ":",
  [aux_sym_to_token1] = "to",
  [aux_sym_from_token1] = "from",
  [aux_sym_cc_token1] = "cc",
  [aux_sym_bcc_token1] = "bcc",
  [aux_sym_sender_token1] = "sender",
  [aux_sym_replyto_token1] = "reply-to",
  [aux_sym_message_id_token1] = "message-id",
  [aux_sym_in_reply_to_token1] = "in-replay-to",
  [aux_sym_references_token1] = "references",
  [aux_sym_date_token1] = "date",
  [aux_sym_subject_token1] = "subject",
  [aux_sym_comments_token1] = "comments",
  [aux_sym_keywords_token1] = "keywords",
  [sym_headertype] = "headertype",
  [anon_sym_COMMA] = ",",
  [anon_sym_Mon] = "Mon",
  [anon_sym_Tue] = "Tue",
  [anon_sym_Wed] = "Wed",
  [anon_sym_Thu] = "Thu",
  [anon_sym_Fri] = "Fri",
  [anon_sym_Sat] = "Sat",
  [anon_sym_Sun] = "Sun",
  [aux_sym_day_token1] = "day_token1",
  [aux_sym_day_token2] = "day_token2",
  [anon_sym_Jan] = "Jan",
  [anon_sym_Feb] = "Feb",
  [anon_sym_Mar] = "Mar",
  [anon_sym_Apr] = "Apr",
  [anon_sym_May] = "May",
  [anon_sym_Jun] = "Jun",
  [anon_sym_Jul] = "Jul",
  [anon_sym_Aug] = "Aug",
  [anon_sym_Sep] = "Sep",
  [anon_sym_Oct] = "Oct",
  [anon_sym_Nov] = "Nov",
  [anon_sym_Dec] = "Dec",
  [aux_sym_year_token1] = "year_token1",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_LT] = "<",
  [anon_sym_AT] = "@",
  [anon_sym_GT] = ">",
  [aux_sym_ccontent_token1] = "ccontent_token1",
  [aux_sym_ccontent_token2] = "ccontent_token2",
  [aux_sym_ccontent_token3] = "ccontent_token3",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_wsp] = "wsp",
  [aux_sym__bodycontent_token1] = "_bodycontent_token1",
  [anon_sym_SEMI] = ";",
  [aux_sym_domainliteral_token1] = "domainliteral_token1",
  [sym_atom] = "atom",
  [anon_sym_DOT] = ".",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_string_token1] = "quoted_string_token1",
  [anon_sym_LF] = "\n",
  [aux_sym_line_token1] = "line_token1",
  [anon_sym_CR] = "\r",
  [sym__quote] = "_quote",
  [sym_footersep] = "footersep",
  [sym__line_break] = "_line_break",
  [sym__eof] = "_eof",
  [sym_message] = "message",
  [sym_headers] = "headers",
  [sym_header] = "header",
  [sym_addressheader] = "addressheader",
  [sym_dateheader] = "dateheader",
  [sym_subjectheader] = "subjectheader",
  [sym_midheader] = "midheader",
  [sym_ref] = "ref",
  [sym_midkind] = "midkind",
  [sym_addrkind] = "addrkind",
  [sym_to] = "to",
  [sym_from] = "from",
  [sym_cc] = "cc",
  [sym_bcc] = "bcc",
  [sym_sender] = "sender",
  [sym_replyto] = "replyto",
  [sym_message_id] = "message_id",
  [sym_in_reply_to] = "in_reply_to",
  [sym_references] = "references",
  [sym_date] = "date",
  [sym_subject] = "subject",
  [sym__subjectfield] = "_subjectfield",
  [sym__datefield] = "_datefield",
  [sym_headerentry] = "headerentry",
  [sym_date_time] = "date_time",
  [sym_day_of_week] = "day_of_week",
  [sym_day_name] = "day_name",
  [sym_datefield] = "datefield",
  [sym_day] = "day",
  [sym_month] = "month",
  [sym_year] = "year",
  [sym_time] = "time",
  [sym_time_of_day] = "time_of_day",
  [sym_hour] = "hour",
  [sym_minute] = "minute",
  [sym_second] = "second",
  [sym_zone] = "zone",
  [sym_message_idfield] = "message_idfield",
  [sym_references_field] = "references_field",
  [sym_msg_id] = "msg_id",
  [sym_comment] = "comment",
  [sym_line_break] = "line_break",
  [sym_fws] = "fws",
  [sym_cfws] = "cfws",
  [sym__fieldbody] = "_fieldbody",
  [sym_addresslist] = "addresslist",
  [sym_internetaddress] = "internetaddress",
  [sym_mailgroup] = "mailgroup",
  [sym_group_list] = "group_list",
  [sym_mailbox_list] = "mailbox_list",
  [sym_mailbox] = "mailbox",
  [sym_angle_addr] = "angle_addr",
  [sym_addrspec] = "addrspec",
  [sym_domain] = "domain",
  [sym_local] = "local",
  [sym_phrase] = "phrase",
  [sym_word] = "word",
  [sym_atom2] = "atom2",
  [sym_dotatom] = "dotatom",
  [sym_dotatom_text] = "dotatom_text",
  [sym_quoted_string] = "quoted_string",
  [sym_emailbody] = "emailbody",
  [sym_block] = "block",
  [sym_line] = "line",
  [sym__eol] = "_eol",
  [sym_footer] = "footer",
  [sym_footertext] = "footertext",
  [sym_footerline] = "footerline",
  [aux_sym_headers_repeat1] = "headers_repeat1",
  [aux_sym_year_repeat1] = "year_repeat1",
  [aux_sym_references_field_repeat1] = "references_field_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
  [aux_sym_fws_repeat1] = "fws_repeat1",
  [aux_sym_cfws_repeat1] = "cfws_repeat1",
  [aux_sym_cfws_repeat2] = "cfws_repeat2",
  [aux_sym__fieldbody_repeat1] = "_fieldbody_repeat1",
  [aux_sym_addresslist_repeat1] = "addresslist_repeat1",
  [aux_sym_mailbox_list_repeat1] = "mailbox_list_repeat1",
  [aux_sym_phrase_repeat1] = "phrase_repeat1",
  [aux_sym_dotatom_text_repeat1] = "dotatom_text_repeat1",
  [aux_sym_quoted_string_repeat1] = "quoted_string_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_footertext_repeat1] = "footertext_repeat1",
  [alias_sym_subjectfield] = "subjectfield",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_to_token1] = aux_sym_to_token1,
  [aux_sym_from_token1] = aux_sym_from_token1,
  [aux_sym_cc_token1] = aux_sym_cc_token1,
  [aux_sym_bcc_token1] = aux_sym_bcc_token1,
  [aux_sym_sender_token1] = aux_sym_sender_token1,
  [aux_sym_replyto_token1] = aux_sym_replyto_token1,
  [aux_sym_message_id_token1] = aux_sym_message_id_token1,
  [aux_sym_in_reply_to_token1] = aux_sym_in_reply_to_token1,
  [aux_sym_references_token1] = aux_sym_references_token1,
  [aux_sym_date_token1] = aux_sym_date_token1,
  [aux_sym_subject_token1] = aux_sym_subject_token1,
  [aux_sym_comments_token1] = aux_sym_comments_token1,
  [aux_sym_keywords_token1] = aux_sym_keywords_token1,
  [sym_headertype] = sym_headertype,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_Mon] = anon_sym_Mon,
  [anon_sym_Tue] = anon_sym_Tue,
  [anon_sym_Wed] = anon_sym_Wed,
  [anon_sym_Thu] = anon_sym_Thu,
  [anon_sym_Fri] = anon_sym_Fri,
  [anon_sym_Sat] = anon_sym_Sat,
  [anon_sym_Sun] = anon_sym_Sun,
  [aux_sym_day_token1] = aux_sym_day_token1,
  [aux_sym_day_token2] = aux_sym_day_token2,
  [anon_sym_Jan] = anon_sym_Jan,
  [anon_sym_Feb] = anon_sym_Feb,
  [anon_sym_Mar] = anon_sym_Mar,
  [anon_sym_Apr] = anon_sym_Apr,
  [anon_sym_May] = anon_sym_May,
  [anon_sym_Jun] = anon_sym_Jun,
  [anon_sym_Jul] = anon_sym_Jul,
  [anon_sym_Aug] = anon_sym_Aug,
  [anon_sym_Sep] = anon_sym_Sep,
  [anon_sym_Oct] = anon_sym_Oct,
  [anon_sym_Nov] = anon_sym_Nov,
  [anon_sym_Dec] = anon_sym_Dec,
  [aux_sym_year_token1] = aux_sym_year_token1,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_GT] = anon_sym_GT,
  [aux_sym_ccontent_token1] = aux_sym_ccontent_token1,
  [aux_sym_ccontent_token2] = aux_sym_ccontent_token2,
  [aux_sym_ccontent_token3] = aux_sym_ccontent_token3,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_wsp] = sym_wsp,
  [aux_sym__bodycontent_token1] = aux_sym__bodycontent_token1,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_domainliteral_token1] = aux_sym_domainliteral_token1,
  [sym_atom] = sym_atom,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_string_token1] = aux_sym_quoted_string_token1,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_line_token1] = aux_sym_line_token1,
  [anon_sym_CR] = anon_sym_CR,
  [sym__quote] = sym__quote,
  [sym_footersep] = sym_footersep,
  [sym__line_break] = sym__line_break,
  [sym__eof] = sym__eof,
  [sym_message] = sym_message,
  [sym_headers] = sym_headers,
  [sym_header] = sym_header,
  [sym_addressheader] = sym_addressheader,
  [sym_dateheader] = sym_dateheader,
  [sym_subjectheader] = sym_subjectheader,
  [sym_midheader] = sym_midheader,
  [sym_ref] = sym_ref,
  [sym_midkind] = sym_midkind,
  [sym_addrkind] = sym_addrkind,
  [sym_to] = sym_to,
  [sym_from] = sym_from,
  [sym_cc] = sym_cc,
  [sym_bcc] = sym_bcc,
  [sym_sender] = sym_sender,
  [sym_replyto] = sym_replyto,
  [sym_message_id] = sym_message_id,
  [sym_in_reply_to] = sym_in_reply_to,
  [sym_references] = sym_references,
  [sym_date] = sym_date,
  [sym_subject] = sym_subject,
  [sym__subjectfield] = sym__subjectfield,
  [sym__datefield] = sym__datefield,
  [sym_headerentry] = sym_headerentry,
  [sym_date_time] = sym_date_time,
  [sym_day_of_week] = sym_day_of_week,
  [sym_day_name] = sym_day_name,
  [sym_datefield] = sym_datefield,
  [sym_day] = sym_day,
  [sym_month] = sym_month,
  [sym_year] = sym_year,
  [sym_time] = sym_time,
  [sym_time_of_day] = sym_time_of_day,
  [sym_hour] = sym_hour,
  [sym_minute] = sym_minute,
  [sym_second] = sym_second,
  [sym_zone] = sym_zone,
  [sym_message_idfield] = sym_message_idfield,
  [sym_references_field] = sym_references_field,
  [sym_msg_id] = sym_msg_id,
  [sym_comment] = sym_comment,
  [sym_line_break] = sym_line_break,
  [sym_fws] = sym_fws,
  [sym_cfws] = sym_cfws,
  [sym__fieldbody] = sym__fieldbody,
  [sym_addresslist] = sym_addresslist,
  [sym_internetaddress] = sym_internetaddress,
  [sym_mailgroup] = sym_mailgroup,
  [sym_group_list] = sym_group_list,
  [sym_mailbox_list] = sym_mailbox_list,
  [sym_mailbox] = sym_mailbox,
  [sym_angle_addr] = sym_angle_addr,
  [sym_addrspec] = sym_addrspec,
  [sym_domain] = sym_domain,
  [sym_local] = sym_local,
  [sym_phrase] = sym_phrase,
  [sym_word] = sym_word,
  [sym_atom2] = sym_atom2,
  [sym_dotatom] = sym_dotatom,
  [sym_dotatom_text] = sym_dotatom_text,
  [sym_quoted_string] = sym_quoted_string,
  [sym_emailbody] = sym_emailbody,
  [sym_block] = sym_block,
  [sym_line] = sym_line,
  [sym__eol] = sym__eol,
  [sym_footer] = sym_footer,
  [sym_footertext] = sym_footertext,
  [sym_footerline] = sym_footerline,
  [aux_sym_headers_repeat1] = aux_sym_headers_repeat1,
  [aux_sym_year_repeat1] = aux_sym_year_repeat1,
  [aux_sym_references_field_repeat1] = aux_sym_references_field_repeat1,
  [aux_sym_comment_repeat1] = aux_sym_comment_repeat1,
  [aux_sym_fws_repeat1] = aux_sym_fws_repeat1,
  [aux_sym_cfws_repeat1] = aux_sym_cfws_repeat1,
  [aux_sym_cfws_repeat2] = aux_sym_cfws_repeat2,
  [aux_sym__fieldbody_repeat1] = aux_sym__fieldbody_repeat1,
  [aux_sym_addresslist_repeat1] = aux_sym_addresslist_repeat1,
  [aux_sym_mailbox_list_repeat1] = aux_sym_mailbox_list_repeat1,
  [aux_sym_phrase_repeat1] = aux_sym_phrase_repeat1,
  [aux_sym_dotatom_text_repeat1] = aux_sym_dotatom_text_repeat1,
  [aux_sym_quoted_string_repeat1] = aux_sym_quoted_string_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_footertext_repeat1] = aux_sym_footertext_repeat1,
  [alias_sym_subjectfield] = alias_sym_subjectfield,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_to_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_from_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_cc_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_bcc_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sender_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_replyto_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_message_id_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_in_reply_to_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_references_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_date_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_subject_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comments_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_keywords_token1] = {
    .visible = true,
    .named = false,
  },
  [sym_headertype] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Mon] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Tue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Wed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Thu] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Fri] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Sat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Sun] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_day_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_day_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_Jan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Feb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Mar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Apr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_May] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Jun] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Jul] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Aug] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Sep] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Oct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Nov] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Dec] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_year_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_ccontent_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ccontent_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ccontent_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_wsp] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__bodycontent_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_domainliteral_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_atom] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_line_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_CR] = {
    .visible = true,
    .named = false,
  },
  [sym__quote] = {
    .visible = false,
    .named = true,
  },
  [sym_footersep] = {
    .visible = true,
    .named = true,
  },
  [sym__line_break] = {
    .visible = false,
    .named = true,
  },
  [sym__eof] = {
    .visible = false,
    .named = true,
  },
  [sym_message] = {
    .visible = true,
    .named = true,
  },
  [sym_headers] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_addressheader] = {
    .visible = true,
    .named = true,
  },
  [sym_dateheader] = {
    .visible = true,
    .named = true,
  },
  [sym_subjectheader] = {
    .visible = true,
    .named = true,
  },
  [sym_midheader] = {
    .visible = true,
    .named = true,
  },
  [sym_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_midkind] = {
    .visible = true,
    .named = true,
  },
  [sym_addrkind] = {
    .visible = true,
    .named = true,
  },
  [sym_to] = {
    .visible = true,
    .named = true,
  },
  [sym_from] = {
    .visible = true,
    .named = true,
  },
  [sym_cc] = {
    .visible = true,
    .named = true,
  },
  [sym_bcc] = {
    .visible = true,
    .named = true,
  },
  [sym_sender] = {
    .visible = true,
    .named = true,
  },
  [sym_replyto] = {
    .visible = true,
    .named = true,
  },
  [sym_message_id] = {
    .visible = true,
    .named = true,
  },
  [sym_in_reply_to] = {
    .visible = true,
    .named = true,
  },
  [sym_references] = {
    .visible = true,
    .named = true,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym_subject] = {
    .visible = true,
    .named = true,
  },
  [sym__subjectfield] = {
    .visible = false,
    .named = true,
  },
  [sym__datefield] = {
    .visible = false,
    .named = true,
  },
  [sym_headerentry] = {
    .visible = true,
    .named = true,
  },
  [sym_date_time] = {
    .visible = true,
    .named = true,
  },
  [sym_day_of_week] = {
    .visible = true,
    .named = true,
  },
  [sym_day_name] = {
    .visible = true,
    .named = true,
  },
  [sym_datefield] = {
    .visible = true,
    .named = true,
  },
  [sym_day] = {
    .visible = true,
    .named = true,
  },
  [sym_month] = {
    .visible = true,
    .named = true,
  },
  [sym_year] = {
    .visible = true,
    .named = true,
  },
  [sym_time] = {
    .visible = true,
    .named = true,
  },
  [sym_time_of_day] = {
    .visible = true,
    .named = true,
  },
  [sym_hour] = {
    .visible = true,
    .named = true,
  },
  [sym_minute] = {
    .visible = true,
    .named = true,
  },
  [sym_second] = {
    .visible = true,
    .named = true,
  },
  [sym_zone] = {
    .visible = true,
    .named = true,
  },
  [sym_message_idfield] = {
    .visible = true,
    .named = true,
  },
  [sym_references_field] = {
    .visible = true,
    .named = true,
  },
  [sym_msg_id] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_line_break] = {
    .visible = true,
    .named = true,
  },
  [sym_fws] = {
    .visible = true,
    .named = true,
  },
  [sym_cfws] = {
    .visible = true,
    .named = true,
  },
  [sym__fieldbody] = {
    .visible = false,
    .named = true,
  },
  [sym_addresslist] = {
    .visible = true,
    .named = true,
  },
  [sym_internetaddress] = {
    .visible = true,
    .named = true,
  },
  [sym_mailgroup] = {
    .visible = true,
    .named = true,
  },
  [sym_group_list] = {
    .visible = true,
    .named = true,
  },
  [sym_mailbox_list] = {
    .visible = true,
    .named = true,
  },
  [sym_mailbox] = {
    .visible = true,
    .named = true,
  },
  [sym_angle_addr] = {
    .visible = true,
    .named = true,
  },
  [sym_addrspec] = {
    .visible = true,
    .named = true,
  },
  [sym_domain] = {
    .visible = true,
    .named = true,
  },
  [sym_local] = {
    .visible = true,
    .named = true,
  },
  [sym_phrase] = {
    .visible = true,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [sym_atom2] = {
    .visible = true,
    .named = true,
  },
  [sym_dotatom] = {
    .visible = true,
    .named = true,
  },
  [sym_dotatom_text] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_emailbody] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_line] = {
    .visible = true,
    .named = true,
  },
  [sym__eol] = {
    .visible = false,
    .named = true,
  },
  [sym_footer] = {
    .visible = true,
    .named = true,
  },
  [sym_footertext] = {
    .visible = true,
    .named = true,
  },
  [sym_footerline] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_headers_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_year_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_references_field_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fws_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_cfws_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_cfws_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__fieldbody_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_addresslist_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mailbox_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_phrase_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dotatom_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_footertext_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_subjectfield] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_subjectfield,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__fieldbody, 2,
    sym__fieldbody,
    alias_sym_subjectfield,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 4,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 20,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 24,
  [29] = 25,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 34,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 47,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 55,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 65,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 40,
  [75] = 71,
  [76] = 66,
  [77] = 64,
  [78] = 78,
  [79] = 72,
  [80] = 80,
  [81] = 46,
  [82] = 82,
  [83] = 5,
  [84] = 84,
  [85] = 80,
  [86] = 70,
  [87] = 47,
  [88] = 5,
  [89] = 89,
  [90] = 47,
  [91] = 47,
  [92] = 92,
  [93] = 4,
  [94] = 94,
  [95] = 12,
  [96] = 96,
  [97] = 11,
  [98] = 11,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 12,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 105,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 101,
  [116] = 71,
  [117] = 117,
  [118] = 108,
  [119] = 72,
  [120] = 120,
  [121] = 121,
  [122] = 104,
  [123] = 72,
  [124] = 124,
  [125] = 125,
  [126] = 71,
  [127] = 127,
  [128] = 71,
  [129] = 129,
  [130] = 114,
  [131] = 131,
  [132] = 132,
  [133] = 109,
  [134] = 134,
  [135] = 72,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 5,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 101,
  [145] = 145,
  [146] = 5,
  [147] = 5,
  [148] = 148,
  [149] = 101,
  [150] = 4,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 99,
  [155] = 155,
  [156] = 4,
  [157] = 4,
  [158] = 158,
  [159] = 11,
  [160] = 12,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 96,
  [165] = 165,
  [166] = 4,
  [167] = 92,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 12,
  [174] = 4,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 176,
  [180] = 177,
  [181] = 181,
  [182] = 182,
  [183] = 11,
  [184] = 184,
  [185] = 185,
  [186] = 177,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 4,
  [191] = 191,
  [192] = 110,
  [193] = 12,
  [194] = 194,
  [195] = 195,
  [196] = 176,
  [197] = 11,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 203,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 212,
  [217] = 217,
  [218] = 215,
  [219] = 212,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 215,
  [225] = 225,
  [226] = 188,
  [227] = 204,
  [228] = 212,
  [229] = 215,
  [230] = 189,
  [231] = 231,
  [232] = 225,
  [233] = 233,
  [234] = 104,
  [235] = 210,
  [236] = 220,
  [237] = 237,
  [238] = 212,
  [239] = 239,
  [240] = 215,
  [241] = 241,
  [242] = 242,
  [243] = 207,
  [244] = 244,
  [245] = 171,
  [246] = 246,
  [247] = 208,
  [248] = 248,
  [249] = 163,
  [250] = 231,
  [251] = 246,
  [252] = 252,
  [253] = 206,
  [254] = 109,
  [255] = 255,
  [256] = 252,
  [257] = 215,
  [258] = 258,
  [259] = 233,
  [260] = 211,
  [261] = 212,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 117,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 106,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 286,
  [307] = 277,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 299,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 283,
  [321] = 321,
  [322] = 317,
  [323] = 300,
  [324] = 308,
  [325] = 325,
  [326] = 326,
  [327] = 311,
  [328] = 297,
  [329] = 329,
  [330] = 112,
  [331] = 269,
};

static inline bool sym_atom_character_set_1(int32_t c) {
  return (c < '.'
    ? (c < '('
      ? (c < '"'
        ? c == 0
        : c <= '"')
      : (c <= ')' || c == ','))
    : (c <= '.' || (c < '@'
      ? (c < '>'
        ? (c >= ':' && c <= '<')
        : c <= '>')
      : (c <= '@' || (c >= '[' && c <= ']')))));
}

static inline bool sym_atom_character_set_2(int32_t c) {
  return (c < '.'
    ? (c < '"'
      ? (c < '\n'
        ? c == 0
        : c <= '\n')
      : (c <= '"' || (c < ','
        ? (c >= '(' && c <= ')')
        : c <= ',')))
    : (c <= '.' || (c < '@'
      ? (c < '>'
        ? (c >= ':' && c <= '<')
        : c <= '>')
      : (c <= '@' || (c >= '[' && c <= ']')))));
}

static inline bool sym_atom_character_set_3(int32_t c) {
  return (c < ','
    ? (c < ' '
      ? (c < '\n'
        ? c == 0
        : c <= '\n')
      : (c <= ' ' || (c < '('
        ? c == '"'
        : c <= ')')))
    : (c <= ',' || (c < '>'
      ? (c < ':'
        ? c == '.'
        : c <= '<')
      : (c <= '>' || (c < '['
        ? c == '@'
        : c <= ']')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(129);
      if (lookahead == '"') ADVANCE(252);
      if (lookahead == '(') ADVANCE(233);
      if (lookahead == ')') ADVANCE(234);
      if (lookahead == '+') ADVANCE(223);
      if (lookahead == ',') ADVANCE(199);
      if (lookahead == '-') ADVANCE(225);
      if (lookahead == '.') ADVANCE(249);
      if (lookahead == ':') ADVANCE(130);
      if (lookahead == ';') ADVANCE(243);
      if (lookahead == '<') ADVANCE(226);
      if (lookahead == '>') ADVANCE(264);
      if (lookahead == '@') ADVANCE(227);
      if (lookahead == 'A') ADVANCE(45);
      if (lookahead == 'D') ADVANCE(33);
      if (lookahead == 'F') ADVANCE(20);
      if (lookahead == 'J') ADVANCE(21);
      if (lookahead == 'M') ADVANCE(23);
      if (lookahead == 'N') ADVANCE(44);
      if (lookahead == 'O') ADVANCE(26);
      if (lookahead == 'S') ADVANCE(19);
      if (lookahead == 'T') ADVANCE(36);
      if (lookahead == 'W') ADVANCE(30);
      if (lookahead == '[') ADVANCE(250);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == ']') ADVANCE(251);
      if (lookahead == 'd') ADVANCE(58);
      if (lookahead == 'f') ADVANCE(103);
      if (lookahead == 'm') ADVANCE(70);
      if (lookahead == 's') ADVANCE(75);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(0)
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(64);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(62);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(92);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(71);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(235);
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') ADVANCE(246);
      if (lookahead == ' ') ADVANCE(235);
      if (lookahead == '"') ADVANCE(252);
      if (lookahead == '(') ADVANCE(233);
      if (lookahead == '.') ADVANCE(249);
      if (lookahead == ':') ADVANCE(130);
      if (lookahead == ';') ADVANCE(243);
      if (lookahead == '<') ADVANCE(226);
      if (lookahead == '@') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(248);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(265);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\r') ADVANCE(253);
      if (lookahead == '"') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(237);
      if (lookahead != 0) ADVANCE(255);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '(') ADVANCE(233);
      if (lookahead == ')') ADVANCE(234);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(229);
      if (lookahead != 0) ADVANCE(230);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(256);
      if (lookahead == '\r') ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '"') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(254);
      if (lookahead != 0) ADVANCE(255);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(241);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(252);
      if (lookahead == '(') ADVANCE(233);
      if (lookahead == ')') ADVANCE(234);
      if (lookahead == '+') ADVANCE(223);
      if (lookahead == ',') ADVANCE(199);
      if (lookahead == '-') ADVANCE(225);
      if (lookahead == '.') ADVANCE(249);
      if (lookahead == ':') ADVANCE(130);
      if (lookahead == ';') ADVANCE(243);
      if (lookahead == '<') ADVANCE(226);
      if (lookahead == '>') ADVANCE(264);
      if (lookahead == '@') ADVANCE(227);
      if (lookahead == 'A') ADVANCE(45);
      if (lookahead == 'D') ADVANCE(33);
      if (lookahead == 'F') ADVANCE(20);
      if (lookahead == 'J') ADVANCE(21);
      if (lookahead == 'M') ADVANCE(23);
      if (lookahead == 'N') ADVANCE(44);
      if (lookahead == 'O') ADVANCE(26);
      if (lookahead == 'S') ADVANCE(19);
      if (lookahead == 'T') ADVANCE(36);
      if (lookahead == 'W') ADVANCE(30);
      if (lookahead == '[') ADVANCE(250);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == ']') ADVANCE(251);
      if (lookahead == 'd') ADVANCE(58);
      if (lookahead == 'f') ADVANCE(103);
      if (lookahead == 'm') ADVANCE(70);
      if (lookahead == 's') ADVANCE(75);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(10)
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(64);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(62);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(92);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(71);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(233);
      if (lookahead == '+') ADVANCE(223);
      if (lookahead == ',') ADVANCE(199);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '.') ADVANCE(249);
      if (lookahead == ':') ADVANCE(130);
      if (lookahead == ';') ADVANCE(243);
      if (lookahead == '<') ADVANCE(226);
      if (lookahead == '>') ADVANCE(228);
      if (lookahead == '@') ADVANCE(227);
      if (lookahead == 'A') ADVANCE(45);
      if (lookahead == 'D') ADVANCE(32);
      if (lookahead == 'F') ADVANCE(29);
      if (lookahead == 'J') ADVANCE(21);
      if (lookahead == 'M') ADVANCE(22);
      if (lookahead == 'N') ADVANCE(44);
      if (lookahead == 'O') ADVANCE(26);
      if (lookahead == 'S') ADVANCE(24);
      if (lookahead == 'T') ADVANCE(35);
      if (lookahead == 'W') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(238);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      END_STATE();
    case 12:
      if (lookahead == '(') ADVANCE(232);
      if (lookahead == ')') ADVANCE(231);
      END_STATE();
    case 13:
      if (lookahead == '+') ADVANCE(223);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(9);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(85);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(105);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(115);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(116);
      END_STATE();
    case 19:
      if (lookahead == 'E') ADVANCE(93);
      if (lookahead == 'U') ADVANCE(61);
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 20:
      if (lookahead == 'R') ADVANCE(99);
      if (lookahead == 'e') ADVANCE(25);
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == 'o') ADVANCE(41);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'e') ADVANCE(46);
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 25:
      if (lookahead == 'b') ADVANCE(211);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(221);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(202);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(25);
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(27);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 34:
      if (lookahead == 'g') ADVANCE(217);
      END_STATE();
    case 35:
      if (lookahead == 'h') ADVANCE(52);
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 36:
      if (lookahead == 'h') ADVANCE(52);
      if (lookahead == 'u') ADVANCE(31);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(204);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(204);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(216);
      if (lookahead == 'n') ADVANCE(215);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(210);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(200);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(206);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(206);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(86);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 45:
      if (lookahead == 'p') ADVANCE(48);
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 46:
      if (lookahead == 'p') ADVANCE(218);
      END_STATE();
    case 47:
      if (lookahead == 'p') ADVANCE(218);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(212);
      if (lookahead == 'y') ADVANCE(214);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(219);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(205);
      END_STATE();
    case 52:
      if (lookahead == 'u') ADVANCE(203);
      END_STATE();
    case 53:
      if (lookahead == 'v') ADVANCE(220);
      END_STATE();
    case 54:
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(247);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(54)
      if (!sym_atom_character_set_1(lookahead)) ADVANCE(248);
      END_STATE();
    case 55:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(238);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(55)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      END_STATE();
    case 56:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(238);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(56)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 57:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(261);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(57)
      if (lookahead != 0) ADVANCE(262);
      END_STATE();
    case 58:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 61:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(86);
      END_STATE();
    case 62:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(133);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 63:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(134);
      END_STATE();
    case 64:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 65:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(112);
      END_STATE();
    case 66:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(81);
      END_STATE();
    case 67:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(137);
      END_STATE();
    case 68:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(108);
      END_STATE();
    case 69:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(76);
      END_STATE();
    case 70:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 71:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 72:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 73:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 74:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 75:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(93);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 76:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 77:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 79:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 83:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(82);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(87);
      END_STATE();
    case 84:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(79);
      END_STATE();
    case 85:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 86:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(77);
      END_STATE();
    case 87:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 88:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 89:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(132);
      END_STATE();
    case 90:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(91);
      END_STATE();
    case 91:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(78);
      END_STATE();
    case 92:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 93:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 94:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 95:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 96:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 97:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 98:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 99:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 100:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 101:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(88);
      END_STATE();
    case 102:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 103:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 104:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 105:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 106:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 107:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(142);
      END_STATE();
    case 108:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(143);
      END_STATE();
    case 109:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(139);
      END_STATE();
    case 110:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(59);
      END_STATE();
    case 111:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(110);
      END_STATE();
    case 112:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(141);
      END_STATE();
    case 113:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(107);
      END_STATE();
    case 114:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(73);
      END_STATE();
    case 115:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(97);
      END_STATE();
    case 116:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(98);
      END_STATE();
    case 117:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(100);
      END_STATE();
    case 118:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(117);
      END_STATE();
    case 119:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(17);
      END_STATE();
    case 120:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(18);
      END_STATE();
    case 121:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      END_STATE();
    case 122:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 123:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 124:
      if (eof) ADVANCE(129);
      if (lookahead == '\n') SKIP(124)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(244);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 125:
      if (eof) ADVANCE(129);
      if (lookahead == ',') ADVANCE(199);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '.') ADVANCE(249);
      if (lookahead == ';') ADVANCE(243);
      if (lookahead == '>') ADVANCE(228);
      if (lookahead == '@') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(125)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 126:
      if (eof) ADVANCE(129);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(259);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(126)
      if (lookahead != 0) ADVANCE(262);
      END_STATE();
    case 127:
      if (eof) ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(239);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(127)
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(154);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(152);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(148);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(186);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(177);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(160);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(161);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(163);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(180);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(198);
      END_STATE();
    case 128:
      if (eof) ADVANCE(129);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(154);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(152);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(148);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(186);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(177);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(160);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(161);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(163);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(128)
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(198);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_to_token1);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_from_token1);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_cc_token1);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_bcc_token1);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_sender_token1);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_replyto_token1);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_message_id_token1);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_in_reply_to_token1);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_references_token1);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_date_token1);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_subject_token1);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_comments_token1);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_keywords_token1);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '-') ADVANCE(172);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(198);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '-') ADVANCE(187);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(198);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '-') ADVANCE(194);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(198);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '-') ADVANCE(195);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(198);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(193);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(198);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(171);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(198);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(197);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(198);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(173);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(198);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(133);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(198);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(134);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(198);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(153);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(198);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(192);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(198);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(167);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(198);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(137);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(198);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(164);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(198);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(140);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(198);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(191);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(198);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(170);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(198);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(184);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(198);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(178);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(151);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(198);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(185);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(198);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(179);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(198);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(144);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(198);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(189);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(198);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(155);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(198);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(188);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(198);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(169);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(174);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(198);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(166);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(198);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(157);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(198);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(168);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(198);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(196);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(198);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(150);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(198);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(132);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(198);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(145);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(198);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(158);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(198);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(156);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(198);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(131);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(198);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(136);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(198);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(138);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(198);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(176);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(198);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(175);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(198);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(135);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(198);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(183);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(198);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(162);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(198);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(165);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(198);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(139);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(198);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(149);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(198);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(190);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(198);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(141);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(198);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(159);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(198);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(181);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(198);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(182);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(198);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(146);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(198);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(147);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(198);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_headertype);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_Mon);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_Tue);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_Wed);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_Thu);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_Fri);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_Sat);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_Sun);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_day_token1);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_day_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_day_token2);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_Jan);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_Feb);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_Mar);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_Apr);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_May);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_Jun);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_Jul);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_Aug);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_Sep);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_Oct);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_Nov);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_Dec);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_year_token1);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(9);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_ccontent_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(230);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_ccontent_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_ccontent_token2);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_ccontent_token3);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_wsp);
      if (lookahead == '\t') ADVANCE(235);
      if (lookahead == '\r') ADVANCE(246);
      if (lookahead == ' ') ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_wsp);
      if (lookahead == '\r') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_wsp);
      if (lookahead == '\r') ADVANCE(253);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_wsp);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_wsp);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(239);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(154);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(152);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(148);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(186);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(177);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(160);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(161);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(163);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(180);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__bodycontent_token1);
      if (lookahead == '\r') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(242);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__bodycontent_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(242);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__bodycontent_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_domainliteral_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_domainliteral_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '\t') ADVANCE(235);
      if (lookahead == '\r') ADVANCE(246);
      if (lookahead == ' ') ADVANCE(235);
      if (!sym_atom_character_set_2(lookahead)) ADVANCE(248);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(247);
      if (!sym_atom_character_set_3(lookahead)) ADVANCE(248);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_atom);
      if (!sym_atom_character_set_3(lookahead)) ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead == '\r') ADVANCE(253);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(255);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(255);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(256);
      if (lookahead == '\r') ADVANCE(263);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == '\n') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(262);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == ' ') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(262);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(262);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == '-') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(262);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(262);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(256);
      if (lookahead == '\r') ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__quote);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_footersep);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 128},
  [2] = {.lex_state = 128, .external_lex_state = 2},
  [3] = {.lex_state = 128, .external_lex_state = 2},
  [4] = {.lex_state = 11, .external_lex_state = 2},
  [5] = {.lex_state = 11, .external_lex_state = 2},
  [6] = {.lex_state = 1, .external_lex_state = 2},
  [7] = {.lex_state = 1, .external_lex_state = 2},
  [8] = {.lex_state = 1, .external_lex_state = 2},
  [9] = {.lex_state = 1, .external_lex_state = 2},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 11},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 1, .external_lex_state = 2},
  [14] = {.lex_state = 1, .external_lex_state = 2},
  [15] = {.lex_state = 1, .external_lex_state = 2},
  [16] = {.lex_state = 1, .external_lex_state = 2},
  [17] = {.lex_state = 1, .external_lex_state = 2},
  [18] = {.lex_state = 11, .external_lex_state = 2},
  [19] = {.lex_state = 1, .external_lex_state = 2},
  [20] = {.lex_state = 1, .external_lex_state = 2},
  [21] = {.lex_state = 1, .external_lex_state = 2},
  [22] = {.lex_state = 1, .external_lex_state = 2},
  [23] = {.lex_state = 1, .external_lex_state = 2},
  [24] = {.lex_state = 1, .external_lex_state = 2},
  [25] = {.lex_state = 1, .external_lex_state = 2},
  [26] = {.lex_state = 1, .external_lex_state = 2},
  [27] = {.lex_state = 1, .external_lex_state = 2},
  [28] = {.lex_state = 1, .external_lex_state = 2},
  [29] = {.lex_state = 1, .external_lex_state = 2},
  [30] = {.lex_state = 127, .external_lex_state = 2},
  [31] = {.lex_state = 127, .external_lex_state = 2},
  [32] = {.lex_state = 128, .external_lex_state = 2},
  [33] = {.lex_state = 128, .external_lex_state = 2},
  [34] = {.lex_state = 1, .external_lex_state = 2},
  [35] = {.lex_state = 1, .external_lex_state = 2},
  [36] = {.lex_state = 128, .external_lex_state = 2},
  [37] = {.lex_state = 128, .external_lex_state = 2},
  [38] = {.lex_state = 128, .external_lex_state = 2},
  [39] = {.lex_state = 128, .external_lex_state = 2},
  [40] = {.lex_state = 11, .external_lex_state = 2},
  [41] = {.lex_state = 11, .external_lex_state = 2},
  [42] = {.lex_state = 1, .external_lex_state = 2},
  [43] = {.lex_state = 128, .external_lex_state = 2},
  [44] = {.lex_state = 128, .external_lex_state = 2},
  [45] = {.lex_state = 128, .external_lex_state = 2},
  [46] = {.lex_state = 11, .external_lex_state = 2},
  [47] = {.lex_state = 11, .external_lex_state = 2},
  [48] = {.lex_state = 128, .external_lex_state = 2},
  [49] = {.lex_state = 128, .external_lex_state = 2},
  [50] = {.lex_state = 1, .external_lex_state = 2},
  [51] = {.lex_state = 128, .external_lex_state = 2},
  [52] = {.lex_state = 1, .external_lex_state = 2},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 11, .external_lex_state = 2},
  [55] = {.lex_state = 11, .external_lex_state = 2},
  [56] = {.lex_state = 11, .external_lex_state = 2},
  [57] = {.lex_state = 11, .external_lex_state = 2},
  [58] = {.lex_state = 11, .external_lex_state = 2},
  [59] = {.lex_state = 11, .external_lex_state = 2},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 1, .external_lex_state = 2},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 11, .external_lex_state = 2},
  [64] = {.lex_state = 11, .external_lex_state = 2},
  [65] = {.lex_state = 11, .external_lex_state = 2},
  [66] = {.lex_state = 11, .external_lex_state = 2},
  [67] = {.lex_state = 11, .external_lex_state = 2},
  [68] = {.lex_state = 11, .external_lex_state = 2},
  [69] = {.lex_state = 1, .external_lex_state = 2},
  [70] = {.lex_state = 11, .external_lex_state = 2},
  [71] = {.lex_state = 11, .external_lex_state = 2},
  [72] = {.lex_state = 1, .external_lex_state = 2},
  [73] = {.lex_state = 11, .external_lex_state = 2},
  [74] = {.lex_state = 11, .external_lex_state = 2},
  [75] = {.lex_state = 1, .external_lex_state = 2},
  [76] = {.lex_state = 11, .external_lex_state = 2},
  [77] = {.lex_state = 11, .external_lex_state = 2},
  [78] = {.lex_state = 11, .external_lex_state = 2},
  [79] = {.lex_state = 11, .external_lex_state = 2},
  [80] = {.lex_state = 11, .external_lex_state = 2},
  [81] = {.lex_state = 11, .external_lex_state = 2},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 11, .external_lex_state = 2},
  [84] = {.lex_state = 11, .external_lex_state = 2},
  [85] = {.lex_state = 11, .external_lex_state = 2},
  [86] = {.lex_state = 11, .external_lex_state = 2},
  [87] = {.lex_state = 1, .external_lex_state = 2},
  [88] = {.lex_state = 1, .external_lex_state = 2},
  [89] = {.lex_state = 11, .external_lex_state = 2},
  [90] = {.lex_state = 11, .external_lex_state = 2},
  [91] = {.lex_state = 11, .external_lex_state = 2},
  [92] = {.lex_state = 11, .external_lex_state = 2},
  [93] = {.lex_state = 1, .external_lex_state = 2},
  [94] = {.lex_state = 3, .external_lex_state = 2},
  [95] = {.lex_state = 11, .external_lex_state = 2},
  [96] = {.lex_state = 11, .external_lex_state = 2},
  [97] = {.lex_state = 1, .external_lex_state = 2},
  [98] = {.lex_state = 11, .external_lex_state = 2},
  [99] = {.lex_state = 11, .external_lex_state = 2},
  [100] = {.lex_state = 11, .external_lex_state = 2},
  [101] = {.lex_state = 11, .external_lex_state = 2},
  [102] = {.lex_state = 3, .external_lex_state = 2},
  [103] = {.lex_state = 1, .external_lex_state = 2},
  [104] = {.lex_state = 11, .external_lex_state = 2},
  [105] = {.lex_state = 4, .external_lex_state = 2},
  [106] = {.lex_state = 1, .external_lex_state = 2},
  [107] = {.lex_state = 4, .external_lex_state = 2},
  [108] = {.lex_state = 4, .external_lex_state = 2},
  [109] = {.lex_state = 11, .external_lex_state = 2},
  [110] = {.lex_state = 11, .external_lex_state = 2},
  [111] = {.lex_state = 1, .external_lex_state = 2},
  [112] = {.lex_state = 1, .external_lex_state = 2},
  [113] = {.lex_state = 4, .external_lex_state = 2},
  [114] = {.lex_state = 11, .external_lex_state = 2},
  [115] = {.lex_state = 1, .external_lex_state = 2},
  [116] = {.lex_state = 11, .external_lex_state = 2},
  [117] = {.lex_state = 1, .external_lex_state = 2},
  [118] = {.lex_state = 4, .external_lex_state = 2},
  [119] = {.lex_state = 11, .external_lex_state = 2},
  [120] = {.lex_state = 1, .external_lex_state = 2},
  [121] = {.lex_state = 1, .external_lex_state = 2},
  [122] = {.lex_state = 1, .external_lex_state = 2},
  [123] = {.lex_state = 1, .external_lex_state = 2},
  [124] = {.lex_state = 1, .external_lex_state = 2},
  [125] = {.lex_state = 3, .external_lex_state = 2},
  [126] = {.lex_state = 11, .external_lex_state = 2},
  [127] = {.lex_state = 1, .external_lex_state = 2},
  [128] = {.lex_state = 1, .external_lex_state = 2},
  [129] = {.lex_state = 3, .external_lex_state = 2},
  [130] = {.lex_state = 1, .external_lex_state = 2},
  [131] = {.lex_state = 55, .external_lex_state = 2},
  [132] = {.lex_state = 1, .external_lex_state = 2},
  [133] = {.lex_state = 1, .external_lex_state = 2},
  [134] = {.lex_state = 55, .external_lex_state = 2},
  [135] = {.lex_state = 11, .external_lex_state = 2},
  [136] = {.lex_state = 1, .external_lex_state = 2},
  [137] = {.lex_state = 11, .external_lex_state = 2},
  [138] = {.lex_state = 11, .external_lex_state = 2},
  [139] = {.lex_state = 1, .external_lex_state = 2},
  [140] = {.lex_state = 4, .external_lex_state = 2},
  [141] = {.lex_state = 5},
  [142] = {.lex_state = 1, .external_lex_state = 2},
  [143] = {.lex_state = 126},
  [144] = {.lex_state = 11, .external_lex_state = 2},
  [145] = {.lex_state = 11, .external_lex_state = 2},
  [146] = {.lex_state = 3, .external_lex_state = 2},
  [147] = {.lex_state = 56, .external_lex_state = 2},
  [148] = {.lex_state = 11, .external_lex_state = 2},
  [149] = {.lex_state = 1, .external_lex_state = 2},
  [150] = {.lex_state = 4, .external_lex_state = 2},
  [151] = {.lex_state = 57},
  [152] = {.lex_state = 126},
  [153] = {.lex_state = 124},
  [154] = {.lex_state = 125},
  [155] = {.lex_state = 124},
  [156] = {.lex_state = 56, .external_lex_state = 2},
  [157] = {.lex_state = 4},
  [158] = {.lex_state = 4, .external_lex_state = 2},
  [159] = {.lex_state = 4},
  [160] = {.lex_state = 4},
  [161] = {.lex_state = 6, .external_lex_state = 3},
  [162] = {.lex_state = 124},
  [163] = {.lex_state = 125},
  [164] = {.lex_state = 125},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 3, .external_lex_state = 2},
  [167] = {.lex_state = 125},
  [168] = {.lex_state = 11, .external_lex_state = 2},
  [169] = {.lex_state = 55, .external_lex_state = 2},
  [170] = {.lex_state = 11, .external_lex_state = 2},
  [171] = {.lex_state = 125},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 56},
  [174] = {.lex_state = 56},
  [175] = {.lex_state = 5},
  [176] = {.lex_state = 5},
  [177] = {.lex_state = 5},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 5},
  [180] = {.lex_state = 5},
  [181] = {.lex_state = 6, .external_lex_state = 3},
  [182] = {.lex_state = 11, .external_lex_state = 2},
  [183] = {.lex_state = 56},
  [184] = {.lex_state = 126},
  [185] = {.lex_state = 125},
  [186] = {.lex_state = 5},
  [187] = {.lex_state = 0, .external_lex_state = 2},
  [188] = {.lex_state = 125},
  [189] = {.lex_state = 125},
  [190] = {.lex_state = 3},
  [191] = {.lex_state = 11, .external_lex_state = 2},
  [192] = {.lex_state = 125},
  [193] = {.lex_state = 3},
  [194] = {.lex_state = 3, .external_lex_state = 2},
  [195] = {.lex_state = 0, .external_lex_state = 2},
  [196] = {.lex_state = 5},
  [197] = {.lex_state = 3},
  [198] = {.lex_state = 11, .external_lex_state = 2},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 11, .external_lex_state = 2},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0, .external_lex_state = 2},
  [203] = {.lex_state = 54},
  [204] = {.lex_state = 54},
  [205] = {.lex_state = 54},
  [206] = {.lex_state = 54},
  [207] = {.lex_state = 0, .external_lex_state = 2},
  [208] = {.lex_state = 54},
  [209] = {.lex_state = 0, .external_lex_state = 2},
  [210] = {.lex_state = 7},
  [211] = {.lex_state = 0, .external_lex_state = 2},
  [212] = {.lex_state = 11},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0, .external_lex_state = 2},
  [215] = {.lex_state = 11},
  [216] = {.lex_state = 11},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 11},
  [219] = {.lex_state = 11},
  [220] = {.lex_state = 54},
  [221] = {.lex_state = 0, .external_lex_state = 2},
  [222] = {.lex_state = 11, .external_lex_state = 2},
  [223] = {.lex_state = 11, .external_lex_state = 2},
  [224] = {.lex_state = 11},
  [225] = {.lex_state = 7},
  [226] = {.lex_state = 0, .external_lex_state = 2},
  [227] = {.lex_state = 54},
  [228] = {.lex_state = 11},
  [229] = {.lex_state = 11},
  [230] = {.lex_state = 0, .external_lex_state = 2},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 7},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 5},
  [235] = {.lex_state = 7},
  [236] = {.lex_state = 54},
  [237] = {.lex_state = 5},
  [238] = {.lex_state = 11},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 11},
  [241] = {.lex_state = 0, .external_lex_state = 2},
  [242] = {.lex_state = 11, .external_lex_state = 2},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 13},
  [245] = {.lex_state = 0, .external_lex_state = 2},
  [246] = {.lex_state = 0, .external_lex_state = 2},
  [247] = {.lex_state = 54},
  [248] = {.lex_state = 0, .external_lex_state = 2},
  [249] = {.lex_state = 0, .external_lex_state = 2},
  [250] = {.lex_state = 0, .external_lex_state = 2},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0, .external_lex_state = 2},
  [253] = {.lex_state = 54},
  [254] = {.lex_state = 5},
  [255] = {.lex_state = 124},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 11},
  [258] = {.lex_state = 0, .external_lex_state = 2},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 11},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 8},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 11},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 125},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 125},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0, .external_lex_state = 2},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0, .external_lex_state = 2},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0, .external_lex_state = 2},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 125},
  [299] = {.lex_state = 125},
  [300] = {.lex_state = 54},
  [301] = {.lex_state = 7},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 125},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 125},
  [307] = {.lex_state = 125},
  [308] = {.lex_state = 125},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 125},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0, .external_lex_state = 2},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 54},
  [324] = {.lex_state = 125},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 54},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
};

enum {
  ts_external_token__line_break = 0,
  ts_external_token__eof = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__line_break] = sym__line_break,
  [ts_external_token__eof] = sym__eof,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__line_break] = true,
    [ts_external_token__eof] = true,
  },
  [2] = {
    [ts_external_token__line_break] = true,
  },
  [3] = {
    [ts_external_token__eof] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_to_token1] = ACTIONS(1),
    [aux_sym_from_token1] = ACTIONS(1),
    [aux_sym_cc_token1] = ACTIONS(1),
    [aux_sym_bcc_token1] = ACTIONS(1),
    [aux_sym_sender_token1] = ACTIONS(1),
    [aux_sym_replyto_token1] = ACTIONS(1),
    [aux_sym_message_id_token1] = ACTIONS(1),
    [aux_sym_in_reply_to_token1] = ACTIONS(1),
    [aux_sym_references_token1] = ACTIONS(1),
    [aux_sym_date_token1] = ACTIONS(1),
    [aux_sym_subject_token1] = ACTIONS(1),
    [aux_sym_comments_token1] = ACTIONS(1),
    [aux_sym_keywords_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_Mon] = ACTIONS(1),
    [anon_sym_Tue] = ACTIONS(1),
    [anon_sym_Wed] = ACTIONS(1),
    [anon_sym_Thu] = ACTIONS(1),
    [anon_sym_Fri] = ACTIONS(1),
    [anon_sym_Sat] = ACTIONS(1),
    [anon_sym_Sun] = ACTIONS(1),
    [aux_sym_day_token1] = ACTIONS(1),
    [aux_sym_day_token2] = ACTIONS(1),
    [anon_sym_Jan] = ACTIONS(1),
    [anon_sym_Feb] = ACTIONS(1),
    [anon_sym_Mar] = ACTIONS(1),
    [anon_sym_Apr] = ACTIONS(1),
    [anon_sym_May] = ACTIONS(1),
    [anon_sym_Jun] = ACTIONS(1),
    [anon_sym_Jul] = ACTIONS(1),
    [anon_sym_Aug] = ACTIONS(1),
    [anon_sym_Sep] = ACTIONS(1),
    [anon_sym_Oct] = ACTIONS(1),
    [anon_sym_Nov] = ACTIONS(1),
    [anon_sym_Dec] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [aux_sym_ccontent_token2] = ACTIONS(1),
    [aux_sym_ccontent_token3] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym__quote] = ACTIONS(1),
    [sym_footersep] = ACTIONS(1),
    [sym__line_break] = ACTIONS(1),
    [sym__eof] = ACTIONS(1),
  },
  [1] = {
    [sym_message] = STATE(281),
    [sym_headers] = STATE(248),
    [sym_header] = STATE(3),
    [sym_addressheader] = STATE(3),
    [sym_dateheader] = STATE(3),
    [sym_subjectheader] = STATE(3),
    [sym_midheader] = STATE(3),
    [sym_ref] = STATE(3),
    [sym_midkind] = STATE(279),
    [sym_addrkind] = STATE(278),
    [sym_to] = STATE(276),
    [sym_from] = STATE(276),
    [sym_cc] = STATE(276),
    [sym_bcc] = STATE(276),
    [sym_sender] = STATE(276),
    [sym_replyto] = STATE(276),
    [sym_message_id] = STATE(275),
    [sym_in_reply_to] = STATE(274),
    [sym_references] = STATE(274),
    [sym_date] = STATE(273),
    [sym_subject] = STATE(272),
    [aux_sym_headers_repeat1] = STATE(3),
    [aux_sym_to_token1] = ACTIONS(3),
    [aux_sym_from_token1] = ACTIONS(5),
    [aux_sym_cc_token1] = ACTIONS(7),
    [aux_sym_bcc_token1] = ACTIONS(9),
    [aux_sym_sender_token1] = ACTIONS(11),
    [aux_sym_replyto_token1] = ACTIONS(13),
    [aux_sym_message_id_token1] = ACTIONS(15),
    [aux_sym_in_reply_to_token1] = ACTIONS(17),
    [aux_sym_references_token1] = ACTIONS(19),
    [aux_sym_date_token1] = ACTIONS(21),
    [aux_sym_subject_token1] = ACTIONS(23),
    [sym_headertype] = ACTIONS(25),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 21,
    ACTIONS(29), 1,
      aux_sym_to_token1,
    ACTIONS(32), 1,
      aux_sym_from_token1,
    ACTIONS(35), 1,
      aux_sym_cc_token1,
    ACTIONS(38), 1,
      aux_sym_bcc_token1,
    ACTIONS(41), 1,
      aux_sym_sender_token1,
    ACTIONS(44), 1,
      aux_sym_replyto_token1,
    ACTIONS(47), 1,
      aux_sym_message_id_token1,
    ACTIONS(50), 1,
      aux_sym_in_reply_to_token1,
    ACTIONS(53), 1,
      aux_sym_references_token1,
    ACTIONS(56), 1,
      aux_sym_date_token1,
    ACTIONS(59), 1,
      aux_sym_subject_token1,
    ACTIONS(62), 1,
      sym_headertype,
    STATE(272), 1,
      sym_subject,
    STATE(273), 1,
      sym_date,
    STATE(275), 1,
      sym_message_id,
    STATE(278), 1,
      sym_addrkind,
    STATE(279), 1,
      sym_midkind,
    ACTIONS(27), 2,
      sym__line_break,
      ts_builtin_sym_end,
    STATE(274), 2,
      sym_in_reply_to,
      sym_references,
    STATE(276), 6,
      sym_to,
      sym_from,
      sym_cc,
      sym_bcc,
      sym_sender,
      sym_replyto,
    STATE(2), 7,
      sym_header,
      sym_addressheader,
      sym_dateheader,
      sym_subjectheader,
      sym_midheader,
      sym_ref,
      aux_sym_headers_repeat1,
  [77] = 21,
    ACTIONS(3), 1,
      aux_sym_to_token1,
    ACTIONS(5), 1,
      aux_sym_from_token1,
    ACTIONS(7), 1,
      aux_sym_cc_token1,
    ACTIONS(9), 1,
      aux_sym_bcc_token1,
    ACTIONS(11), 1,
      aux_sym_sender_token1,
    ACTIONS(13), 1,
      aux_sym_replyto_token1,
    ACTIONS(15), 1,
      aux_sym_message_id_token1,
    ACTIONS(17), 1,
      aux_sym_in_reply_to_token1,
    ACTIONS(19), 1,
      aux_sym_references_token1,
    ACTIONS(21), 1,
      aux_sym_date_token1,
    ACTIONS(23), 1,
      aux_sym_subject_token1,
    ACTIONS(25), 1,
      sym_headertype,
    STATE(272), 1,
      sym_subject,
    STATE(273), 1,
      sym_date,
    STATE(275), 1,
      sym_message_id,
    STATE(278), 1,
      sym_addrkind,
    STATE(279), 1,
      sym_midkind,
    ACTIONS(65), 2,
      sym__line_break,
      ts_builtin_sym_end,
    STATE(274), 2,
      sym_in_reply_to,
      sym_references,
    STATE(276), 6,
      sym_to,
      sym_from,
      sym_cc,
      sym_bcc,
      sym_sender,
      sym_replyto,
    STATE(2), 7,
      sym_header,
      sym_addressheader,
      sym_dateheader,
      sym_subjectheader,
      sym_midheader,
      sym_ref,
      aux_sym_headers_repeat1,
  [154] = 4,
    ACTIONS(69), 1,
      sym_wsp,
    ACTIONS(72), 1,
      sym__line_break,
    STATE(4), 1,
      aux_sym_fws_repeat1,
    ACTIONS(67), 29,
      anon_sym_COMMA,
      anon_sym_Mon,
      anon_sym_Tue,
      anon_sym_Wed,
      anon_sym_Thu,
      anon_sym_Fri,
      anon_sym_Sat,
      anon_sym_Sun,
      aux_sym_day_token1,
      aux_sym_day_token2,
      anon_sym_Jan,
      anon_sym_Feb,
      anon_sym_Mar,
      anon_sym_Apr,
      anon_sym_May,
      anon_sym_Jun,
      anon_sym_Jul,
      anon_sym_Aug,
      anon_sym_Sep,
      anon_sym_Oct,
      anon_sym_Nov,
      anon_sym_Dec,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_SEMI,
  [195] = 5,
    ACTIONS(76), 1,
      sym_wsp,
    ACTIONS(78), 1,
      sym__line_break,
    STATE(4), 1,
      aux_sym_fws_repeat1,
    STATE(219), 1,
      sym_line_break,
    ACTIONS(74), 24,
      anon_sym_Mon,
      anon_sym_Tue,
      anon_sym_Wed,
      anon_sym_Thu,
      anon_sym_Fri,
      anon_sym_Sat,
      anon_sym_Sun,
      aux_sym_day_token1,
      aux_sym_day_token2,
      anon_sym_Jan,
      anon_sym_Feb,
      anon_sym_Mar,
      anon_sym_Apr,
      anon_sym_May,
      anon_sym_Jun,
      anon_sym_Jul,
      anon_sym_Aug,
      anon_sym_Sep,
      anon_sym_Oct,
      anon_sym_Nov,
      anon_sym_Dec,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LPAREN,
  [234] = 23,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(80), 1,
      anon_sym_LT,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    ACTIONS(84), 1,
      sym_wsp,
    ACTIONS(86), 1,
      sym_atom,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    STATE(17), 1,
      sym_fws,
    STATE(22), 1,
      sym_cfws,
    STATE(46), 1,
      sym_dotatom_text,
    STATE(49), 1,
      sym_addresslist,
    STATE(54), 1,
      sym_phrase,
    STATE(75), 1,
      aux_sym_cfws_repeat2,
    STATE(88), 1,
      aux_sym_fws_repeat1,
    STATE(111), 1,
      sym_quoted_string,
    STATE(132), 1,
      sym_atom2,
    STATE(187), 1,
      sym_internetaddress,
    STATE(229), 1,
      sym_line_break,
    STATE(283), 1,
      sym_local,
    STATE(287), 1,
      sym_dotatom,
    STATE(23), 2,
      sym_word,
      aux_sym_phrase_repeat1,
    STATE(52), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    STATE(250), 2,
      sym_angle_addr,
      sym_addrspec,
    STATE(258), 2,
      sym_mailgroup,
      sym_mailbox,
  [308] = 24,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    ACTIONS(84), 1,
      sym_wsp,
    ACTIONS(86), 1,
      sym_atom,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(90), 1,
      anon_sym_LT,
    ACTIONS(92), 1,
      anon_sym_SEMI,
    STATE(15), 1,
      sym_fws,
    STATE(20), 1,
      sym_cfws,
    STATE(46), 1,
      sym_dotatom_text,
    STATE(63), 1,
      sym_phrase,
    STATE(75), 1,
      aux_sym_cfws_repeat2,
    STATE(88), 1,
      aux_sym_fws_repeat1,
    STATE(111), 1,
      sym_quoted_string,
    STATE(132), 1,
      sym_atom2,
    STATE(178), 1,
      sym_mailbox,
    STATE(229), 1,
      sym_line_break,
    STATE(287), 1,
      sym_dotatom,
    STATE(310), 1,
      sym_mailbox_list,
    STATE(312), 1,
      sym_group_list,
    STATE(320), 1,
      sym_local,
    STATE(23), 2,
      sym_word,
      aux_sym_phrase_repeat1,
    STATE(52), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    STATE(231), 2,
      sym_angle_addr,
      sym_addrspec,
  [384] = 24,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    ACTIONS(84), 1,
      sym_wsp,
    ACTIONS(86), 1,
      sym_atom,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(90), 1,
      anon_sym_LT,
    ACTIONS(94), 1,
      anon_sym_SEMI,
    STATE(14), 1,
      sym_fws,
    STATE(20), 1,
      sym_cfws,
    STATE(46), 1,
      sym_dotatom_text,
    STATE(63), 1,
      sym_phrase,
    STATE(75), 1,
      aux_sym_cfws_repeat2,
    STATE(88), 1,
      aux_sym_fws_repeat1,
    STATE(111), 1,
      sym_quoted_string,
    STATE(132), 1,
      sym_atom2,
    STATE(178), 1,
      sym_mailbox,
    STATE(229), 1,
      sym_line_break,
    STATE(287), 1,
      sym_dotatom,
    STATE(310), 1,
      sym_mailbox_list,
    STATE(313), 1,
      sym_group_list,
    STATE(320), 1,
      sym_local,
    STATE(23), 2,
      sym_word,
      aux_sym_phrase_repeat1,
    STATE(52), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    STATE(231), 2,
      sym_angle_addr,
      sym_addrspec,
  [460] = 22,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(80), 1,
      anon_sym_LT,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    ACTIONS(84), 1,
      sym_wsp,
    ACTIONS(86), 1,
      sym_atom,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    STATE(17), 1,
      sym_fws,
    STATE(22), 1,
      sym_cfws,
    STATE(46), 1,
      sym_dotatom_text,
    STATE(54), 1,
      sym_phrase,
    STATE(75), 1,
      aux_sym_cfws_repeat2,
    STATE(88), 1,
      aux_sym_fws_repeat1,
    STATE(111), 1,
      sym_quoted_string,
    STATE(132), 1,
      sym_atom2,
    STATE(229), 1,
      sym_line_break,
    STATE(241), 1,
      sym_internetaddress,
    STATE(283), 1,
      sym_local,
    STATE(287), 1,
      sym_dotatom,
    STATE(23), 2,
      sym_word,
      aux_sym_phrase_repeat1,
    STATE(52), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    STATE(250), 2,
      sym_angle_addr,
      sym_addrspec,
    STATE(258), 2,
      sym_mailgroup,
      sym_mailbox,
  [531] = 3,
    ACTIONS(96), 1,
      sym_wsp,
    STATE(10), 1,
      aux_sym_fws_repeat1,
    ACTIONS(67), 24,
      anon_sym_Mon,
      anon_sym_Tue,
      anon_sym_Wed,
      anon_sym_Thu,
      anon_sym_Fri,
      anon_sym_Sat,
      anon_sym_Sun,
      aux_sym_day_token1,
      aux_sym_day_token2,
      anon_sym_Jan,
      anon_sym_Feb,
      anon_sym_Mar,
      anon_sym_Apr,
      anon_sym_May,
      anon_sym_Jun,
      anon_sym_Jul,
      anon_sym_Aug,
      anon_sym_Sep,
      anon_sym_Oct,
      anon_sym_Nov,
      anon_sym_Dec,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LPAREN,
  [564] = 3,
    ACTIONS(101), 1,
      sym_wsp,
    STATE(10), 1,
      aux_sym_fws_repeat1,
    ACTIONS(99), 24,
      anon_sym_Mon,
      anon_sym_Tue,
      anon_sym_Wed,
      anon_sym_Thu,
      anon_sym_Fri,
      anon_sym_Sat,
      anon_sym_Sun,
      aux_sym_day_token1,
      aux_sym_day_token2,
      anon_sym_Jan,
      anon_sym_Feb,
      anon_sym_Mar,
      anon_sym_Apr,
      anon_sym_May,
      anon_sym_Jun,
      anon_sym_Jul,
      anon_sym_Aug,
      anon_sym_Sep,
      anon_sym_Oct,
      anon_sym_Nov,
      anon_sym_Dec,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LPAREN,
  [597] = 3,
    ACTIONS(101), 1,
      sym_wsp,
    STATE(10), 1,
      aux_sym_fws_repeat1,
    ACTIONS(103), 24,
      anon_sym_Mon,
      anon_sym_Tue,
      anon_sym_Wed,
      anon_sym_Thu,
      anon_sym_Fri,
      anon_sym_Sat,
      anon_sym_Sun,
      aux_sym_day_token1,
      aux_sym_day_token2,
      anon_sym_Jan,
      anon_sym_Feb,
      anon_sym_Mar,
      anon_sym_Apr,
      anon_sym_May,
      anon_sym_Jun,
      anon_sym_Jul,
      anon_sym_Aug,
      anon_sym_Sep,
      anon_sym_Oct,
      anon_sym_Nov,
      anon_sym_Dec,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LPAREN,
  [630] = 21,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    ACTIONS(84), 1,
      sym_wsp,
    ACTIONS(86), 1,
      sym_atom,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(90), 1,
      anon_sym_LT,
    STATE(16), 1,
      sym_fws,
    STATE(20), 1,
      sym_cfws,
    STATE(46), 1,
      sym_dotatom_text,
    STATE(63), 1,
      sym_phrase,
    STATE(75), 1,
      aux_sym_cfws_repeat2,
    STATE(88), 1,
      aux_sym_fws_repeat1,
    STATE(111), 1,
      sym_quoted_string,
    STATE(132), 1,
      sym_atom2,
    STATE(213), 1,
      sym_mailbox,
    STATE(229), 1,
      sym_line_break,
    STATE(287), 1,
      sym_dotatom,
    STATE(320), 1,
      sym_local,
    STATE(23), 2,
      sym_word,
      aux_sym_phrase_repeat1,
    STATE(52), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    STATE(231), 2,
      sym_angle_addr,
      sym_addrspec,
  [697] = 22,
    ACTIONS(105), 1,
      anon_sym_LT,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    ACTIONS(111), 1,
      sym_wsp,
    ACTIONS(114), 1,
      anon_sym_SEMI,
    ACTIONS(116), 1,
      sym_atom,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
      sym__line_break,
    STATE(20), 1,
      sym_cfws,
    STATE(46), 1,
      sym_dotatom_text,
    STATE(52), 1,
      aux_sym_cfws_repeat1,
    STATE(67), 1,
      sym_phrase,
    STATE(75), 1,
      aux_sym_cfws_repeat2,
    STATE(88), 1,
      aux_sym_fws_repeat1,
    STATE(111), 1,
      sym_quoted_string,
    STATE(115), 1,
      sym_fws,
    STATE(132), 1,
      sym_atom2,
    STATE(139), 1,
      sym_comment,
    STATE(229), 1,
      sym_line_break,
    STATE(287), 1,
      sym_dotatom,
    STATE(320), 1,
      sym_local,
    STATE(23), 2,
      sym_word,
      aux_sym_phrase_repeat1,
    STATE(243), 2,
      sym_angle_addr,
      sym_addrspec,
  [766] = 22,
    ACTIONS(94), 1,
      anon_sym_SEMI,
    ACTIONS(105), 1,
      anon_sym_LT,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    ACTIONS(111), 1,
      sym_wsp,
    ACTIONS(116), 1,
      sym_atom,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
      sym__line_break,
    STATE(20), 1,
      sym_cfws,
    STATE(46), 1,
      sym_dotatom_text,
    STATE(52), 1,
      aux_sym_cfws_repeat1,
    STATE(67), 1,
      sym_phrase,
    STATE(75), 1,
      aux_sym_cfws_repeat2,
    STATE(88), 1,
      aux_sym_fws_repeat1,
    STATE(111), 1,
      sym_quoted_string,
    STATE(115), 1,
      sym_fws,
    STATE(132), 1,
      sym_atom2,
    STATE(139), 1,
      sym_comment,
    STATE(229), 1,
      sym_line_break,
    STATE(287), 1,
      sym_dotatom,
    STATE(320), 1,
      sym_local,
    STATE(23), 2,
      sym_word,
      aux_sym_phrase_repeat1,
    STATE(243), 2,
      sym_angle_addr,
      sym_addrspec,
  [835] = 21,
    ACTIONS(105), 1,
      anon_sym_LT,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    ACTIONS(111), 1,
      sym_wsp,
    ACTIONS(116), 1,
      sym_atom,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
      sym__line_break,
    STATE(20), 1,
      sym_cfws,
    STATE(46), 1,
      sym_dotatom_text,
    STATE(52), 1,
      aux_sym_cfws_repeat1,
    STATE(67), 1,
      sym_phrase,
    STATE(75), 1,
      aux_sym_cfws_repeat2,
    STATE(88), 1,
      aux_sym_fws_repeat1,
    STATE(111), 1,
      sym_quoted_string,
    STATE(115), 1,
      sym_fws,
    STATE(132), 1,
      sym_atom2,
    STATE(139), 1,
      sym_comment,
    STATE(229), 1,
      sym_line_break,
    STATE(287), 1,
      sym_dotatom,
    STATE(320), 1,
      sym_local,
    STATE(23), 2,
      sym_word,
      aux_sym_phrase_repeat1,
    STATE(243), 2,
      sym_angle_addr,
      sym_addrspec,
  [901] = 21,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    ACTIONS(111), 1,
      sym_wsp,
    ACTIONS(116), 1,
      sym_atom,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
      sym__line_break,
    ACTIONS(125), 1,
      anon_sym_LT,
    STATE(22), 1,
      sym_cfws,
    STATE(46), 1,
      sym_dotatom_text,
    STATE(52), 1,
      aux_sym_cfws_repeat1,
    STATE(58), 1,
      sym_phrase,
    STATE(75), 1,
      aux_sym_cfws_repeat2,
    STATE(88), 1,
      aux_sym_fws_repeat1,
    STATE(111), 1,
      sym_quoted_string,
    STATE(115), 1,
      sym_fws,
    STATE(132), 1,
      sym_atom2,
    STATE(139), 1,
      sym_comment,
    STATE(229), 1,
      sym_line_break,
    STATE(283), 1,
      sym_local,
    STATE(287), 1,
      sym_dotatom,
    STATE(23), 2,
      sym_word,
      aux_sym_phrase_repeat1,
    STATE(207), 2,
      sym_angle_addr,
      sym_addrspec,
  [967] = 13,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(132), 1,
      sym_wsp,
    STATE(5), 1,
      aux_sym_fws_repeat1,
    STATE(37), 1,
      sym__datefield,
    STATE(53), 1,
      sym_day,
    STATE(82), 1,
      sym_fws,
    STATE(165), 1,
      sym_datefield,
    STATE(224), 1,
      sym_line_break,
    STATE(264), 1,
      sym_day_name,
    STATE(294), 1,
      sym_date_time,
    STATE(296), 1,
      sym_day_of_week,
    ACTIONS(130), 2,
      aux_sym_day_token1,
      aux_sym_day_token2,
    ACTIONS(128), 7,
      anon_sym_Mon,
      anon_sym_Tue,
      anon_sym_Wed,
      anon_sym_Thu,
      anon_sym_Fri,
      anon_sym_Sat,
      anon_sym_Sun,
  [1014] = 15,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_wsp,
    ACTIONS(142), 1,
      sym_atom,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(148), 1,
      sym__line_break,
    STATE(88), 1,
      aux_sym_fws_repeat1,
    STATE(120), 1,
      sym_quoted_string,
    STATE(128), 1,
      aux_sym_cfws_repeat2,
    STATE(132), 1,
      sym_atom2,
    STATE(149), 1,
      sym_fws,
    STATE(229), 1,
      sym_line_break,
    STATE(329), 1,
      sym_cfws,
    ACTIONS(134), 2,
      anon_sym_COLON,
      anon_sym_LT,
    STATE(19), 2,
      sym_word,
      aux_sym_phrase_repeat1,
    STATE(87), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [1063] = 16,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    ACTIONS(84), 1,
      sym_wsp,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_LT,
    ACTIONS(153), 1,
      sym_atom,
    STATE(40), 1,
      sym_dotatom_text,
    STATE(88), 1,
      aux_sym_fws_repeat1,
    STATE(120), 1,
      sym_quoted_string,
    STATE(128), 1,
      aux_sym_cfws_repeat2,
    STATE(132), 1,
      sym_atom2,
    STATE(149), 1,
      sym_fws,
    STATE(229), 1,
      sym_line_break,
    STATE(329), 1,
      sym_cfws,
    STATE(21), 2,
      sym_word,
      aux_sym_phrase_repeat1,
    STATE(87), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [1114] = 15,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(160), 1,
      sym_wsp,
    ACTIONS(163), 1,
      sym_atom,
    ACTIONS(165), 1,
      sym__line_break,
    STATE(75), 1,
      aux_sym_cfws_repeat2,
    STATE(88), 1,
      aux_sym_fws_repeat1,
    STATE(115), 1,
      sym_fws,
    STATE(120), 1,
      sym_quoted_string,
    STATE(132), 1,
      sym_atom2,
    STATE(136), 1,
      sym_cfws,
    STATE(229), 1,
      sym_line_break,
    ACTIONS(155), 2,
      anon_sym_COLON,
      anon_sym_LT,
    STATE(19), 2,
      sym_word,
      aux_sym_phrase_repeat1,
    STATE(52), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [1163] = 16,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    ACTIONS(84), 1,
      sym_wsp,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      sym_atom,
    ACTIONS(168), 1,
      anon_sym_LT,
    STATE(40), 1,
      sym_dotatom_text,
    STATE(88), 1,
      aux_sym_fws_repeat1,
    STATE(120), 1,
      sym_quoted_string,
    STATE(128), 1,
      aux_sym_cfws_repeat2,
    STATE(132), 1,
      sym_atom2,
    STATE(149), 1,
      sym_fws,
    STATE(229), 1,
      sym_line_break,
    STATE(329), 1,
      sym_cfws,
    STATE(21), 2,
      sym_word,
      aux_sym_phrase_repeat1,
    STATE(87), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [1214] = 15,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      sym_atom,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      sym_wsp,
    ACTIONS(178), 1,
      sym__line_break,
    STATE(75), 1,
      aux_sym_cfws_repeat2,
    STATE(88), 1,
      aux_sym_fws_repeat1,
    STATE(115), 1,
      sym_fws,
    STATE(120), 1,
      sym_quoted_string,
    STATE(132), 1,
      sym_atom2,
    STATE(142), 1,
      sym_cfws,
    STATE(229), 1,
      sym_line_break,
    ACTIONS(170), 2,
      anon_sym_COLON,
      anon_sym_LT,
    STATE(19), 2,
      sym_word,
      aux_sym_phrase_repeat1,
    STATE(52), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [1263] = 15,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    ACTIONS(84), 1,
      sym_wsp,
    ACTIONS(181), 1,
      sym_atom,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
    STATE(46), 1,
      sym_dotatom_text,
    STATE(88), 1,
      aux_sym_fws_repeat1,
    STATE(128), 1,
      aux_sym_cfws_repeat2,
    STATE(149), 1,
      sym_fws,
    STATE(220), 1,
      sym_cfws,
    STATE(229), 1,
      sym_line_break,
    STATE(315), 1,
      sym_addrspec,
    STATE(320), 1,
      sym_local,
    STATE(87), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    STATE(287), 2,
      sym_dotatom,
      sym_quoted_string,
  [1311] = 15,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    ACTIONS(84), 1,
      sym_wsp,
    ACTIONS(181), 1,
      sym_atom,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
    STATE(46), 1,
      sym_dotatom_text,
    STATE(88), 1,
      aux_sym_fws_repeat1,
    STATE(128), 1,
      aux_sym_cfws_repeat2,
    STATE(149), 1,
      sym_fws,
    STATE(220), 1,
      sym_cfws,
    STATE(229), 1,
      sym_line_break,
    STATE(286), 1,
      sym_addrspec,
    STATE(320), 1,
      sym_local,
    STATE(87), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    STATE(287), 2,
      sym_dotatom,
      sym_quoted_string,
  [1359] = 13,
    ACTIONS(187), 1,
      anon_sym_AT,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      sym_wsp,
    ACTIONS(197), 1,
      anon_sym_DOT,
    ACTIONS(199), 1,
      sym__line_break,
    STATE(75), 1,
      aux_sym_cfws_repeat2,
    STATE(88), 1,
      aux_sym_fws_repeat1,
    STATE(96), 1,
      aux_sym_dotatom_text_repeat1,
    STATE(115), 1,
      sym_fws,
    STATE(121), 1,
      sym_cfws,
    STATE(229), 1,
      sym_line_break,
    STATE(52), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    ACTIONS(185), 4,
      anon_sym_COLON,
      anon_sym_LT,
      sym_atom,
      anon_sym_DQUOTE,
  [1403] = 13,
    ACTIONS(187), 1,
      anon_sym_AT,
    ACTIONS(197), 1,
      anon_sym_DOT,
    ACTIONS(206), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 1,
      sym_wsp,
    ACTIONS(216), 1,
      sym__line_break,
    STATE(75), 1,
      aux_sym_cfws_repeat2,
    STATE(88), 1,
      aux_sym_fws_repeat1,
    STATE(96), 1,
      aux_sym_dotatom_text_repeat1,
    STATE(115), 1,
      sym_fws,
    STATE(127), 1,
      sym_cfws,
    STATE(229), 1,
      sym_line_break,
    STATE(52), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    ACTIONS(203), 4,
      anon_sym_COLON,
      anon_sym_LT,
      sym_atom,
      anon_sym_DQUOTE,
  [1447] = 15,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    ACTIONS(84), 1,
      sym_wsp,
    ACTIONS(181), 1,
      sym_atom,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
    STATE(46), 1,
      sym_dotatom_text,
    STATE(88), 1,
      aux_sym_fws_repeat1,
    STATE(128), 1,
      aux_sym_cfws_repeat2,
    STATE(149), 1,
      sym_fws,
    STATE(220), 1,
      sym_cfws,
    STATE(229), 1,
      sym_line_break,
    STATE(299), 1,
      sym_addrspec,
    STATE(320), 1,
      sym_local,
    STATE(87), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    STATE(287), 2,
      sym_dotatom,
      sym_quoted_string,
  [1495] = 15,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    ACTIONS(84), 1,
      sym_wsp,
    ACTIONS(181), 1,
      sym_atom,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
    STATE(46), 1,
      sym_dotatom_text,
    STATE(88), 1,
      aux_sym_fws_repeat1,
    STATE(128), 1,
      aux_sym_cfws_repeat2,
    STATE(149), 1,
      sym_fws,
    STATE(220), 1,
      sym_cfws,
    STATE(229), 1,
      sym_line_break,
    STATE(306), 1,
      sym_addrspec,
    STATE(320), 1,
      sym_local,
    STATE(87), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    STATE(287), 2,
      sym_dotatom,
      sym_quoted_string,
  [1543] = 3,
    ACTIONS(225), 1,
      sym_wsp,
    ACTIONS(221), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(223), 12,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      aux_sym_message_id_token1,
      aux_sym_in_reply_to_token1,
      aux_sym_references_token1,
      aux_sym_date_token1,
      aux_sym_subject_token1,
      sym_headertype,
  [1565] = 3,
    ACTIONS(225), 1,
      sym_wsp,
    ACTIONS(227), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(229), 12,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      aux_sym_message_id_token1,
      aux_sym_in_reply_to_token1,
      aux_sym_references_token1,
      aux_sym_date_token1,
      aux_sym_subject_token1,
      sym_headertype,
  [1587] = 2,
    ACTIONS(233), 1,
      sym_headertype,
    ACTIONS(231), 13,
      sym__line_break,
      ts_builtin_sym_end,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      aux_sym_message_id_token1,
      aux_sym_in_reply_to_token1,
      aux_sym_references_token1,
      aux_sym_date_token1,
      aux_sym_subject_token1,
  [1606] = 2,
    ACTIONS(237), 1,
      sym_headertype,
    ACTIONS(235), 13,
      sym__line_break,
      ts_builtin_sym_end,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      aux_sym_message_id_token1,
      aux_sym_in_reply_to_token1,
      aux_sym_references_token1,
      aux_sym_date_token1,
      aux_sym_subject_token1,
  [1625] = 13,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    ACTIONS(84), 1,
      sym_wsp,
    ACTIONS(181), 1,
      sym_atom,
    STATE(81), 1,
      sym_dotatom_text,
    STATE(88), 1,
      aux_sym_fws_repeat1,
    STATE(128), 1,
      aux_sym_cfws_repeat2,
    STATE(149), 1,
      sym_fws,
    STATE(226), 1,
      sym_dotatom,
    STATE(229), 1,
      sym_line_break,
    STATE(230), 1,
      sym_domain,
    STATE(236), 1,
      sym_cfws,
    STATE(87), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [1666] = 13,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    ACTIONS(84), 1,
      sym_wsp,
    ACTIONS(181), 1,
      sym_atom,
    STATE(46), 1,
      sym_dotatom_text,
    STATE(88), 1,
      aux_sym_fws_repeat1,
    STATE(128), 1,
      aux_sym_cfws_repeat2,
    STATE(149), 1,
      sym_fws,
    STATE(188), 1,
      sym_dotatom,
    STATE(189), 1,
      sym_domain,
    STATE(220), 1,
      sym_cfws,
    STATE(229), 1,
      sym_line_break,
    STATE(87), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [1707] = 2,
    ACTIONS(241), 1,
      sym_headertype,
    ACTIONS(239), 13,
      sym__line_break,
      ts_builtin_sym_end,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      aux_sym_message_id_token1,
      aux_sym_in_reply_to_token1,
      aux_sym_references_token1,
      aux_sym_date_token1,
      aux_sym_subject_token1,
  [1726] = 2,
    ACTIONS(245), 1,
      sym_headertype,
    ACTIONS(243), 13,
      sym__line_break,
      ts_builtin_sym_end,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      aux_sym_message_id_token1,
      aux_sym_in_reply_to_token1,
      aux_sym_references_token1,
      aux_sym_date_token1,
      aux_sym_subject_token1,
  [1745] = 2,
    ACTIONS(249), 1,
      sym_headertype,
    ACTIONS(247), 13,
      sym__line_break,
      ts_builtin_sym_end,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      aux_sym_message_id_token1,
      aux_sym_in_reply_to_token1,
      aux_sym_references_token1,
      aux_sym_date_token1,
      aux_sym_subject_token1,
  [1764] = 2,
    ACTIONS(253), 1,
      sym_headertype,
    ACTIONS(251), 13,
      sym__line_break,
      ts_builtin_sym_end,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      aux_sym_message_id_token1,
      aux_sym_in_reply_to_token1,
      aux_sym_references_token1,
      aux_sym_date_token1,
      aux_sym_subject_token1,
  [1783] = 10,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      sym_wsp,
    STATE(71), 1,
      aux_sym_cfws_repeat2,
    STATE(83), 1,
      aux_sym_fws_repeat1,
    STATE(101), 1,
      sym_fws,
    STATE(163), 1,
      sym_cfws,
    STATE(240), 1,
      sym_line_break,
    STATE(47), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    ACTIONS(255), 4,
      anon_sym_COMMA,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_SEMI,
  [1818] = 12,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      sym_wsp,
    ACTIONS(261), 1,
      anon_sym_LT,
    STATE(44), 1,
      sym_references_field,
    STATE(71), 1,
      aux_sym_cfws_repeat2,
    STATE(83), 1,
      aux_sym_fws_repeat1,
    STATE(101), 1,
      sym_fws,
    STATE(240), 1,
      sym_line_break,
    STATE(269), 1,
      sym_cfws,
    STATE(47), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    STATE(57), 2,
      sym_msg_id,
      aux_sym_references_field_repeat1,
  [1857] = 10,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      sym_wsp,
    ACTIONS(269), 1,
      sym__line_break,
    STATE(75), 1,
      aux_sym_cfws_repeat2,
    STATE(88), 1,
      aux_sym_fws_repeat1,
    STATE(115), 1,
      sym_fws,
    STATE(121), 1,
      sym_cfws,
    STATE(229), 1,
      sym_line_break,
    STATE(52), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    ACTIONS(185), 4,
      anon_sym_COLON,
      anon_sym_LT,
      sym_atom,
      anon_sym_DQUOTE,
  [1892] = 2,
    ACTIONS(274), 1,
      sym_headertype,
    ACTIONS(272), 13,
      sym__line_break,
      ts_builtin_sym_end,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      aux_sym_message_id_token1,
      aux_sym_in_reply_to_token1,
      aux_sym_references_token1,
      aux_sym_date_token1,
      aux_sym_subject_token1,
  [1911] = 2,
    ACTIONS(278), 1,
      sym_headertype,
    ACTIONS(276), 13,
      sym__line_break,
      ts_builtin_sym_end,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      aux_sym_message_id_token1,
      aux_sym_in_reply_to_token1,
      aux_sym_references_token1,
      aux_sym_date_token1,
      aux_sym_subject_token1,
  [1930] = 2,
    ACTIONS(282), 1,
      sym_headertype,
    ACTIONS(280), 13,
      sym__line_break,
      ts_builtin_sym_end,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      aux_sym_message_id_token1,
      aux_sym_in_reply_to_token1,
      aux_sym_references_token1,
      aux_sym_date_token1,
      aux_sym_subject_token1,
  [1949] = 10,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      sym_wsp,
    STATE(71), 1,
      aux_sym_cfws_repeat2,
    STATE(83), 1,
      aux_sym_fws_repeat1,
    STATE(101), 1,
      sym_fws,
    STATE(171), 1,
      sym_cfws,
    STATE(240), 1,
      sym_line_break,
    STATE(47), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    ACTIONS(284), 4,
      anon_sym_COMMA,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_SEMI,
  [1984] = 9,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      sym_wsp,
    STATE(79), 1,
      aux_sym_cfws_repeat2,
    STATE(83), 1,
      aux_sym_fws_repeat1,
    STATE(101), 1,
      sym_fws,
    STATE(240), 1,
      sym_line_break,
    STATE(55), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    ACTIONS(286), 5,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_SEMI,
  [2017] = 2,
    ACTIONS(290), 1,
      sym_headertype,
    ACTIONS(288), 13,
      sym__line_break,
      ts_builtin_sym_end,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      aux_sym_message_id_token1,
      aux_sym_in_reply_to_token1,
      aux_sym_references_token1,
      aux_sym_date_token1,
      aux_sym_subject_token1,
  [2036] = 2,
    ACTIONS(294), 1,
      sym_headertype,
    ACTIONS(292), 13,
      sym__line_break,
      ts_builtin_sym_end,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      aux_sym_message_id_token1,
      aux_sym_in_reply_to_token1,
      aux_sym_references_token1,
      aux_sym_date_token1,
      aux_sym_subject_token1,
  [2055] = 10,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(301), 1,
      sym_wsp,
    ACTIONS(304), 1,
      sym__line_break,
    STATE(75), 1,
      aux_sym_cfws_repeat2,
    STATE(88), 1,
      aux_sym_fws_repeat1,
    STATE(115), 1,
      sym_fws,
    STATE(124), 1,
      sym_cfws,
    STATE(229), 1,
      sym_line_break,
    STATE(52), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    ACTIONS(296), 4,
      anon_sym_COLON,
      anon_sym_LT,
      sym_atom,
      anon_sym_DQUOTE,
  [2090] = 2,
    ACTIONS(309), 1,
      sym_headertype,
    ACTIONS(307), 13,
      sym__line_break,
      ts_builtin_sym_end,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      aux_sym_message_id_token1,
      aux_sym_in_reply_to_token1,
      aux_sym_references_token1,
      aux_sym_date_token1,
      aux_sym_subject_token1,
  [2109] = 9,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      sym_wsp,
    ACTIONS(317), 1,
      sym__line_break,
    STATE(72), 1,
      aux_sym_cfws_repeat2,
    STATE(88), 1,
      aux_sym_fws_repeat1,
    STATE(115), 1,
      sym_fws,
    STATE(229), 1,
      sym_line_break,
    STATE(61), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    ACTIONS(286), 4,
      anon_sym_COLON,
      anon_sym_LT,
      sym_atom,
      anon_sym_DQUOTE,
  [2141] = 2,
    STATE(137), 1,
      sym_month,
    ACTIONS(320), 12,
      anon_sym_Jan,
      anon_sym_Feb,
      anon_sym_Mar,
      anon_sym_Apr,
      anon_sym_May,
      anon_sym_Jun,
      anon_sym_Jul,
      anon_sym_Aug,
      anon_sym_Sep,
      anon_sym_Oct,
      anon_sym_Nov,
      anon_sym_Dec,
  [2159] = 12,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(80), 1,
      anon_sym_LT,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      sym_wsp,
    ACTIONS(322), 1,
      anon_sym_COLON,
    STATE(71), 1,
      aux_sym_cfws_repeat2,
    STATE(83), 1,
      aux_sym_fws_repeat1,
    STATE(101), 1,
      sym_fws,
    STATE(207), 1,
      sym_angle_addr,
    STATE(240), 1,
      sym_line_break,
    STATE(317), 1,
      sym_cfws,
    STATE(47), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [2197] = 8,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(329), 1,
      sym_wsp,
    ACTIONS(332), 1,
      sym__line_break,
    STATE(5), 1,
      aux_sym_fws_repeat1,
    STATE(224), 1,
      sym_line_break,
    STATE(259), 1,
      sym_fws,
    STATE(55), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    ACTIONS(324), 5,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_SEMI,
  [2227] = 11,
    ACTIONS(335), 1,
      anon_sym_LT,
    ACTIONS(338), 1,
      anon_sym_LPAREN,
    ACTIONS(341), 1,
      sym_wsp,
    ACTIONS(344), 1,
      sym__line_break,
    STATE(71), 1,
      aux_sym_cfws_repeat2,
    STATE(83), 1,
      aux_sym_fws_repeat1,
    STATE(101), 1,
      sym_fws,
    STATE(240), 1,
      sym_line_break,
    STATE(269), 1,
      sym_cfws,
    STATE(47), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    STATE(56), 2,
      sym_msg_id,
      aux_sym_references_field_repeat1,
  [2263] = 11,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      sym_wsp,
    ACTIONS(261), 1,
      anon_sym_LT,
    ACTIONS(347), 1,
      sym__line_break,
    STATE(71), 1,
      aux_sym_cfws_repeat2,
    STATE(83), 1,
      aux_sym_fws_repeat1,
    STATE(101), 1,
      sym_fws,
    STATE(240), 1,
      sym_line_break,
    STATE(269), 1,
      sym_cfws,
    STATE(47), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    STATE(56), 2,
      sym_msg_id,
      aux_sym_references_field_repeat1,
  [2299] = 12,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(80), 1,
      anon_sym_LT,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      sym_wsp,
    ACTIONS(349), 1,
      anon_sym_COLON,
    STATE(71), 1,
      aux_sym_cfws_repeat2,
    STATE(83), 1,
      aux_sym_fws_repeat1,
    STATE(101), 1,
      sym_fws,
    STATE(240), 1,
      sym_line_break,
    STATE(246), 1,
      sym_angle_addr,
    STATE(317), 1,
      sym_cfws,
    STATE(47), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [2337] = 12,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      sym_wsp,
    ACTIONS(351), 1,
      anon_sym_LT,
    STATE(33), 1,
      sym_message_idfield,
    STATE(71), 1,
      aux_sym_cfws_repeat2,
    STATE(83), 1,
      aux_sym_fws_repeat1,
    STATE(101), 1,
      sym_fws,
    STATE(240), 1,
      sym_line_break,
    STATE(289), 1,
      sym_msg_id,
    STATE(331), 1,
      sym_cfws,
    STATE(47), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [2375] = 1,
    ACTIONS(353), 12,
      anon_sym_Jan,
      anon_sym_Feb,
      anon_sym_Mar,
      anon_sym_Apr,
      anon_sym_May,
      anon_sym_Jun,
      anon_sym_Jul,
      anon_sym_Aug,
      anon_sym_Sep,
      anon_sym_Oct,
      anon_sym_Nov,
      anon_sym_Dec,
  [2390] = 8,
    ACTIONS(332), 1,
      sym__line_break,
    ACTIONS(355), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      sym_wsp,
    STATE(5), 1,
      aux_sym_fws_repeat1,
    STATE(224), 1,
      sym_line_break,
    STATE(233), 1,
      sym_fws,
    STATE(61), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    ACTIONS(324), 4,
      anon_sym_COLON,
      anon_sym_LT,
      sym_atom,
      anon_sym_DQUOTE,
  [2419] = 1,
    ACTIONS(361), 12,
      anon_sym_Jan,
      anon_sym_Feb,
      anon_sym_Mar,
      anon_sym_Apr,
      anon_sym_May,
      anon_sym_Jun,
      anon_sym_Jul,
      anon_sym_Aug,
      anon_sym_Sep,
      anon_sym_Oct,
      anon_sym_Nov,
      anon_sym_Dec,
  [2434] = 11,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(90), 1,
      anon_sym_LT,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      sym_wsp,
    STATE(71), 1,
      aux_sym_cfws_repeat2,
    STATE(83), 1,
      aux_sym_fws_repeat1,
    STATE(101), 1,
      sym_fws,
    STATE(240), 1,
      sym_line_break,
    STATE(243), 1,
      sym_angle_addr,
    STATE(322), 1,
      sym_cfws,
    STATE(47), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [2469] = 10,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      sym_wsp,
    STATE(71), 1,
      aux_sym_cfws_repeat2,
    STATE(83), 1,
      aux_sym_fws_repeat1,
    STATE(101), 1,
      sym_fws,
    STATE(240), 1,
      sym_line_break,
    STATE(260), 1,
      sym_cfws,
    ACTIONS(363), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(47), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [2502] = 6,
    ACTIONS(367), 1,
      sym_wsp,
    ACTIONS(370), 1,
      sym__line_break,
    STATE(83), 1,
      aux_sym_fws_repeat1,
    STATE(240), 1,
      sym_line_break,
    STATE(65), 2,
      sym_fws,
      aux_sym_cfws_repeat2,
    ACTIONS(365), 6,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_SEMI,
  [2527] = 10,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      sym_wsp,
    STATE(71), 1,
      aux_sym_cfws_repeat2,
    STATE(83), 1,
      aux_sym_fws_repeat1,
    STATE(101), 1,
      sym_fws,
    STATE(240), 1,
      sym_line_break,
    STATE(256), 1,
      sym_cfws,
    ACTIONS(373), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(47), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [2560] = 11,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(90), 1,
      anon_sym_LT,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      sym_wsp,
    STATE(71), 1,
      aux_sym_cfws_repeat2,
    STATE(83), 1,
      aux_sym_fws_repeat1,
    STATE(101), 1,
      sym_fws,
    STATE(240), 1,
      sym_line_break,
    STATE(251), 1,
      sym_angle_addr,
    STATE(322), 1,
      sym_cfws,
    STATE(47), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [2595] = 10,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      sym_wsp,
    ACTIONS(375), 1,
      anon_sym_COMMA,
    ACTIONS(377), 1,
      sym__line_break,
    STATE(83), 1,
      aux_sym_fws_repeat1,
    STATE(101), 1,
      sym_fws,
    STATE(126), 1,
      aux_sym_cfws_repeat2,
    STATE(209), 1,
      sym_cfws,
    STATE(240), 1,
      sym_line_break,
    STATE(91), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [2627] = 6,
    ACTIONS(370), 1,
      sym__line_break,
    ACTIONS(379), 1,
      sym_wsp,
    STATE(88), 1,
      aux_sym_fws_repeat1,
    STATE(229), 1,
      sym_line_break,
    STATE(69), 2,
      sym_fws,
      aux_sym_cfws_repeat2,
    ACTIONS(365), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym_atom,
      anon_sym_DQUOTE,
  [2651] = 10,
    ACTIONS(382), 1,
      anon_sym_LT,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(387), 1,
      sym_wsp,
    ACTIONS(390), 1,
      sym__line_break,
    STATE(83), 1,
      aux_sym_fws_repeat1,
    STATE(116), 1,
      aux_sym_cfws_repeat2,
    STATE(144), 1,
      sym_fws,
    STATE(168), 1,
      sym_cfws,
    STATE(240), 1,
      sym_line_break,
    STATE(90), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [2683] = 6,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(259), 1,
      sym_wsp,
    STATE(83), 1,
      aux_sym_fws_repeat1,
    STATE(240), 1,
      sym_line_break,
    STATE(65), 2,
      sym_fws,
      aux_sym_cfws_repeat2,
    ACTIONS(286), 5,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_SEMI,
  [2707] = 6,
    ACTIONS(395), 1,
      sym_wsp,
    ACTIONS(398), 1,
      sym__line_break,
    STATE(88), 1,
      aux_sym_fws_repeat1,
    STATE(229), 1,
      sym_line_break,
    STATE(69), 2,
      sym_fws,
      aux_sym_cfws_repeat2,
    ACTIONS(393), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym_atom,
      anon_sym_DQUOTE,
  [2731] = 10,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      sym_wsp,
    ACTIONS(401), 1,
      anon_sym_COMMA,
    ACTIONS(403), 1,
      sym__line_break,
    STATE(83), 1,
      aux_sym_fws_repeat1,
    STATE(101), 1,
      sym_fws,
    STATE(126), 1,
      aux_sym_cfws_repeat2,
    STATE(221), 1,
      sym_cfws,
    STATE(240), 1,
      sym_line_break,
    STATE(91), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [2763] = 10,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      sym_wsp,
    ACTIONS(405), 1,
      sym__line_break,
    STATE(83), 1,
      aux_sym_fws_repeat1,
    STATE(101), 1,
      sym_fws,
    STATE(126), 1,
      aux_sym_cfws_repeat2,
    STATE(240), 1,
      sym_line_break,
    STATE(249), 1,
      sym_cfws,
    STATE(91), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [2795] = 6,
    ACTIONS(314), 1,
      sym_wsp,
    ACTIONS(317), 1,
      sym__line_break,
    STATE(88), 1,
      aux_sym_fws_repeat1,
    STATE(229), 1,
      sym_line_break,
    STATE(69), 2,
      sym_fws,
      aux_sym_cfws_repeat2,
    ACTIONS(286), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym_atom,
      anon_sym_DQUOTE,
  [2819] = 10,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      sym_wsp,
    ACTIONS(373), 1,
      anon_sym_COMMA,
    ACTIONS(408), 1,
      sym__line_break,
    STATE(83), 1,
      aux_sym_fws_repeat1,
    STATE(101), 1,
      sym_fws,
    STATE(126), 1,
      aux_sym_cfws_repeat2,
    STATE(240), 1,
      sym_line_break,
    STATE(252), 1,
      sym_cfws,
    STATE(91), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [2851] = 10,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      sym_wsp,
    ACTIONS(363), 1,
      anon_sym_COMMA,
    ACTIONS(410), 1,
      sym__line_break,
    STATE(83), 1,
      aux_sym_fws_repeat1,
    STATE(101), 1,
      sym_fws,
    STATE(126), 1,
      aux_sym_cfws_repeat2,
    STATE(211), 1,
      sym_cfws,
    STATE(240), 1,
      sym_line_break,
    STATE(91), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [2883] = 10,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      sym_wsp,
    ACTIONS(412), 1,
      anon_sym_COMMA,
    ACTIONS(414), 1,
      sym__line_break,
    STATE(83), 1,
      aux_sym_fws_repeat1,
    STATE(101), 1,
      sym_fws,
    STATE(126), 1,
      aux_sym_cfws_repeat2,
    STATE(214), 1,
      sym_cfws,
    STATE(240), 1,
      sym_line_break,
    STATE(91), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [2915] = 6,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(259), 1,
      sym_wsp,
    STATE(83), 1,
      aux_sym_fws_repeat1,
    STATE(240), 1,
      sym_line_break,
    STATE(65), 2,
      sym_fws,
      aux_sym_cfws_repeat2,
    ACTIONS(393), 5,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_SEMI,
  [2939] = 10,
    ACTIONS(416), 1,
      anon_sym_LT,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(421), 1,
      sym_wsp,
    ACTIONS(424), 1,
      sym__line_break,
    STATE(83), 1,
      aux_sym_fws_repeat1,
    STATE(116), 1,
      aux_sym_cfws_repeat2,
    STATE(144), 1,
      sym_fws,
    STATE(170), 1,
      sym_cfws,
    STATE(240), 1,
      sym_line_break,
    STATE(90), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [2971] = 10,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      sym_wsp,
    ACTIONS(284), 1,
      anon_sym_COMMA,
    ACTIONS(427), 1,
      sym__line_break,
    STATE(83), 1,
      aux_sym_fws_repeat1,
    STATE(101), 1,
      sym_fws,
    STATE(126), 1,
      aux_sym_cfws_repeat2,
    STATE(240), 1,
      sym_line_break,
    STATE(245), 1,
      sym_cfws,
    STATE(91), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [3003] = 4,
    ACTIONS(432), 1,
      aux_sym_day_token1,
    ACTIONS(434), 1,
      aux_sym_day_token2,
    STATE(305), 1,
      sym_day_name,
    ACTIONS(430), 7,
      anon_sym_Mon,
      anon_sym_Tue,
      anon_sym_Wed,
      anon_sym_Thu,
      anon_sym_Fri,
      anon_sym_Sat,
      anon_sym_Sun,
  [3022] = 5,
    ACTIONS(76), 1,
      sym_wsp,
    ACTIONS(78), 1,
      sym__line_break,
    STATE(4), 1,
      aux_sym_fws_repeat1,
    STATE(238), 1,
      sym_line_break,
    ACTIONS(74), 6,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_SEMI,
  [3043] = 9,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      sym_wsp,
    ACTIONS(436), 1,
      sym__line_break,
    STATE(83), 1,
      aux_sym_fws_repeat1,
    STATE(101), 1,
      sym_fws,
    STATE(126), 1,
      aux_sym_cfws_repeat2,
    STATE(240), 1,
      sym_line_break,
    STATE(291), 1,
      sym_cfws,
    STATE(91), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [3072] = 9,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      sym_wsp,
    ACTIONS(424), 1,
      sym__line_break,
    STATE(83), 1,
      aux_sym_fws_repeat1,
    STATE(101), 1,
      sym_fws,
    STATE(126), 1,
      aux_sym_cfws_repeat2,
    STATE(170), 1,
      sym_cfws,
    STATE(240), 1,
      sym_line_break,
    STATE(91), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [3101] = 9,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      sym_wsp,
    ACTIONS(390), 1,
      sym__line_break,
    STATE(83), 1,
      aux_sym_fws_repeat1,
    STATE(101), 1,
      sym_fws,
    STATE(126), 1,
      aux_sym_cfws_repeat2,
    STATE(168), 1,
      sym_cfws,
    STATE(240), 1,
      sym_line_break,
    STATE(91), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [3130] = 9,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    ACTIONS(84), 1,
      sym_wsp,
    ACTIONS(286), 1,
      sym_atom,
    STATE(88), 1,
      aux_sym_fws_repeat1,
    STATE(123), 1,
      aux_sym_cfws_repeat2,
    STATE(149), 1,
      sym_fws,
    STATE(229), 1,
      sym_line_break,
    STATE(61), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [3159] = 5,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(439), 1,
      sym_wsp,
    STATE(93), 1,
      aux_sym_fws_repeat1,
    STATE(228), 1,
      sym_line_break,
    ACTIONS(74), 6,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      sym_atom,
      anon_sym_DQUOTE,
  [3180] = 9,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      sym_wsp,
    ACTIONS(441), 1,
      sym__line_break,
    STATE(83), 1,
      aux_sym_fws_repeat1,
    STATE(101), 1,
      sym_fws,
    STATE(126), 1,
      aux_sym_cfws_repeat2,
    STATE(240), 1,
      sym_line_break,
    STATE(318), 1,
      sym_cfws,
    STATE(91), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [3209] = 9,
    ACTIONS(286), 1,
      anon_sym_LT,
    ACTIONS(317), 1,
      sym__line_break,
    ACTIONS(444), 1,
      anon_sym_LPAREN,
    ACTIONS(447), 1,
      sym_wsp,
    STATE(83), 1,
      aux_sym_fws_repeat1,
    STATE(119), 1,
      aux_sym_cfws_repeat2,
    STATE(144), 1,
      sym_fws,
    STATE(240), 1,
      sym_line_break,
    STATE(55), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [3238] = 9,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      sym_wsp,
    ACTIONS(286), 1,
      anon_sym_COMMA,
    ACTIONS(317), 1,
      sym__line_break,
    STATE(83), 1,
      aux_sym_fws_repeat1,
    STATE(101), 1,
      sym_fws,
    STATE(135), 1,
      aux_sym_cfws_repeat2,
    STATE(240), 1,
      sym_line_break,
    STATE(55), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [3267] = 4,
    ACTIONS(197), 1,
      anon_sym_DOT,
    STATE(96), 1,
      aux_sym_dotatom_text_repeat1,
    ACTIONS(450), 2,
      sym__line_break,
      sym_wsp,
    ACTIONS(187), 5,
      anon_sym_COMMA,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_SEMI,
  [3285] = 4,
    ACTIONS(72), 1,
      sym__line_break,
    ACTIONS(452), 1,
      sym_wsp,
    STATE(93), 1,
      aux_sym_fws_repeat1,
    ACTIONS(67), 6,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      sym_atom,
      anon_sym_DQUOTE,
  [3303] = 9,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(455), 1,
      sym_wsp,
    ACTIONS(457), 1,
      aux_sym__bodycontent_token1,
    STATE(36), 1,
      sym__fieldbody,
    STATE(51), 1,
      sym_headerentry,
    STATE(129), 1,
      aux_sym__fieldbody_repeat1,
    STATE(146), 1,
      aux_sym_fws_repeat1,
    STATE(257), 1,
      sym_line_break,
    STATE(267), 1,
      sym_fws,
  [3331] = 4,
    ACTIONS(76), 1,
      sym_wsp,
    ACTIONS(459), 1,
      sym__line_break,
    STATE(4), 1,
      aux_sym_fws_repeat1,
    ACTIONS(103), 6,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_SEMI,
  [3349] = 4,
    ACTIONS(197), 1,
      anon_sym_DOT,
    STATE(99), 1,
      aux_sym_dotatom_text_repeat1,
    ACTIONS(463), 2,
      sym__line_break,
      sym_wsp,
    ACTIONS(461), 5,
      anon_sym_COMMA,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_SEMI,
  [3367] = 4,
    ACTIONS(439), 1,
      sym_wsp,
    ACTIONS(465), 1,
      sym__line_break,
    STATE(93), 1,
      aux_sym_fws_repeat1,
    ACTIONS(99), 6,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      sym_atom,
      anon_sym_DQUOTE,
  [3385] = 4,
    ACTIONS(76), 1,
      sym_wsp,
    ACTIONS(465), 1,
      sym__line_break,
    STATE(4), 1,
      aux_sym_fws_repeat1,
    ACTIONS(99), 6,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_SEMI,
  [3403] = 4,
    ACTIONS(471), 1,
      anon_sym_DOT,
    STATE(99), 1,
      aux_sym_dotatom_text_repeat1,
    ACTIONS(469), 2,
      sym__line_break,
      sym_wsp,
    ACTIONS(467), 5,
      anon_sym_COMMA,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_SEMI,
  [3421] = 8,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(132), 1,
      sym_wsp,
    STATE(5), 1,
      aux_sym_fws_repeat1,
    STATE(53), 1,
      sym_day,
    STATE(172), 1,
      sym_datefield,
    STATE(224), 1,
      sym_line_break,
    STATE(239), 1,
      sym_fws,
    ACTIONS(130), 2,
      aux_sym_day_token1,
      aux_sym_day_token2,
  [3447] = 4,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    STATE(114), 1,
      sym_comment,
    ACTIONS(476), 2,
      sym__line_break,
      sym_wsp,
    ACTIONS(474), 5,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_SEMI,
  [3465] = 9,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(455), 1,
      sym_wsp,
    ACTIONS(457), 1,
      aux_sym__bodycontent_token1,
    STATE(39), 1,
      sym__fieldbody,
    STATE(43), 1,
      sym__subjectfield,
    STATE(129), 1,
      aux_sym__fieldbody_repeat1,
    STATE(146), 1,
      aux_sym_fws_repeat1,
    STATE(257), 1,
      sym_line_break,
    STATE(267), 1,
      sym_fws,
  [3493] = 4,
    ACTIONS(439), 1,
      sym_wsp,
    ACTIONS(459), 1,
      sym__line_break,
    STATE(93), 1,
      aux_sym_fws_repeat1,
    ACTIONS(103), 6,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      sym_atom,
      anon_sym_DQUOTE,
  [3511] = 2,
    ACTIONS(480), 2,
      sym__line_break,
      sym_wsp,
    ACTIONS(478), 6,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_SEMI,
  [3524] = 8,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(482), 1,
      sym_wsp,
    ACTIONS(484), 1,
      anon_sym_DQUOTE,
    ACTIONS(486), 1,
      aux_sym_quoted_string_token1,
    STATE(108), 1,
      aux_sym_quoted_string_repeat1,
    STATE(140), 1,
      aux_sym_fws_repeat1,
    STATE(210), 1,
      sym_fws,
    STATE(218), 1,
      sym_line_break,
  [3549] = 2,
    ACTIONS(490), 1,
      sym__line_break,
    ACTIONS(488), 7,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_LPAREN,
      sym_wsp,
      sym_atom,
      anon_sym_DQUOTE,
  [3562] = 8,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(482), 1,
      sym_wsp,
    ACTIONS(492), 1,
      anon_sym_DQUOTE,
    ACTIONS(494), 1,
      aux_sym_quoted_string_token1,
    STATE(118), 1,
      aux_sym_quoted_string_repeat1,
    STATE(140), 1,
      aux_sym_fws_repeat1,
    STATE(218), 1,
      sym_line_break,
    STATE(235), 1,
      sym_fws,
  [3587] = 8,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(482), 1,
      sym_wsp,
    ACTIONS(496), 1,
      anon_sym_DQUOTE,
    ACTIONS(498), 1,
      aux_sym_quoted_string_token1,
    STATE(113), 1,
      aux_sym_quoted_string_repeat1,
    STATE(140), 1,
      aux_sym_fws_repeat1,
    STATE(218), 1,
      sym_line_break,
    STATE(225), 1,
      sym_fws,
  [3612] = 2,
    ACTIONS(502), 2,
      sym__line_break,
      sym_wsp,
    ACTIONS(500), 6,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_SEMI,
  [3625] = 2,
    ACTIONS(469), 2,
      sym__line_break,
      sym_wsp,
    ACTIONS(467), 6,
      anon_sym_COMMA,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      anon_sym_DOT,
  [3638] = 3,
    ACTIONS(506), 1,
      anon_sym_AT,
    ACTIONS(508), 1,
      sym__line_break,
    ACTIONS(504), 6,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym_wsp,
      sym_atom,
      anon_sym_DQUOTE,
  [3653] = 2,
    ACTIONS(512), 1,
      sym__line_break,
    ACTIONS(510), 7,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_LPAREN,
      sym_wsp,
      sym_atom,
      anon_sym_DQUOTE,
  [3666] = 8,
    ACTIONS(514), 1,
      sym_wsp,
    ACTIONS(517), 1,
      anon_sym_DQUOTE,
    ACTIONS(519), 1,
      aux_sym_quoted_string_token1,
    ACTIONS(522), 1,
      sym__line_break,
    STATE(113), 1,
      aux_sym_quoted_string_repeat1,
    STATE(140), 1,
      aux_sym_fws_repeat1,
    STATE(218), 1,
      sym_line_break,
    STATE(301), 1,
      sym_fws,
  [3691] = 2,
    ACTIONS(525), 2,
      sym__line_break,
      sym_wsp,
    ACTIONS(324), 6,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_SEMI,
  [3704] = 4,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    ACTIONS(476), 1,
      sym__line_break,
    STATE(130), 1,
      sym_comment,
    ACTIONS(474), 5,
      anon_sym_COLON,
      anon_sym_LT,
      sym_wsp,
      sym_atom,
      anon_sym_DQUOTE,
  [3721] = 6,
    ACTIONS(317), 1,
      sym__line_break,
    ACTIONS(447), 1,
      sym_wsp,
    STATE(83), 1,
      aux_sym_fws_repeat1,
    STATE(240), 1,
      sym_line_break,
    ACTIONS(286), 2,
      anon_sym_LT,
      anon_sym_LPAREN,
    STATE(65), 2,
      sym_fws,
      aux_sym_cfws_repeat2,
  [3742] = 2,
    ACTIONS(529), 1,
      sym__line_break,
    ACTIONS(527), 7,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_LPAREN,
      sym_wsp,
      sym_atom,
      anon_sym_DQUOTE,
  [3755] = 8,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(482), 1,
      sym_wsp,
    ACTIONS(498), 1,
      aux_sym_quoted_string_token1,
    ACTIONS(531), 1,
      anon_sym_DQUOTE,
    STATE(113), 1,
      aux_sym_quoted_string_repeat1,
    STATE(140), 1,
      aux_sym_fws_repeat1,
    STATE(218), 1,
      sym_line_break,
    STATE(232), 1,
      sym_fws,
  [3780] = 6,
    ACTIONS(398), 1,
      sym__line_break,
    ACTIONS(533), 1,
      sym_wsp,
    STATE(83), 1,
      aux_sym_fws_repeat1,
    STATE(240), 1,
      sym_line_break,
    ACTIONS(393), 2,
      anon_sym_LT,
      anon_sym_LPAREN,
    STATE(65), 2,
      sym_fws,
      aux_sym_cfws_repeat2,
  [3801] = 2,
    ACTIONS(508), 1,
      sym__line_break,
    ACTIONS(504), 6,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym_wsp,
      sym_atom,
      anon_sym_DQUOTE,
  [3813] = 2,
    ACTIONS(536), 1,
      sym__line_break,
    ACTIONS(296), 6,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym_wsp,
      sym_atom,
      anon_sym_DQUOTE,
  [3825] = 2,
    ACTIONS(480), 1,
      sym__line_break,
    ACTIONS(478), 6,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym_wsp,
      sym_atom,
      anon_sym_DQUOTE,
  [3837] = 6,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(84), 1,
      sym_wsp,
    ACTIONS(393), 1,
      sym_atom,
    STATE(88), 1,
      aux_sym_fws_repeat1,
    STATE(229), 1,
      sym_line_break,
    STATE(69), 2,
      sym_fws,
      aux_sym_cfws_repeat2,
  [3857] = 2,
    ACTIONS(540), 1,
      sym__line_break,
    ACTIONS(538), 6,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym_wsp,
      sym_atom,
      anon_sym_DQUOTE,
  [3869] = 7,
    ACTIONS(542), 1,
      sym_wsp,
    ACTIONS(545), 1,
      aux_sym__bodycontent_token1,
    ACTIONS(548), 1,
      sym__line_break,
    STATE(125), 1,
      aux_sym__fieldbody_repeat1,
    STATE(146), 1,
      aux_sym_fws_repeat1,
    STATE(257), 1,
      sym_line_break,
    STATE(267), 1,
      sym_fws,
  [3891] = 6,
    ACTIONS(259), 1,
      sym_wsp,
    ACTIONS(286), 1,
      anon_sym_COMMA,
    ACTIONS(317), 1,
      sym__line_break,
    STATE(83), 1,
      aux_sym_fws_repeat1,
    STATE(240), 1,
      sym_line_break,
    STATE(65), 2,
      sym_fws,
      aux_sym_cfws_repeat2,
  [3911] = 2,
    ACTIONS(554), 1,
      sym__line_break,
    ACTIONS(551), 6,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym_wsp,
      sym_atom,
      anon_sym_DQUOTE,
  [3923] = 6,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(84), 1,
      sym_wsp,
    ACTIONS(286), 1,
      sym_atom,
    STATE(88), 1,
      aux_sym_fws_repeat1,
    STATE(229), 1,
      sym_line_break,
    STATE(69), 2,
      sym_fws,
      aux_sym_cfws_repeat2,
  [3943] = 7,
    ACTIONS(455), 1,
      sym_wsp,
    ACTIONS(557), 1,
      aux_sym__bodycontent_token1,
    ACTIONS(559), 1,
      sym__line_break,
    STATE(125), 1,
      aux_sym__fieldbody_repeat1,
    STATE(146), 1,
      aux_sym_fws_repeat1,
    STATE(257), 1,
      sym_line_break,
    STATE(267), 1,
      sym_fws,
  [3965] = 2,
    ACTIONS(525), 1,
      sym__line_break,
    ACTIONS(324), 6,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym_wsp,
      sym_atom,
      anon_sym_DQUOTE,
  [3977] = 7,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(132), 1,
      sym_wsp,
    ACTIONS(561), 1,
      aux_sym_day_token1,
    STATE(5), 1,
      aux_sym_fws_repeat1,
    STATE(134), 1,
      aux_sym_year_repeat1,
    STATE(224), 1,
      sym_line_break,
    STATE(316), 1,
      sym_fws,
  [3999] = 2,
    ACTIONS(508), 1,
      sym__line_break,
    ACTIONS(504), 6,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym_wsp,
      sym_atom,
      anon_sym_DQUOTE,
  [4011] = 2,
    ACTIONS(502), 1,
      sym__line_break,
    ACTIONS(500), 6,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym_wsp,
      sym_atom,
      anon_sym_DQUOTE,
  [4023] = 7,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(132), 1,
      sym_wsp,
    ACTIONS(563), 1,
      aux_sym_day_token1,
    STATE(5), 1,
      aux_sym_fws_repeat1,
    STATE(169), 1,
      aux_sym_year_repeat1,
    STATE(224), 1,
      sym_line_break,
    STATE(314), 1,
      sym_fws,
  [4045] = 6,
    ACTIONS(259), 1,
      sym_wsp,
    ACTIONS(393), 1,
      anon_sym_COMMA,
    ACTIONS(398), 1,
      sym__line_break,
    STATE(83), 1,
      aux_sym_fws_repeat1,
    STATE(240), 1,
      sym_line_break,
    STATE(65), 2,
      sym_fws,
      aux_sym_cfws_repeat2,
  [4065] = 3,
    ACTIONS(567), 1,
      sym_atom,
    ACTIONS(569), 1,
      sym__line_break,
    ACTIONS(565), 4,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym_wsp,
  [4078] = 6,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(571), 1,
      sym_wsp,
    STATE(147), 1,
      aux_sym_fws_repeat1,
    STATE(215), 1,
      sym_line_break,
    STATE(265), 1,
      sym_year,
    STATE(298), 1,
      sym_fws,
  [4097] = 6,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(132), 1,
      sym_wsp,
    STATE(5), 1,
      aux_sym_fws_repeat1,
    STATE(182), 1,
      sym_zone,
    STATE(224), 1,
      sym_line_break,
    STATE(244), 1,
      sym_fws,
  [4116] = 2,
    ACTIONS(576), 1,
      sym__line_break,
    ACTIONS(573), 5,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym_wsp,
      sym_atom,
      anon_sym_DQUOTE,
  [4127] = 5,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(579), 1,
      sym_wsp,
    STATE(150), 1,
      aux_sym_fws_repeat1,
    STATE(216), 1,
      sym_line_break,
    ACTIONS(74), 2,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_token1,
  [4144] = 5,
    ACTIONS(581), 1,
      aux_sym_ccontent_token1,
    ACTIONS(585), 1,
      anon_sym_LPAREN,
    ACTIONS(587), 1,
      anon_sym_RPAREN,
    STATE(237), 1,
      sym_comment,
    ACTIONS(583), 2,
      aux_sym_ccontent_token2,
      aux_sym_ccontent_token3,
  [4161] = 3,
    ACTIONS(567), 1,
      sym_atom,
    ACTIONS(589), 1,
      sym__line_break,
    ACTIONS(155), 4,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym_wsp,
  [4174] = 4,
    ACTIONS(591), 1,
      ts_builtin_sym_end,
    ACTIONS(593), 1,
      aux_sym_line_token1,
    ACTIONS(595), 1,
      sym_footersep,
    STATE(152), 2,
      sym_line,
      aux_sym_block_repeat1,
  [4188] = 4,
    ACTIONS(474), 1,
      anon_sym_LT,
    ACTIONS(597), 1,
      anon_sym_LPAREN,
    STATE(114), 1,
      sym_comment,
    ACTIONS(476), 2,
      sym__line_break,
      sym_wsp,
  [4202] = 5,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(132), 1,
      sym_wsp,
    STATE(5), 1,
      aux_sym_fws_repeat1,
    STATE(60), 1,
      sym_fws,
    STATE(224), 1,
      sym_line_break,
  [4218] = 5,
    ACTIONS(74), 1,
      aux_sym__bodycontent_token1,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(600), 1,
      sym_wsp,
    STATE(166), 1,
      aux_sym_fws_repeat1,
    STATE(261), 1,
      sym_line_break,
  [4234] = 5,
    ACTIONS(74), 1,
      aux_sym_year_token1,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(602), 1,
      sym_wsp,
    STATE(156), 1,
      aux_sym_fws_repeat1,
    STATE(212), 1,
      sym_line_break,
  [4250] = 5,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(132), 1,
      sym_wsp,
    STATE(5), 1,
      aux_sym_fws_repeat1,
    STATE(62), 1,
      sym_fws,
    STATE(224), 1,
      sym_line_break,
  [4266] = 4,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    ACTIONS(476), 1,
      sym__line_break,
    STATE(130), 1,
      sym_comment,
    ACTIONS(474), 2,
      sym_wsp,
      sym_atom,
  [4280] = 4,
    ACTIONS(72), 1,
      sym__line_break,
    ACTIONS(604), 1,
      sym_wsp,
    STATE(150), 1,
      aux_sym_fws_repeat1,
    ACTIONS(67), 2,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_token1,
  [4294] = 4,
    ACTIONS(607), 1,
      aux_sym_line_token1,
    STATE(185), 1,
      sym_block,
    STATE(266), 1,
      sym_emailbody,
    STATE(143), 2,
      sym_line,
      aux_sym_block_repeat1,
  [4308] = 4,
    ACTIONS(609), 1,
      ts_builtin_sym_end,
    ACTIONS(611), 1,
      aux_sym_line_token1,
    ACTIONS(614), 1,
      sym_footersep,
    STATE(152), 2,
      sym_line,
      aux_sym_block_repeat1,
  [4322] = 5,
    ACTIONS(616), 1,
      ts_builtin_sym_end,
    ACTIONS(618), 1,
      aux_sym_domainliteral_token1,
    STATE(161), 1,
      sym_footerline,
    STATE(162), 1,
      aux_sym_footertext_repeat1,
    STATE(290), 1,
      sym_footertext,
  [4338] = 3,
    ACTIONS(620), 1,
      anon_sym_DOT,
    STATE(154), 1,
      aux_sym_dotatom_text_repeat1,
    ACTIONS(469), 2,
      anon_sym_AT,
      anon_sym_GT,
  [4349] = 4,
    ACTIONS(623), 1,
      ts_builtin_sym_end,
    ACTIONS(625), 1,
      aux_sym_domainliteral_token1,
    STATE(155), 1,
      aux_sym_footertext_repeat1,
    STATE(161), 1,
      sym_footerline,
  [4362] = 4,
    ACTIONS(67), 1,
      aux_sym_year_token1,
    ACTIONS(72), 1,
      sym__line_break,
    ACTIONS(628), 1,
      sym_wsp,
    STATE(156), 1,
      aux_sym_fws_repeat1,
  [4375] = 3,
    ACTIONS(631), 1,
      sym_wsp,
    STATE(157), 1,
      aux_sym_fws_repeat1,
    ACTIONS(67), 2,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_token1,
  [4386] = 2,
    ACTIONS(634), 1,
      sym__line_break,
    ACTIONS(517), 3,
      sym_wsp,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_token1,
  [4395] = 3,
    ACTIONS(636), 1,
      sym_wsp,
    STATE(157), 1,
      aux_sym_fws_repeat1,
    ACTIONS(99), 2,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_token1,
  [4406] = 3,
    ACTIONS(636), 1,
      sym_wsp,
    STATE(157), 1,
      aux_sym_fws_repeat1,
    ACTIONS(103), 2,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_token1,
  [4417] = 3,
    ACTIONS(640), 1,
      sym__eof,
    STATE(255), 1,
      sym__eol,
    ACTIONS(638), 2,
      anon_sym_LF,
      anon_sym_CR,
  [4428] = 4,
    ACTIONS(618), 1,
      aux_sym_domainliteral_token1,
    ACTIONS(642), 1,
      ts_builtin_sym_end,
    STATE(155), 1,
      aux_sym_footertext_repeat1,
    STATE(161), 1,
      sym_footerline,
  [4441] = 1,
    ACTIONS(644), 4,
      anon_sym_COMMA,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_SEMI,
  [4448] = 3,
    ACTIONS(646), 1,
      anon_sym_DOT,
    STATE(154), 1,
      aux_sym_dotatom_text_repeat1,
    ACTIONS(463), 2,
      anon_sym_AT,
      anon_sym_GT,
  [4459] = 4,
    ACTIONS(648), 1,
      aux_sym_day_token2,
    STATE(84), 1,
      sym_time,
    STATE(138), 1,
      sym_time_of_day,
    STATE(263), 1,
      sym_hour,
  [4472] = 4,
    ACTIONS(67), 1,
      aux_sym__bodycontent_token1,
    ACTIONS(72), 1,
      sym__line_break,
    ACTIONS(650), 1,
      sym_wsp,
    STATE(166), 1,
      aux_sym_fws_repeat1,
  [4485] = 3,
    ACTIONS(646), 1,
      anon_sym_DOT,
    STATE(164), 1,
      aux_sym_dotatom_text_repeat1,
    ACTIONS(450), 2,
      anon_sym_AT,
      anon_sym_GT,
  [4496] = 2,
    ACTIONS(653), 2,
      anon_sym_LT,
      anon_sym_LPAREN,
    ACTIONS(655), 2,
      sym__line_break,
      sym_wsp,
  [4505] = 3,
    ACTIONS(657), 1,
      aux_sym_day_token1,
    STATE(169), 1,
      aux_sym_year_repeat1,
    ACTIONS(660), 2,
      sym__line_break,
      sym_wsp,
  [4516] = 2,
    ACTIONS(382), 2,
      anon_sym_LT,
      anon_sym_LPAREN,
    ACTIONS(662), 2,
      sym__line_break,
      sym_wsp,
  [4525] = 1,
    ACTIONS(664), 4,
      anon_sym_COMMA,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_SEMI,
  [4532] = 4,
    ACTIONS(648), 1,
      aux_sym_day_token2,
    STATE(89), 1,
      sym_time,
    STATE(138), 1,
      sym_time_of_day,
    STATE(263), 1,
      sym_hour,
  [4545] = 3,
    ACTIONS(103), 1,
      aux_sym_year_token1,
    ACTIONS(666), 1,
      sym_wsp,
    STATE(174), 1,
      aux_sym_fws_repeat1,
  [4555] = 3,
    ACTIONS(67), 1,
      aux_sym_year_token1,
    ACTIONS(668), 1,
      sym_wsp,
    STATE(174), 1,
      aux_sym_fws_repeat1,
  [4565] = 3,
    ACTIONS(671), 1,
      aux_sym_ccontent_token1,
    ACTIONS(674), 1,
      anon_sym_RPAREN,
    STATE(175), 1,
      aux_sym_comment_repeat1,
  [4575] = 3,
    ACTIONS(676), 1,
      aux_sym_ccontent_token1,
    ACTIONS(678), 1,
      anon_sym_RPAREN,
    STATE(175), 1,
      aux_sym_comment_repeat1,
  [4585] = 3,
    ACTIONS(676), 1,
      aux_sym_ccontent_token1,
    ACTIONS(680), 1,
      anon_sym_RPAREN,
    STATE(176), 1,
      aux_sym_comment_repeat1,
  [4595] = 3,
    ACTIONS(682), 1,
      anon_sym_COMMA,
    ACTIONS(684), 1,
      anon_sym_SEMI,
    STATE(201), 1,
      aux_sym_mailbox_list_repeat1,
  [4605] = 3,
    ACTIONS(676), 1,
      aux_sym_ccontent_token1,
    ACTIONS(686), 1,
      anon_sym_RPAREN,
    STATE(175), 1,
      aux_sym_comment_repeat1,
  [4615] = 3,
    ACTIONS(676), 1,
      aux_sym_ccontent_token1,
    ACTIONS(688), 1,
      anon_sym_RPAREN,
    STATE(179), 1,
      aux_sym_comment_repeat1,
  [4625] = 2,
    ACTIONS(692), 1,
      sym__eof,
    ACTIONS(690), 2,
      anon_sym_LF,
      anon_sym_CR,
  [4633] = 2,
    ACTIONS(694), 1,
      anon_sym_LPAREN,
    ACTIONS(696), 2,
      sym__line_break,
      sym_wsp,
  [4641] = 3,
    ACTIONS(99), 1,
      aux_sym_year_token1,
    ACTIONS(666), 1,
      sym_wsp,
    STATE(174), 1,
      aux_sym_fws_repeat1,
  [4651] = 2,
    ACTIONS(698), 1,
      ts_builtin_sym_end,
    ACTIONS(700), 2,
      aux_sym_line_token1,
      sym_footersep,
  [4659] = 3,
    ACTIONS(702), 1,
      ts_builtin_sym_end,
    ACTIONS(704), 1,
      sym_footersep,
    STATE(309), 1,
      sym_footer,
  [4669] = 3,
    ACTIONS(676), 1,
      aux_sym_ccontent_token1,
    ACTIONS(706), 1,
      anon_sym_RPAREN,
    STATE(196), 1,
      aux_sym_comment_repeat1,
  [4679] = 3,
    ACTIONS(708), 1,
      anon_sym_COMMA,
    ACTIONS(710), 1,
      sym__line_break,
    STATE(202), 1,
      aux_sym_addresslist_repeat1,
  [4689] = 1,
    ACTIONS(712), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_SEMI,
  [4695] = 1,
    ACTIONS(714), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_SEMI,
  [4701] = 3,
    ACTIONS(67), 1,
      aux_sym__bodycontent_token1,
    ACTIONS(716), 1,
      sym_wsp,
    STATE(190), 1,
      aux_sym_fws_repeat1,
  [4711] = 2,
    ACTIONS(719), 1,
      anon_sym_COLON,
    ACTIONS(721), 2,
      sym__line_break,
      sym_wsp,
  [4719] = 1,
    ACTIONS(469), 3,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_DOT,
  [4725] = 3,
    ACTIONS(103), 1,
      aux_sym__bodycontent_token1,
    ACTIONS(723), 1,
      sym_wsp,
    STATE(190), 1,
      aux_sym_fws_repeat1,
  [4735] = 2,
    ACTIONS(727), 1,
      sym__line_break,
    ACTIONS(725), 2,
      sym_wsp,
      aux_sym__bodycontent_token1,
  [4743] = 3,
    ACTIONS(729), 1,
      anon_sym_COMMA,
    ACTIONS(732), 1,
      sym__line_break,
    STATE(195), 1,
      aux_sym_addresslist_repeat1,
  [4753] = 3,
    ACTIONS(676), 1,
      aux_sym_ccontent_token1,
    ACTIONS(734), 1,
      anon_sym_RPAREN,
    STATE(175), 1,
      aux_sym_comment_repeat1,
  [4763] = 3,
    ACTIONS(99), 1,
      aux_sym__bodycontent_token1,
    ACTIONS(723), 1,
      sym_wsp,
    STATE(190), 1,
      aux_sym_fws_repeat1,
  [4773] = 2,
    ACTIONS(736), 1,
      anon_sym_LPAREN,
    ACTIONS(738), 2,
      sym__line_break,
      sym_wsp,
  [4781] = 3,
    ACTIONS(740), 1,
      anon_sym_COMMA,
    ACTIONS(743), 1,
      anon_sym_SEMI,
    STATE(199), 1,
      aux_sym_mailbox_list_repeat1,
  [4791] = 2,
    ACTIONS(745), 1,
      anon_sym_COLON,
    ACTIONS(747), 2,
      sym__line_break,
      sym_wsp,
  [4799] = 3,
    ACTIONS(682), 1,
      anon_sym_COMMA,
    ACTIONS(749), 1,
      anon_sym_SEMI,
    STATE(199), 1,
      aux_sym_mailbox_list_repeat1,
  [4809] = 3,
    ACTIONS(708), 1,
      anon_sym_COMMA,
    ACTIONS(751), 1,
      sym__line_break,
    STATE(195), 1,
      aux_sym_addresslist_repeat1,
  [4819] = 2,
    ACTIONS(753), 1,
      sym_atom,
    STATE(311), 1,
      sym_dotatom_text,
  [4826] = 2,
    ACTIONS(753), 1,
      sym_atom,
    STATE(328), 1,
      sym_dotatom_text,
  [4833] = 2,
    ACTIONS(753), 1,
      sym_atom,
    STATE(327), 1,
      sym_dotatom_text,
  [4840] = 2,
    ACTIONS(753), 1,
      sym_atom,
    STATE(308), 1,
      sym_dotatom_text,
  [4847] = 1,
    ACTIONS(755), 2,
      sym__line_break,
      anon_sym_COMMA,
  [4852] = 2,
    ACTIONS(753), 1,
      sym_atom,
    STATE(307), 1,
      sym_dotatom_text,
  [4859] = 1,
    ACTIONS(403), 2,
      sym__line_break,
      anon_sym_COMMA,
  [4864] = 2,
    ACTIONS(496), 1,
      anon_sym_DQUOTE,
    ACTIONS(757), 1,
      aux_sym_quoted_string_token1,
  [4871] = 1,
    ACTIONS(759), 2,
      sym__line_break,
      anon_sym_COMMA,
  [4876] = 2,
    ACTIONS(761), 1,
      sym_wsp,
    STATE(183), 1,
      aux_sym_fws_repeat1,
  [4883] = 1,
    ACTIONS(743), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [4888] = 1,
    ACTIONS(377), 2,
      sym__line_break,
      anon_sym_COMMA,
  [4893] = 2,
    ACTIONS(763), 1,
      sym_wsp,
    STATE(173), 1,
      aux_sym_fws_repeat1,
  [4900] = 2,
    ACTIONS(765), 1,
      sym_wsp,
    STATE(159), 1,
      aux_sym_fws_repeat1,
  [4907] = 2,
    ACTIONS(767), 1,
      aux_sym_day_token2,
    STATE(223), 1,
      sym_second,
  [4914] = 2,
    ACTIONS(769), 1,
      sym_wsp,
    STATE(160), 1,
      aux_sym_fws_repeat1,
  [4921] = 2,
    ACTIONS(771), 1,
      sym_wsp,
    STATE(11), 1,
      aux_sym_fws_repeat1,
  [4928] = 2,
    ACTIONS(773), 1,
      sym_atom,
    STATE(40), 1,
      sym_dotatom_text,
  [4935] = 1,
    ACTIONS(775), 2,
      sym__line_break,
      anon_sym_COMMA,
  [4940] = 1,
    ACTIONS(777), 2,
      sym__line_break,
      sym_wsp,
  [4945] = 1,
    ACTIONS(779), 2,
      sym__line_break,
      sym_wsp,
  [4950] = 2,
    ACTIONS(781), 1,
      sym_wsp,
    STATE(12), 1,
      aux_sym_fws_repeat1,
  [4957] = 2,
    ACTIONS(757), 1,
      aux_sym_quoted_string_token1,
    ACTIONS(783), 1,
      anon_sym_DQUOTE,
  [4964] = 1,
    ACTIONS(712), 2,
      sym__line_break,
      anon_sym_COMMA,
  [4969] = 2,
    ACTIONS(753), 1,
      sym_atom,
    STATE(297), 1,
      sym_dotatom_text,
  [4976] = 2,
    ACTIONS(785), 1,
      sym_wsp,
    STATE(97), 1,
      aux_sym_fws_repeat1,
  [4983] = 2,
    ACTIONS(787), 1,
      sym_wsp,
    STATE(103), 1,
      aux_sym_fws_repeat1,
  [4990] = 1,
    ACTIONS(714), 2,
      sym__line_break,
      anon_sym_COMMA,
  [4995] = 1,
    ACTIONS(789), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5000] = 2,
    ACTIONS(757), 1,
      aux_sym_quoted_string_token1,
    ACTIONS(791), 1,
      anon_sym_DQUOTE,
  [5007] = 2,
    ACTIONS(793), 1,
      anon_sym_LPAREN,
    STATE(130), 1,
      sym_comment,
  [5014] = 2,
    ACTIONS(478), 1,
      anon_sym_RPAREN,
    ACTIONS(480), 1,
      aux_sym_ccontent_token1,
  [5021] = 2,
    ACTIONS(531), 1,
      anon_sym_DQUOTE,
    ACTIONS(757), 1,
      aux_sym_quoted_string_token1,
  [5028] = 2,
    ACTIONS(773), 1,
      sym_atom,
    STATE(74), 1,
      sym_dotatom_text,
  [5035] = 2,
    ACTIONS(674), 1,
      anon_sym_RPAREN,
    ACTIONS(795), 1,
      aux_sym_ccontent_token1,
  [5042] = 2,
    ACTIONS(797), 1,
      sym_wsp,
    STATE(98), 1,
      aux_sym_fws_repeat1,
  [5049] = 2,
    ACTIONS(432), 1,
      aux_sym_day_token1,
    ACTIONS(434), 1,
      aux_sym_day_token2,
  [5056] = 2,
    ACTIONS(799), 1,
      sym_wsp,
    STATE(95), 1,
      aux_sym_fws_repeat1,
  [5063] = 1,
    ACTIONS(732), 2,
      sym__line_break,
      anon_sym_COMMA,
  [5068] = 1,
    ACTIONS(801), 2,
      sym__line_break,
      sym_wsp,
  [5073] = 1,
    ACTIONS(755), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5078] = 1,
    ACTIONS(803), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5083] = 1,
    ACTIONS(664), 2,
      sym__line_break,
      anon_sym_COMMA,
  [5088] = 1,
    ACTIONS(805), 2,
      sym__line_break,
      anon_sym_COMMA,
  [5093] = 2,
    ACTIONS(753), 1,
      sym_atom,
    STATE(277), 1,
      sym_dotatom_text,
  [5100] = 2,
    ACTIONS(807), 1,
      ts_builtin_sym_end,
    ACTIONS(809), 1,
      sym__line_break,
  [5107] = 1,
    ACTIONS(644), 2,
      sym__line_break,
      anon_sym_COMMA,
  [5112] = 1,
    ACTIONS(789), 2,
      sym__line_break,
      anon_sym_COMMA,
  [5117] = 1,
    ACTIONS(805), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5122] = 1,
    ACTIONS(410), 2,
      sym__line_break,
      anon_sym_COMMA,
  [5127] = 2,
    ACTIONS(753), 1,
      sym_atom,
    STATE(324), 1,
      sym_dotatom_text,
  [5134] = 2,
    ACTIONS(500), 1,
      anon_sym_RPAREN,
    ACTIONS(502), 1,
      aux_sym_ccontent_token1,
  [5141] = 1,
    ACTIONS(623), 2,
      ts_builtin_sym_end,
      aux_sym_domainliteral_token1,
  [5146] = 1,
    ACTIONS(410), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5151] = 2,
    ACTIONS(811), 1,
      sym_wsp,
    STATE(193), 1,
      aux_sym_fws_repeat1,
  [5158] = 1,
    ACTIONS(813), 2,
      sym__line_break,
      anon_sym_COMMA,
  [5163] = 2,
    ACTIONS(815), 1,
      anon_sym_LPAREN,
    STATE(114), 1,
      sym_comment,
  [5170] = 1,
    ACTIONS(759), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5175] = 2,
    ACTIONS(817), 1,
      sym_wsp,
    STATE(197), 1,
      aux_sym_fws_repeat1,
  [5182] = 2,
    ACTIONS(819), 1,
      aux_sym_day_token2,
    STATE(191), 1,
      sym_minute,
  [5189] = 1,
    ACTIONS(821), 1,
      anon_sym_COLON,
  [5193] = 1,
    ACTIONS(823), 1,
      anon_sym_COMMA,
  [5197] = 1,
    ACTIONS(825), 1,
      aux_sym_day_token2,
  [5201] = 1,
    ACTIONS(827), 1,
      ts_builtin_sym_end,
  [5205] = 1,
    ACTIONS(829), 1,
      aux_sym__bodycontent_token1,
  [5209] = 1,
    ACTIONS(831), 1,
      anon_sym_COLON,
  [5213] = 1,
    ACTIONS(833), 1,
      anon_sym_LT,
  [5217] = 1,
    ACTIONS(835), 1,
      sym_wsp,
  [5221] = 1,
    ACTIONS(529), 1,
      anon_sym_AT,
  [5225] = 1,
    ACTIONS(837), 1,
      anon_sym_COLON,
  [5229] = 1,
    ACTIONS(839), 1,
      anon_sym_COLON,
  [5233] = 1,
    ACTIONS(841), 1,
      anon_sym_COLON,
  [5237] = 1,
    ACTIONS(843), 1,
      anon_sym_COLON,
  [5241] = 1,
    ACTIONS(845), 1,
      anon_sym_COLON,
  [5245] = 1,
    ACTIONS(847), 1,
      anon_sym_GT,
  [5249] = 1,
    ACTIONS(849), 1,
      anon_sym_COLON,
  [5253] = 1,
    ACTIONS(851), 1,
      anon_sym_COLON,
  [5257] = 1,
    ACTIONS(853), 1,
      anon_sym_COLON,
  [5261] = 1,
    ACTIONS(855), 1,
      ts_builtin_sym_end,
  [5265] = 1,
    ACTIONS(857), 1,
      anon_sym_COLON,
  [5269] = 1,
    ACTIONS(859), 1,
      anon_sym_AT,
  [5273] = 1,
    ACTIONS(861), 1,
      anon_sym_COLON,
  [5277] = 1,
    ACTIONS(863), 1,
      anon_sym_COLON,
  [5281] = 1,
    ACTIONS(865), 1,
      anon_sym_GT,
  [5285] = 1,
    ACTIONS(867), 1,
      anon_sym_AT,
  [5289] = 1,
    ACTIONS(869), 1,
      anon_sym_COLON,
  [5293] = 1,
    ACTIONS(871), 1,
      sym__line_break,
  [5297] = 1,
    ACTIONS(873), 1,
      ts_builtin_sym_end,
  [5301] = 1,
    ACTIONS(875), 1,
      sym__line_break,
  [5305] = 1,
    ACTIONS(877), 1,
      anon_sym_COMMA,
  [5309] = 1,
    ACTIONS(490), 1,
      anon_sym_AT,
  [5313] = 1,
    ACTIONS(879), 1,
      sym__line_break,
  [5317] = 1,
    ACTIONS(881), 1,
      anon_sym_COLON,
  [5321] = 1,
    ACTIONS(883), 1,
      anon_sym_COMMA,
  [5325] = 1,
    ACTIONS(885), 1,
      anon_sym_AT,
  [5329] = 1,
    ACTIONS(887), 1,
      aux_sym_year_token1,
  [5333] = 1,
    ACTIONS(889), 1,
      anon_sym_GT,
  [5337] = 1,
    ACTIONS(891), 1,
      sym_atom,
  [5341] = 1,
    ACTIONS(757), 1,
      aux_sym_quoted_string_token1,
  [5345] = 1,
    ACTIONS(893), 1,
      anon_sym_COLON,
  [5349] = 1,
    ACTIONS(895), 1,
      anon_sym_COLON,
  [5353] = 1,
    ACTIONS(897), 1,
      aux_sym_year_token1,
  [5357] = 1,
    ACTIONS(899), 1,
      anon_sym_COMMA,
  [5361] = 1,
    ACTIONS(901), 1,
      anon_sym_GT,
  [5365] = 1,
    ACTIONS(903), 1,
      anon_sym_GT,
  [5369] = 1,
    ACTIONS(905), 1,
      anon_sym_GT,
  [5373] = 1,
    ACTIONS(907), 1,
      ts_builtin_sym_end,
  [5377] = 1,
    ACTIONS(909), 1,
      anon_sym_SEMI,
  [5381] = 1,
    ACTIONS(911), 1,
      anon_sym_AT,
  [5385] = 1,
    ACTIONS(913), 1,
      anon_sym_SEMI,
  [5389] = 1,
    ACTIONS(915), 1,
      anon_sym_SEMI,
  [5393] = 1,
    ACTIONS(917), 1,
      aux_sym_day_token2,
  [5397] = 1,
    ACTIONS(919), 1,
      anon_sym_GT,
  [5401] = 1,
    ACTIONS(921), 1,
      aux_sym_day_token2,
  [5405] = 1,
    ACTIONS(923), 1,
      anon_sym_LT,
  [5409] = 1,
    ACTIONS(925), 1,
      sym__line_break,
  [5413] = 1,
    ACTIONS(927), 1,
      anon_sym_COLON,
  [5417] = 1,
    ACTIONS(929), 1,
      anon_sym_AT,
  [5421] = 1,
    ACTIONS(931), 1,
      anon_sym_COLON,
  [5425] = 1,
    ACTIONS(933), 1,
      anon_sym_LT,
  [5429] = 1,
    ACTIONS(935), 1,
      sym_atom,
  [5433] = 1,
    ACTIONS(937), 1,
      anon_sym_GT,
  [5437] = 1,
    ACTIONS(939), 1,
      anon_sym_COLON,
  [5441] = 1,
    ACTIONS(941), 1,
      anon_sym_COLON,
  [5445] = 1,
    ACTIONS(943), 1,
      anon_sym_AT,
  [5449] = 1,
    ACTIONS(945), 1,
      anon_sym_AT,
  [5453] = 1,
    ACTIONS(947), 1,
      sym_atom,
  [5457] = 1,
    ACTIONS(512), 1,
      anon_sym_AT,
  [5461] = 1,
    ACTIONS(949), 1,
      anon_sym_LT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 77,
  [SMALL_STATE(4)] = 154,
  [SMALL_STATE(5)] = 195,
  [SMALL_STATE(6)] = 234,
  [SMALL_STATE(7)] = 308,
  [SMALL_STATE(8)] = 384,
  [SMALL_STATE(9)] = 460,
  [SMALL_STATE(10)] = 531,
  [SMALL_STATE(11)] = 564,
  [SMALL_STATE(12)] = 597,
  [SMALL_STATE(13)] = 630,
  [SMALL_STATE(14)] = 697,
  [SMALL_STATE(15)] = 766,
  [SMALL_STATE(16)] = 835,
  [SMALL_STATE(17)] = 901,
  [SMALL_STATE(18)] = 967,
  [SMALL_STATE(19)] = 1014,
  [SMALL_STATE(20)] = 1063,
  [SMALL_STATE(21)] = 1114,
  [SMALL_STATE(22)] = 1163,
  [SMALL_STATE(23)] = 1214,
  [SMALL_STATE(24)] = 1263,
  [SMALL_STATE(25)] = 1311,
  [SMALL_STATE(26)] = 1359,
  [SMALL_STATE(27)] = 1403,
  [SMALL_STATE(28)] = 1447,
  [SMALL_STATE(29)] = 1495,
  [SMALL_STATE(30)] = 1543,
  [SMALL_STATE(31)] = 1565,
  [SMALL_STATE(32)] = 1587,
  [SMALL_STATE(33)] = 1606,
  [SMALL_STATE(34)] = 1625,
  [SMALL_STATE(35)] = 1666,
  [SMALL_STATE(36)] = 1707,
  [SMALL_STATE(37)] = 1726,
  [SMALL_STATE(38)] = 1745,
  [SMALL_STATE(39)] = 1764,
  [SMALL_STATE(40)] = 1783,
  [SMALL_STATE(41)] = 1818,
  [SMALL_STATE(42)] = 1857,
  [SMALL_STATE(43)] = 1892,
  [SMALL_STATE(44)] = 1911,
  [SMALL_STATE(45)] = 1930,
  [SMALL_STATE(46)] = 1949,
  [SMALL_STATE(47)] = 1984,
  [SMALL_STATE(48)] = 2017,
  [SMALL_STATE(49)] = 2036,
  [SMALL_STATE(50)] = 2055,
  [SMALL_STATE(51)] = 2090,
  [SMALL_STATE(52)] = 2109,
  [SMALL_STATE(53)] = 2141,
  [SMALL_STATE(54)] = 2159,
  [SMALL_STATE(55)] = 2197,
  [SMALL_STATE(56)] = 2227,
  [SMALL_STATE(57)] = 2263,
  [SMALL_STATE(58)] = 2299,
  [SMALL_STATE(59)] = 2337,
  [SMALL_STATE(60)] = 2375,
  [SMALL_STATE(61)] = 2390,
  [SMALL_STATE(62)] = 2419,
  [SMALL_STATE(63)] = 2434,
  [SMALL_STATE(64)] = 2469,
  [SMALL_STATE(65)] = 2502,
  [SMALL_STATE(66)] = 2527,
  [SMALL_STATE(67)] = 2560,
  [SMALL_STATE(68)] = 2595,
  [SMALL_STATE(69)] = 2627,
  [SMALL_STATE(70)] = 2651,
  [SMALL_STATE(71)] = 2683,
  [SMALL_STATE(72)] = 2707,
  [SMALL_STATE(73)] = 2731,
  [SMALL_STATE(74)] = 2763,
  [SMALL_STATE(75)] = 2795,
  [SMALL_STATE(76)] = 2819,
  [SMALL_STATE(77)] = 2851,
  [SMALL_STATE(78)] = 2883,
  [SMALL_STATE(79)] = 2915,
  [SMALL_STATE(80)] = 2939,
  [SMALL_STATE(81)] = 2971,
  [SMALL_STATE(82)] = 3003,
  [SMALL_STATE(83)] = 3022,
  [SMALL_STATE(84)] = 3043,
  [SMALL_STATE(85)] = 3072,
  [SMALL_STATE(86)] = 3101,
  [SMALL_STATE(87)] = 3130,
  [SMALL_STATE(88)] = 3159,
  [SMALL_STATE(89)] = 3180,
  [SMALL_STATE(90)] = 3209,
  [SMALL_STATE(91)] = 3238,
  [SMALL_STATE(92)] = 3267,
  [SMALL_STATE(93)] = 3285,
  [SMALL_STATE(94)] = 3303,
  [SMALL_STATE(95)] = 3331,
  [SMALL_STATE(96)] = 3349,
  [SMALL_STATE(97)] = 3367,
  [SMALL_STATE(98)] = 3385,
  [SMALL_STATE(99)] = 3403,
  [SMALL_STATE(100)] = 3421,
  [SMALL_STATE(101)] = 3447,
  [SMALL_STATE(102)] = 3465,
  [SMALL_STATE(103)] = 3493,
  [SMALL_STATE(104)] = 3511,
  [SMALL_STATE(105)] = 3524,
  [SMALL_STATE(106)] = 3549,
  [SMALL_STATE(107)] = 3562,
  [SMALL_STATE(108)] = 3587,
  [SMALL_STATE(109)] = 3612,
  [SMALL_STATE(110)] = 3625,
  [SMALL_STATE(111)] = 3638,
  [SMALL_STATE(112)] = 3653,
  [SMALL_STATE(113)] = 3666,
  [SMALL_STATE(114)] = 3691,
  [SMALL_STATE(115)] = 3704,
  [SMALL_STATE(116)] = 3721,
  [SMALL_STATE(117)] = 3742,
  [SMALL_STATE(118)] = 3755,
  [SMALL_STATE(119)] = 3780,
  [SMALL_STATE(120)] = 3801,
  [SMALL_STATE(121)] = 3813,
  [SMALL_STATE(122)] = 3825,
  [SMALL_STATE(123)] = 3837,
  [SMALL_STATE(124)] = 3857,
  [SMALL_STATE(125)] = 3869,
  [SMALL_STATE(126)] = 3891,
  [SMALL_STATE(127)] = 3911,
  [SMALL_STATE(128)] = 3923,
  [SMALL_STATE(129)] = 3943,
  [SMALL_STATE(130)] = 3965,
  [SMALL_STATE(131)] = 3977,
  [SMALL_STATE(132)] = 3999,
  [SMALL_STATE(133)] = 4011,
  [SMALL_STATE(134)] = 4023,
  [SMALL_STATE(135)] = 4045,
  [SMALL_STATE(136)] = 4065,
  [SMALL_STATE(137)] = 4078,
  [SMALL_STATE(138)] = 4097,
  [SMALL_STATE(139)] = 4116,
  [SMALL_STATE(140)] = 4127,
  [SMALL_STATE(141)] = 4144,
  [SMALL_STATE(142)] = 4161,
  [SMALL_STATE(143)] = 4174,
  [SMALL_STATE(144)] = 4188,
  [SMALL_STATE(145)] = 4202,
  [SMALL_STATE(146)] = 4218,
  [SMALL_STATE(147)] = 4234,
  [SMALL_STATE(148)] = 4250,
  [SMALL_STATE(149)] = 4266,
  [SMALL_STATE(150)] = 4280,
  [SMALL_STATE(151)] = 4294,
  [SMALL_STATE(152)] = 4308,
  [SMALL_STATE(153)] = 4322,
  [SMALL_STATE(154)] = 4338,
  [SMALL_STATE(155)] = 4349,
  [SMALL_STATE(156)] = 4362,
  [SMALL_STATE(157)] = 4375,
  [SMALL_STATE(158)] = 4386,
  [SMALL_STATE(159)] = 4395,
  [SMALL_STATE(160)] = 4406,
  [SMALL_STATE(161)] = 4417,
  [SMALL_STATE(162)] = 4428,
  [SMALL_STATE(163)] = 4441,
  [SMALL_STATE(164)] = 4448,
  [SMALL_STATE(165)] = 4459,
  [SMALL_STATE(166)] = 4472,
  [SMALL_STATE(167)] = 4485,
  [SMALL_STATE(168)] = 4496,
  [SMALL_STATE(169)] = 4505,
  [SMALL_STATE(170)] = 4516,
  [SMALL_STATE(171)] = 4525,
  [SMALL_STATE(172)] = 4532,
  [SMALL_STATE(173)] = 4545,
  [SMALL_STATE(174)] = 4555,
  [SMALL_STATE(175)] = 4565,
  [SMALL_STATE(176)] = 4575,
  [SMALL_STATE(177)] = 4585,
  [SMALL_STATE(178)] = 4595,
  [SMALL_STATE(179)] = 4605,
  [SMALL_STATE(180)] = 4615,
  [SMALL_STATE(181)] = 4625,
  [SMALL_STATE(182)] = 4633,
  [SMALL_STATE(183)] = 4641,
  [SMALL_STATE(184)] = 4651,
  [SMALL_STATE(185)] = 4659,
  [SMALL_STATE(186)] = 4669,
  [SMALL_STATE(187)] = 4679,
  [SMALL_STATE(188)] = 4689,
  [SMALL_STATE(189)] = 4695,
  [SMALL_STATE(190)] = 4701,
  [SMALL_STATE(191)] = 4711,
  [SMALL_STATE(192)] = 4719,
  [SMALL_STATE(193)] = 4725,
  [SMALL_STATE(194)] = 4735,
  [SMALL_STATE(195)] = 4743,
  [SMALL_STATE(196)] = 4753,
  [SMALL_STATE(197)] = 4763,
  [SMALL_STATE(198)] = 4773,
  [SMALL_STATE(199)] = 4781,
  [SMALL_STATE(200)] = 4791,
  [SMALL_STATE(201)] = 4799,
  [SMALL_STATE(202)] = 4809,
  [SMALL_STATE(203)] = 4819,
  [SMALL_STATE(204)] = 4826,
  [SMALL_STATE(205)] = 4833,
  [SMALL_STATE(206)] = 4840,
  [SMALL_STATE(207)] = 4847,
  [SMALL_STATE(208)] = 4852,
  [SMALL_STATE(209)] = 4859,
  [SMALL_STATE(210)] = 4864,
  [SMALL_STATE(211)] = 4871,
  [SMALL_STATE(212)] = 4876,
  [SMALL_STATE(213)] = 4883,
  [SMALL_STATE(214)] = 4888,
  [SMALL_STATE(215)] = 4893,
  [SMALL_STATE(216)] = 4900,
  [SMALL_STATE(217)] = 4907,
  [SMALL_STATE(218)] = 4914,
  [SMALL_STATE(219)] = 4921,
  [SMALL_STATE(220)] = 4928,
  [SMALL_STATE(221)] = 4935,
  [SMALL_STATE(222)] = 4940,
  [SMALL_STATE(223)] = 4945,
  [SMALL_STATE(224)] = 4950,
  [SMALL_STATE(225)] = 4957,
  [SMALL_STATE(226)] = 4964,
  [SMALL_STATE(227)] = 4969,
  [SMALL_STATE(228)] = 4976,
  [SMALL_STATE(229)] = 4983,
  [SMALL_STATE(230)] = 4990,
  [SMALL_STATE(231)] = 4995,
  [SMALL_STATE(232)] = 5000,
  [SMALL_STATE(233)] = 5007,
  [SMALL_STATE(234)] = 5014,
  [SMALL_STATE(235)] = 5021,
  [SMALL_STATE(236)] = 5028,
  [SMALL_STATE(237)] = 5035,
  [SMALL_STATE(238)] = 5042,
  [SMALL_STATE(239)] = 5049,
  [SMALL_STATE(240)] = 5056,
  [SMALL_STATE(241)] = 5063,
  [SMALL_STATE(242)] = 5068,
  [SMALL_STATE(243)] = 5073,
  [SMALL_STATE(244)] = 5078,
  [SMALL_STATE(245)] = 5083,
  [SMALL_STATE(246)] = 5088,
  [SMALL_STATE(247)] = 5093,
  [SMALL_STATE(248)] = 5100,
  [SMALL_STATE(249)] = 5107,
  [SMALL_STATE(250)] = 5112,
  [SMALL_STATE(251)] = 5117,
  [SMALL_STATE(252)] = 5122,
  [SMALL_STATE(253)] = 5127,
  [SMALL_STATE(254)] = 5134,
  [SMALL_STATE(255)] = 5141,
  [SMALL_STATE(256)] = 5146,
  [SMALL_STATE(257)] = 5151,
  [SMALL_STATE(258)] = 5158,
  [SMALL_STATE(259)] = 5163,
  [SMALL_STATE(260)] = 5170,
  [SMALL_STATE(261)] = 5175,
  [SMALL_STATE(262)] = 5182,
  [SMALL_STATE(263)] = 5189,
  [SMALL_STATE(264)] = 5193,
  [SMALL_STATE(265)] = 5197,
  [SMALL_STATE(266)] = 5201,
  [SMALL_STATE(267)] = 5205,
  [SMALL_STATE(268)] = 5209,
  [SMALL_STATE(269)] = 5213,
  [SMALL_STATE(270)] = 5217,
  [SMALL_STATE(271)] = 5221,
  [SMALL_STATE(272)] = 5225,
  [SMALL_STATE(273)] = 5229,
  [SMALL_STATE(274)] = 5233,
  [SMALL_STATE(275)] = 5237,
  [SMALL_STATE(276)] = 5241,
  [SMALL_STATE(277)] = 5245,
  [SMALL_STATE(278)] = 5249,
  [SMALL_STATE(279)] = 5253,
  [SMALL_STATE(280)] = 5257,
  [SMALL_STATE(281)] = 5261,
  [SMALL_STATE(282)] = 5265,
  [SMALL_STATE(283)] = 5269,
  [SMALL_STATE(284)] = 5273,
  [SMALL_STATE(285)] = 5277,
  [SMALL_STATE(286)] = 5281,
  [SMALL_STATE(287)] = 5285,
  [SMALL_STATE(288)] = 5289,
  [SMALL_STATE(289)] = 5293,
  [SMALL_STATE(290)] = 5297,
  [SMALL_STATE(291)] = 5301,
  [SMALL_STATE(292)] = 5305,
  [SMALL_STATE(293)] = 5309,
  [SMALL_STATE(294)] = 5313,
  [SMALL_STATE(295)] = 5317,
  [SMALL_STATE(296)] = 5321,
  [SMALL_STATE(297)] = 5325,
  [SMALL_STATE(298)] = 5329,
  [SMALL_STATE(299)] = 5333,
  [SMALL_STATE(300)] = 5337,
  [SMALL_STATE(301)] = 5341,
  [SMALL_STATE(302)] = 5345,
  [SMALL_STATE(303)] = 5349,
  [SMALL_STATE(304)] = 5353,
  [SMALL_STATE(305)] = 5357,
  [SMALL_STATE(306)] = 5361,
  [SMALL_STATE(307)] = 5365,
  [SMALL_STATE(308)] = 5369,
  [SMALL_STATE(309)] = 5373,
  [SMALL_STATE(310)] = 5377,
  [SMALL_STATE(311)] = 5381,
  [SMALL_STATE(312)] = 5385,
  [SMALL_STATE(313)] = 5389,
  [SMALL_STATE(314)] = 5393,
  [SMALL_STATE(315)] = 5397,
  [SMALL_STATE(316)] = 5401,
  [SMALL_STATE(317)] = 5405,
  [SMALL_STATE(318)] = 5409,
  [SMALL_STATE(319)] = 5413,
  [SMALL_STATE(320)] = 5417,
  [SMALL_STATE(321)] = 5421,
  [SMALL_STATE(322)] = 5425,
  [SMALL_STATE(323)] = 5429,
  [SMALL_STATE(324)] = 5433,
  [SMALL_STATE(325)] = 5437,
  [SMALL_STATE(326)] = 5441,
  [SMALL_STATE(327)] = 5445,
  [SMALL_STATE(328)] = 5449,
  [SMALL_STATE(329)] = 5453,
  [SMALL_STATE(330)] = 5457,
  [SMALL_STATE(331)] = 5461,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(268),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(326),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(325),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(321),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(319),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(303),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(302),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(295),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(288),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(285),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(284),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(282),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headers, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_fws_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fws_repeat1, 2), SHIFT_REPEAT(4),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fws_repeat1, 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fws, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fws_repeat1, 2), SHIFT_REPEAT(10),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fws, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fws, 2),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cfws_repeat2, 1), SHIFT(28),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cfws_repeat2, 1), SHIFT(180),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cfws_repeat2, 1), SHIFT(88),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cfws_repeat2, 1), SHIFT(26),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cfws_repeat2, 1), SHIFT(105),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cfws_repeat2, 1), SHIFT(270),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cfws_repeat2, 1), SHIFT(24),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_phrase_repeat1, 2),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_phrase_repeat1, 2), SHIFT_REPEAT(180),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_phrase_repeat1, 2), SHIFT_REPEAT(88),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_phrase_repeat1, 2), SHIFT_REPEAT(42),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_phrase_repeat1, 2), SHIFT_REPEAT(105),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_phrase_repeat1, 2), SHIFT_REPEAT(270),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_phrase, 2),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_phrase, 2), SHIFT(180),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_phrase, 2), SHIFT(88),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_phrase, 2), SHIFT(270),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_phrase, 1),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_phrase, 1), SHIFT(180),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_phrase, 1), SHIFT(88),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_phrase, 1), SHIFT(270),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom2, 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotatom_text, 1),
  [189] = {.entry = {.count = 3, .reusable = false}}, REDUCE(sym_atom2, 1), REDUCE(sym_dotatom_text, 1), SHIFT(180),
  [193] = {.entry = {.count = 3, .reusable = false}}, REDUCE(sym_atom2, 1), REDUCE(sym_dotatom_text, 1), SHIFT(88),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [199] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym_atom2, 1), REDUCE(sym_dotatom_text, 1), SHIFT(270),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_atom2, 1), REDUCE(sym_atom2, 2),
  [206] = {.entry = {.count = 4, .reusable = false}}, REDUCE(sym_atom2, 1), REDUCE(sym_dotatom_text, 1), REDUCE(sym_atom2, 2), SHIFT(180),
  [211] = {.entry = {.count = 4, .reusable = false}}, REDUCE(sym_atom2, 1), REDUCE(sym_dotatom_text, 1), REDUCE(sym_atom2, 2), SHIFT(88),
  [216] = {.entry = {.count = 4, .reusable = true}}, REDUCE(sym_atom2, 1), REDUCE(sym_dotatom_text, 1), REDUCE(sym_atom2, 2), SHIFT(270),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fieldbody, 2),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fieldbody, 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_break, 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_field, 2),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_references_field, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addresslist, 3),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addresslist, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_midheader, 3),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_midheader, 3),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headerentry, 1),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headerentry, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dateheader, 3),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dateheader, 3),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addresslist, 2),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addresslist, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__subjectfield, 1, .production_id = 1),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__subjectfield, 1, .production_id = 1),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotatom, 2),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_atom2, 1), SHIFT(180),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_atom2, 1), SHIFT(88),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_atom2, 1), SHIFT(270),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subjectheader, 3),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subjectheader, 3),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref, 3),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ref, 3),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_idfield, 2),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_idfield, 2),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotatom, 1),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cfws, 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datefield, 2),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__datefield, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addressheader, 3),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addressheader, 3),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom2, 2),
  [298] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_atom2, 2), SHIFT(180),
  [301] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_atom2, 2), SHIFT(88),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_atom2, 2), SHIFT(270),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3),
  [311] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_cfws, 1), SHIFT(180),
  [314] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_cfws, 1), SHIFT(88),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_cfws, 1), SHIFT(270),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cfws_repeat1, 2),
  [326] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cfws_repeat1, 2), SHIFT_REPEAT(186),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cfws_repeat1, 2), SHIFT_REPEAT(5),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cfws_repeat1, 2), SHIFT_REPEAT(270),
  [335] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_references_field_repeat1, 2), SHIFT_REPEAT(203),
  [338] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_references_field_repeat1, 2), SHIFT_REPEAT(186),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_references_field_repeat1, 2), SHIFT_REPEAT(83),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_references_field_repeat1, 2), SHIFT_REPEAT(270),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_day, 2),
  [355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cfws_repeat1, 2), SHIFT_REPEAT(180),
  [358] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cfws_repeat1, 2), SHIFT_REPEAT(5),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_day, 3),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_angle_addr, 4),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cfws_repeat2, 2),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cfws_repeat2, 2), SHIFT_REPEAT(83),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cfws_repeat2, 2), SHIFT_REPEAT(270),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_angle_addr, 3),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mailgroup, 4),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailgroup, 4),
  [379] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cfws_repeat2, 2), SHIFT_REPEAT(88),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msg_id, 6),
  [384] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_msg_id, 6), SHIFT(186),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_msg_id, 6), SHIFT(83),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_msg_id, 6), SHIFT(270),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cfws, 2),
  [395] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_cfws, 2), SHIFT(88),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_cfws, 2), SHIFT(270),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mailgroup, 5),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailgroup, 5),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_dotatom, 2), SHIFT(270),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_angle_addr, 3),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_angle_addr, 4),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mailgroup, 3),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailgroup, 3),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msg_id, 5),
  [418] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_msg_id, 5), SHIFT(186),
  [421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_msg_id, 5), SHIFT(83),
  [424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_msg_id, 5), SHIFT(270),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_dotatom, 1), SHIFT(270),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [436] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_date_time, 2), SHIFT(270),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_date_time, 4), SHIFT(270),
  [444] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_cfws, 1), SHIFT(186),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_cfws, 1), SHIFT(83),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotatom_text, 1),
  [452] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fws_repeat1, 2), SHIFT_REPEAT(93),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fws, 2),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotatom_text, 2),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotatom_text, 2),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fws, 3),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dotatom_text_repeat1, 2),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dotatom_text_repeat1, 2),
  [471] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dotatom_text_repeat1, 2), SHIFT_REPEAT(323),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cfws_repeat2, 1),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cfws_repeat2, 1),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 2),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 1),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local, 1),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 3),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3),
  [514] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(140),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2),
  [519] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(113),
  [522] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(270),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cfws_repeat1, 2),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 4),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 4),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_cfws, 2), SHIFT(83),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom2, 2),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom2, 3),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom2, 3),
  [542] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__fieldbody_repeat1, 2), SHIFT_REPEAT(146),
  [545] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__fieldbody_repeat1, 2), SHIFT_REPEAT(125),
  [548] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__fieldbody_repeat1, 2), SHIFT_REPEAT(270),
  [551] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_atom2, 2), REDUCE(sym_atom2, 3),
  [554] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_atom2, 2), REDUCE(sym_atom2, 3),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_phrase, 3),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_phrase, 3),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [573] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cfws_repeat1, 1), REDUCE(aux_sym_cfws_repeat1, 2),
  [576] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cfws_repeat1, 1), REDUCE(aux_sym_cfws_repeat1, 2),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 1),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 1),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_phrase, 2),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1),
  [597] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cfws_repeat2, 1), SHIFT(186),
  [600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [604] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fws_repeat1, 2), SHIFT_REPEAT(150),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [611] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(184),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 1),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [620] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotatom_text_repeat1, 2), SHIFT_REPEAT(300),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_footertext_repeat1, 2),
  [625] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_footertext_repeat1, 2), SHIFT_REPEAT(181),
  [628] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fws_repeat1, 2), SHIFT_REPEAT(156),
  [631] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fws_repeat1, 2), SHIFT_REPEAT(157),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quoted_string_repeat1, 2),
  [636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [638] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footertext, 1),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotatom, 3),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [650] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fws_repeat1, 2), SHIFT_REPEAT(166),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msg_id, 7),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msg_id, 7),
  [657] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_year_repeat1, 2), SHIFT_REPEAT(169),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_year_repeat1, 2),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msg_id, 6),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotatom, 2),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [668] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fws_repeat1, 2), SHIFT_REPEAT(174),
  [671] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(141),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailbox_list, 1),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footerline, 1),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footerline, 1),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 2),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 2),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_emailbody, 1),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain, 1),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addrspec, 3),
  [716] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fws_repeat1, 2), SHIFT_REPEAT(190),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time_of_day, 3),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__fieldbody_repeat1, 2),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__fieldbody_repeat1, 2),
  [729] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_addresslist_repeat1, 2), SHIFT_REPEAT(9),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_addresslist_repeat1, 2),
  [734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [736] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_zone, 3),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_zone, 3),
  [740] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mailbox_list_repeat1, 2), SHIFT_REPEAT(13),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mailbox_list_repeat1, 2),
  [745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_minute, 1),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_minute, 1),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailbox_list, 2),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailbox, 2),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_angle_addr, 5),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailgroup, 6),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_second, 1),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time_of_day, 5),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailbox, 1),
  [791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_month, 1),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailbox, 3),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 1),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_internetaddress, 1),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_day_of_week, 1),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datefield, 3),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 3),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_to, 1),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_break, 1),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_midkind, 1),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addrkind, 1),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hour, 1),
  [855] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 1),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local, 1),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references, 1),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 2),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date_time, 3),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_day_name, 1),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_reply_to, 1),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_id, 1),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replyto, 1),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_day_of_week, 2),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_emailbody, 2),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_list, 1),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_year, 4),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_year, 3),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date_time, 5),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sender, 1),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bcc, 1),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cc, 1),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 1),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_mail_external_scanner_create(void);
void tree_sitter_mail_external_scanner_destroy(void *);
bool tree_sitter_mail_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_mail_external_scanner_serialize(void *, char *);
void tree_sitter_mail_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_mail(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_mail_external_scanner_create,
      tree_sitter_mail_external_scanner_destroy,
      tree_sitter_mail_external_scanner_scan,
      tree_sitter_mail_external_scanner_serialize,
      tree_sitter_mail_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
