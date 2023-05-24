#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 339
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 150
#define ALIAS_COUNT 1
#define TOKEN_COUNT 66
#define EXTERNAL_TOKEN_COUNT 3
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
  anon_sym_Jan = 25,
  anon_sym_Feb = 26,
  anon_sym_Mar = 27,
  anon_sym_Apr = 28,
  anon_sym_May = 29,
  anon_sym_Jun = 30,
  anon_sym_Jul = 31,
  anon_sym_Aug = 32,
  anon_sym_Sep = 33,
  anon_sym_Oct = 34,
  anon_sym_Nov = 35,
  anon_sym_Dec = 36,
  aux_sym_year_token1 = 37,
  aux_sym_year_token2 = 38,
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
  sym__bodycontent = 49,
  anon_sym_SEMI = 50,
  aux_sym_domainliteral_token1 = 51,
  sym_atom = 52,
  anon_sym_DOT = 53,
  anon_sym_LBRACK = 54,
  anon_sym_RBRACK = 55,
  anon_sym_DQUOTE = 56,
  aux_sym_quoted_string_token1 = 57,
  anon_sym_LF = 58,
  aux_sym_line_token1 = 59,
  anon_sym_CR = 60,
  sym__quote = 61,
  sym_footersep = 62,
  sym__line_break = 63,
  sym_wsp = 64,
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
  sym_lspw = 90,
  sym_date_time = 91,
  sym_day_of_week = 92,
  sym_day_name = 93,
  sym_datefield = 94,
  sym_day = 95,
  sym_month = 96,
  sym_year = 97,
  sym_time = 98,
  sym_time_of_day = 99,
  sym_hour = 100,
  sym_minute = 101,
  sym_second = 102,
  sym_zone = 103,
  sym_message_idfield = 104,
  sym_references_field = 105,
  sym_msg_id = 106,
  sym_comment = 107,
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
  aux_sym_lspw_repeat1 = 135,
  aux_sym_day_repeat1 = 136,
  aux_sym_year_repeat1 = 137,
  aux_sym_references_field_repeat1 = 138,
  aux_sym_comment_repeat1 = 139,
  aux_sym_fws_repeat1 = 140,
  aux_sym_cfws_repeat1 = 141,
  aux_sym__fieldbody_repeat1 = 142,
  aux_sym_addresslist_repeat1 = 143,
  aux_sym_mailbox_list_repeat1 = 144,
  aux_sym_phrase_repeat1 = 145,
  aux_sym_dotatom_text_repeat1 = 146,
  aux_sym_quoted_string_repeat1 = 147,
  aux_sym_block_repeat1 = 148,
  aux_sym_footertext_repeat1 = 149,
  alias_sym_subjectfield = 150,
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
  [aux_sym_year_token2] = "year_token2",
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
  [sym__bodycontent] = "_bodycontent",
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
  [sym_wsp] = "wsp",
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
  [sym_lspw] = "lspw",
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
  [aux_sym_lspw_repeat1] = "lspw_repeat1",
  [aux_sym_day_repeat1] = "day_repeat1",
  [aux_sym_year_repeat1] = "year_repeat1",
  [aux_sym_references_field_repeat1] = "references_field_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
  [aux_sym_fws_repeat1] = "fws_repeat1",
  [aux_sym_cfws_repeat1] = "cfws_repeat1",
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
  [aux_sym_year_token2] = aux_sym_year_token2,
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
  [sym__bodycontent] = sym__bodycontent,
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
  [sym_wsp] = sym_wsp,
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
  [sym_lspw] = sym_lspw,
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
  [aux_sym_lspw_repeat1] = aux_sym_lspw_repeat1,
  [aux_sym_day_repeat1] = aux_sym_day_repeat1,
  [aux_sym_year_repeat1] = aux_sym_year_repeat1,
  [aux_sym_references_field_repeat1] = aux_sym_references_field_repeat1,
  [aux_sym_comment_repeat1] = aux_sym_comment_repeat1,
  [aux_sym_fws_repeat1] = aux_sym_fws_repeat1,
  [aux_sym_cfws_repeat1] = aux_sym_cfws_repeat1,
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
  [aux_sym_year_token2] = {
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
  [sym__bodycontent] = {
    .visible = false,
    .named = true,
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
  [sym_wsp] = {
    .visible = true,
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
  [sym_lspw] = {
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
  [aux_sym_lspw_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_day_repeat1] = {
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
  [5] = 4,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
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
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 38,
  [41] = 41,
  [42] = 42,
  [43] = 42,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 52,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 48,
  [61] = 61,
  [62] = 62,
  [63] = 4,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 4,
  [69] = 69,
  [70] = 70,
  [71] = 64,
  [72] = 72,
  [73] = 73,
  [74] = 54,
  [75] = 75,
  [76] = 76,
  [77] = 57,
  [78] = 78,
  [79] = 56,
  [80] = 80,
  [81] = 70,
  [82] = 82,
  [83] = 73,
  [84] = 84,
  [85] = 10,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 87,
  [96] = 13,
  [97] = 97,
  [98] = 97,
  [99] = 99,
  [100] = 100,
  [101] = 48,
  [102] = 73,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 93,
  [107] = 57,
  [108] = 48,
  [109] = 89,
  [110] = 48,
  [111] = 69,
  [112] = 72,
  [113] = 113,
  [114] = 75,
  [115] = 115,
  [116] = 82,
  [117] = 97,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 65,
  [122] = 122,
  [123] = 90,
  [124] = 89,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 94,
  [132] = 132,
  [133] = 133,
  [134] = 91,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 73,
  [139] = 4,
  [140] = 73,
  [141] = 90,
  [142] = 94,
  [143] = 143,
  [144] = 100,
  [145] = 91,
  [146] = 73,
  [147] = 147,
  [148] = 148,
  [149] = 6,
  [150] = 150,
  [151] = 13,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 75,
  [157] = 155,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 82,
  [162] = 162,
  [163] = 65,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 6,
  [168] = 4,
  [169] = 4,
  [170] = 170,
  [171] = 10,
  [172] = 172,
  [173] = 173,
  [174] = 162,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 13,
  [180] = 10,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 177,
  [188] = 188,
  [189] = 189,
  [190] = 166,
  [191] = 191,
  [192] = 4,
  [193] = 100,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 188,
  [199] = 165,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 189,
  [204] = 204,
  [205] = 197,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 189,
  [211] = 176,
  [212] = 212,
  [213] = 197,
  [214] = 214,
  [215] = 189,
  [216] = 206,
  [217] = 217,
  [218] = 197,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 226,
  [234] = 229,
  [235] = 235,
  [236] = 236,
  [237] = 231,
  [238] = 235,
  [239] = 220,
  [240] = 231,
  [241] = 226,
  [242] = 225,
  [243] = 243,
  [244] = 228,
  [245] = 245,
  [246] = 229,
  [247] = 186,
  [248] = 248,
  [249] = 249,
  [250] = 229,
  [251] = 231,
  [252] = 248,
  [253] = 249,
  [254] = 224,
  [255] = 90,
  [256] = 227,
  [257] = 257,
  [258] = 196,
  [259] = 259,
  [260] = 260,
  [261] = 214,
  [262] = 94,
  [263] = 194,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 92,
  [270] = 270,
  [271] = 271,
  [272] = 160,
  [273] = 273,
  [274] = 153,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 103,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 266,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 290,
  [305] = 295,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 104,
  [311] = 311,
  [312] = 299,
  [313] = 302,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 295,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 318,
  [329] = 329,
  [330] = 298,
  [331] = 331,
  [332] = 332,
  [333] = 314,
  [334] = 286,
  [335] = 309,
  [336] = 336,
  [337] = 337,
  [338] = 311,
};

static inline bool sym_atom_character_set_1(int32_t c) {
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
      if (eof) ADVANCE(123);
      if (lookahead == '"') ADVANCE(238);
      if (lookahead == '(') ADVANCE(226);
      if (lookahead == ')') ADVANCE(227);
      if (lookahead == '+') ADVANCE(216);
      if (lookahead == ',') ADVANCE(193);
      if (lookahead == '-') ADVANCE(218);
      if (lookahead == '.') ADVANCE(235);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == ';') ADVANCE(230);
      if (lookahead == '<') ADVANCE(219);
      if (lookahead == '>') ADVANCE(249);
      if (lookahead == '@') ADVANCE(220);
      if (lookahead == 'A') ADVANCE(42);
      if (lookahead == 'D') ADVANCE(30);
      if (lookahead == 'F') ADVANCE(17);
      if (lookahead == 'J') ADVANCE(18);
      if (lookahead == 'M') ADVANCE(20);
      if (lookahead == 'N') ADVANCE(41);
      if (lookahead == 'O') ADVANCE(23);
      if (lookahead == 'S') ADVANCE(16);
      if (lookahead == 'T') ADVANCE(33);
      if (lookahead == 'W') ADVANCE(27);
      if (lookahead == '[') ADVANCE(236);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == ']') ADVANCE(237);
      if (lookahead == 'd') ADVANCE(52);
      if (lookahead == 'f') ADVANCE(97);
      if (lookahead == 'm') ADVANCE(64);
      if (lookahead == 's') ADVANCE(69);
      if (lookahead == 't') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(0)
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(58);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(56);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(86);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(65);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(250);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '"') ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(239);
      if (lookahead != 0) ADVANCE(240);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(228);
      if (lookahead != 0) ADVANCE(229);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '(') ADVANCE(226);
      if (lookahead == ')') ADVANCE(227);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(222);
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(241);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(1);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(238);
      if (lookahead == '(') ADVANCE(226);
      if (lookahead == ')') ADVANCE(227);
      if (lookahead == '+') ADVANCE(216);
      if (lookahead == ',') ADVANCE(193);
      if (lookahead == '-') ADVANCE(218);
      if (lookahead == '.') ADVANCE(235);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == ';') ADVANCE(230);
      if (lookahead == '<') ADVANCE(219);
      if (lookahead == '>') ADVANCE(249);
      if (lookahead == '@') ADVANCE(220);
      if (lookahead == 'A') ADVANCE(42);
      if (lookahead == 'D') ADVANCE(30);
      if (lookahead == 'F') ADVANCE(17);
      if (lookahead == 'J') ADVANCE(18);
      if (lookahead == 'M') ADVANCE(20);
      if (lookahead == 'N') ADVANCE(41);
      if (lookahead == 'O') ADVANCE(23);
      if (lookahead == 'S') ADVANCE(16);
      if (lookahead == 'T') ADVANCE(33);
      if (lookahead == 'W') ADVANCE(27);
      if (lookahead == '[') ADVANCE(236);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == ']') ADVANCE(237);
      if (lookahead == 'd') ADVANCE(52);
      if (lookahead == 'f') ADVANCE(97);
      if (lookahead == 'm') ADVANCE(64);
      if (lookahead == 's') ADVANCE(69);
      if (lookahead == 't') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(7)
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(58);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(56);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(86);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(65);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(238);
      if (lookahead == '(') ADVANCE(226);
      if (lookahead == '.') ADVANCE(235);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == ';') ADVANCE(230);
      if (lookahead == '<') ADVANCE(219);
      if (lookahead == '@') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(233);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(234);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(226);
      if (lookahead == '+') ADVANCE(216);
      if (lookahead == ',') ADVANCE(193);
      if (lookahead == '-') ADVANCE(217);
      if (lookahead == '.') ADVANCE(235);
      if (lookahead == ';') ADVANCE(230);
      if (lookahead == '<') ADVANCE(219);
      if (lookahead == '>') ADVANCE(221);
      if (lookahead == '@') ADVANCE(220);
      if (lookahead == 'A') ADVANCE(42);
      if (lookahead == 'D') ADVANCE(29);
      if (lookahead == 'F') ADVANCE(26);
      if (lookahead == 'J') ADVANCE(18);
      if (lookahead == 'M') ADVANCE(19);
      if (lookahead == 'N') ADVANCE(41);
      if (lookahead == 'O') ADVANCE(23);
      if (lookahead == 'S') ADVANCE(21);
      if (lookahead == 'T') ADVANCE(32);
      if (lookahead == 'W') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(225);
      if (lookahead == ')') ADVANCE(224);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(6);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(79);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(99);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(109);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(110);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(87);
      if (lookahead == 'U') ADVANCE(55);
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(44);
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 17:
      if (lookahead == 'R') ADVANCE(93);
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(37);
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == 'o') ADVANCE(38);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 22:
      if (lookahead == 'b') ADVANCE(203);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(213);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(196);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(24);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 31:
      if (lookahead == 'g') ADVANCE(209);
      END_STATE();
    case 32:
      if (lookahead == 'h') ADVANCE(49);
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 33:
      if (lookahead == 'h') ADVANCE(49);
      if (lookahead == 'u') ADVANCE(28);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(198);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(208);
      if (lookahead == 'n') ADVANCE(207);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(202);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(194);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(200);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(200);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(80);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 42:
      if (lookahead == 'p') ADVANCE(45);
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 43:
      if (lookahead == 'p') ADVANCE(210);
      END_STATE();
    case 44:
      if (lookahead == 'p') ADVANCE(210);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(204);
      if (lookahead == 'y') ADVANCE(206);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 49:
      if (lookahead == 'u') ADVANCE(197);
      END_STATE();
    case 50:
      if (lookahead == 'v') ADVANCE(212);
      END_STATE();
    case 51:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(246);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(51)
      if (lookahead != 0) ADVANCE(247);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 54:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 55:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(80);
      END_STATE();
    case 56:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(127);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 57:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(128);
      END_STATE();
    case 58:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 59:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(106);
      END_STATE();
    case 60:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(75);
      END_STATE();
    case 61:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(131);
      END_STATE();
    case 62:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(102);
      END_STATE();
    case 63:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(70);
      END_STATE();
    case 64:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 65:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 66:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 67:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 68:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 69:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(87);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 70:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 71:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 72:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 73:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 74:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 75:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 76:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 77:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(76);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(81);
      END_STATE();
    case 78:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(73);
      END_STATE();
    case 79:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 80:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(71);
      END_STATE();
    case 81:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 82:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 83:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(126);
      END_STATE();
    case 84:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(85);
      END_STATE();
    case 85:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(72);
      END_STATE();
    case 86:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 87:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 88:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 89:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 90:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 91:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 92:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 93:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 94:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 95:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(82);
      END_STATE();
    case 96:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 97:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 98:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 99:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 100:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 101:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(136);
      END_STATE();
    case 102:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(137);
      END_STATE();
    case 103:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(133);
      END_STATE();
    case 104:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(53);
      END_STATE();
    case 105:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(104);
      END_STATE();
    case 106:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(135);
      END_STATE();
    case 107:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(101);
      END_STATE();
    case 108:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(67);
      END_STATE();
    case 109:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(91);
      END_STATE();
    case 110:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(92);
      END_STATE();
    case 111:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(94);
      END_STATE();
    case 112:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(111);
      END_STATE();
    case 113:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(14);
      END_STATE();
    case 114:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(15);
      END_STATE();
    case 115:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      END_STATE();
    case 116:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      END_STATE();
    case 117:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 118:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 119:
      if (eof) ADVANCE(123);
      if (lookahead == '\n') SKIP(119)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(231);
      if (lookahead != 0) ADVANCE(232);
      END_STATE();
    case 120:
      if (eof) ADVANCE(123);
      if (lookahead == '-') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(244);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(120)
      if (lookahead != 0) ADVANCE(247);
      END_STATE();
    case 121:
      if (eof) ADVANCE(123);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(121)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 122:
      if (eof) ADVANCE(123);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(148);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(146);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(142);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(180);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(171);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(154);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(155);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(157);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(122)
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(192);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_to_token1);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_from_token1);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_cc_token1);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_bcc_token1);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_sender_token1);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_replyto_token1);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_message_id_token1);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_in_reply_to_token1);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_references_token1);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_date_token1);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_subject_token1);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_comments_token1);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_keywords_token1);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '-') ADVANCE(166);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(192);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '-') ADVANCE(181);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(192);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '-') ADVANCE(188);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(192);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '-') ADVANCE(189);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(192);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(187);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(192);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(165);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(192);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(191);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(192);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(167);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(192);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(127);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(192);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(128);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(192);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(147);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(192);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(186);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(192);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(161);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(192);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(131);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(192);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(158);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(192);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(134);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(192);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(185);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(192);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(164);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(192);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(178);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(192);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(172);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(145);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(192);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(179);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(192);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(173);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(192);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(138);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(192);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(183);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(192);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(149);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(192);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(182);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(192);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(163);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(168);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(192);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(160);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(192);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(151);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(192);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(162);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(192);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(190);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(192);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(144);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(192);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(126);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(192);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(139);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(192);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(152);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(192);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(150);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(192);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(125);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(192);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(130);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(192);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(132);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(192);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(170);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(192);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(169);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(192);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(129);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(192);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(177);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(192);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(156);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(192);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(159);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(192);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(133);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(192);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(143);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(192);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(184);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(192);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(135);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(192);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(153);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(192);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(175);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(192);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(176);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(192);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(140);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(192);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(141);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(192);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_headertype);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_Mon);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_Tue);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_Wed);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_Thu);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_Fri);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_Sat);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_Sun);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_day_token1);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_Jan);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_Feb);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_Mar);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_Apr);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_May);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_Jun);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_Jul);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_Aug);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_Sep);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_Oct);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_Nov);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_Dec);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_year_token1);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_year_token2);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(6);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_ccontent_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(223);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_ccontent_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_ccontent_token2);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_ccontent_token3);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__bodycontent);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(229);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__bodycontent);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_domainliteral_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(232);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_domainliteral_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(233);
      if (!sym_atom_character_set_1(lookahead)) ADVANCE(234);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_atom);
      if (!sym_atom_character_set_1(lookahead)) ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(240);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(240);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(241);
      if (lookahead == '\r') ADVANCE(248);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == '\n') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(247);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == ' ') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(247);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == '-') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(247);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == '-') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(247);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(247);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(241);
      if (lookahead == '\r') ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__quote);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_footersep);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 122},
  [2] = {.lex_state = 122, .external_lex_state = 2},
  [3] = {.lex_state = 122, .external_lex_state = 2},
  [4] = {.lex_state = 9, .external_lex_state = 3},
  [5] = {.lex_state = 9, .external_lex_state = 4},
  [6] = {.lex_state = 9, .external_lex_state = 4},
  [7] = {.lex_state = 8, .external_lex_state = 4},
  [8] = {.lex_state = 8, .external_lex_state = 4},
  [9] = {.lex_state = 8, .external_lex_state = 4},
  [10] = {.lex_state = 9, .external_lex_state = 3},
  [11] = {.lex_state = 8, .external_lex_state = 4},
  [12] = {.lex_state = 8, .external_lex_state = 4},
  [13] = {.lex_state = 9, .external_lex_state = 3},
  [14] = {.lex_state = 8, .external_lex_state = 4},
  [15] = {.lex_state = 8, .external_lex_state = 3},
  [16] = {.lex_state = 8, .external_lex_state = 3},
  [17] = {.lex_state = 8, .external_lex_state = 3},
  [18] = {.lex_state = 9, .external_lex_state = 4},
  [19] = {.lex_state = 8, .external_lex_state = 3},
  [20] = {.lex_state = 122, .external_lex_state = 4},
  [21] = {.lex_state = 122, .external_lex_state = 4},
  [22] = {.lex_state = 122, .external_lex_state = 4},
  [23] = {.lex_state = 122, .external_lex_state = 4},
  [24] = {.lex_state = 8, .external_lex_state = 3},
  [25] = {.lex_state = 122, .external_lex_state = 2},
  [26] = {.lex_state = 122, .external_lex_state = 2},
  [27] = {.lex_state = 122, .external_lex_state = 2},
  [28] = {.lex_state = 122, .external_lex_state = 2},
  [29] = {.lex_state = 122, .external_lex_state = 2},
  [30] = {.lex_state = 122, .external_lex_state = 2},
  [31] = {.lex_state = 122, .external_lex_state = 2},
  [32] = {.lex_state = 122, .external_lex_state = 2},
  [33] = {.lex_state = 122, .external_lex_state = 2},
  [34] = {.lex_state = 122, .external_lex_state = 2},
  [35] = {.lex_state = 8, .external_lex_state = 3},
  [36] = {.lex_state = 122, .external_lex_state = 2},
  [37] = {.lex_state = 8, .external_lex_state = 3},
  [38] = {.lex_state = 8, .external_lex_state = 3},
  [39] = {.lex_state = 8, .external_lex_state = 3},
  [40] = {.lex_state = 8, .external_lex_state = 3},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 8, .external_lex_state = 3},
  [43] = {.lex_state = 8, .external_lex_state = 3},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0, .external_lex_state = 4},
  [47] = {.lex_state = 8, .external_lex_state = 3},
  [48] = {.lex_state = 9, .external_lex_state = 3},
  [49] = {.lex_state = 0, .external_lex_state = 3},
  [50] = {.lex_state = 0, .external_lex_state = 4},
  [51] = {.lex_state = 9},
  [52] = {.lex_state = 8, .external_lex_state = 3},
  [53] = {.lex_state = 8, .external_lex_state = 3},
  [54] = {.lex_state = 9, .external_lex_state = 3},
  [55] = {.lex_state = 8, .external_lex_state = 3},
  [56] = {.lex_state = 9, .external_lex_state = 3},
  [57] = {.lex_state = 9, .external_lex_state = 3},
  [58] = {.lex_state = 0, .external_lex_state = 3},
  [59] = {.lex_state = 0, .external_lex_state = 3},
  [60] = {.lex_state = 8, .external_lex_state = 3},
  [61] = {.lex_state = 0, .external_lex_state = 3},
  [62] = {.lex_state = 0, .external_lex_state = 4},
  [63] = {.lex_state = 8, .external_lex_state = 4},
  [64] = {.lex_state = 0, .external_lex_state = 4},
  [65] = {.lex_state = 9, .external_lex_state = 3},
  [66] = {.lex_state = 8, .external_lex_state = 4},
  [67] = {.lex_state = 9, .external_lex_state = 4},
  [68] = {.lex_state = 8, .external_lex_state = 3},
  [69] = {.lex_state = 0, .external_lex_state = 4},
  [70] = {.lex_state = 0, .external_lex_state = 3},
  [71] = {.lex_state = 0, .external_lex_state = 3},
  [72] = {.lex_state = 0, .external_lex_state = 4},
  [73] = {.lex_state = 8, .external_lex_state = 4},
  [74] = {.lex_state = 0, .external_lex_state = 4},
  [75] = {.lex_state = 9, .external_lex_state = 3},
  [76] = {.lex_state = 0, .external_lex_state = 4},
  [77] = {.lex_state = 8, .external_lex_state = 3},
  [78] = {.lex_state = 0, .external_lex_state = 3},
  [79] = {.lex_state = 0, .external_lex_state = 4},
  [80] = {.lex_state = 0, .external_lex_state = 3},
  [81] = {.lex_state = 0, .external_lex_state = 4},
  [82] = {.lex_state = 9, .external_lex_state = 3},
  [83] = {.lex_state = 9, .external_lex_state = 3},
  [84] = {.lex_state = 0, .external_lex_state = 4},
  [85] = {.lex_state = 8, .external_lex_state = 3},
  [86] = {.lex_state = 0, .external_lex_state = 4},
  [87] = {.lex_state = 2, .external_lex_state = 4},
  [88] = {.lex_state = 8, .external_lex_state = 3},
  [89] = {.lex_state = 9, .external_lex_state = 3},
  [90] = {.lex_state = 9, .external_lex_state = 3},
  [91] = {.lex_state = 9, .external_lex_state = 3},
  [92] = {.lex_state = 8, .external_lex_state = 3},
  [93] = {.lex_state = 2, .external_lex_state = 4},
  [94] = {.lex_state = 9, .external_lex_state = 3},
  [95] = {.lex_state = 2, .external_lex_state = 4},
  [96] = {.lex_state = 8, .external_lex_state = 3},
  [97] = {.lex_state = 8, .external_lex_state = 3},
  [98] = {.lex_state = 9, .external_lex_state = 3},
  [99] = {.lex_state = 0, .external_lex_state = 4},
  [100] = {.lex_state = 9, .external_lex_state = 3},
  [101] = {.lex_state = 0, .external_lex_state = 4},
  [102] = {.lex_state = 8, .external_lex_state = 3},
  [103] = {.lex_state = 8, .external_lex_state = 3},
  [104] = {.lex_state = 8, .external_lex_state = 3},
  [105] = {.lex_state = 2, .external_lex_state = 4},
  [106] = {.lex_state = 2, .external_lex_state = 4},
  [107] = {.lex_state = 0, .external_lex_state = 4},
  [108] = {.lex_state = 0, .external_lex_state = 4},
  [109] = {.lex_state = 8, .external_lex_state = 3},
  [110] = {.lex_state = 8, .external_lex_state = 3},
  [111] = {.lex_state = 0, .external_lex_state = 4},
  [112] = {.lex_state = 0, .external_lex_state = 4},
  [113] = {.lex_state = 8, .external_lex_state = 3},
  [114] = {.lex_state = 0, .external_lex_state = 4},
  [115] = {.lex_state = 0, .external_lex_state = 4},
  [116] = {.lex_state = 0, .external_lex_state = 4},
  [117] = {.lex_state = 0, .external_lex_state = 4},
  [118] = {.lex_state = 8, .external_lex_state = 3},
  [119] = {.lex_state = 9, .external_lex_state = 4},
  [120] = {.lex_state = 8, .external_lex_state = 3},
  [121] = {.lex_state = 0, .external_lex_state = 4},
  [122] = {.lex_state = 0, .external_lex_state = 4},
  [123] = {.lex_state = 8, .external_lex_state = 3},
  [124] = {.lex_state = 0, .external_lex_state = 4},
  [125] = {.lex_state = 0, .external_lex_state = 4},
  [126] = {.lex_state = 0, .external_lex_state = 4},
  [127] = {.lex_state = 0, .external_lex_state = 4},
  [128] = {.lex_state = 3, .external_lex_state = 4},
  [129] = {.lex_state = 8, .external_lex_state = 3},
  [130] = {.lex_state = 9, .external_lex_state = 4},
  [131] = {.lex_state = 8, .external_lex_state = 3},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 3, .external_lex_state = 4},
  [134] = {.lex_state = 8, .external_lex_state = 3},
  [135] = {.lex_state = 3, .external_lex_state = 4},
  [136] = {.lex_state = 120},
  [137] = {.lex_state = 119},
  [138] = {.lex_state = 0, .external_lex_state = 4},
  [139] = {.lex_state = 2, .external_lex_state = 4},
  [140] = {.lex_state = 0, .external_lex_state = 4},
  [141] = {.lex_state = 0, .external_lex_state = 4},
  [142] = {.lex_state = 0, .external_lex_state = 4},
  [143] = {.lex_state = 0, .external_lex_state = 4},
  [144] = {.lex_state = 0, .external_lex_state = 4},
  [145] = {.lex_state = 0, .external_lex_state = 4},
  [146] = {.lex_state = 8, .external_lex_state = 3},
  [147] = {.lex_state = 51},
  [148] = {.lex_state = 120},
  [149] = {.lex_state = 2, .external_lex_state = 4},
  [150] = {.lex_state = 0, .external_lex_state = 4},
  [151] = {.lex_state = 2, .external_lex_state = 3},
  [152] = {.lex_state = 9, .external_lex_state = 4},
  [153] = {.lex_state = 0, .external_lex_state = 4},
  [154] = {.lex_state = 0, .external_lex_state = 4},
  [155] = {.lex_state = 0, .external_lex_state = 4},
  [156] = {.lex_state = 9},
  [157] = {.lex_state = 3, .external_lex_state = 4},
  [158] = {.lex_state = 9},
  [159] = {.lex_state = 2, .external_lex_state = 4},
  [160] = {.lex_state = 0, .external_lex_state = 4},
  [161] = {.lex_state = 9},
  [162] = {.lex_state = 0, .external_lex_state = 4},
  [163] = {.lex_state = 9},
  [164] = {.lex_state = 119},
  [165] = {.lex_state = 9},
  [166] = {.lex_state = 9},
  [167] = {.lex_state = 121, .external_lex_state = 4},
  [168] = {.lex_state = 121, .external_lex_state = 4},
  [169] = {.lex_state = 2, .external_lex_state = 3},
  [170] = {.lex_state = 119},
  [171] = {.lex_state = 2, .external_lex_state = 3},
  [172] = {.lex_state = 9},
  [173] = {.lex_state = 5, .external_lex_state = 5},
  [174] = {.lex_state = 3, .external_lex_state = 4},
  [175] = {.lex_state = 3},
  [176] = {.lex_state = 0, .external_lex_state = 4},
  [177] = {.lex_state = 0, .external_lex_state = 4},
  [178] = {.lex_state = 3, .external_lex_state = 4},
  [179] = {.lex_state = 121, .external_lex_state = 3},
  [180] = {.lex_state = 121, .external_lex_state = 3},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 5, .external_lex_state = 5},
  [183] = {.lex_state = 121},
  [184] = {.lex_state = 0, .external_lex_state = 4},
  [185] = {.lex_state = 4},
  [186] = {.lex_state = 0, .external_lex_state = 4},
  [187] = {.lex_state = 9},
  [188] = {.lex_state = 9},
  [189] = {.lex_state = 4},
  [190] = {.lex_state = 0, .external_lex_state = 4},
  [191] = {.lex_state = 0, .external_lex_state = 4},
  [192] = {.lex_state = 121, .external_lex_state = 3},
  [193] = {.lex_state = 9},
  [194] = {.lex_state = 0, .external_lex_state = 4},
  [195] = {.lex_state = 3},
  [196] = {.lex_state = 0, .external_lex_state = 4},
  [197] = {.lex_state = 4},
  [198] = {.lex_state = 0, .external_lex_state = 4},
  [199] = {.lex_state = 0, .external_lex_state = 4},
  [200] = {.lex_state = 0, .external_lex_state = 4},
  [201] = {.lex_state = 0, .external_lex_state = 4},
  [202] = {.lex_state = 120},
  [203] = {.lex_state = 4},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 4},
  [206] = {.lex_state = 8},
  [207] = {.lex_state = 0, .external_lex_state = 4},
  [208] = {.lex_state = 0, .external_lex_state = 4},
  [209] = {.lex_state = 0, .external_lex_state = 4},
  [210] = {.lex_state = 4},
  [211] = {.lex_state = 3, .external_lex_state = 4},
  [212] = {.lex_state = 0, .external_lex_state = 4},
  [213] = {.lex_state = 4},
  [214] = {.lex_state = 0, .external_lex_state = 4},
  [215] = {.lex_state = 4},
  [216] = {.lex_state = 8},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 4},
  [219] = {.lex_state = 0, .external_lex_state = 4},
  [220] = {.lex_state = 0, .external_lex_state = 4},
  [221] = {.lex_state = 0, .external_lex_state = 4},
  [222] = {.lex_state = 0, .external_lex_state = 4},
  [223] = {.lex_state = 9},
  [224] = {.lex_state = 8},
  [225] = {.lex_state = 8},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 8},
  [228] = {.lex_state = 8},
  [229] = {.lex_state = 0, .external_lex_state = 3},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0, .external_lex_state = 3},
  [232] = {.lex_state = 9},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0, .external_lex_state = 3},
  [235] = {.lex_state = 2},
  [236] = {.lex_state = 0, .external_lex_state = 4},
  [237] = {.lex_state = 0, .external_lex_state = 3},
  [238] = {.lex_state = 2},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0, .external_lex_state = 3},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 8},
  [243] = {.lex_state = 4},
  [244] = {.lex_state = 8},
  [245] = {.lex_state = 0, .external_lex_state = 4},
  [246] = {.lex_state = 0, .external_lex_state = 3},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 2},
  [249] = {.lex_state = 8},
  [250] = {.lex_state = 0, .external_lex_state = 3},
  [251] = {.lex_state = 0, .external_lex_state = 3},
  [252] = {.lex_state = 2},
  [253] = {.lex_state = 8},
  [254] = {.lex_state = 8},
  [255] = {.lex_state = 4},
  [256] = {.lex_state = 8},
  [257] = {.lex_state = 9},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 9},
  [260] = {.lex_state = 119},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 4},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0, .external_lex_state = 2},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0, .external_lex_state = 3},
  [267] = {.lex_state = 121},
  [268] = {.lex_state = 9},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0, .external_lex_state = 2},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0, .external_lex_state = 2},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0, .external_lex_state = 2},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 121},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 9},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0, .external_lex_state = 3},
  [295] = {.lex_state = 8},
  [296] = {.lex_state = 2},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 9},
  [300] = {.lex_state = 3},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 9},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 9},
  [305] = {.lex_state = 8},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 9},
  [313] = {.lex_state = 9},
  [314] = {.lex_state = 9},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 8},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 9},
  [320] = {.lex_state = 8},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0, .external_lex_state = 2},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 9},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0, .external_lex_state = 2},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0, .external_lex_state = 2},
  [333] = {.lex_state = 9},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
};

enum {
  ts_external_token__line_break = 0,
  ts_external_token_wsp = 1,
  ts_external_token__eof = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__line_break] = sym__line_break,
  [ts_external_token_wsp] = sym_wsp,
  [ts_external_token__eof] = sym__eof,
};

static const bool ts_external_scanner_states[6][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__line_break] = true,
    [ts_external_token_wsp] = true,
    [ts_external_token__eof] = true,
  },
  [2] = {
    [ts_external_token__line_break] = true,
  },
  [3] = {
    [ts_external_token_wsp] = true,
  },
  [4] = {
    [ts_external_token__line_break] = true,
    [ts_external_token_wsp] = true,
  },
  [5] = {
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
    [aux_sym_year_token2] = ACTIONS(1),
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
    [sym_wsp] = ACTIONS(1),
    [sym__eof] = ACTIONS(1),
  },
  [1] = {
    [sym_message] = STATE(280),
    [sym_headers] = STATE(264),
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
    [sym_in_reply_to] = STATE(273),
    [sym_references] = STATE(273),
    [sym_date] = STATE(271),
    [sym_subject] = STATE(270),
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
    STATE(270), 1,
      sym_subject,
    STATE(271), 1,
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
    STATE(273), 2,
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
    STATE(270), 1,
      sym_subject,
    STATE(271), 1,
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
    STATE(273), 2,
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
  [154] = 3,
    ACTIONS(69), 1,
      sym_wsp,
    STATE(4), 1,
      aux_sym_fws_repeat1,
    ACTIONS(67), 27,
      anon_sym_COMMA,
      anon_sym_Mon,
      anon_sym_Tue,
      anon_sym_Wed,
      anon_sym_Thu,
      anon_sym_Fri,
      anon_sym_Sat,
      anon_sym_Sun,
      aux_sym_day_token1,
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
      anon_sym_SEMI,
  [190] = 3,
    ACTIONS(72), 1,
      sym_wsp,
    STATE(5), 1,
      aux_sym_fws_repeat1,
    ACTIONS(67), 26,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_Mon,
      anon_sym_Tue,
      anon_sym_Wed,
      anon_sym_Thu,
      anon_sym_Fri,
      anon_sym_Sat,
      anon_sym_Sun,
      aux_sym_day_token1,
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
      anon_sym_LPAREN,
  [225] = 4,
    ACTIONS(77), 1,
      sym__line_break,
    ACTIONS(79), 1,
      sym_wsp,
    STATE(5), 1,
      aux_sym_fws_repeat1,
    ACTIONS(75), 22,
      anon_sym_Mon,
      anon_sym_Tue,
      anon_sym_Wed,
      anon_sym_Thu,
      anon_sym_Fri,
      anon_sym_Sat,
      anon_sym_Sun,
      aux_sym_day_token1,
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
  [259] = 21,
    ACTIONS(81), 1,
      anon_sym_LT,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      sym_atom,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym__line_break,
    ACTIONS(91), 1,
      sym_wsp,
    STATE(19), 1,
      sym_fws,
    STATE(26), 1,
      sym_addresslist,
    STATE(56), 1,
      sym_dotatom_text,
    STATE(61), 1,
      sym_phrase,
    STATE(66), 1,
      aux_sym_fws_repeat1,
    STATE(88), 1,
      sym_quoted_string,
    STATE(122), 1,
      sym_internetaddress,
    STATE(129), 1,
      sym_atom2,
    STATE(206), 1,
      sym_cfws,
    STATE(318), 1,
      sym_local,
    STATE(321), 1,
      sym_dotatom,
    STATE(24), 2,
      sym_word,
      aux_sym_phrase_repeat1,
    STATE(110), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    STATE(220), 2,
      sym_angle_addr,
      sym_addrspec,
    STATE(221), 2,
      sym_mailgroup,
      sym_mailbox,
  [327] = 22,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      sym_atom,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym__line_break,
    ACTIONS(91), 1,
      sym_wsp,
    ACTIONS(93), 1,
      anon_sym_LT,
    ACTIONS(95), 1,
      anon_sym_SEMI,
    STATE(16), 1,
      sym_fws,
    STATE(56), 1,
      sym_dotatom_text,
    STATE(66), 1,
      aux_sym_fws_repeat1,
    STATE(78), 1,
      sym_phrase,
    STATE(88), 1,
      sym_quoted_string,
    STATE(129), 1,
      sym_atom2,
    STATE(181), 1,
      sym_mailbox,
    STATE(216), 1,
      sym_cfws,
    STATE(292), 1,
      sym_mailbox_list,
    STATE(303), 1,
      sym_group_list,
    STATE(321), 1,
      sym_dotatom,
    STATE(328), 1,
      sym_local,
    STATE(24), 2,
      sym_word,
      aux_sym_phrase_repeat1,
    STATE(110), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    STATE(239), 2,
      sym_angle_addr,
      sym_addrspec,
  [397] = 22,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      sym_atom,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym__line_break,
    ACTIONS(91), 1,
      sym_wsp,
    ACTIONS(93), 1,
      anon_sym_LT,
    ACTIONS(97), 1,
      anon_sym_SEMI,
    STATE(15), 1,
      sym_fws,
    STATE(56), 1,
      sym_dotatom_text,
    STATE(66), 1,
      aux_sym_fws_repeat1,
    STATE(78), 1,
      sym_phrase,
    STATE(88), 1,
      sym_quoted_string,
    STATE(129), 1,
      sym_atom2,
    STATE(181), 1,
      sym_mailbox,
    STATE(216), 1,
      sym_cfws,
    STATE(292), 1,
      sym_mailbox_list,
    STATE(293), 1,
      sym_group_list,
    STATE(321), 1,
      sym_dotatom,
    STATE(328), 1,
      sym_local,
    STATE(24), 2,
      sym_word,
      aux_sym_phrase_repeat1,
    STATE(110), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    STATE(239), 2,
      sym_angle_addr,
      sym_addrspec,
  [467] = 3,
    ACTIONS(101), 1,
      sym_wsp,
    STATE(4), 1,
      aux_sym_fws_repeat1,
    ACTIONS(99), 22,
      anon_sym_Mon,
      anon_sym_Tue,
      anon_sym_Wed,
      anon_sym_Thu,
      anon_sym_Fri,
      anon_sym_Sat,
      anon_sym_Sun,
      aux_sym_day_token1,
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
  [498] = 20,
    ACTIONS(81), 1,
      anon_sym_LT,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      sym_atom,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym__line_break,
    ACTIONS(91), 1,
      sym_wsp,
    STATE(19), 1,
      sym_fws,
    STATE(56), 1,
      sym_dotatom_text,
    STATE(61), 1,
      sym_phrase,
    STATE(66), 1,
      aux_sym_fws_repeat1,
    STATE(88), 1,
      sym_quoted_string,
    STATE(129), 1,
      sym_atom2,
    STATE(200), 1,
      sym_internetaddress,
    STATE(206), 1,
      sym_cfws,
    STATE(318), 1,
      sym_local,
    STATE(321), 1,
      sym_dotatom,
    STATE(24), 2,
      sym_word,
      aux_sym_phrase_repeat1,
    STATE(110), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    STATE(220), 2,
      sym_angle_addr,
      sym_addrspec,
    STATE(221), 2,
      sym_mailgroup,
      sym_mailbox,
  [563] = 20,
    ACTIONS(81), 1,
      anon_sym_LT,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      sym_atom,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym__line_break,
    ACTIONS(91), 1,
      sym_wsp,
    STATE(19), 1,
      sym_fws,
    STATE(56), 1,
      sym_dotatom_text,
    STATE(61), 1,
      sym_phrase,
    STATE(66), 1,
      aux_sym_fws_repeat1,
    STATE(88), 1,
      sym_quoted_string,
    STATE(129), 1,
      sym_atom2,
    STATE(191), 1,
      sym_internetaddress,
    STATE(206), 1,
      sym_cfws,
    STATE(318), 1,
      sym_local,
    STATE(321), 1,
      sym_dotatom,
    STATE(24), 2,
      sym_word,
      aux_sym_phrase_repeat1,
    STATE(110), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    STATE(220), 2,
      sym_angle_addr,
      sym_addrspec,
    STATE(221), 2,
      sym_mailgroup,
      sym_mailbox,
  [628] = 3,
    ACTIONS(101), 1,
      sym_wsp,
    STATE(4), 1,
      aux_sym_fws_repeat1,
    ACTIONS(103), 22,
      anon_sym_Mon,
      anon_sym_Tue,
      anon_sym_Wed,
      anon_sym_Thu,
      anon_sym_Fri,
      anon_sym_Sat,
      anon_sym_Sun,
      aux_sym_day_token1,
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
  [659] = 19,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      sym_atom,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym__line_break,
    ACTIONS(91), 1,
      sym_wsp,
    ACTIONS(93), 1,
      anon_sym_LT,
    STATE(17), 1,
      sym_fws,
    STATE(56), 1,
      sym_dotatom_text,
    STATE(66), 1,
      aux_sym_fws_repeat1,
    STATE(78), 1,
      sym_phrase,
    STATE(88), 1,
      sym_quoted_string,
    STATE(129), 1,
      sym_atom2,
    STATE(216), 1,
      sym_cfws,
    STATE(230), 1,
      sym_mailbox,
    STATE(321), 1,
      sym_dotatom,
    STATE(328), 1,
      sym_local,
    STATE(24), 2,
      sym_word,
      aux_sym_phrase_repeat1,
    STATE(110), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    STATE(239), 2,
      sym_angle_addr,
      sym_addrspec,
  [720] = 17,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      sym_atom,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      anon_sym_LT,
    ACTIONS(95), 1,
      anon_sym_SEMI,
    ACTIONS(105), 1,
      sym_wsp,
    STATE(56), 1,
      sym_dotatom_text,
    STATE(80), 1,
      sym_phrase,
    STATE(88), 1,
      sym_quoted_string,
    STATE(109), 1,
      aux_sym_fws_repeat1,
    STATE(129), 1,
      sym_atom2,
    STATE(216), 1,
      sym_cfws,
    STATE(321), 1,
      sym_dotatom,
    STATE(328), 1,
      sym_local,
    STATE(24), 2,
      sym_word,
      aux_sym_phrase_repeat1,
    STATE(110), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    STATE(247), 2,
      sym_angle_addr,
      sym_addrspec,
  [775] = 17,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      sym_atom,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      anon_sym_LT,
    ACTIONS(105), 1,
      sym_wsp,
    ACTIONS(107), 1,
      anon_sym_SEMI,
    STATE(56), 1,
      sym_dotatom_text,
    STATE(80), 1,
      sym_phrase,
    STATE(88), 1,
      sym_quoted_string,
    STATE(109), 1,
      aux_sym_fws_repeat1,
    STATE(129), 1,
      sym_atom2,
    STATE(216), 1,
      sym_cfws,
    STATE(321), 1,
      sym_dotatom,
    STATE(328), 1,
      sym_local,
    STATE(24), 2,
      sym_word,
      aux_sym_phrase_repeat1,
    STATE(110), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    STATE(247), 2,
      sym_angle_addr,
      sym_addrspec,
  [830] = 16,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      sym_atom,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      anon_sym_LT,
    ACTIONS(105), 1,
      sym_wsp,
    STATE(56), 1,
      sym_dotatom_text,
    STATE(80), 1,
      sym_phrase,
    STATE(88), 1,
      sym_quoted_string,
    STATE(109), 1,
      aux_sym_fws_repeat1,
    STATE(129), 1,
      sym_atom2,
    STATE(216), 1,
      sym_cfws,
    STATE(321), 1,
      sym_dotatom,
    STATE(328), 1,
      sym_local,
    STATE(24), 2,
      sym_word,
      aux_sym_phrase_repeat1,
    STATE(110), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    STATE(247), 2,
      sym_angle_addr,
      sym_addrspec,
  [882] = 13,
    ACTIONS(111), 1,
      aux_sym_day_token1,
    ACTIONS(113), 1,
      sym__line_break,
    ACTIONS(115), 1,
      sym_wsp,
    STATE(6), 1,
      aux_sym_fws_repeat1,
    STATE(25), 1,
      sym__datefield,
    STATE(41), 1,
      sym_day,
    STATE(51), 1,
      sym_fws,
    STATE(119), 1,
      aux_sym_day_repeat1,
    STATE(158), 1,
      sym_datefield,
    STATE(332), 1,
      sym_date_time,
    STATE(336), 1,
      sym_day_of_week,
    STATE(337), 1,
      sym_day_name,
    ACTIONS(109), 7,
      anon_sym_Mon,
      anon_sym_Tue,
      anon_sym_Wed,
      anon_sym_Thu,
      anon_sym_Fri,
      anon_sym_Sat,
      anon_sym_Sun,
  [928] = 16,
    ACTIONS(81), 1,
      anon_sym_LT,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      sym_atom,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      sym_wsp,
    STATE(56), 1,
      sym_dotatom_text,
    STATE(59), 1,
      sym_phrase,
    STATE(88), 1,
      sym_quoted_string,
    STATE(109), 1,
      aux_sym_fws_repeat1,
    STATE(129), 1,
      sym_atom2,
    STATE(206), 1,
      sym_cfws,
    STATE(318), 1,
      sym_local,
    STATE(321), 1,
      sym_dotatom,
    STATE(24), 2,
      sym_word,
      aux_sym_phrase_repeat1,
    STATE(110), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    STATE(186), 2,
      sym_angle_addr,
      sym_addrspec,
  [980] = 3,
    ACTIONS(119), 1,
      sym_headertype,
    ACTIONS(121), 1,
      sym_wsp,
    ACTIONS(117), 13,
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
  [1002] = 3,
    ACTIONS(121), 1,
      sym_wsp,
    ACTIONS(125), 1,
      sym_headertype,
    ACTIONS(123), 13,
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
  [1024] = 3,
    ACTIONS(129), 1,
      sym_headertype,
    ACTIONS(131), 1,
      sym_wsp,
    ACTIONS(127), 13,
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
  [1046] = 3,
    ACTIONS(131), 1,
      sym_wsp,
    ACTIONS(135), 1,
      sym_headertype,
    ACTIONS(133), 13,
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
  [1068] = 11,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 1,
      sym_atom,
    ACTIONS(144), 1,
      sym_wsp,
    STATE(109), 1,
      aux_sym_fws_repeat1,
    STATE(113), 1,
      sym_quoted_string,
    STATE(129), 1,
      sym_atom2,
    STATE(317), 1,
      sym_cfws,
    ACTIONS(137), 2,
      anon_sym_COLON,
      anon_sym_LT,
    STATE(35), 2,
      sym_word,
      aux_sym_phrase_repeat1,
    STATE(110), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [1105] = 2,
    ACTIONS(149), 1,
      sym_headertype,
    ACTIONS(147), 13,
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
  [1124] = 2,
    ACTIONS(153), 1,
      sym_headertype,
    ACTIONS(151), 13,
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
  [1143] = 2,
    ACTIONS(157), 1,
      sym_headertype,
    ACTIONS(155), 13,
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
  [1162] = 2,
    ACTIONS(161), 1,
      sym_headertype,
    ACTIONS(159), 13,
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
  [1181] = 2,
    ACTIONS(165), 1,
      sym_headertype,
    ACTIONS(163), 13,
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
  [1200] = 2,
    ACTIONS(169), 1,
      sym_headertype,
    ACTIONS(167), 13,
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
  [1219] = 2,
    ACTIONS(173), 1,
      sym_headertype,
    ACTIONS(171), 13,
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
  [1238] = 2,
    ACTIONS(177), 1,
      sym_headertype,
    ACTIONS(175), 13,
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
  [1257] = 2,
    ACTIONS(181), 1,
      sym_headertype,
    ACTIONS(179), 13,
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
  [1276] = 2,
    ACTIONS(185), 1,
      sym_headertype,
    ACTIONS(183), 13,
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
  [1295] = 11,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      sym_atom,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(198), 1,
      sym_wsp,
    STATE(109), 1,
      aux_sym_fws_repeat1,
    STATE(113), 1,
      sym_quoted_string,
    STATE(129), 1,
      sym_atom2,
    STATE(317), 1,
      sym_cfws,
    ACTIONS(187), 2,
      anon_sym_COLON,
      anon_sym_LT,
    STATE(35), 2,
      sym_word,
      aux_sym_phrase_repeat1,
    STATE(110), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [1332] = 2,
    ACTIONS(203), 1,
      sym_headertype,
    ACTIONS(201), 13,
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
  [1351] = 10,
    ACTIONS(207), 1,
      anon_sym_AT,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      sym_atom,
    ACTIONS(215), 1,
      anon_sym_DOT,
    ACTIONS(217), 1,
      sym_wsp,
    STATE(75), 1,
      aux_sym_dotatom_text_repeat1,
    STATE(109), 1,
      aux_sym_fws_repeat1,
    STATE(120), 1,
      sym_cfws,
    STATE(60), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    ACTIONS(205), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_DQUOTE,
  [1385] = 11,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      sym_wsp,
    ACTIONS(221), 1,
      sym_atom,
    ACTIONS(223), 1,
      anon_sym_DQUOTE,
    STATE(56), 1,
      sym_dotatom_text,
    STATE(109), 1,
      aux_sym_fws_repeat1,
    STATE(253), 1,
      sym_cfws,
    STATE(290), 1,
      sym_addrspec,
    STATE(328), 1,
      sym_local,
    STATE(110), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    STATE(321), 2,
      sym_dotatom,
      sym_quoted_string,
  [1421] = 10,
    ACTIONS(207), 1,
      anon_sym_AT,
    ACTIONS(215), 1,
      anon_sym_DOT,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    ACTIONS(231), 1,
      sym_atom,
    ACTIONS(233), 1,
      sym_wsp,
    STATE(75), 1,
      aux_sym_dotatom_text_repeat1,
    STATE(109), 1,
      aux_sym_fws_repeat1,
    STATE(118), 1,
      sym_cfws,
    STATE(60), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    ACTIONS(225), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_DQUOTE,
  [1455] = 11,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      sym_wsp,
    ACTIONS(221), 1,
      sym_atom,
    ACTIONS(223), 1,
      anon_sym_DQUOTE,
    STATE(56), 1,
      sym_dotatom_text,
    STATE(109), 1,
      aux_sym_fws_repeat1,
    STATE(253), 1,
      sym_cfws,
    STATE(304), 1,
      sym_addrspec,
    STATE(328), 1,
      sym_local,
    STATE(110), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    STATE(321), 2,
      sym_dotatom,
      sym_quoted_string,
  [1491] = 2,
    STATE(143), 1,
      sym_month,
    ACTIONS(237), 12,
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
  [1509] = 11,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      sym_wsp,
    ACTIONS(221), 1,
      sym_atom,
    ACTIONS(223), 1,
      anon_sym_DQUOTE,
    STATE(56), 1,
      sym_dotatom_text,
    STATE(109), 1,
      aux_sym_fws_repeat1,
    STATE(253), 1,
      sym_cfws,
    STATE(299), 1,
      sym_addrspec,
    STATE(328), 1,
      sym_local,
    STATE(110), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    STATE(321), 2,
      sym_dotatom,
      sym_quoted_string,
  [1545] = 11,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      sym_wsp,
    ACTIONS(221), 1,
      sym_atom,
    ACTIONS(223), 1,
      anon_sym_DQUOTE,
    STATE(56), 1,
      sym_dotatom_text,
    STATE(109), 1,
      aux_sym_fws_repeat1,
    STATE(253), 1,
      sym_cfws,
    STATE(312), 1,
      sym_addrspec,
    STATE(328), 1,
      sym_local,
    STATE(110), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    STATE(321), 2,
      sym_dotatom,
      sym_quoted_string,
  [1581] = 1,
    ACTIONS(239), 12,
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
  [1596] = 1,
    ACTIONS(241), 12,
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
  [1611] = 8,
    ACTIONS(243), 1,
      anon_sym_LT,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      sym__line_break,
    ACTIONS(249), 1,
      sym_wsp,
    STATE(89), 1,
      aux_sym_fws_repeat1,
    STATE(311), 1,
      sym_cfws,
    STATE(48), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    STATE(50), 2,
      sym_msg_id,
      aux_sym_references_field_repeat1,
  [1638] = 7,
    ACTIONS(231), 1,
      sym_atom,
    ACTIONS(251), 1,
      anon_sym_LPAREN,
    ACTIONS(254), 1,
      sym_wsp,
    STATE(109), 1,
      aux_sym_fws_repeat1,
    STATE(118), 1,
      sym_cfws,
    STATE(60), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    ACTIONS(225), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_DQUOTE,
  [1663] = 5,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      sym_wsp,
    STATE(98), 1,
      aux_sym_fws_repeat1,
    STATE(57), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    ACTIONS(257), 5,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_SEMI,
  [1684] = 8,
    ACTIONS(243), 1,
      anon_sym_LT,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      sym_wsp,
    STATE(36), 1,
      sym_references_field,
    STATE(89), 1,
      aux_sym_fws_repeat1,
    STATE(311), 1,
      sym_cfws,
    STATE(46), 2,
      sym_msg_id,
      aux_sym_references_field_repeat1,
    STATE(48), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [1711] = 8,
    ACTIONS(259), 1,
      anon_sym_LT,
    ACTIONS(262), 1,
      anon_sym_LPAREN,
    ACTIONS(265), 1,
      sym__line_break,
    ACTIONS(267), 1,
      sym_wsp,
    STATE(89), 1,
      aux_sym_fws_repeat1,
    STATE(311), 1,
      sym_cfws,
    STATE(48), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    STATE(50), 2,
      sym_msg_id,
      aux_sym_references_field_repeat1,
  [1738] = 4,
    ACTIONS(270), 1,
      aux_sym_day_token1,
    STATE(130), 1,
      aux_sym_day_repeat1,
    STATE(291), 1,
      sym_day_name,
    ACTIONS(109), 7,
      anon_sym_Mon,
      anon_sym_Tue,
      anon_sym_Wed,
      anon_sym_Thu,
      anon_sym_Fri,
      anon_sym_Sat,
      anon_sym_Sun,
  [1757] = 9,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      sym_wsp,
    ACTIONS(221), 1,
      sym_atom,
    STATE(56), 1,
      sym_dotatom_text,
    STATE(109), 1,
      aux_sym_fws_repeat1,
    STATE(187), 1,
      sym_dotatom,
    STATE(188), 1,
      sym_domain,
    STATE(253), 1,
      sym_cfws,
    STATE(110), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [1786] = 7,
    ACTIONS(213), 1,
      sym_atom,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      sym_wsp,
    STATE(109), 1,
      aux_sym_fws_repeat1,
    STATE(120), 1,
      sym_cfws,
    STATE(60), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    ACTIONS(205), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_DQUOTE,
  [1811] = 6,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      sym_wsp,
    STATE(89), 1,
      aux_sym_fws_repeat1,
    STATE(166), 1,
      sym_cfws,
    STATE(48), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    ACTIONS(278), 4,
      anon_sym_COMMA,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_SEMI,
  [1834] = 9,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      sym_wsp,
    ACTIONS(280), 1,
      sym_atom,
    STATE(79), 1,
      sym_dotatom_text,
    STATE(109), 1,
      aux_sym_fws_repeat1,
    STATE(177), 1,
      sym_dotatom,
    STATE(198), 1,
      sym_domain,
    STATE(249), 1,
      sym_cfws,
    STATE(110), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [1863] = 6,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      sym_wsp,
    STATE(89), 1,
      aux_sym_fws_repeat1,
    STATE(165), 1,
      sym_cfws,
    STATE(48), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    ACTIONS(282), 4,
      anon_sym_COMMA,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_SEMI,
  [1886] = 4,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(289), 1,
      sym_wsp,
    STATE(57), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    ACTIONS(284), 5,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_SEMI,
  [1904] = 8,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      sym_wsp,
    ACTIONS(292), 1,
      anon_sym_LT,
    STATE(31), 1,
      sym_message_idfield,
    STATE(89), 1,
      aux_sym_fws_repeat1,
    STATE(322), 1,
      sym_msg_id,
    STATE(338), 1,
      sym_cfws,
    STATE(48), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [1930] = 8,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      sym_wsp,
    ACTIONS(294), 1,
      anon_sym_COLON,
    ACTIONS(296), 1,
      anon_sym_LT,
    STATE(89), 1,
      aux_sym_fws_repeat1,
    STATE(196), 1,
      sym_angle_addr,
    STATE(298), 1,
      sym_cfws,
    STATE(48), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [1956] = 6,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      sym_atom,
    ACTIONS(300), 1,
      sym_wsp,
    STATE(97), 1,
      aux_sym_fws_repeat1,
    STATE(77), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    ACTIONS(298), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_DQUOTE,
  [1978] = 8,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      sym_wsp,
    ACTIONS(296), 1,
      anon_sym_LT,
    ACTIONS(302), 1,
      anon_sym_COLON,
    STATE(89), 1,
      aux_sym_fws_repeat1,
    STATE(186), 1,
      sym_angle_addr,
    STATE(298), 1,
      sym_cfws,
    STATE(48), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [2004] = 6,
    ACTIONS(306), 1,
      anon_sym_LPAREN,
    ACTIONS(308), 1,
      sym_wsp,
    STATE(124), 1,
      aux_sym_fws_repeat1,
    STATE(209), 1,
      sym_cfws,
    ACTIONS(304), 2,
      sym__line_break,
      anon_sym_COMMA,
    STATE(108), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [2025] = 4,
    ACTIONS(312), 1,
      sym_wsp,
    STATE(63), 1,
      aux_sym_fws_repeat1,
    ACTIONS(67), 2,
      sym__line_break,
      sym_atom,
    ACTIONS(310), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
  [2042] = 6,
    ACTIONS(306), 1,
      anon_sym_LPAREN,
    ACTIONS(308), 1,
      sym_wsp,
    STATE(124), 1,
      aux_sym_fws_repeat1,
    STATE(194), 1,
      sym_cfws,
    ACTIONS(315), 2,
      sym__line_break,
      anon_sym_COMMA,
    STATE(108), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [2063] = 3,
    ACTIONS(319), 1,
      anon_sym_DOT,
    STATE(65), 1,
      aux_sym_dotatom_text_repeat1,
    ACTIONS(317), 6,
      sym_wsp,
      anon_sym_COMMA,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_SEMI,
  [2078] = 6,
    ACTIONS(75), 1,
      sym_wsp,
    ACTIONS(322), 1,
      anon_sym_LT,
    ACTIONS(327), 1,
      sym_atom,
    ACTIONS(330), 1,
      sym__line_break,
    STATE(63), 1,
      aux_sym_fws_repeat1,
    ACTIONS(325), 3,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
  [2099] = 8,
    ACTIONS(111), 1,
      aux_sym_day_token1,
    ACTIONS(113), 1,
      sym__line_break,
    ACTIONS(115), 1,
      sym_wsp,
    STATE(6), 1,
      aux_sym_fws_repeat1,
    STATE(41), 1,
      sym_day,
    STATE(119), 1,
      aux_sym_day_repeat1,
    STATE(172), 1,
      sym_datefield,
    STATE(257), 1,
      sym_fws,
  [2124] = 4,
    ACTIONS(67), 1,
      sym_atom,
    ACTIONS(332), 1,
      sym_wsp,
    STATE(68), 1,
      aux_sym_fws_repeat1,
    ACTIONS(310), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
  [2141] = 6,
    ACTIONS(337), 1,
      anon_sym_LPAREN,
    ACTIONS(340), 1,
      sym_wsp,
    STATE(124), 1,
      aux_sym_fws_repeat1,
    STATE(160), 1,
      sym_cfws,
    ACTIONS(335), 2,
      sym__line_break,
      anon_sym_LT,
    STATE(101), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [2162] = 6,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      sym_wsp,
    STATE(89), 1,
      aux_sym_fws_repeat1,
    STATE(261), 1,
      sym_cfws,
    ACTIONS(343), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(48), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [2183] = 6,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      sym_wsp,
    STATE(89), 1,
      aux_sym_fws_repeat1,
    STATE(263), 1,
      sym_cfws,
    ACTIONS(315), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(48), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [2204] = 6,
    ACTIONS(347), 1,
      anon_sym_LPAREN,
    ACTIONS(350), 1,
      sym_wsp,
    STATE(124), 1,
      aux_sym_fws_repeat1,
    STATE(153), 1,
      sym_cfws,
    ACTIONS(345), 2,
      sym__line_break,
      anon_sym_LT,
    STATE(101), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [2225] = 4,
    ACTIONS(355), 1,
      anon_sym_LPAREN,
    STATE(134), 1,
      sym_comment,
    ACTIONS(353), 3,
      anon_sym_LT,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
    ACTIONS(358), 3,
      sym__line_break,
      sym_wsp,
      sym_atom,
  [2242] = 6,
    ACTIONS(306), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      sym_wsp,
    STATE(124), 1,
      aux_sym_fws_repeat1,
    STATE(190), 1,
      sym_cfws,
    ACTIONS(278), 2,
      sym__line_break,
      anon_sym_COMMA,
    STATE(108), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [2263] = 3,
    ACTIONS(365), 1,
      anon_sym_DOT,
    STATE(65), 1,
      aux_sym_dotatom_text_repeat1,
    ACTIONS(363), 6,
      sym_wsp,
      anon_sym_COMMA,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_SEMI,
  [2278] = 6,
    ACTIONS(306), 1,
      anon_sym_LPAREN,
    ACTIONS(308), 1,
      sym_wsp,
    STATE(124), 1,
      aux_sym_fws_repeat1,
    STATE(201), 1,
      sym_cfws,
    ACTIONS(367), 2,
      sym__line_break,
      anon_sym_COMMA,
    STATE(108), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [2299] = 5,
    ACTIONS(284), 1,
      sym_atom,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      sym_wsp,
    STATE(77), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    ACTIONS(369), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_DQUOTE,
  [2318] = 7,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      sym_wsp,
    ACTIONS(377), 1,
      anon_sym_LT,
    STATE(89), 1,
      aux_sym_fws_repeat1,
    STATE(247), 1,
      sym_angle_addr,
    STATE(330), 1,
      sym_cfws,
    STATE(48), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [2341] = 6,
    ACTIONS(306), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      sym_wsp,
    STATE(124), 1,
      aux_sym_fws_repeat1,
    STATE(199), 1,
      sym_cfws,
    ACTIONS(282), 2,
      sym__line_break,
      anon_sym_COMMA,
    STATE(108), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [2362] = 7,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      sym_wsp,
    ACTIONS(377), 1,
      anon_sym_LT,
    STATE(89), 1,
      aux_sym_fws_repeat1,
    STATE(258), 1,
      sym_angle_addr,
    STATE(330), 1,
      sym_cfws,
    STATE(48), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [2385] = 6,
    ACTIONS(306), 1,
      anon_sym_LPAREN,
    ACTIONS(308), 1,
      sym_wsp,
    STATE(124), 1,
      aux_sym_fws_repeat1,
    STATE(214), 1,
      sym_cfws,
    ACTIONS(343), 2,
      sym__line_break,
      anon_sym_COMMA,
    STATE(108), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [2406] = 3,
    ACTIONS(365), 1,
      anon_sym_DOT,
    STATE(75), 1,
      aux_sym_dotatom_text_repeat1,
    ACTIONS(382), 6,
      sym_wsp,
      anon_sym_COMMA,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_SEMI,
  [2421] = 3,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    STATE(91), 1,
      sym_comment,
    ACTIONS(358), 6,
      sym_wsp,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_SEMI,
  [2436] = 6,
    ACTIONS(306), 1,
      anon_sym_LPAREN,
    ACTIONS(308), 1,
      sym_wsp,
    STATE(124), 1,
      aux_sym_fws_repeat1,
    STATE(212), 1,
      sym_cfws,
    ACTIONS(384), 2,
      sym__line_break,
      anon_sym_COMMA,
    STATE(108), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [2457] = 3,
    STATE(68), 1,
      aux_sym_fws_repeat1,
    ACTIONS(99), 2,
      sym_wsp,
      sym_atom,
    ACTIONS(386), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
  [2471] = 6,
    ACTIONS(306), 1,
      anon_sym_LPAREN,
    ACTIONS(308), 1,
      sym_wsp,
    ACTIONS(388), 1,
      sym__line_break,
    STATE(124), 1,
      aux_sym_fws_repeat1,
    STATE(326), 1,
      sym_cfws,
    STATE(108), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [2491] = 7,
    ACTIONS(390), 1,
      anon_sym_DQUOTE,
    ACTIONS(392), 1,
      aux_sym_quoted_string_token1,
    ACTIONS(394), 1,
      sym__line_break,
    ACTIONS(396), 1,
      sym_wsp,
    STATE(106), 1,
      aux_sym_quoted_string_repeat1,
    STATE(149), 1,
      aux_sym_fws_repeat1,
    STATE(252), 1,
      sym_fws,
  [2513] = 3,
    ACTIONS(400), 1,
      anon_sym_AT,
    ACTIONS(402), 2,
      sym_wsp,
      sym_atom,
    ACTIONS(398), 4,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [2527] = 3,
    ACTIONS(101), 1,
      sym_wsp,
    STATE(4), 1,
      aux_sym_fws_repeat1,
    ACTIONS(257), 5,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_SEMI,
  [2541] = 1,
    ACTIONS(404), 7,
      sym_wsp,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_SEMI,
  [2551] = 1,
    ACTIONS(284), 7,
      sym_wsp,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_SEMI,
  [2561] = 2,
    ACTIONS(408), 2,
      sym_wsp,
      sym_atom,
    ACTIONS(406), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [2573] = 7,
    ACTIONS(394), 1,
      sym__line_break,
    ACTIONS(396), 1,
      sym_wsp,
    ACTIONS(410), 1,
      anon_sym_DQUOTE,
    ACTIONS(412), 1,
      aux_sym_quoted_string_token1,
    STATE(105), 1,
      aux_sym_quoted_string_repeat1,
    STATE(149), 1,
      aux_sym_fws_repeat1,
    STATE(238), 1,
      sym_fws,
  [2595] = 1,
    ACTIONS(414), 7,
      sym_wsp,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_SEMI,
  [2605] = 7,
    ACTIONS(394), 1,
      sym__line_break,
    ACTIONS(396), 1,
      sym_wsp,
    ACTIONS(416), 1,
      anon_sym_DQUOTE,
    ACTIONS(418), 1,
      aux_sym_quoted_string_token1,
    STATE(93), 1,
      aux_sym_quoted_string_repeat1,
    STATE(149), 1,
      aux_sym_fws_repeat1,
    STATE(248), 1,
      sym_fws,
  [2627] = 3,
    STATE(68), 1,
      aux_sym_fws_repeat1,
    ACTIONS(103), 2,
      sym_wsp,
      sym_atom,
    ACTIONS(420), 4,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
  [2641] = 4,
    ACTIONS(424), 1,
      sym_atom,
    ACTIONS(426), 1,
      sym_wsp,
    STATE(68), 1,
      aux_sym_fws_repeat1,
    ACTIONS(422), 4,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [2657] = 3,
    ACTIONS(101), 1,
      sym_wsp,
    STATE(4), 1,
      aux_sym_fws_repeat1,
    ACTIONS(424), 5,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_SEMI,
  [2671] = 6,
    ACTIONS(306), 1,
      anon_sym_LPAREN,
    ACTIONS(308), 1,
      sym_wsp,
    ACTIONS(428), 1,
      sym__line_break,
    STATE(124), 1,
      aux_sym_fws_repeat1,
    STATE(277), 1,
      sym_cfws,
    STATE(108), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [2691] = 1,
    ACTIONS(317), 7,
      sym_wsp,
      anon_sym_COMMA,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      anon_sym_DOT,
  [2701] = 5,
    ACTIONS(306), 1,
      anon_sym_LPAREN,
    ACTIONS(430), 1,
      sym_wsp,
    STATE(117), 1,
      aux_sym_fws_repeat1,
    ACTIONS(257), 2,
      sym__line_break,
      anon_sym_LT,
    STATE(107), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [2719] = 4,
    ACTIONS(355), 1,
      anon_sym_LPAREN,
    STATE(134), 1,
      sym_comment,
    ACTIONS(358), 2,
      sym_wsp,
      sym_atom,
    ACTIONS(353), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_DQUOTE,
  [2735] = 2,
    ACTIONS(434), 2,
      sym_wsp,
      sym_atom,
    ACTIONS(432), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [2747] = 2,
    ACTIONS(438), 2,
      sym_wsp,
      sym_atom,
    ACTIONS(436), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [2759] = 7,
    ACTIONS(440), 1,
      anon_sym_DQUOTE,
    ACTIONS(442), 1,
      aux_sym_quoted_string_token1,
    ACTIONS(445), 1,
      sym__line_break,
    ACTIONS(448), 1,
      sym_wsp,
    STATE(105), 1,
      aux_sym_quoted_string_repeat1,
    STATE(149), 1,
      aux_sym_fws_repeat1,
    STATE(296), 1,
      sym_fws,
  [2781] = 7,
    ACTIONS(394), 1,
      sym__line_break,
    ACTIONS(396), 1,
      sym_wsp,
    ACTIONS(412), 1,
      aux_sym_quoted_string_token1,
    ACTIONS(451), 1,
      anon_sym_DQUOTE,
    STATE(105), 1,
      aux_sym_quoted_string_repeat1,
    STATE(149), 1,
      aux_sym_fws_repeat1,
    STATE(235), 1,
      sym_fws,
  [2803] = 4,
    ACTIONS(453), 1,
      anon_sym_LPAREN,
    ACTIONS(456), 1,
      sym_wsp,
    STATE(107), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    ACTIONS(284), 3,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_LT,
  [2819] = 5,
    ACTIONS(306), 1,
      anon_sym_LPAREN,
    ACTIONS(308), 1,
      sym_wsp,
    STATE(117), 1,
      aux_sym_fws_repeat1,
    ACTIONS(257), 2,
      sym__line_break,
      anon_sym_COMMA,
    STATE(107), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [2837] = 4,
    ACTIONS(257), 1,
      sym_atom,
    ACTIONS(426), 1,
      sym_wsp,
    STATE(68), 1,
      aux_sym_fws_repeat1,
    ACTIONS(298), 4,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [2853] = 6,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      sym_wsp,
    ACTIONS(257), 1,
      sym_atom,
    ACTIONS(298), 1,
      anon_sym_LT,
    STATE(97), 1,
      aux_sym_fws_repeat1,
    STATE(77), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [2873] = 6,
    ACTIONS(306), 1,
      anon_sym_LPAREN,
    ACTIONS(308), 1,
      sym_wsp,
    ACTIONS(335), 1,
      sym__line_break,
    STATE(124), 1,
      aux_sym_fws_repeat1,
    STATE(272), 1,
      sym_cfws,
    STATE(108), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [2893] = 6,
    ACTIONS(306), 1,
      anon_sym_LPAREN,
    ACTIONS(308), 1,
      sym_wsp,
    ACTIONS(345), 1,
      sym__line_break,
    STATE(124), 1,
      aux_sym_fws_repeat1,
    STATE(274), 1,
      sym_cfws,
    STATE(108), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [2913] = 2,
    ACTIONS(402), 2,
      sym_wsp,
      sym_atom,
    ACTIONS(398), 4,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [2924] = 3,
    ACTIONS(459), 1,
      anon_sym_DOT,
    STATE(121), 1,
      aux_sym_dotatom_text_repeat1,
    ACTIONS(363), 4,
      sym__line_break,
      sym_wsp,
      anon_sym_COMMA,
      anon_sym_LPAREN,
  [2937] = 6,
    ACTIONS(461), 1,
      anon_sym_COMMA,
    ACTIONS(463), 1,
      sym__line_break,
    ACTIONS(465), 1,
      sym_wsp,
    STATE(125), 1,
      aux_sym_addresslist_repeat1,
    STATE(155), 1,
      aux_sym_lspw_repeat1,
    STATE(297), 1,
      sym_lspw,
  [2956] = 3,
    ACTIONS(459), 1,
      anon_sym_DOT,
    STATE(114), 1,
      aux_sym_dotatom_text_repeat1,
    ACTIONS(382), 4,
      sym__line_break,
      sym_wsp,
      anon_sym_COMMA,
      anon_sym_LPAREN,
  [2969] = 3,
    ACTIONS(79), 1,
      sym_wsp,
    STATE(5), 1,
      aux_sym_fws_repeat1,
    ACTIONS(424), 4,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_LPAREN,
  [2982] = 2,
    ACTIONS(469), 2,
      sym_wsp,
      sym_atom,
    ACTIONS(467), 4,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [2993] = 6,
    ACTIONS(113), 1,
      sym__line_break,
    ACTIONS(115), 1,
      sym_wsp,
    ACTIONS(471), 1,
      aux_sym_day_token1,
    STATE(6), 1,
      aux_sym_fws_repeat1,
    STATE(45), 1,
      sym_fws,
    STATE(152), 1,
      aux_sym_day_repeat1,
  [3012] = 2,
    ACTIONS(231), 2,
      sym_wsp,
      sym_atom,
    ACTIONS(225), 4,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [3023] = 3,
    ACTIONS(473), 1,
      anon_sym_DOT,
    STATE(121), 1,
      aux_sym_dotatom_text_repeat1,
    ACTIONS(317), 4,
      sym__line_break,
      sym_wsp,
      anon_sym_COMMA,
      anon_sym_LPAREN,
  [3036] = 6,
    ACTIONS(461), 1,
      anon_sym_COMMA,
    ACTIONS(465), 1,
      sym_wsp,
    ACTIONS(476), 1,
      sym__line_break,
    STATE(115), 1,
      aux_sym_addresslist_repeat1,
    STATE(155), 1,
      aux_sym_lspw_repeat1,
    STATE(297), 1,
      sym_lspw,
  [3055] = 2,
    ACTIONS(404), 2,
      sym_wsp,
      sym_atom,
    ACTIONS(478), 4,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [3066] = 3,
    ACTIONS(79), 1,
      sym_wsp,
    STATE(5), 1,
      aux_sym_fws_repeat1,
    ACTIONS(257), 4,
      sym__line_break,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_LPAREN,
  [3079] = 6,
    ACTIONS(480), 1,
      anon_sym_COMMA,
    ACTIONS(483), 1,
      sym__line_break,
    ACTIONS(486), 1,
      sym_wsp,
    STATE(125), 1,
      aux_sym_addresslist_repeat1,
    STATE(155), 1,
      aux_sym_lspw_repeat1,
    STATE(297), 1,
      sym_lspw,
  [3098] = 6,
    ACTIONS(113), 1,
      sym__line_break,
    ACTIONS(115), 1,
      sym_wsp,
    ACTIONS(489), 1,
      aux_sym_year_token2,
    STATE(6), 1,
      aux_sym_fws_repeat1,
    STATE(127), 1,
      aux_sym_year_repeat1,
    STATE(324), 1,
      sym_fws,
  [3117] = 6,
    ACTIONS(113), 1,
      sym__line_break,
    ACTIONS(115), 1,
      sym_wsp,
    ACTIONS(491), 1,
      aux_sym_year_token2,
    STATE(6), 1,
      aux_sym_fws_repeat1,
    STATE(154), 1,
      aux_sym_year_repeat1,
    STATE(319), 1,
      sym_fws,
  [3136] = 6,
    ACTIONS(493), 1,
      sym__bodycontent,
    ACTIONS(495), 1,
      sym__line_break,
    ACTIONS(497), 1,
      sym_wsp,
    STATE(135), 1,
      aux_sym__fieldbody_repeat1,
    STATE(157), 1,
      aux_sym_lspw_repeat1,
    STATE(300), 1,
      sym_lspw,
  [3155] = 2,
    ACTIONS(402), 2,
      sym_wsp,
      sym_atom,
    ACTIONS(398), 4,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [3166] = 6,
    ACTIONS(113), 1,
      sym__line_break,
    ACTIONS(115), 1,
      sym_wsp,
    ACTIONS(471), 1,
      aux_sym_day_token1,
    STATE(6), 1,
      aux_sym_fws_repeat1,
    STATE(44), 1,
      sym_fws,
    STATE(152), 1,
      aux_sym_day_repeat1,
  [3185] = 2,
    ACTIONS(414), 2,
      sym_wsp,
      sym_atom,
    ACTIONS(499), 4,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [3196] = 5,
    ACTIONS(501), 1,
      aux_sym_ccontent_token1,
    ACTIONS(505), 1,
      anon_sym_LPAREN,
    ACTIONS(507), 1,
      anon_sym_RPAREN,
    STATE(243), 1,
      sym_comment,
    ACTIONS(503), 2,
      aux_sym_ccontent_token2,
      aux_sym_ccontent_token3,
  [3213] = 6,
    ACTIONS(509), 1,
      sym__bodycontent,
    ACTIONS(512), 1,
      sym__line_break,
    ACTIONS(515), 1,
      sym_wsp,
    STATE(133), 1,
      aux_sym__fieldbody_repeat1,
    STATE(157), 1,
      aux_sym_lspw_repeat1,
    STATE(300), 1,
      sym_lspw,
  [3232] = 2,
    ACTIONS(284), 2,
      sym_wsp,
      sym_atom,
    ACTIONS(369), 4,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [3243] = 6,
    ACTIONS(497), 1,
      sym_wsp,
    ACTIONS(518), 1,
      sym__bodycontent,
    ACTIONS(520), 1,
      sym__line_break,
    STATE(133), 1,
      aux_sym__fieldbody_repeat1,
    STATE(157), 1,
      aux_sym_lspw_repeat1,
    STATE(300), 1,
      sym_lspw,
  [3262] = 4,
    ACTIONS(522), 1,
      ts_builtin_sym_end,
    ACTIONS(524), 1,
      aux_sym_line_token1,
    ACTIONS(527), 1,
      sym_footersep,
    STATE(136), 2,
      sym_line,
      aux_sym_block_repeat1,
  [3276] = 5,
    ACTIONS(529), 1,
      ts_builtin_sym_end,
    ACTIONS(531), 1,
      aux_sym_domainliteral_token1,
    STATE(170), 1,
      aux_sym_footertext_repeat1,
    STATE(173), 1,
      sym_footerline,
    STATE(284), 1,
      sym_footertext,
  [3292] = 3,
    ACTIONS(533), 1,
      anon_sym_LPAREN,
    STATE(145), 1,
      sym_comment,
    ACTIONS(358), 3,
      sym__line_break,
      sym_wsp,
      anon_sym_LT,
  [3304] = 4,
    ACTIONS(310), 1,
      anon_sym_DQUOTE,
    ACTIONS(536), 1,
      sym_wsp,
    STATE(139), 1,
      aux_sym_fws_repeat1,
    ACTIONS(67), 2,
      sym__line_break,
      aux_sym_quoted_string_token1,
  [3318] = 3,
    ACTIONS(306), 1,
      anon_sym_LPAREN,
    STATE(145), 1,
      sym_comment,
    ACTIONS(358), 3,
      sym__line_break,
      sym_wsp,
      anon_sym_COMMA,
  [3330] = 1,
    ACTIONS(404), 5,
      sym__line_break,
      sym_wsp,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_LPAREN,
  [3338] = 1,
    ACTIONS(414), 5,
      sym__line_break,
      sym_wsp,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_LPAREN,
  [3346] = 5,
    ACTIONS(539), 1,
      sym__line_break,
    ACTIONS(541), 1,
      sym_wsp,
    STATE(167), 1,
      aux_sym_fws_repeat1,
    STATE(267), 1,
      sym_fws,
    STATE(268), 1,
      sym_year,
  [3362] = 1,
    ACTIONS(317), 5,
      sym__line_break,
      sym_wsp,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_DOT,
  [3370] = 1,
    ACTIONS(284), 5,
      sym__line_break,
      sym_wsp,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_LPAREN,
  [3378] = 4,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(353), 1,
      anon_sym_LT,
    STATE(134), 1,
      sym_comment,
    ACTIONS(358), 2,
      sym_wsp,
      sym_atom,
  [3392] = 4,
    ACTIONS(543), 1,
      aux_sym_line_token1,
    STATE(183), 1,
      sym_block,
    STATE(288), 1,
      sym_emailbody,
    STATE(148), 2,
      sym_line,
      aux_sym_block_repeat1,
  [3406] = 4,
    ACTIONS(545), 1,
      ts_builtin_sym_end,
    ACTIONS(547), 1,
      aux_sym_line_token1,
    ACTIONS(549), 1,
      sym_footersep,
    STATE(136), 2,
      sym_line,
      aux_sym_block_repeat1,
  [3420] = 5,
    ACTIONS(75), 1,
      aux_sym_quoted_string_token1,
    ACTIONS(325), 1,
      anon_sym_DQUOTE,
    ACTIONS(551), 1,
      sym__line_break,
    ACTIONS(553), 1,
      sym_wsp,
    STATE(139), 1,
      aux_sym_fws_repeat1,
  [3436] = 5,
    ACTIONS(113), 1,
      sym__line_break,
    ACTIONS(115), 1,
      sym_wsp,
    STATE(6), 1,
      aux_sym_fws_repeat1,
    STATE(184), 1,
      sym_zone,
    STATE(223), 1,
      sym_fws,
  [3452] = 4,
    ACTIONS(103), 1,
      aux_sym_quoted_string_token1,
    ACTIONS(420), 1,
      anon_sym_DQUOTE,
    ACTIONS(555), 1,
      sym_wsp,
    STATE(169), 1,
      aux_sym_fws_repeat1,
  [3465] = 3,
    ACTIONS(557), 1,
      aux_sym_day_token1,
    STATE(152), 1,
      aux_sym_day_repeat1,
    ACTIONS(560), 2,
      sym__line_break,
      sym_wsp,
  [3476] = 1,
    ACTIONS(562), 4,
      sym__line_break,
      sym_wsp,
      anon_sym_LT,
      anon_sym_LPAREN,
  [3483] = 3,
    ACTIONS(564), 1,
      aux_sym_year_token2,
    STATE(154), 1,
      aux_sym_year_repeat1,
    ACTIONS(567), 2,
      sym__line_break,
      sym_wsp,
  [3494] = 4,
    ACTIONS(569), 1,
      anon_sym_COMMA,
    ACTIONS(571), 1,
      sym__line_break,
    ACTIONS(573), 1,
      sym_wsp,
    STATE(162), 1,
      aux_sym_lspw_repeat1,
  [3507] = 3,
    ACTIONS(575), 1,
      anon_sym_DOT,
    STATE(163), 1,
      aux_sym_dotatom_text_repeat1,
    ACTIONS(363), 2,
      anon_sym_AT,
      anon_sym_GT,
  [3518] = 4,
    ACTIONS(569), 1,
      sym__bodycontent,
    ACTIONS(577), 1,
      sym__line_break,
    ACTIONS(579), 1,
      sym_wsp,
    STATE(174), 1,
      aux_sym_lspw_repeat1,
  [3531] = 4,
    ACTIONS(581), 1,
      aux_sym_day_token1,
    STATE(99), 1,
      sym_time,
    STATE(150), 1,
      sym_time_of_day,
    STATE(325), 1,
      sym_hour,
  [3544] = 2,
    ACTIONS(440), 1,
      anon_sym_DQUOTE,
    ACTIONS(583), 3,
      sym__line_break,
      sym_wsp,
      aux_sym_quoted_string_token1,
  [3553] = 1,
    ACTIONS(345), 4,
      sym__line_break,
      sym_wsp,
      anon_sym_LT,
      anon_sym_LPAREN,
  [3560] = 3,
    ACTIONS(575), 1,
      anon_sym_DOT,
    STATE(156), 1,
      aux_sym_dotatom_text_repeat1,
    ACTIONS(382), 2,
      anon_sym_AT,
      anon_sym_GT,
  [3571] = 4,
    ACTIONS(585), 1,
      anon_sym_COMMA,
    ACTIONS(587), 1,
      sym__line_break,
    ACTIONS(590), 1,
      sym_wsp,
    STATE(162), 1,
      aux_sym_lspw_repeat1,
  [3584] = 3,
    ACTIONS(593), 1,
      anon_sym_DOT,
    STATE(163), 1,
      aux_sym_dotatom_text_repeat1,
    ACTIONS(317), 2,
      anon_sym_AT,
      anon_sym_GT,
  [3595] = 4,
    ACTIONS(596), 1,
      ts_builtin_sym_end,
    ACTIONS(598), 1,
      aux_sym_domainliteral_token1,
    STATE(164), 1,
      aux_sym_footertext_repeat1,
    STATE(173), 1,
      sym_footerline,
  [3608] = 1,
    ACTIONS(278), 4,
      anon_sym_COMMA,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_SEMI,
  [3615] = 1,
    ACTIONS(601), 4,
      anon_sym_COMMA,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_SEMI,
  [3622] = 4,
    ACTIONS(75), 1,
      aux_sym_year_token1,
    ACTIONS(603), 1,
      sym__line_break,
    ACTIONS(605), 1,
      sym_wsp,
    STATE(168), 1,
      aux_sym_fws_repeat1,
  [3635] = 3,
    ACTIONS(607), 1,
      sym_wsp,
    STATE(168), 1,
      aux_sym_fws_repeat1,
    ACTIONS(67), 2,
      sym__line_break,
      aux_sym_year_token1,
  [3646] = 4,
    ACTIONS(67), 1,
      aux_sym_quoted_string_token1,
    ACTIONS(310), 1,
      anon_sym_DQUOTE,
    ACTIONS(610), 1,
      sym_wsp,
    STATE(169), 1,
      aux_sym_fws_repeat1,
  [3659] = 4,
    ACTIONS(531), 1,
      aux_sym_domainliteral_token1,
    ACTIONS(613), 1,
      ts_builtin_sym_end,
    STATE(164), 1,
      aux_sym_footertext_repeat1,
    STATE(173), 1,
      sym_footerline,
  [3672] = 4,
    ACTIONS(99), 1,
      aux_sym_quoted_string_token1,
    ACTIONS(386), 1,
      anon_sym_DQUOTE,
    ACTIONS(555), 1,
      sym_wsp,
    STATE(169), 1,
      aux_sym_fws_repeat1,
  [3685] = 4,
    ACTIONS(581), 1,
      aux_sym_day_token1,
    STATE(86), 1,
      sym_time,
    STATE(150), 1,
      sym_time_of_day,
    STATE(325), 1,
      sym_hour,
  [3698] = 3,
    ACTIONS(617), 1,
      sym__eof,
    STATE(260), 1,
      sym__eol,
    ACTIONS(615), 2,
      anon_sym_LF,
      anon_sym_CR,
  [3709] = 4,
    ACTIONS(585), 1,
      sym__bodycontent,
    ACTIONS(619), 1,
      sym__line_break,
    ACTIONS(622), 1,
      sym_wsp,
    STATE(174), 1,
      aux_sym_lspw_repeat1,
  [3722] = 3,
    ACTIONS(625), 1,
      sym__bodycontent,
    STATE(33), 1,
      sym_headerentry,
    STATE(34), 1,
      sym__fieldbody,
  [3732] = 1,
    ACTIONS(585), 3,
      sym__line_break,
      sym_wsp,
      anon_sym_COMMA,
  [3738] = 1,
    ACTIONS(627), 3,
      sym__line_break,
      sym_wsp,
      anon_sym_COMMA,
  [3744] = 1,
    ACTIONS(629), 3,
      sym__line_break,
      sym_wsp,
      sym__bodycontent,
  [3750] = 3,
    ACTIONS(103), 1,
      aux_sym_year_token1,
    ACTIONS(631), 1,
      sym_wsp,
    STATE(192), 1,
      aux_sym_fws_repeat1,
  [3760] = 3,
    ACTIONS(99), 1,
      aux_sym_year_token1,
    ACTIONS(631), 1,
      sym_wsp,
    STATE(192), 1,
      aux_sym_fws_repeat1,
  [3770] = 3,
    ACTIONS(633), 1,
      anon_sym_COMMA,
    ACTIONS(635), 1,
      anon_sym_SEMI,
    STATE(204), 1,
      aux_sym_mailbox_list_repeat1,
  [3780] = 2,
    ACTIONS(639), 1,
      sym__eof,
    ACTIONS(637), 2,
      anon_sym_LF,
      anon_sym_CR,
  [3788] = 3,
    ACTIONS(641), 1,
      ts_builtin_sym_end,
    ACTIONS(643), 1,
      sym_footersep,
    STATE(265), 1,
      sym_footer,
  [3798] = 1,
    ACTIONS(645), 3,
      sym__line_break,
      sym_wsp,
      anon_sym_LPAREN,
  [3804] = 3,
    ACTIONS(647), 1,
      aux_sym_ccontent_token1,
    ACTIONS(650), 1,
      anon_sym_RPAREN,
    STATE(185), 1,
      aux_sym_comment_repeat1,
  [3814] = 1,
    ACTIONS(652), 3,
      sym__line_break,
      sym_wsp,
      anon_sym_COMMA,
  [3820] = 1,
    ACTIONS(627), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_SEMI,
  [3826] = 1,
    ACTIONS(654), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_SEMI,
  [3832] = 3,
    ACTIONS(656), 1,
      aux_sym_ccontent_token1,
    ACTIONS(658), 1,
      anon_sym_RPAREN,
    STATE(185), 1,
      aux_sym_comment_repeat1,
  [3842] = 1,
    ACTIONS(601), 3,
      sym__line_break,
      sym_wsp,
      anon_sym_COMMA,
  [3848] = 1,
    ACTIONS(660), 3,
      sym__line_break,
      sym_wsp,
      anon_sym_COMMA,
  [3854] = 3,
    ACTIONS(67), 1,
      aux_sym_year_token1,
    ACTIONS(662), 1,
      sym_wsp,
    STATE(192), 1,
      aux_sym_fws_repeat1,
  [3864] = 1,
    ACTIONS(317), 3,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_DOT,
  [3870] = 1,
    ACTIONS(343), 3,
      sym__line_break,
      sym_wsp,
      anon_sym_COMMA,
  [3876] = 3,
    ACTIONS(625), 1,
      sym__bodycontent,
    STATE(28), 1,
      sym__subjectfield,
    STATE(32), 1,
      sym__fieldbody,
  [3886] = 1,
    ACTIONS(665), 3,
      sym__line_break,
      sym_wsp,
      anon_sym_COMMA,
  [3892] = 3,
    ACTIONS(656), 1,
      aux_sym_ccontent_token1,
    ACTIONS(667), 1,
      anon_sym_RPAREN,
    STATE(203), 1,
      aux_sym_comment_repeat1,
  [3902] = 1,
    ACTIONS(654), 3,
      sym__line_break,
      sym_wsp,
      anon_sym_COMMA,
  [3908] = 1,
    ACTIONS(278), 3,
      sym__line_break,
      sym_wsp,
      anon_sym_COMMA,
  [3914] = 1,
    ACTIONS(669), 3,
      sym__line_break,
      sym_wsp,
      anon_sym_COMMA,
  [3920] = 1,
    ACTIONS(384), 3,
      sym__line_break,
      sym_wsp,
      anon_sym_COMMA,
  [3926] = 2,
    ACTIONS(671), 1,
      ts_builtin_sym_end,
    ACTIONS(673), 2,
      aux_sym_line_token1,
      sym_footersep,
  [3934] = 3,
    ACTIONS(656), 1,
      aux_sym_ccontent_token1,
    ACTIONS(675), 1,
      anon_sym_RPAREN,
    STATE(185), 1,
      aux_sym_comment_repeat1,
  [3944] = 3,
    ACTIONS(633), 1,
      anon_sym_COMMA,
    ACTIONS(677), 1,
      anon_sym_SEMI,
    STATE(217), 1,
      aux_sym_mailbox_list_repeat1,
  [3954] = 3,
    ACTIONS(656), 1,
      aux_sym_ccontent_token1,
    ACTIONS(679), 1,
      anon_sym_RPAREN,
    STATE(210), 1,
      aux_sym_comment_repeat1,
  [3964] = 3,
    ACTIONS(681), 1,
      anon_sym_LT,
    ACTIONS(683), 1,
      sym_atom,
    STATE(54), 1,
      sym_dotatom_text,
  [3974] = 1,
    ACTIONS(685), 3,
      sym__line_break,
      sym_wsp,
      anon_sym_COLON,
  [3980] = 2,
    ACTIONS(687), 1,
      anon_sym_COLON,
    ACTIONS(689), 2,
      sym__line_break,
      sym_wsp,
  [3988] = 1,
    ACTIONS(691), 3,
      sym__line_break,
      sym_wsp,
      anon_sym_COMMA,
  [3994] = 3,
    ACTIONS(656), 1,
      aux_sym_ccontent_token1,
    ACTIONS(693), 1,
      anon_sym_RPAREN,
    STATE(185), 1,
      aux_sym_comment_repeat1,
  [4004] = 1,
    ACTIONS(585), 3,
      sym__line_break,
      sym_wsp,
      sym__bodycontent,
  [4010] = 1,
    ACTIONS(304), 3,
      sym__line_break,
      sym_wsp,
      anon_sym_COMMA,
  [4016] = 3,
    ACTIONS(656), 1,
      aux_sym_ccontent_token1,
    ACTIONS(695), 1,
      anon_sym_RPAREN,
    STATE(215), 1,
      aux_sym_comment_repeat1,
  [4026] = 1,
    ACTIONS(697), 3,
      sym__line_break,
      sym_wsp,
      anon_sym_COMMA,
  [4032] = 3,
    ACTIONS(656), 1,
      aux_sym_ccontent_token1,
    ACTIONS(699), 1,
      anon_sym_RPAREN,
    STATE(185), 1,
      aux_sym_comment_repeat1,
  [4042] = 3,
    ACTIONS(683), 1,
      sym_atom,
    ACTIONS(701), 1,
      anon_sym_LT,
    STATE(54), 1,
      sym_dotatom_text,
  [4052] = 3,
    ACTIONS(703), 1,
      anon_sym_COMMA,
    ACTIONS(706), 1,
      anon_sym_SEMI,
    STATE(217), 1,
      aux_sym_mailbox_list_repeat1,
  [4062] = 3,
    ACTIONS(656), 1,
      aux_sym_ccontent_token1,
    ACTIONS(708), 1,
      anon_sym_RPAREN,
    STATE(189), 1,
      aux_sym_comment_repeat1,
  [4072] = 1,
    ACTIONS(710), 3,
      sym__line_break,
      sym_wsp,
      anon_sym_LPAREN,
  [4078] = 1,
    ACTIONS(712), 3,
      sym__line_break,
      sym_wsp,
      anon_sym_COMMA,
  [4084] = 1,
    ACTIONS(714), 3,
      sym__line_break,
      sym_wsp,
      anon_sym_COMMA,
  [4090] = 1,
    ACTIONS(716), 2,
      sym__line_break,
      sym_wsp,
  [4095] = 1,
    ACTIONS(718), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4100] = 2,
    ACTIONS(720), 1,
      sym_atom,
    STATE(335), 1,
      sym_dotatom_text,
  [4107] = 2,
    ACTIONS(720), 1,
      sym_atom,
    STATE(334), 1,
      sym_dotatom_text,
  [4114] = 2,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    STATE(91), 1,
      sym_comment,
  [4121] = 2,
    ACTIONS(720), 1,
      sym_atom,
    STATE(314), 1,
      sym_dotatom_text,
  [4128] = 2,
    ACTIONS(720), 1,
      sym_atom,
    STATE(313), 1,
      sym_dotatom_text,
  [4135] = 2,
    ACTIONS(722), 1,
      sym_wsp,
    STATE(179), 1,
      aux_sym_fws_repeat1,
  [4142] = 1,
    ACTIONS(706), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [4147] = 2,
    ACTIONS(724), 1,
      sym_wsp,
    STATE(180), 1,
      aux_sym_fws_repeat1,
  [4154] = 2,
    ACTIONS(726), 1,
      aux_sym_day_token1,
    STATE(236), 1,
      sym_second,
  [4161] = 2,
    ACTIONS(306), 1,
      anon_sym_LPAREN,
    STATE(145), 1,
      sym_comment,
  [4168] = 2,
    ACTIONS(728), 1,
      sym_wsp,
    STATE(151), 1,
      aux_sym_fws_repeat1,
  [4175] = 2,
    ACTIONS(730), 1,
      anon_sym_DQUOTE,
    ACTIONS(732), 1,
      aux_sym_quoted_string_token1,
  [4182] = 1,
    ACTIONS(734), 2,
      sym__line_break,
      sym_wsp,
  [4187] = 2,
    ACTIONS(736), 1,
      sym_wsp,
    STATE(171), 1,
      aux_sym_fws_repeat1,
  [4194] = 2,
    ACTIONS(732), 1,
      aux_sym_quoted_string_token1,
    ACTIONS(738), 1,
      anon_sym_DQUOTE,
  [4201] = 1,
    ACTIONS(712), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [4206] = 2,
    ACTIONS(740), 1,
      sym_wsp,
    STATE(85), 1,
      aux_sym_fws_repeat1,
  [4213] = 2,
    ACTIONS(742), 1,
      anon_sym_LPAREN,
    STATE(134), 1,
      sym_comment,
  [4220] = 2,
    ACTIONS(720), 1,
      sym_atom,
    STATE(286), 1,
      sym_dotatom_text,
  [4227] = 2,
    ACTIONS(650), 1,
      anon_sym_RPAREN,
    ACTIONS(744), 1,
      aux_sym_ccontent_token1,
  [4234] = 2,
    ACTIONS(720), 1,
      sym_atom,
    STATE(302), 1,
      sym_dotatom_text,
  [4241] = 1,
    ACTIONS(746), 2,
      sym__line_break,
      sym_wsp,
  [4246] = 2,
    ACTIONS(748), 1,
      sym_wsp,
    STATE(13), 1,
      aux_sym_fws_repeat1,
  [4253] = 1,
    ACTIONS(652), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [4258] = 2,
    ACTIONS(410), 1,
      anon_sym_DQUOTE,
    ACTIONS(732), 1,
      aux_sym_quoted_string_token1,
  [4265] = 2,
    ACTIONS(280), 1,
      sym_atom,
    STATE(74), 1,
      sym_dotatom_text,
  [4272] = 2,
    ACTIONS(750), 1,
      sym_wsp,
    STATE(96), 1,
      aux_sym_fws_repeat1,
  [4279] = 2,
    ACTIONS(752), 1,
      sym_wsp,
    STATE(10), 1,
      aux_sym_fws_repeat1,
  [4286] = 2,
    ACTIONS(451), 1,
      anon_sym_DQUOTE,
    ACTIONS(732), 1,
      aux_sym_quoted_string_token1,
  [4293] = 2,
    ACTIONS(221), 1,
      sym_atom,
    STATE(54), 1,
      sym_dotatom_text,
  [4300] = 2,
    ACTIONS(720), 1,
      sym_atom,
    STATE(309), 1,
      sym_dotatom_text,
  [4307] = 2,
    ACTIONS(404), 1,
      aux_sym_ccontent_token1,
    ACTIONS(478), 1,
      anon_sym_RPAREN,
  [4314] = 2,
    ACTIONS(720), 1,
      sym_atom,
    STATE(333), 1,
      sym_dotatom_text,
  [4321] = 2,
    ACTIONS(270), 1,
      aux_sym_day_token1,
    STATE(130), 1,
      aux_sym_day_repeat1,
  [4328] = 1,
    ACTIONS(665), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [4333] = 2,
    ACTIONS(754), 1,
      aux_sym_day_token1,
    STATE(208), 1,
      sym_minute,
  [4340] = 1,
    ACTIONS(596), 2,
      ts_builtin_sym_end,
      aux_sym_domainliteral_token1,
  [4345] = 1,
    ACTIONS(697), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [4350] = 2,
    ACTIONS(414), 1,
      aux_sym_ccontent_token1,
    ACTIONS(499), 1,
      anon_sym_RPAREN,
  [4357] = 1,
    ACTIONS(343), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [4362] = 2,
    ACTIONS(756), 1,
      ts_builtin_sym_end,
    ACTIONS(758), 1,
      sym__line_break,
  [4369] = 1,
    ACTIONS(760), 1,
      ts_builtin_sym_end,
  [4373] = 1,
    ACTIONS(121), 1,
      sym_wsp,
  [4377] = 1,
    ACTIONS(762), 1,
      aux_sym_year_token1,
  [4381] = 1,
    ACTIONS(764), 1,
      aux_sym_day_token1,
  [4385] = 1,
    ACTIONS(408), 1,
      anon_sym_AT,
  [4389] = 1,
    ACTIONS(766), 1,
      anon_sym_COLON,
  [4393] = 1,
    ACTIONS(768), 1,
      anon_sym_COLON,
  [4397] = 1,
    ACTIONS(345), 1,
      sym__line_break,
  [4401] = 1,
    ACTIONS(770), 1,
      anon_sym_COLON,
  [4405] = 1,
    ACTIONS(562), 1,
      sym__line_break,
  [4409] = 1,
    ACTIONS(772), 1,
      anon_sym_COLON,
  [4413] = 1,
    ACTIONS(774), 1,
      anon_sym_COLON,
  [4417] = 1,
    ACTIONS(776), 1,
      sym__line_break,
  [4421] = 1,
    ACTIONS(778), 1,
      anon_sym_COLON,
  [4425] = 1,
    ACTIONS(780), 1,
      anon_sym_COLON,
  [4429] = 1,
    ACTIONS(782), 1,
      ts_builtin_sym_end,
  [4433] = 1,
    ACTIONS(784), 1,
      aux_sym_year_token1,
  [4437] = 1,
    ACTIONS(786), 1,
      anon_sym_COLON,
  [4441] = 1,
    ACTIONS(434), 1,
      anon_sym_AT,
  [4445] = 1,
    ACTIONS(788), 1,
      ts_builtin_sym_end,
  [4449] = 1,
    ACTIONS(790), 1,
      anon_sym_COLON,
  [4453] = 1,
    ACTIONS(792), 1,
      anon_sym_AT,
  [4457] = 1,
    ACTIONS(794), 1,
      anon_sym_COLON,
  [4461] = 1,
    ACTIONS(796), 1,
      ts_builtin_sym_end,
  [4465] = 1,
    ACTIONS(798), 1,
      anon_sym_COLON,
  [4469] = 1,
    ACTIONS(800), 1,
      anon_sym_GT,
  [4473] = 1,
    ACTIONS(802), 1,
      anon_sym_COMMA,
  [4477] = 1,
    ACTIONS(804), 1,
      anon_sym_SEMI,
  [4481] = 1,
    ACTIONS(806), 1,
      anon_sym_SEMI,
  [4485] = 1,
    ACTIONS(131), 1,
      sym_wsp,
  [4489] = 1,
    ACTIONS(808), 1,
      sym_atom,
  [4493] = 1,
    ACTIONS(732), 1,
      aux_sym_quoted_string_token1,
  [4497] = 1,
    ACTIONS(810), 1,
      anon_sym_COMMA,
  [4501] = 1,
    ACTIONS(812), 1,
      anon_sym_LT,
  [4505] = 1,
    ACTIONS(814), 1,
      anon_sym_GT,
  [4509] = 1,
    ACTIONS(816), 1,
      sym__bodycontent,
  [4513] = 1,
    ACTIONS(818), 1,
      anon_sym_COLON,
  [4517] = 1,
    ACTIONS(820), 1,
      anon_sym_GT,
  [4521] = 1,
    ACTIONS(822), 1,
      anon_sym_SEMI,
  [4525] = 1,
    ACTIONS(824), 1,
      anon_sym_GT,
  [4529] = 1,
    ACTIONS(826), 1,
      sym_atom,
  [4533] = 1,
    ACTIONS(828), 1,
      anon_sym_COLON,
  [4537] = 1,
    ACTIONS(830), 1,
      anon_sym_COLON,
  [4541] = 1,
    ACTIONS(832), 1,
      anon_sym_COLON,
  [4545] = 1,
    ACTIONS(834), 1,
      anon_sym_AT,
  [4549] = 1,
    ACTIONS(438), 1,
      anon_sym_AT,
  [4553] = 1,
    ACTIONS(836), 1,
      anon_sym_LT,
  [4557] = 1,
    ACTIONS(838), 1,
      anon_sym_GT,
  [4561] = 1,
    ACTIONS(840), 1,
      anon_sym_GT,
  [4565] = 1,
    ACTIONS(842), 1,
      anon_sym_GT,
  [4569] = 1,
    ACTIONS(844), 1,
      anon_sym_COLON,
  [4573] = 1,
    ACTIONS(846), 1,
      anon_sym_COLON,
  [4577] = 1,
    ACTIONS(848), 1,
      sym_atom,
  [4581] = 1,
    ACTIONS(850), 1,
      anon_sym_AT,
  [4585] = 1,
    ACTIONS(852), 1,
      aux_sym_day_token1,
  [4589] = 1,
    ACTIONS(854), 1,
      sym_atom,
  [4593] = 1,
    ACTIONS(856), 1,
      anon_sym_AT,
  [4597] = 1,
    ACTIONS(858), 1,
      sym__line_break,
  [4601] = 1,
    ACTIONS(860), 1,
      anon_sym_COLON,
  [4605] = 1,
    ACTIONS(862), 1,
      aux_sym_day_token1,
  [4609] = 1,
    ACTIONS(864), 1,
      anon_sym_COLON,
  [4613] = 1,
    ACTIONS(866), 1,
      sym__line_break,
  [4617] = 1,
    ACTIONS(868), 1,
      anon_sym_COLON,
  [4621] = 1,
    ACTIONS(870), 1,
      anon_sym_AT,
  [4625] = 1,
    ACTIONS(872), 1,
      anon_sym_COLON,
  [4629] = 1,
    ACTIONS(874), 1,
      anon_sym_LT,
  [4633] = 1,
    ACTIONS(876), 1,
      anon_sym_COMMA,
  [4637] = 1,
    ACTIONS(878), 1,
      sym__line_break,
  [4641] = 1,
    ACTIONS(880), 1,
      anon_sym_GT,
  [4645] = 1,
    ACTIONS(882), 1,
      anon_sym_AT,
  [4649] = 1,
    ACTIONS(884), 1,
      anon_sym_AT,
  [4653] = 1,
    ACTIONS(886), 1,
      anon_sym_COMMA,
  [4657] = 1,
    ACTIONS(888), 1,
      anon_sym_COMMA,
  [4661] = 1,
    ACTIONS(890), 1,
      anon_sym_LT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 77,
  [SMALL_STATE(4)] = 154,
  [SMALL_STATE(5)] = 190,
  [SMALL_STATE(6)] = 225,
  [SMALL_STATE(7)] = 259,
  [SMALL_STATE(8)] = 327,
  [SMALL_STATE(9)] = 397,
  [SMALL_STATE(10)] = 467,
  [SMALL_STATE(11)] = 498,
  [SMALL_STATE(12)] = 563,
  [SMALL_STATE(13)] = 628,
  [SMALL_STATE(14)] = 659,
  [SMALL_STATE(15)] = 720,
  [SMALL_STATE(16)] = 775,
  [SMALL_STATE(17)] = 830,
  [SMALL_STATE(18)] = 882,
  [SMALL_STATE(19)] = 928,
  [SMALL_STATE(20)] = 980,
  [SMALL_STATE(21)] = 1002,
  [SMALL_STATE(22)] = 1024,
  [SMALL_STATE(23)] = 1046,
  [SMALL_STATE(24)] = 1068,
  [SMALL_STATE(25)] = 1105,
  [SMALL_STATE(26)] = 1124,
  [SMALL_STATE(27)] = 1143,
  [SMALL_STATE(28)] = 1162,
  [SMALL_STATE(29)] = 1181,
  [SMALL_STATE(30)] = 1200,
  [SMALL_STATE(31)] = 1219,
  [SMALL_STATE(32)] = 1238,
  [SMALL_STATE(33)] = 1257,
  [SMALL_STATE(34)] = 1276,
  [SMALL_STATE(35)] = 1295,
  [SMALL_STATE(36)] = 1332,
  [SMALL_STATE(37)] = 1351,
  [SMALL_STATE(38)] = 1385,
  [SMALL_STATE(39)] = 1421,
  [SMALL_STATE(40)] = 1455,
  [SMALL_STATE(41)] = 1491,
  [SMALL_STATE(42)] = 1509,
  [SMALL_STATE(43)] = 1545,
  [SMALL_STATE(44)] = 1581,
  [SMALL_STATE(45)] = 1596,
  [SMALL_STATE(46)] = 1611,
  [SMALL_STATE(47)] = 1638,
  [SMALL_STATE(48)] = 1663,
  [SMALL_STATE(49)] = 1684,
  [SMALL_STATE(50)] = 1711,
  [SMALL_STATE(51)] = 1738,
  [SMALL_STATE(52)] = 1757,
  [SMALL_STATE(53)] = 1786,
  [SMALL_STATE(54)] = 1811,
  [SMALL_STATE(55)] = 1834,
  [SMALL_STATE(56)] = 1863,
  [SMALL_STATE(57)] = 1886,
  [SMALL_STATE(58)] = 1904,
  [SMALL_STATE(59)] = 1930,
  [SMALL_STATE(60)] = 1956,
  [SMALL_STATE(61)] = 1978,
  [SMALL_STATE(62)] = 2004,
  [SMALL_STATE(63)] = 2025,
  [SMALL_STATE(64)] = 2042,
  [SMALL_STATE(65)] = 2063,
  [SMALL_STATE(66)] = 2078,
  [SMALL_STATE(67)] = 2099,
  [SMALL_STATE(68)] = 2124,
  [SMALL_STATE(69)] = 2141,
  [SMALL_STATE(70)] = 2162,
  [SMALL_STATE(71)] = 2183,
  [SMALL_STATE(72)] = 2204,
  [SMALL_STATE(73)] = 2225,
  [SMALL_STATE(74)] = 2242,
  [SMALL_STATE(75)] = 2263,
  [SMALL_STATE(76)] = 2278,
  [SMALL_STATE(77)] = 2299,
  [SMALL_STATE(78)] = 2318,
  [SMALL_STATE(79)] = 2341,
  [SMALL_STATE(80)] = 2362,
  [SMALL_STATE(81)] = 2385,
  [SMALL_STATE(82)] = 2406,
  [SMALL_STATE(83)] = 2421,
  [SMALL_STATE(84)] = 2436,
  [SMALL_STATE(85)] = 2457,
  [SMALL_STATE(86)] = 2471,
  [SMALL_STATE(87)] = 2491,
  [SMALL_STATE(88)] = 2513,
  [SMALL_STATE(89)] = 2527,
  [SMALL_STATE(90)] = 2541,
  [SMALL_STATE(91)] = 2551,
  [SMALL_STATE(92)] = 2561,
  [SMALL_STATE(93)] = 2573,
  [SMALL_STATE(94)] = 2595,
  [SMALL_STATE(95)] = 2605,
  [SMALL_STATE(96)] = 2627,
  [SMALL_STATE(97)] = 2641,
  [SMALL_STATE(98)] = 2657,
  [SMALL_STATE(99)] = 2671,
  [SMALL_STATE(100)] = 2691,
  [SMALL_STATE(101)] = 2701,
  [SMALL_STATE(102)] = 2719,
  [SMALL_STATE(103)] = 2735,
  [SMALL_STATE(104)] = 2747,
  [SMALL_STATE(105)] = 2759,
  [SMALL_STATE(106)] = 2781,
  [SMALL_STATE(107)] = 2803,
  [SMALL_STATE(108)] = 2819,
  [SMALL_STATE(109)] = 2837,
  [SMALL_STATE(110)] = 2853,
  [SMALL_STATE(111)] = 2873,
  [SMALL_STATE(112)] = 2893,
  [SMALL_STATE(113)] = 2913,
  [SMALL_STATE(114)] = 2924,
  [SMALL_STATE(115)] = 2937,
  [SMALL_STATE(116)] = 2956,
  [SMALL_STATE(117)] = 2969,
  [SMALL_STATE(118)] = 2982,
  [SMALL_STATE(119)] = 2993,
  [SMALL_STATE(120)] = 3012,
  [SMALL_STATE(121)] = 3023,
  [SMALL_STATE(122)] = 3036,
  [SMALL_STATE(123)] = 3055,
  [SMALL_STATE(124)] = 3066,
  [SMALL_STATE(125)] = 3079,
  [SMALL_STATE(126)] = 3098,
  [SMALL_STATE(127)] = 3117,
  [SMALL_STATE(128)] = 3136,
  [SMALL_STATE(129)] = 3155,
  [SMALL_STATE(130)] = 3166,
  [SMALL_STATE(131)] = 3185,
  [SMALL_STATE(132)] = 3196,
  [SMALL_STATE(133)] = 3213,
  [SMALL_STATE(134)] = 3232,
  [SMALL_STATE(135)] = 3243,
  [SMALL_STATE(136)] = 3262,
  [SMALL_STATE(137)] = 3276,
  [SMALL_STATE(138)] = 3292,
  [SMALL_STATE(139)] = 3304,
  [SMALL_STATE(140)] = 3318,
  [SMALL_STATE(141)] = 3330,
  [SMALL_STATE(142)] = 3338,
  [SMALL_STATE(143)] = 3346,
  [SMALL_STATE(144)] = 3362,
  [SMALL_STATE(145)] = 3370,
  [SMALL_STATE(146)] = 3378,
  [SMALL_STATE(147)] = 3392,
  [SMALL_STATE(148)] = 3406,
  [SMALL_STATE(149)] = 3420,
  [SMALL_STATE(150)] = 3436,
  [SMALL_STATE(151)] = 3452,
  [SMALL_STATE(152)] = 3465,
  [SMALL_STATE(153)] = 3476,
  [SMALL_STATE(154)] = 3483,
  [SMALL_STATE(155)] = 3494,
  [SMALL_STATE(156)] = 3507,
  [SMALL_STATE(157)] = 3518,
  [SMALL_STATE(158)] = 3531,
  [SMALL_STATE(159)] = 3544,
  [SMALL_STATE(160)] = 3553,
  [SMALL_STATE(161)] = 3560,
  [SMALL_STATE(162)] = 3571,
  [SMALL_STATE(163)] = 3584,
  [SMALL_STATE(164)] = 3595,
  [SMALL_STATE(165)] = 3608,
  [SMALL_STATE(166)] = 3615,
  [SMALL_STATE(167)] = 3622,
  [SMALL_STATE(168)] = 3635,
  [SMALL_STATE(169)] = 3646,
  [SMALL_STATE(170)] = 3659,
  [SMALL_STATE(171)] = 3672,
  [SMALL_STATE(172)] = 3685,
  [SMALL_STATE(173)] = 3698,
  [SMALL_STATE(174)] = 3709,
  [SMALL_STATE(175)] = 3722,
  [SMALL_STATE(176)] = 3732,
  [SMALL_STATE(177)] = 3738,
  [SMALL_STATE(178)] = 3744,
  [SMALL_STATE(179)] = 3750,
  [SMALL_STATE(180)] = 3760,
  [SMALL_STATE(181)] = 3770,
  [SMALL_STATE(182)] = 3780,
  [SMALL_STATE(183)] = 3788,
  [SMALL_STATE(184)] = 3798,
  [SMALL_STATE(185)] = 3804,
  [SMALL_STATE(186)] = 3814,
  [SMALL_STATE(187)] = 3820,
  [SMALL_STATE(188)] = 3826,
  [SMALL_STATE(189)] = 3832,
  [SMALL_STATE(190)] = 3842,
  [SMALL_STATE(191)] = 3848,
  [SMALL_STATE(192)] = 3854,
  [SMALL_STATE(193)] = 3864,
  [SMALL_STATE(194)] = 3870,
  [SMALL_STATE(195)] = 3876,
  [SMALL_STATE(196)] = 3886,
  [SMALL_STATE(197)] = 3892,
  [SMALL_STATE(198)] = 3902,
  [SMALL_STATE(199)] = 3908,
  [SMALL_STATE(200)] = 3914,
  [SMALL_STATE(201)] = 3920,
  [SMALL_STATE(202)] = 3926,
  [SMALL_STATE(203)] = 3934,
  [SMALL_STATE(204)] = 3944,
  [SMALL_STATE(205)] = 3954,
  [SMALL_STATE(206)] = 3964,
  [SMALL_STATE(207)] = 3974,
  [SMALL_STATE(208)] = 3980,
  [SMALL_STATE(209)] = 3988,
  [SMALL_STATE(210)] = 3994,
  [SMALL_STATE(211)] = 4004,
  [SMALL_STATE(212)] = 4010,
  [SMALL_STATE(213)] = 4016,
  [SMALL_STATE(214)] = 4026,
  [SMALL_STATE(215)] = 4032,
  [SMALL_STATE(216)] = 4042,
  [SMALL_STATE(217)] = 4052,
  [SMALL_STATE(218)] = 4062,
  [SMALL_STATE(219)] = 4072,
  [SMALL_STATE(220)] = 4078,
  [SMALL_STATE(221)] = 4084,
  [SMALL_STATE(222)] = 4090,
  [SMALL_STATE(223)] = 4095,
  [SMALL_STATE(224)] = 4100,
  [SMALL_STATE(225)] = 4107,
  [SMALL_STATE(226)] = 4114,
  [SMALL_STATE(227)] = 4121,
  [SMALL_STATE(228)] = 4128,
  [SMALL_STATE(229)] = 4135,
  [SMALL_STATE(230)] = 4142,
  [SMALL_STATE(231)] = 4147,
  [SMALL_STATE(232)] = 4154,
  [SMALL_STATE(233)] = 4161,
  [SMALL_STATE(234)] = 4168,
  [SMALL_STATE(235)] = 4175,
  [SMALL_STATE(236)] = 4182,
  [SMALL_STATE(237)] = 4187,
  [SMALL_STATE(238)] = 4194,
  [SMALL_STATE(239)] = 4201,
  [SMALL_STATE(240)] = 4206,
  [SMALL_STATE(241)] = 4213,
  [SMALL_STATE(242)] = 4220,
  [SMALL_STATE(243)] = 4227,
  [SMALL_STATE(244)] = 4234,
  [SMALL_STATE(245)] = 4241,
  [SMALL_STATE(246)] = 4246,
  [SMALL_STATE(247)] = 4253,
  [SMALL_STATE(248)] = 4258,
  [SMALL_STATE(249)] = 4265,
  [SMALL_STATE(250)] = 4272,
  [SMALL_STATE(251)] = 4279,
  [SMALL_STATE(252)] = 4286,
  [SMALL_STATE(253)] = 4293,
  [SMALL_STATE(254)] = 4300,
  [SMALL_STATE(255)] = 4307,
  [SMALL_STATE(256)] = 4314,
  [SMALL_STATE(257)] = 4321,
  [SMALL_STATE(258)] = 4328,
  [SMALL_STATE(259)] = 4333,
  [SMALL_STATE(260)] = 4340,
  [SMALL_STATE(261)] = 4345,
  [SMALL_STATE(262)] = 4350,
  [SMALL_STATE(263)] = 4357,
  [SMALL_STATE(264)] = 4362,
  [SMALL_STATE(265)] = 4369,
  [SMALL_STATE(266)] = 4373,
  [SMALL_STATE(267)] = 4377,
  [SMALL_STATE(268)] = 4381,
  [SMALL_STATE(269)] = 4385,
  [SMALL_STATE(270)] = 4389,
  [SMALL_STATE(271)] = 4393,
  [SMALL_STATE(272)] = 4397,
  [SMALL_STATE(273)] = 4401,
  [SMALL_STATE(274)] = 4405,
  [SMALL_STATE(275)] = 4409,
  [SMALL_STATE(276)] = 4413,
  [SMALL_STATE(277)] = 4417,
  [SMALL_STATE(278)] = 4421,
  [SMALL_STATE(279)] = 4425,
  [SMALL_STATE(280)] = 4429,
  [SMALL_STATE(281)] = 4433,
  [SMALL_STATE(282)] = 4437,
  [SMALL_STATE(283)] = 4441,
  [SMALL_STATE(284)] = 4445,
  [SMALL_STATE(285)] = 4449,
  [SMALL_STATE(286)] = 4453,
  [SMALL_STATE(287)] = 4457,
  [SMALL_STATE(288)] = 4461,
  [SMALL_STATE(289)] = 4465,
  [SMALL_STATE(290)] = 4469,
  [SMALL_STATE(291)] = 4473,
  [SMALL_STATE(292)] = 4477,
  [SMALL_STATE(293)] = 4481,
  [SMALL_STATE(294)] = 4485,
  [SMALL_STATE(295)] = 4489,
  [SMALL_STATE(296)] = 4493,
  [SMALL_STATE(297)] = 4497,
  [SMALL_STATE(298)] = 4501,
  [SMALL_STATE(299)] = 4505,
  [SMALL_STATE(300)] = 4509,
  [SMALL_STATE(301)] = 4513,
  [SMALL_STATE(302)] = 4517,
  [SMALL_STATE(303)] = 4521,
  [SMALL_STATE(304)] = 4525,
  [SMALL_STATE(305)] = 4529,
  [SMALL_STATE(306)] = 4533,
  [SMALL_STATE(307)] = 4537,
  [SMALL_STATE(308)] = 4541,
  [SMALL_STATE(309)] = 4545,
  [SMALL_STATE(310)] = 4549,
  [SMALL_STATE(311)] = 4553,
  [SMALL_STATE(312)] = 4557,
  [SMALL_STATE(313)] = 4561,
  [SMALL_STATE(314)] = 4565,
  [SMALL_STATE(315)] = 4569,
  [SMALL_STATE(316)] = 4573,
  [SMALL_STATE(317)] = 4577,
  [SMALL_STATE(318)] = 4581,
  [SMALL_STATE(319)] = 4585,
  [SMALL_STATE(320)] = 4589,
  [SMALL_STATE(321)] = 4593,
  [SMALL_STATE(322)] = 4597,
  [SMALL_STATE(323)] = 4601,
  [SMALL_STATE(324)] = 4605,
  [SMALL_STATE(325)] = 4609,
  [SMALL_STATE(326)] = 4613,
  [SMALL_STATE(327)] = 4617,
  [SMALL_STATE(328)] = 4621,
  [SMALL_STATE(329)] = 4625,
  [SMALL_STATE(330)] = 4629,
  [SMALL_STATE(331)] = 4633,
  [SMALL_STATE(332)] = 4637,
  [SMALL_STATE(333)] = 4641,
  [SMALL_STATE(334)] = 4645,
  [SMALL_STATE(335)] = 4649,
  [SMALL_STATE(336)] = 4653,
  [SMALL_STATE(337)] = 4657,
  [SMALL_STATE(338)] = 4661,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(306),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(329),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(327),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(316),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(315),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(308),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(307),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(301),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(289),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(287),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(285),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(282),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headers, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fws_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fws_repeat1, 2), SHIFT_REPEAT(4),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fws_repeat1, 2), SHIFT_REPEAT(5),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fws, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fws, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fws, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addresslist, 3),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addresslist, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addresslist, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addresslist, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fieldbody, 3),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fieldbody, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fieldbody, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fieldbody, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_phrase, 1),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_phrase, 1), SHIFT(197),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_phrase, 1), SHIFT(146),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dateheader, 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dateheader, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addressheader, 3),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addressheader, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_field, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_references_field, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subjectheader, 3),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subjectheader, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datefield, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__datefield, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_idfield, 2),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_idfield, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_midheader, 3),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_midheader, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__subjectfield, 1, .production_id = 1),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__subjectfield, 1, .production_id = 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headerentry, 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headerentry, 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_phrase_repeat1, 2),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_phrase_repeat1, 2), SHIFT_REPEAT(197),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_phrase_repeat1, 2), SHIFT_REPEAT(53),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_phrase_repeat1, 2), SHIFT_REPEAT(87),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_phrase_repeat1, 2), SHIFT_REPEAT(146),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref, 3),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ref, 3),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom2, 1),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotatom_text, 1),
  [209] = {.entry = {.count = 3, .reusable = false}}, REDUCE(sym_atom2, 1), REDUCE(sym_dotatom_text, 1), SHIFT(197),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom2, 1),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [217] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym_atom2, 1), REDUCE(sym_dotatom_text, 1), SHIFT(102),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom2, 2),
  [227] = {.entry = {.count = 3, .reusable = false}}, REDUCE(sym_dotatom_text, 1), REDUCE(sym_atom2, 2), SHIFT(197),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom2, 2),
  [233] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym_dotatom_text, 1), REDUCE(sym_atom2, 2), SHIFT(102),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_day, 3),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_day, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [251] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_atom2, 2), SHIFT(197),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_atom2, 2), SHIFT(102),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cfws, 1),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_references_field_repeat1, 2), SHIFT_REPEAT(242),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_references_field_repeat1, 2), SHIFT_REPEAT(218),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_references_field_repeat1, 2),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_references_field_repeat1, 2), SHIFT_REPEAT(83),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_atom2, 1), SHIFT(197),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_atom2, 1), SHIFT(102),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotatom, 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotatom, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cfws_repeat1, 2),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cfws_repeat1, 2), SHIFT_REPEAT(218),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cfws_repeat1, 2), SHIFT_REPEAT(226),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cfws, 1),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailgroup, 5),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_fws_repeat1, 2),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fws_repeat1, 2), SHIFT_REPEAT(63),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_angle_addr, 3),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dotatom_text_repeat1, 2),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotatom_text_repeat1, 2), SHIFT_REPEAT(295),
  [322] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_fws, 1), REDUCE(sym_cfws, 1),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fws, 1),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_fws, 1), REDUCE(sym_cfws, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fws_repeat1, 2), SHIFT_REPEAT(68),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msg_id, 5),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_msg_id, 5), SHIFT(213),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_msg_id, 5), SHIFT(138),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_angle_addr, 4),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msg_id, 6),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_msg_id, 6), SHIFT(213),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_msg_id, 6), SHIFT(138),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_fws_repeat1, 1),
  [355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fws_repeat1, 1), SHIFT(197),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fws_repeat1, 1),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_dotatom, 2), SHIFT(140),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotatom_text, 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailgroup, 3),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cfws_repeat1, 2),
  [371] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cfws_repeat1, 2), SHIFT_REPEAT(197),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cfws_repeat1, 2), SHIFT_REPEAT(241),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_dotatom, 1), SHIFT(140),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotatom_text, 1),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailgroup, 4),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fws, 2),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date_time, 4),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 1),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local, 1),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 4),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 4),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fws, 3),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cfws, 2),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cfws, 2),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date_time, 2),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 3),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 2),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(105),
  [445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(237),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(149),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cfws_repeat1, 2), SHIFT_REPEAT(213),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cfws_repeat1, 2), SHIFT_REPEAT(233),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom2, 3),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom2, 3),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [473] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotatom_text_repeat1, 2), SHIFT_REPEAT(320),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_addresslist_repeat1, 2), SHIFT_REPEAT(12),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_addresslist_repeat1, 2), SHIFT_REPEAT(266),
  [486] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_addresslist_repeat1, 2), SHIFT_REPEAT(155),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 1),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 1),
  [509] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__fieldbody_repeat1, 2), SHIFT_REPEAT(133),
  [512] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__fieldbody_repeat1, 2), SHIFT_REPEAT(294),
  [515] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__fieldbody_repeat1, 2), SHIFT_REPEAT(157),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [524] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(202),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 1),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fws_repeat1, 1), SHIFT(213),
  [536] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fws_repeat1, 2), SHIFT_REPEAT(139),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [557] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_day_repeat1, 2), SHIFT_REPEAT(152),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_day_repeat1, 2),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msg_id, 7),
  [564] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_year_repeat1, 2), SHIFT_REPEAT(154),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_year_repeat1, 2),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lspw, 1),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quoted_string_repeat1, 2),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lspw_repeat1, 2),
  [587] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lspw_repeat1, 2), SHIFT_REPEAT(266),
  [590] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lspw_repeat1, 2), SHIFT_REPEAT(162),
  [593] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotatom_text_repeat1, 2), SHIFT_REPEAT(305),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_footertext_repeat1, 2),
  [598] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_footertext_repeat1, 2), SHIFT_REPEAT(182),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotatom, 3),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [607] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fws_repeat1, 2), SHIFT_REPEAT(168),
  [610] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fws_repeat1, 2), SHIFT_REPEAT(169),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footertext, 1),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [619] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lspw_repeat1, 2), SHIFT_REPEAT(294),
  [622] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lspw_repeat1, 2), SHIFT_REPEAT(174),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain, 1),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__fieldbody_repeat1, 2),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailbox_list, 1),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footerline, 1),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footerline, 1),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_emailbody, 1),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 2),
  [647] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(132),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailbox, 2),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addrspec, 3),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_addresslist_repeat1, 2),
  [662] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fws_repeat1, 2), SHIFT_REPEAT(192),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailbox, 3),
  [667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_addresslist_repeat1, 3),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailbox_list, 2),
  [679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_minute, 1),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time_of_day, 3),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailgroup, 6),
  [693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_angle_addr, 5),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [703] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mailbox_list_repeat1, 2), SHIFT_REPEAT(14),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mailbox_list_repeat1, 2),
  [708] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_zone, 3),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailbox, 1),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_internetaddress, 1),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_month, 1),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time_of_day, 5),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_second, 1),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 1),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_emailbody, 2),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datefield, 3),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_midkind, 1),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addrkind, 1),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date_time, 3),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [782] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 2),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 1),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 3),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references, 1),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_day_of_week, 2),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_list, 1),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_reply_to, 1),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_to, 1),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_id, 1),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replyto, 1),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sender, 1),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bcc, 1),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_year, 4),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local, 1),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hour, 1),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_year, 3),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date_time, 5),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cc, 1),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 1),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_day_name, 1),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_day_of_week, 1),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
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
