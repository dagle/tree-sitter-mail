#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 336
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 147
#define ALIAS_COUNT 1
#define TOKEN_COUNT 63
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
  sym_atom = 52,
  anon_sym_DOT = 53,
  anon_sym_LBRACK = 54,
  anon_sym_RBRACK = 55,
  anon_sym_DQUOTE = 56,
  aux_sym_quoted_string_token1 = 57,
  sym__text = 58,
  sym__quote = 59,
  sym_footersep = 60,
  sym__line_break = 61,
  sym__eof = 62,
  sym_message = 63,
  sym_headers = 64,
  sym_header = 65,
  sym_addressheader = 66,
  sym_dateheader = 67,
  sym_subjectheader = 68,
  sym_midheader = 69,
  sym_ref = 70,
  sym_midkind = 71,
  sym_addrkind = 72,
  sym_to = 73,
  sym_from = 74,
  sym_cc = 75,
  sym_bcc = 76,
  sym_sender = 77,
  sym_replyto = 78,
  sym_message_id = 79,
  sym_in_reply_to = 80,
  sym_references = 81,
  sym_date = 82,
  sym_subject = 83,
  sym__subjectfield = 84,
  sym__datefield = 85,
  sym_headerentry = 86,
  sym_date_time = 87,
  sym_day_of_week = 88,
  sym_day_name = 89,
  sym_datefield = 90,
  sym_day = 91,
  sym_month = 92,
  sym_year = 93,
  sym_time = 94,
  sym_time_of_day = 95,
  sym_hour = 96,
  sym_minute = 97,
  sym_second = 98,
  sym_zone = 99,
  sym_message_idfield = 100,
  sym_references_field = 101,
  sym_msg_id = 102,
  sym_comment = 103,
  sym_line_break = 104,
  sym_fws = 105,
  sym_cfws = 106,
  sym__fieldbody = 107,
  sym_addresslist = 108,
  sym_internetaddress = 109,
  sym_mailgroup = 110,
  sym_group_list = 111,
  sym_mailbox_list = 112,
  sym_mailbox = 113,
  sym_angle_addr = 114,
  sym_addrspec = 115,
  sym_domain = 116,
  sym_local = 117,
  sym_phrase = 118,
  sym_word = 119,
  sym_atom2 = 120,
  sym_dotatom = 121,
  sym_dotatom_text = 122,
  sym_quoted_string = 123,
  sym_emailbody = 124,
  sym_blocks = 125,
  sym_block = 126,
  sym_line = 127,
  sym_quote1 = 128,
  sym_quote2 = 129,
  aux_sym_headers_repeat1 = 130,
  aux_sym_year_repeat1 = 131,
  aux_sym_references_field_repeat1 = 132,
  aux_sym_comment_repeat1 = 133,
  aux_sym_fws_repeat1 = 134,
  aux_sym_cfws_repeat1 = 135,
  aux_sym_cfws_repeat2 = 136,
  aux_sym__fieldbody_repeat1 = 137,
  aux_sym_addresslist_repeat1 = 138,
  aux_sym_mailbox_list_repeat1 = 139,
  aux_sym_phrase_repeat1 = 140,
  aux_sym_dotatom_text_repeat1 = 141,
  aux_sym_quoted_string_repeat1 = 142,
  aux_sym_blocks_repeat1 = 143,
  aux_sym_block_repeat1 = 144,
  aux_sym_block_repeat2 = 145,
  aux_sym_block_repeat3 = 146,
  alias_sym_subjectfield = 147,
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
  [sym_atom] = "atom",
  [anon_sym_DOT] = ".",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_string_token1] = "quoted_string_token1",
  [sym__text] = "_text",
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
  [sym_blocks] = "blocks",
  [sym_block] = "block",
  [sym_line] = "line",
  [sym_quote1] = "quote1",
  [sym_quote2] = "quote2",
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
  [aux_sym_blocks_repeat1] = "blocks_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_block_repeat2] = "block_repeat2",
  [aux_sym_block_repeat3] = "block_repeat3",
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
  [sym_atom] = sym_atom,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_string_token1] = aux_sym_quoted_string_token1,
  [sym__text] = sym__text,
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
  [sym_blocks] = sym_blocks,
  [sym_block] = sym_block,
  [sym_line] = sym_line,
  [sym_quote1] = sym_quote1,
  [sym_quote2] = sym_quote2,
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
  [aux_sym_blocks_repeat1] = aux_sym_blocks_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_block_repeat2] = aux_sym_block_repeat2,
  [aux_sym_block_repeat3] = aux_sym_block_repeat3,
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
  [sym__text] = {
    .visible = false,
    .named = true,
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
  [sym_blocks] = {
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
  [sym_quote1] = {
    .visible = true,
    .named = true,
  },
  [sym_quote2] = {
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
  [aux_sym_blocks_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat3] = {
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
  [9] = 4,
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
  [23] = 19,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 27,
  [29] = 25,
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
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 39,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 37,
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
  [69] = 69,
  [70] = 33,
  [71] = 71,
  [72] = 64,
  [73] = 73,
  [74] = 62,
  [75] = 69,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 68,
  [80] = 38,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 78,
  [85] = 85,
  [86] = 5,
  [87] = 73,
  [88] = 88,
  [89] = 37,
  [90] = 37,
  [91] = 37,
  [92] = 5,
  [93] = 93,
  [94] = 82,
  [95] = 11,
  [96] = 96,
  [97] = 97,
  [98] = 12,
  [99] = 99,
  [100] = 100,
  [101] = 4,
  [102] = 102,
  [103] = 103,
  [104] = 12,
  [105] = 11,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 106,
  [117] = 117,
  [118] = 78,
  [119] = 69,
  [120] = 120,
  [121] = 107,
  [122] = 117,
  [123] = 114,
  [124] = 69,
  [125] = 125,
  [126] = 113,
  [127] = 127,
  [128] = 128,
  [129] = 69,
  [130] = 78,
  [131] = 131,
  [132] = 132,
  [133] = 110,
  [134] = 134,
  [135] = 135,
  [136] = 78,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 5,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 106,
  [147] = 147,
  [148] = 106,
  [149] = 149,
  [150] = 150,
  [151] = 4,
  [152] = 152,
  [153] = 5,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 5,
  [159] = 159,
  [160] = 4,
  [161] = 102,
  [162] = 162,
  [163] = 163,
  [164] = 96,
  [165] = 99,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 4,
  [170] = 4,
  [171] = 171,
  [172] = 11,
  [173] = 173,
  [174] = 12,
  [175] = 11,
  [176] = 176,
  [177] = 12,
  [178] = 178,
  [179] = 179,
  [180] = 4,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 4,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 120,
  [190] = 190,
  [191] = 191,
  [192] = 12,
  [193] = 176,
  [194] = 11,
  [195] = 195,
  [196] = 188,
  [197] = 197,
  [198] = 198,
  [199] = 176,
  [200] = 200,
  [201] = 201,
  [202] = 188,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 212,
  [216] = 214,
  [217] = 217,
  [218] = 212,
  [219] = 214,
  [220] = 220,
  [221] = 211,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 212,
  [226] = 226,
  [227] = 214,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 223,
  [236] = 228,
  [237] = 209,
  [238] = 233,
  [239] = 239,
  [240] = 206,
  [241] = 212,
  [242] = 232,
  [243] = 214,
  [244] = 244,
  [245] = 245,
  [246] = 186,
  [247] = 217,
  [248] = 248,
  [249] = 168,
  [250] = 185,
  [251] = 212,
  [252] = 208,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 244,
  [257] = 173,
  [258] = 258,
  [259] = 114,
  [260] = 207,
  [261] = 113,
  [262] = 210,
  [263] = 214,
  [264] = 222,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 109,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 108,
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
  [293] = 115,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 273,
  [304] = 276,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 294,
  [311] = 291,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 312,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 317,
  [325] = 325,
  [326] = 279,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 302,
  [332] = 295,
  [333] = 333,
  [334] = 334,
  [335] = 309,
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
      if (eof) ADVANCE(130);
      if (lookahead == '"') ADVANCE(252);
      if (lookahead == '(') ADVANCE(234);
      if (lookahead == ')') ADVANCE(235);
      if (lookahead == '+') ADVANCE(224);
      if (lookahead == ',') ADVANCE(200);
      if (lookahead == '-') ADVANCE(226);
      if (lookahead == '.') ADVANCE(249);
      if (lookahead == ':') ADVANCE(131);
      if (lookahead == ';') ADVANCE(245);
      if (lookahead == '<') ADVANCE(227);
      if (lookahead == '>') ADVANCE(259);
      if (lookahead == '@') ADVANCE(228);
      if (lookahead == 'A') ADVANCE(47);
      if (lookahead == 'D') ADVANCE(35);
      if (lookahead == 'F') ADVANCE(22);
      if (lookahead == 'J') ADVANCE(23);
      if (lookahead == 'M') ADVANCE(25);
      if (lookahead == 'N') ADVANCE(46);
      if (lookahead == 'O') ADVANCE(28);
      if (lookahead == 'S') ADVANCE(21);
      if (lookahead == 'T') ADVANCE(38);
      if (lookahead == 'W') ADVANCE(32);
      if (lookahead == '[') ADVANCE(250);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == ']') ADVANCE(251);
      if (lookahead == 'd') ADVANCE(60);
      if (lookahead == 'f') ADVANCE(105);
      if (lookahead == 'm') ADVANCE(72);
      if (lookahead == 's') ADVANCE(77);
      if (lookahead == 't') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(0)
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(66);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(64);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(94);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(73);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(236);
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') ADVANCE(246);
      if (lookahead == ' ') ADVANCE(236);
      if (lookahead == '"') ADVANCE(252);
      if (lookahead == '(') ADVANCE(234);
      if (lookahead == '.') ADVANCE(249);
      if (lookahead == ':') ADVANCE(131);
      if (lookahead == ';') ADVANCE(245);
      if (lookahead == '<') ADVANCE(227);
      if (lookahead == '@') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(248);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(260);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(237);
      if (lookahead != 0) ADVANCE(244);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\r') ADVANCE(253);
      if (lookahead == '"') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(238);
      if (lookahead != 0) ADVANCE(255);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '(') ADVANCE(234);
      if (lookahead == ')') ADVANCE(235);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(230);
      if (lookahead != 0) ADVANCE(231);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '\r') ADVANCE(256);
      if (lookahead == '>') ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(256);
      if (lookahead != 0) ADVANCE(258);
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
          lookahead == ' ') ADVANCE(243);
      if (lookahead != 0) ADVANCE(244);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '\r') ADVANCE(257);
      if (lookahead == '>') ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(257);
      if (lookahead != 0) ADVANCE(258);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(252);
      if (lookahead == '(') ADVANCE(234);
      if (lookahead == ')') ADVANCE(235);
      if (lookahead == '+') ADVANCE(224);
      if (lookahead == ',') ADVANCE(200);
      if (lookahead == '-') ADVANCE(226);
      if (lookahead == '.') ADVANCE(249);
      if (lookahead == ':') ADVANCE(131);
      if (lookahead == ';') ADVANCE(245);
      if (lookahead == '<') ADVANCE(227);
      if (lookahead == '>') ADVANCE(259);
      if (lookahead == '@') ADVANCE(228);
      if (lookahead == 'A') ADVANCE(47);
      if (lookahead == 'D') ADVANCE(35);
      if (lookahead == 'F') ADVANCE(22);
      if (lookahead == 'J') ADVANCE(23);
      if (lookahead == 'M') ADVANCE(25);
      if (lookahead == 'N') ADVANCE(46);
      if (lookahead == 'O') ADVANCE(28);
      if (lookahead == 'S') ADVANCE(21);
      if (lookahead == 'T') ADVANCE(38);
      if (lookahead == 'W') ADVANCE(32);
      if (lookahead == '[') ADVANCE(250);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == ']') ADVANCE(251);
      if (lookahead == 'd') ADVANCE(60);
      if (lookahead == 'f') ADVANCE(105);
      if (lookahead == 'm') ADVANCE(72);
      if (lookahead == 's') ADVANCE(77);
      if (lookahead == 't') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(11)
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(66);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(64);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(94);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(73);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      END_STATE();
    case 12:
      if (lookahead == '(') ADVANCE(234);
      if (lookahead == '+') ADVANCE(224);
      if (lookahead == ',') ADVANCE(200);
      if (lookahead == '-') ADVANCE(225);
      if (lookahead == '.') ADVANCE(249);
      if (lookahead == ':') ADVANCE(131);
      if (lookahead == ';') ADVANCE(245);
      if (lookahead == '<') ADVANCE(227);
      if (lookahead == '>') ADVANCE(229);
      if (lookahead == '@') ADVANCE(228);
      if (lookahead == 'A') ADVANCE(47);
      if (lookahead == 'D') ADVANCE(34);
      if (lookahead == 'F') ADVANCE(31);
      if (lookahead == 'J') ADVANCE(23);
      if (lookahead == 'M') ADVANCE(24);
      if (lookahead == 'N') ADVANCE(46);
      if (lookahead == 'O') ADVANCE(28);
      if (lookahead == 'S') ADVANCE(26);
      if (lookahead == 'T') ADVANCE(37);
      if (lookahead == 'W') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(239);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      END_STATE();
    case 13:
      if (lookahead == '(') ADVANCE(233);
      if (lookahead == ')') ADVANCE(232);
      END_STATE();
    case 14:
      if (lookahead == '+') ADVANCE(224);
      if (lookahead == ',') ADVANCE(200);
      if (lookahead == '-') ADVANCE(225);
      if (lookahead == '.') ADVANCE(249);
      if (lookahead == ';') ADVANCE(245);
      if (lookahead == '>') ADVANCE(229);
      if (lookahead == '@') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(87);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(107);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(117);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(118);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(6);
      if (lookahead != 0) ADVANCE(126);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(20)
      END_STATE();
    case 21:
      if (lookahead == 'E') ADVANCE(95);
      if (lookahead == 'U') ADVANCE(63);
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 22:
      if (lookahead == 'R') ADVANCE(101);
      if (lookahead == 'e') ADVANCE(27);
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'o') ADVANCE(43);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 27:
      if (lookahead == 'b') ADVANCE(212);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(222);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(203);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(27);
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 36:
      if (lookahead == 'g') ADVANCE(218);
      END_STATE();
    case 37:
      if (lookahead == 'h') ADVANCE(54);
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 38:
      if (lookahead == 'h') ADVANCE(54);
      if (lookahead == 'u') ADVANCE(33);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(205);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(205);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(217);
      if (lookahead == 'n') ADVANCE(216);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(211);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(207);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(207);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(88);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 47:
      if (lookahead == 'p') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 48:
      if (lookahead == 'p') ADVANCE(219);
      END_STATE();
    case 49:
      if (lookahead == 'p') ADVANCE(219);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(214);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(213);
      if (lookahead == 'y') ADVANCE(215);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(220);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(206);
      END_STATE();
    case 54:
      if (lookahead == 'u') ADVANCE(204);
      END_STATE();
    case 55:
      if (lookahead == 'v') ADVANCE(221);
      END_STATE();
    case 56:
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(247);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(56)
      if (!sym_atom_character_set_1(lookahead)) ADVANCE(248);
      END_STATE();
    case 57:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(239);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(57)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      END_STATE();
    case 58:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(239);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(58)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 59:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(126);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 63:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(88);
      END_STATE();
    case 64:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(134);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 65:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(135);
      END_STATE();
    case 66:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(65);
      END_STATE();
    case 67:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(114);
      END_STATE();
    case 68:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(83);
      END_STATE();
    case 69:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(138);
      END_STATE();
    case 70:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(110);
      END_STATE();
    case 71:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(78);
      END_STATE();
    case 72:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 73:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 74:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 75:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 76:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 77:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(95);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 79:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 84:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 85:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(84);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(89);
      END_STATE();
    case 86:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(81);
      END_STATE();
    case 87:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 88:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(79);
      END_STATE();
    case 89:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 90:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 91:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(133);
      END_STATE();
    case 92:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(93);
      END_STATE();
    case 93:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(80);
      END_STATE();
    case 94:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 95:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 96:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 97:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 98:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 99:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 100:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 101:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 102:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 103:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(90);
      END_STATE();
    case 104:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 105:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 106:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 107:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 108:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 109:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(143);
      END_STATE();
    case 110:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(144);
      END_STATE();
    case 111:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(140);
      END_STATE();
    case 112:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(61);
      END_STATE();
    case 113:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(112);
      END_STATE();
    case 114:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(142);
      END_STATE();
    case 115:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(109);
      END_STATE();
    case 116:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(75);
      END_STATE();
    case 117:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(99);
      END_STATE();
    case 118:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(100);
      END_STATE();
    case 119:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(102);
      END_STATE();
    case 120:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(119);
      END_STATE();
    case 121:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(17);
      END_STATE();
    case 122:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(18);
      END_STATE();
    case 123:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      END_STATE();
    case 124:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 125:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 126:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(258);
      END_STATE();
    case 127:
      if (eof) ADVANCE(130);
      if (lookahead == '\n') SKIP(127)
      if (lookahead == '\r') ADVANCE(241);
      if (lookahead == '>') ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(241);
      if (lookahead != 0) ADVANCE(244);
      END_STATE();
    case 128:
      if (eof) ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(240);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(128)
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(155);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(153);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(149);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(187);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(178);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(161);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(162);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(164);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(181);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(199);
      END_STATE();
    case 129:
      if (eof) ADVANCE(130);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(155);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(153);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(149);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(187);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(178);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(161);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(162);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(164);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(129)
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(199);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_to_token1);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_from_token1);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_cc_token1);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_bcc_token1);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_sender_token1);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_replyto_token1);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_message_id_token1);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_in_reply_to_token1);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_references_token1);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_date_token1);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_subject_token1);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_comments_token1);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_keywords_token1);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '-') ADVANCE(173);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(199);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '-') ADVANCE(188);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(199);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '-') ADVANCE(195);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(199);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '-') ADVANCE(196);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(199);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(194);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(199);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(172);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(199);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(198);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(199);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(174);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(199);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(134);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(199);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(135);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(199);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(154);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(199);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(193);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(199);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(168);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(199);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(138);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(199);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(165);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(199);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(141);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(199);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(199);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(171);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(199);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(185);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(199);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(179);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(152);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(199);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(186);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(199);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(180);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(199);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(145);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(199);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(190);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(199);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(156);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(199);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(189);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(199);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(170);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(175);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(199);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(167);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(199);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(158);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(199);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(169);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(199);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(197);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(199);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(151);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(199);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(133);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(199);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(146);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(199);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(159);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(199);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(157);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(199);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(132);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(199);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(137);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(199);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(139);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(199);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(177);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(199);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(176);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(199);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(136);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(199);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(184);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(199);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(163);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(199);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(166);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(199);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(140);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(199);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(150);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(199);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(191);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(199);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(142);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(199);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(160);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(199);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(182);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(199);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(183);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(199);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(147);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(199);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(148);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(199);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_headertype);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_Mon);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_Tue);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_Wed);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_Thu);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_Fri);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_Sat);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_Sun);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_day_token1);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_day_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_day_token2);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_Jan);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_Feb);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_Mar);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_Apr);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_May);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_Jun);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_Jul);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_Aug);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_Sep);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_Oct);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_Nov);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_Dec);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_year_token1);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(10);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_ccontent_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(231);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_ccontent_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_ccontent_token2);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_ccontent_token3);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_wsp);
      if (lookahead == '\t') ADVANCE(236);
      if (lookahead == '\r') ADVANCE(246);
      if (lookahead == ' ') ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_wsp);
      if (lookahead == '\r') ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_wsp);
      if (lookahead == '\r') ADVANCE(253);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_wsp);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_wsp);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(240);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(155);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(153);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(149);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(187);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(178);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(161);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(162);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(164);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(181);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__bodycontent_token1);
      if (lookahead == '\r') ADVANCE(241);
      if (lookahead == '>') ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(244);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__bodycontent_token1);
      if (lookahead == '\r') ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(244);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__bodycontent_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(244);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__bodycontent_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '\t') ADVANCE(236);
      if (lookahead == '\r') ADVANCE(246);
      if (lookahead == ' ') ADVANCE(236);
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
          lookahead == ' ') ADVANCE(238);
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
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '\r') ADVANCE(256);
      if (lookahead == '>') ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(256);
      if (lookahead != 0) ADVANCE(258);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '\r') ADVANCE(257);
      if (lookahead == '>') ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(257);
      if (lookahead != 0) ADVANCE(258);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__text);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__quote);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_footersep);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 129},
  [2] = {.lex_state = 129, .external_lex_state = 2},
  [3] = {.lex_state = 129, .external_lex_state = 2},
  [4] = {.lex_state = 12, .external_lex_state = 2},
  [5] = {.lex_state = 12, .external_lex_state = 2},
  [6] = {.lex_state = 1, .external_lex_state = 2},
  [7] = {.lex_state = 1, .external_lex_state = 2},
  [8] = {.lex_state = 1, .external_lex_state = 2},
  [9] = {.lex_state = 12},
  [10] = {.lex_state = 1, .external_lex_state = 2},
  [11] = {.lex_state = 12},
  [12] = {.lex_state = 12},
  [13] = {.lex_state = 1, .external_lex_state = 2},
  [14] = {.lex_state = 1, .external_lex_state = 2},
  [15] = {.lex_state = 1, .external_lex_state = 2},
  [16] = {.lex_state = 1, .external_lex_state = 2},
  [17] = {.lex_state = 1, .external_lex_state = 2},
  [18] = {.lex_state = 12, .external_lex_state = 2},
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
  [30] = {.lex_state = 128, .external_lex_state = 2},
  [31] = {.lex_state = 128, .external_lex_state = 2},
  [32] = {.lex_state = 129, .external_lex_state = 2},
  [33] = {.lex_state = 12, .external_lex_state = 2},
  [34] = {.lex_state = 129, .external_lex_state = 2},
  [35] = {.lex_state = 129, .external_lex_state = 2},
  [36] = {.lex_state = 12, .external_lex_state = 2},
  [37] = {.lex_state = 12, .external_lex_state = 2},
  [38] = {.lex_state = 12, .external_lex_state = 2},
  [39] = {.lex_state = 1, .external_lex_state = 2},
  [40] = {.lex_state = 129, .external_lex_state = 2},
  [41] = {.lex_state = 129, .external_lex_state = 2},
  [42] = {.lex_state = 129, .external_lex_state = 2},
  [43] = {.lex_state = 129, .external_lex_state = 2},
  [44] = {.lex_state = 1, .external_lex_state = 2},
  [45] = {.lex_state = 129, .external_lex_state = 2},
  [46] = {.lex_state = 129, .external_lex_state = 2},
  [47] = {.lex_state = 1, .external_lex_state = 2},
  [48] = {.lex_state = 129, .external_lex_state = 2},
  [49] = {.lex_state = 1, .external_lex_state = 2},
  [50] = {.lex_state = 129, .external_lex_state = 2},
  [51] = {.lex_state = 129, .external_lex_state = 2},
  [52] = {.lex_state = 12, .external_lex_state = 2},
  [53] = {.lex_state = 12, .external_lex_state = 2},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 12, .external_lex_state = 2},
  [56] = {.lex_state = 1, .external_lex_state = 2},
  [57] = {.lex_state = 12, .external_lex_state = 2},
  [58] = {.lex_state = 12, .external_lex_state = 2},
  [59] = {.lex_state = 12, .external_lex_state = 2},
  [60] = {.lex_state = 12, .external_lex_state = 2},
  [61] = {.lex_state = 1, .external_lex_state = 2},
  [62] = {.lex_state = 12, .external_lex_state = 2},
  [63] = {.lex_state = 12, .external_lex_state = 2},
  [64] = {.lex_state = 12, .external_lex_state = 2},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 127},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 12, .external_lex_state = 2},
  [69] = {.lex_state = 12, .external_lex_state = 2},
  [70] = {.lex_state = 12, .external_lex_state = 2},
  [71] = {.lex_state = 127},
  [72] = {.lex_state = 12, .external_lex_state = 2},
  [73] = {.lex_state = 12, .external_lex_state = 2},
  [74] = {.lex_state = 12, .external_lex_state = 2},
  [75] = {.lex_state = 1, .external_lex_state = 2},
  [76] = {.lex_state = 127},
  [77] = {.lex_state = 12, .external_lex_state = 2},
  [78] = {.lex_state = 1, .external_lex_state = 2},
  [79] = {.lex_state = 1, .external_lex_state = 2},
  [80] = {.lex_state = 12, .external_lex_state = 2},
  [81] = {.lex_state = 12, .external_lex_state = 2},
  [82] = {.lex_state = 12, .external_lex_state = 2},
  [83] = {.lex_state = 12, .external_lex_state = 2},
  [84] = {.lex_state = 12, .external_lex_state = 2},
  [85] = {.lex_state = 12, .external_lex_state = 2},
  [86] = {.lex_state = 1, .external_lex_state = 2},
  [87] = {.lex_state = 12, .external_lex_state = 2},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 1, .external_lex_state = 2},
  [90] = {.lex_state = 12, .external_lex_state = 2},
  [91] = {.lex_state = 12, .external_lex_state = 2},
  [92] = {.lex_state = 12, .external_lex_state = 2},
  [93] = {.lex_state = 12, .external_lex_state = 2},
  [94] = {.lex_state = 12, .external_lex_state = 2},
  [95] = {.lex_state = 12, .external_lex_state = 2},
  [96] = {.lex_state = 12, .external_lex_state = 2},
  [97] = {.lex_state = 3, .external_lex_state = 2},
  [98] = {.lex_state = 1, .external_lex_state = 2},
  [99] = {.lex_state = 12, .external_lex_state = 2},
  [100] = {.lex_state = 12, .external_lex_state = 2},
  [101] = {.lex_state = 1, .external_lex_state = 2},
  [102] = {.lex_state = 12, .external_lex_state = 2},
  [103] = {.lex_state = 3, .external_lex_state = 2},
  [104] = {.lex_state = 12, .external_lex_state = 2},
  [105] = {.lex_state = 1, .external_lex_state = 2},
  [106] = {.lex_state = 12, .external_lex_state = 2},
  [107] = {.lex_state = 4, .external_lex_state = 2},
  [108] = {.lex_state = 1, .external_lex_state = 2},
  [109] = {.lex_state = 1, .external_lex_state = 2},
  [110] = {.lex_state = 12, .external_lex_state = 2},
  [111] = {.lex_state = 1, .external_lex_state = 2},
  [112] = {.lex_state = 4, .external_lex_state = 2},
  [113] = {.lex_state = 12, .external_lex_state = 2},
  [114] = {.lex_state = 12, .external_lex_state = 2},
  [115] = {.lex_state = 1, .external_lex_state = 2},
  [116] = {.lex_state = 1, .external_lex_state = 2},
  [117] = {.lex_state = 4, .external_lex_state = 2},
  [118] = {.lex_state = 12, .external_lex_state = 2},
  [119] = {.lex_state = 12, .external_lex_state = 2},
  [120] = {.lex_state = 12, .external_lex_state = 2},
  [121] = {.lex_state = 4, .external_lex_state = 2},
  [122] = {.lex_state = 4, .external_lex_state = 2},
  [123] = {.lex_state = 1, .external_lex_state = 2},
  [124] = {.lex_state = 1, .external_lex_state = 2},
  [125] = {.lex_state = 57, .external_lex_state = 2},
  [126] = {.lex_state = 1, .external_lex_state = 2},
  [127] = {.lex_state = 3, .external_lex_state = 2},
  [128] = {.lex_state = 1, .external_lex_state = 2},
  [129] = {.lex_state = 12, .external_lex_state = 2},
  [130] = {.lex_state = 12, .external_lex_state = 2},
  [131] = {.lex_state = 1, .external_lex_state = 2},
  [132] = {.lex_state = 1, .external_lex_state = 2},
  [133] = {.lex_state = 1, .external_lex_state = 2},
  [134] = {.lex_state = 1, .external_lex_state = 2},
  [135] = {.lex_state = 57, .external_lex_state = 2},
  [136] = {.lex_state = 1, .external_lex_state = 2},
  [137] = {.lex_state = 1, .external_lex_state = 2},
  [138] = {.lex_state = 3, .external_lex_state = 2},
  [139] = {.lex_state = 1, .external_lex_state = 2},
  [140] = {.lex_state = 5},
  [141] = {.lex_state = 4, .external_lex_state = 2},
  [142] = {.lex_state = 1, .external_lex_state = 2},
  [143] = {.lex_state = 12, .external_lex_state = 2},
  [144] = {.lex_state = 12, .external_lex_state = 2},
  [145] = {.lex_state = 1, .external_lex_state = 2},
  [146] = {.lex_state = 12, .external_lex_state = 2},
  [147] = {.lex_state = 12, .external_lex_state = 2},
  [148] = {.lex_state = 1, .external_lex_state = 2},
  [149] = {.lex_state = 127},
  [150] = {.lex_state = 127},
  [151] = {.lex_state = 4, .external_lex_state = 2},
  [152] = {.lex_state = 127},
  [153] = {.lex_state = 3, .external_lex_state = 2},
  [154] = {.lex_state = 127},
  [155] = {.lex_state = 127},
  [156] = {.lex_state = 12, .external_lex_state = 2},
  [157] = {.lex_state = 127},
  [158] = {.lex_state = 58, .external_lex_state = 2},
  [159] = {.lex_state = 12, .external_lex_state = 2},
  [160] = {.lex_state = 3, .external_lex_state = 2},
  [161] = {.lex_state = 14},
  [162] = {.lex_state = 57, .external_lex_state = 2},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 14},
  [165] = {.lex_state = 14},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 4, .external_lex_state = 2},
  [168] = {.lex_state = 14},
  [169] = {.lex_state = 58, .external_lex_state = 2},
  [170] = {.lex_state = 4},
  [171] = {.lex_state = 12, .external_lex_state = 2},
  [172] = {.lex_state = 4},
  [173] = {.lex_state = 14},
  [174] = {.lex_state = 4},
  [175] = {.lex_state = 58},
  [176] = {.lex_state = 5},
  [177] = {.lex_state = 58},
  [178] = {.lex_state = 0, .external_lex_state = 2},
  [179] = {.lex_state = 0, .external_lex_state = 2},
  [180] = {.lex_state = 3},
  [181] = {.lex_state = 5},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 3, .external_lex_state = 2},
  [184] = {.lex_state = 58},
  [185] = {.lex_state = 14},
  [186] = {.lex_state = 14},
  [187] = {.lex_state = 12, .external_lex_state = 2},
  [188] = {.lex_state = 5},
  [189] = {.lex_state = 14},
  [190] = {.lex_state = 127},
  [191] = {.lex_state = 127},
  [192] = {.lex_state = 3},
  [193] = {.lex_state = 5},
  [194] = {.lex_state = 3},
  [195] = {.lex_state = 12, .external_lex_state = 2},
  [196] = {.lex_state = 5},
  [197] = {.lex_state = 12, .external_lex_state = 2},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 5},
  [200] = {.lex_state = 12, .external_lex_state = 2},
  [201] = {.lex_state = 0, .external_lex_state = 2},
  [202] = {.lex_state = 5},
  [203] = {.lex_state = 127},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 19},
  [206] = {.lex_state = 56},
  [207] = {.lex_state = 0, .external_lex_state = 2},
  [208] = {.lex_state = 56},
  [209] = {.lex_state = 56},
  [210] = {.lex_state = 56},
  [211] = {.lex_state = 56},
  [212] = {.lex_state = 12},
  [213] = {.lex_state = 0, .external_lex_state = 2},
  [214] = {.lex_state = 12},
  [215] = {.lex_state = 12},
  [216] = {.lex_state = 12},
  [217] = {.lex_state = 0, .external_lex_state = 2},
  [218] = {.lex_state = 12},
  [219] = {.lex_state = 12},
  [220] = {.lex_state = 0, .external_lex_state = 2},
  [221] = {.lex_state = 56},
  [222] = {.lex_state = 0, .external_lex_state = 2},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 12},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 12},
  [228] = {.lex_state = 0, .external_lex_state = 2},
  [229] = {.lex_state = 0, .external_lex_state = 2},
  [230] = {.lex_state = 12, .external_lex_state = 2},
  [231] = {.lex_state = 12, .external_lex_state = 2},
  [232] = {.lex_state = 7},
  [233] = {.lex_state = 7},
  [234] = {.lex_state = 0, .external_lex_state = 2},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 56},
  [238] = {.lex_state = 7},
  [239] = {.lex_state = 12, .external_lex_state = 2},
  [240] = {.lex_state = 56},
  [241] = {.lex_state = 12},
  [242] = {.lex_state = 7},
  [243] = {.lex_state = 12},
  [244] = {.lex_state = 0, .external_lex_state = 2},
  [245] = {.lex_state = 0, .external_lex_state = 2},
  [246] = {.lex_state = 0, .external_lex_state = 2},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 5},
  [249] = {.lex_state = 0, .external_lex_state = 2},
  [250] = {.lex_state = 0, .external_lex_state = 2},
  [251] = {.lex_state = 12},
  [252] = {.lex_state = 56},
  [253] = {.lex_state = 0, .external_lex_state = 2},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0, .external_lex_state = 2},
  [258] = {.lex_state = 14},
  [259] = {.lex_state = 5},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 5},
  [262] = {.lex_state = 56},
  [263] = {.lex_state = 12},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 12},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 7},
  [273] = {.lex_state = 14},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 56},
  [277] = {.lex_state = 0, .external_lex_state = 2},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 56},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 14},
  [291] = {.lex_state = 14},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 14},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 59},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 8},
  [301] = {.lex_state = 59},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 14},
  [304] = {.lex_state = 56},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 14},
  [311] = {.lex_state = 14},
  [312] = {.lex_state = 14},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 20},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0, .external_lex_state = 2},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 14},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 14},
  [321] = {.lex_state = 0, .external_lex_state = 2},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0, .external_lex_state = 2},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
};

enum {
  ts_external_token__line_break = 0,
  ts_external_token__eof = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__line_break] = sym__line_break,
  [ts_external_token__eof] = sym__eof,
};

static const bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__line_break] = true,
    [ts_external_token__eof] = true,
  },
  [2] = {
    [ts_external_token__line_break] = true,
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
    [sym_message] = STATE(283),
    [sym_headers] = STATE(253),
    [sym_header] = STATE(3),
    [sym_addressheader] = STATE(3),
    [sym_dateheader] = STATE(3),
    [sym_subjectheader] = STATE(3),
    [sym_midheader] = STATE(3),
    [sym_ref] = STATE(3),
    [sym_midkind] = STATE(278),
    [sym_addrkind] = STATE(274),
    [sym_to] = STATE(271),
    [sym_from] = STATE(271),
    [sym_cc] = STATE(271),
    [sym_bcc] = STATE(271),
    [sym_sender] = STATE(271),
    [sym_replyto] = STATE(271),
    [sym_message_id] = STATE(265),
    [sym_in_reply_to] = STATE(270),
    [sym_references] = STATE(270),
    [sym_date] = STATE(269),
    [sym_subject] = STATE(268),
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
    STATE(265), 1,
      sym_message_id,
    STATE(268), 1,
      sym_subject,
    STATE(269), 1,
      sym_date,
    STATE(274), 1,
      sym_addrkind,
    STATE(278), 1,
      sym_midkind,
    ACTIONS(27), 2,
      sym__line_break,
      ts_builtin_sym_end,
    STATE(270), 2,
      sym_in_reply_to,
      sym_references,
    STATE(271), 6,
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
    STATE(265), 1,
      sym_message_id,
    STATE(268), 1,
      sym_subject,
    STATE(269), 1,
      sym_date,
    STATE(274), 1,
      sym_addrkind,
    STATE(278), 1,
      sym_midkind,
    ACTIONS(65), 2,
      sym__line_break,
      ts_builtin_sym_end,
    STATE(270), 2,
      sym_in_reply_to,
      sym_references,
    STATE(271), 6,
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
    STATE(218), 1,
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
  [234] = 24,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(80), 1,
      anon_sym_LT,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    ACTIONS(84), 1,
      sym_wsp,
    ACTIONS(86), 1,
      anon_sym_SEMI,
    ACTIONS(88), 1,
      sym_atom,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      sym_fws,
    STATE(19), 1,
      sym_cfws,
    STATE(33), 1,
      sym_dotatom_text,
    STATE(63), 1,
      sym_phrase,
    STATE(78), 1,
      aux_sym_cfws_repeat2,
    STATE(86), 1,
      aux_sym_fws_repeat1,
    STATE(111), 1,
      sym_quoted_string,
    STATE(134), 1,
      sym_atom2,
    STATE(182), 1,
      sym_mailbox,
    STATE(227), 1,
      sym_line_break,
    STATE(281), 1,
      sym_mailbox_list,
    STATE(319), 1,
      sym_dotatom,
    STATE(324), 1,
      sym_local,
    STATE(328), 1,
      sym_group_list,
    STATE(21), 2,
      sym_word,
      aux_sym_phrase_repeat1,
    STATE(56), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    STATE(236), 2,
      sym_angle_addr,
      sym_addrspec,
  [310] = 23,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    ACTIONS(84), 1,
      sym_wsp,
    ACTIONS(88), 1,
      sym_atom,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(92), 1,
      anon_sym_LT,
    STATE(17), 1,
      sym_fws,
    STATE(23), 1,
      sym_cfws,
    STATE(32), 1,
      sym_addresslist,
    STATE(33), 1,
      sym_dotatom_text,
    STATE(52), 1,
      sym_phrase,
    STATE(78), 1,
      aux_sym_cfws_repeat2,
    STATE(86), 1,
      aux_sym_fws_repeat1,
    STATE(111), 1,
      sym_quoted_string,
    STATE(134), 1,
      sym_atom2,
    STATE(201), 1,
      sym_internetaddress,
    STATE(227), 1,
      sym_line_break,
    STATE(317), 1,
      sym_local,
    STATE(319), 1,
      sym_dotatom,
    STATE(21), 2,
      sym_word,
      aux_sym_phrase_repeat1,
    STATE(56), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    STATE(228), 2,
      sym_angle_addr,
      sym_addrspec,
    STATE(234), 2,
      sym_mailgroup,
      sym_mailbox,
  [384] = 24,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(80), 1,
      anon_sym_LT,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    ACTIONS(84), 1,
      sym_wsp,
    ACTIONS(88), 1,
      sym_atom,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(94), 1,
      anon_sym_SEMI,
    STATE(15), 1,
      sym_fws,
    STATE(19), 1,
      sym_cfws,
    STATE(33), 1,
      sym_dotatom_text,
    STATE(63), 1,
      sym_phrase,
    STATE(78), 1,
      aux_sym_cfws_repeat2,
    STATE(86), 1,
      aux_sym_fws_repeat1,
    STATE(111), 1,
      sym_quoted_string,
    STATE(134), 1,
      sym_atom2,
    STATE(182), 1,
      sym_mailbox,
    STATE(227), 1,
      sym_line_break,
    STATE(281), 1,
      sym_mailbox_list,
    STATE(284), 1,
      sym_group_list,
    STATE(319), 1,
      sym_dotatom,
    STATE(324), 1,
      sym_local,
    STATE(21), 2,
      sym_word,
      aux_sym_phrase_repeat1,
    STATE(56), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    STATE(236), 2,
      sym_angle_addr,
      sym_addrspec,
  [460] = 3,
    ACTIONS(96), 1,
      sym_wsp,
    STATE(9), 1,
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
  [493] = 22,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    ACTIONS(84), 1,
      sym_wsp,
    ACTIONS(88), 1,
      sym_atom,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(92), 1,
      anon_sym_LT,
    STATE(17), 1,
      sym_fws,
    STATE(23), 1,
      sym_cfws,
    STATE(33), 1,
      sym_dotatom_text,
    STATE(52), 1,
      sym_phrase,
    STATE(78), 1,
      aux_sym_cfws_repeat2,
    STATE(86), 1,
      aux_sym_fws_repeat1,
    STATE(111), 1,
      sym_quoted_string,
    STATE(134), 1,
      sym_atom2,
    STATE(227), 1,
      sym_line_break,
    STATE(245), 1,
      sym_internetaddress,
    STATE(317), 1,
      sym_local,
    STATE(319), 1,
      sym_dotatom,
    STATE(21), 2,
      sym_word,
      aux_sym_phrase_repeat1,
    STATE(56), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    STATE(228), 2,
      sym_angle_addr,
      sym_addrspec,
    STATE(234), 2,
      sym_mailgroup,
      sym_mailbox,
  [564] = 3,
    ACTIONS(101), 1,
      sym_wsp,
    STATE(9), 1,
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
    STATE(9), 1,
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
    ACTIONS(80), 1,
      anon_sym_LT,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    ACTIONS(84), 1,
      sym_wsp,
    ACTIONS(88), 1,
      sym_atom,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    STATE(16), 1,
      sym_fws,
    STATE(19), 1,
      sym_cfws,
    STATE(33), 1,
      sym_dotatom_text,
    STATE(63), 1,
      sym_phrase,
    STATE(78), 1,
      aux_sym_cfws_repeat2,
    STATE(86), 1,
      aux_sym_fws_repeat1,
    STATE(111), 1,
      sym_quoted_string,
    STATE(134), 1,
      sym_atom2,
    STATE(224), 1,
      sym_mailbox,
    STATE(227), 1,
      sym_line_break,
    STATE(319), 1,
      sym_dotatom,
    STATE(324), 1,
      sym_local,
    STATE(21), 2,
      sym_word,
      aux_sym_phrase_repeat1,
    STATE(56), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    STATE(236), 2,
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
    STATE(19), 1,
      sym_cfws,
    STATE(33), 1,
      sym_dotatom_text,
    STATE(56), 1,
      aux_sym_cfws_repeat1,
    STATE(60), 1,
      sym_phrase,
    STATE(78), 1,
      aux_sym_cfws_repeat2,
    STATE(86), 1,
      aux_sym_fws_repeat1,
    STATE(111), 1,
      sym_quoted_string,
    STATE(116), 1,
      sym_fws,
    STATE(134), 1,
      sym_atom2,
    STATE(145), 1,
      sym_comment,
    STATE(227), 1,
      sym_line_break,
    STATE(319), 1,
      sym_dotatom,
    STATE(324), 1,
      sym_local,
    STATE(21), 2,
      sym_word,
      aux_sym_phrase_repeat1,
    STATE(247), 2,
      sym_angle_addr,
      sym_addrspec,
  [766] = 22,
    ACTIONS(86), 1,
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
    STATE(19), 1,
      sym_cfws,
    STATE(33), 1,
      sym_dotatom_text,
    STATE(56), 1,
      aux_sym_cfws_repeat1,
    STATE(60), 1,
      sym_phrase,
    STATE(78), 1,
      aux_sym_cfws_repeat2,
    STATE(86), 1,
      aux_sym_fws_repeat1,
    STATE(111), 1,
      sym_quoted_string,
    STATE(116), 1,
      sym_fws,
    STATE(134), 1,
      sym_atom2,
    STATE(145), 1,
      sym_comment,
    STATE(227), 1,
      sym_line_break,
    STATE(319), 1,
      sym_dotatom,
    STATE(324), 1,
      sym_local,
    STATE(21), 2,
      sym_word,
      aux_sym_phrase_repeat1,
    STATE(247), 2,
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
    STATE(19), 1,
      sym_cfws,
    STATE(33), 1,
      sym_dotatom_text,
    STATE(56), 1,
      aux_sym_cfws_repeat1,
    STATE(60), 1,
      sym_phrase,
    STATE(78), 1,
      aux_sym_cfws_repeat2,
    STATE(86), 1,
      aux_sym_fws_repeat1,
    STATE(111), 1,
      sym_quoted_string,
    STATE(116), 1,
      sym_fws,
    STATE(134), 1,
      sym_atom2,
    STATE(145), 1,
      sym_comment,
    STATE(227), 1,
      sym_line_break,
    STATE(319), 1,
      sym_dotatom,
    STATE(324), 1,
      sym_local,
    STATE(21), 2,
      sym_word,
      aux_sym_phrase_repeat1,
    STATE(247), 2,
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
    STATE(23), 1,
      sym_cfws,
    STATE(33), 1,
      sym_dotatom_text,
    STATE(56), 1,
      aux_sym_cfws_repeat1,
    STATE(59), 1,
      sym_phrase,
    STATE(78), 1,
      aux_sym_cfws_repeat2,
    STATE(86), 1,
      aux_sym_fws_repeat1,
    STATE(111), 1,
      sym_quoted_string,
    STATE(116), 1,
      sym_fws,
    STATE(134), 1,
      sym_atom2,
    STATE(145), 1,
      sym_comment,
    STATE(227), 1,
      sym_line_break,
    STATE(317), 1,
      sym_local,
    STATE(319), 1,
      sym_dotatom,
    STATE(21), 2,
      sym_word,
      aux_sym_phrase_repeat1,
    STATE(217), 2,
      sym_angle_addr,
      sym_addrspec,
  [967] = 13,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(132), 1,
      sym_wsp,
    STATE(5), 1,
      aux_sym_fws_repeat1,
    STATE(46), 1,
      sym__datefield,
    STATE(54), 1,
      sym_day,
    STATE(88), 1,
      sym_fws,
    STATE(163), 1,
      sym_datefield,
    STATE(219), 1,
      sym_line_break,
    STATE(327), 1,
      sym_date_time,
    STATE(333), 1,
      sym_day_of_week,
    STATE(334), 1,
      sym_day_name,
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
  [1014] = 16,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    ACTIONS(84), 1,
      sym_wsp,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(134), 1,
      anon_sym_LT,
    ACTIONS(136), 1,
      sym_atom,
    STATE(38), 1,
      sym_dotatom_text,
    STATE(86), 1,
      aux_sym_fws_repeat1,
    STATE(128), 1,
      sym_quoted_string,
    STATE(134), 1,
      sym_atom2,
    STATE(136), 1,
      aux_sym_cfws_repeat2,
    STATE(148), 1,
      sym_fws,
    STATE(227), 1,
      sym_line_break,
    STATE(288), 1,
      sym_cfws,
    STATE(22), 2,
      sym_word,
      aux_sym_phrase_repeat1,
    STATE(89), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [1065] = 15,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      sym_wsp,
    ACTIONS(146), 1,
      sym_atom,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(152), 1,
      sym__line_break,
    STATE(86), 1,
      aux_sym_fws_repeat1,
    STATE(128), 1,
      sym_quoted_string,
    STATE(134), 1,
      sym_atom2,
    STATE(136), 1,
      aux_sym_cfws_repeat2,
    STATE(148), 1,
      sym_fws,
    STATE(227), 1,
      sym_line_break,
    STATE(288), 1,
      sym_cfws,
    ACTIONS(138), 2,
      anon_sym_COLON,
      anon_sym_LT,
    STATE(20), 2,
      sym_word,
      aux_sym_phrase_repeat1,
    STATE(89), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [1114] = 15,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(160), 1,
      sym_wsp,
    ACTIONS(163), 1,
      sym_atom,
    ACTIONS(165), 1,
      sym__line_break,
    STATE(78), 1,
      aux_sym_cfws_repeat2,
    STATE(86), 1,
      aux_sym_fws_repeat1,
    STATE(116), 1,
      sym_fws,
    STATE(128), 1,
      sym_quoted_string,
    STATE(134), 1,
      sym_atom2,
    STATE(139), 1,
      sym_cfws,
    STATE(227), 1,
      sym_line_break,
    ACTIONS(155), 2,
      anon_sym_COLON,
      anon_sym_LT,
    STATE(20), 2,
      sym_word,
      aux_sym_phrase_repeat1,
    STATE(56), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [1163] = 15,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      sym_atom,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      sym_wsp,
    ACTIONS(176), 1,
      sym__line_break,
    STATE(78), 1,
      aux_sym_cfws_repeat2,
    STATE(86), 1,
      aux_sym_fws_repeat1,
    STATE(116), 1,
      sym_fws,
    STATE(128), 1,
      sym_quoted_string,
    STATE(134), 1,
      sym_atom2,
    STATE(142), 1,
      sym_cfws,
    STATE(227), 1,
      sym_line_break,
    ACTIONS(168), 2,
      anon_sym_COLON,
      anon_sym_LT,
    STATE(20), 2,
      sym_word,
      aux_sym_phrase_repeat1,
    STATE(56), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [1212] = 16,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    ACTIONS(84), 1,
      sym_wsp,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(136), 1,
      sym_atom,
    ACTIONS(179), 1,
      anon_sym_LT,
    STATE(38), 1,
      sym_dotatom_text,
    STATE(86), 1,
      aux_sym_fws_repeat1,
    STATE(128), 1,
      sym_quoted_string,
    STATE(134), 1,
      sym_atom2,
    STATE(136), 1,
      aux_sym_cfws_repeat2,
    STATE(148), 1,
      sym_fws,
    STATE(227), 1,
      sym_line_break,
    STATE(288), 1,
      sym_cfws,
    STATE(22), 2,
      sym_word,
      aux_sym_phrase_repeat1,
    STATE(89), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [1263] = 13,
    ACTIONS(183), 1,
      anon_sym_AT,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      sym_wsp,
    ACTIONS(193), 1,
      anon_sym_DOT,
    ACTIONS(195), 1,
      sym__line_break,
    STATE(78), 1,
      aux_sym_cfws_repeat2,
    STATE(86), 1,
      aux_sym_fws_repeat1,
    STATE(96), 1,
      aux_sym_dotatom_text_repeat1,
    STATE(116), 1,
      sym_fws,
    STATE(131), 1,
      sym_cfws,
    STATE(227), 1,
      sym_line_break,
    STATE(56), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    ACTIONS(181), 4,
      anon_sym_COLON,
      anon_sym_LT,
      sym_atom,
      anon_sym_DQUOTE,
  [1307] = 15,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    ACTIONS(84), 1,
      sym_wsp,
    ACTIONS(199), 1,
      sym_atom,
    ACTIONS(201), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      sym_dotatom_text,
    STATE(86), 1,
      aux_sym_fws_repeat1,
    STATE(136), 1,
      aux_sym_cfws_repeat2,
    STATE(148), 1,
      sym_fws,
    STATE(206), 1,
      sym_cfws,
    STATE(227), 1,
      sym_line_break,
    STATE(294), 1,
      sym_addrspec,
    STATE(324), 1,
      sym_local,
    STATE(89), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    STATE(319), 2,
      sym_dotatom,
      sym_quoted_string,
  [1355] = 13,
    ACTIONS(183), 1,
      anon_sym_AT,
    ACTIONS(193), 1,
      anon_sym_DOT,
    ACTIONS(206), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 1,
      sym_wsp,
    ACTIONS(216), 1,
      sym__line_break,
    STATE(78), 1,
      aux_sym_cfws_repeat2,
    STATE(86), 1,
      aux_sym_fws_repeat1,
    STATE(96), 1,
      aux_sym_dotatom_text_repeat1,
    STATE(116), 1,
      sym_fws,
    STATE(132), 1,
      sym_cfws,
    STATE(227), 1,
      sym_line_break,
    STATE(56), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    ACTIONS(203), 4,
      anon_sym_COLON,
      anon_sym_LT,
      sym_atom,
      anon_sym_DQUOTE,
  [1399] = 15,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    ACTIONS(84), 1,
      sym_wsp,
    ACTIONS(199), 1,
      sym_atom,
    ACTIONS(201), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      sym_dotatom_text,
    STATE(86), 1,
      aux_sym_fws_repeat1,
    STATE(136), 1,
      aux_sym_cfws_repeat2,
    STATE(148), 1,
      sym_fws,
    STATE(206), 1,
      sym_cfws,
    STATE(227), 1,
      sym_line_break,
    STATE(303), 1,
      sym_addrspec,
    STATE(324), 1,
      sym_local,
    STATE(89), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    STATE(319), 2,
      sym_dotatom,
      sym_quoted_string,
  [1447] = 15,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    ACTIONS(84), 1,
      sym_wsp,
    ACTIONS(199), 1,
      sym_atom,
    ACTIONS(201), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      sym_dotatom_text,
    STATE(86), 1,
      aux_sym_fws_repeat1,
    STATE(136), 1,
      aux_sym_cfws_repeat2,
    STATE(148), 1,
      sym_fws,
    STATE(206), 1,
      sym_cfws,
    STATE(227), 1,
      sym_line_break,
    STATE(273), 1,
      sym_addrspec,
    STATE(324), 1,
      sym_local,
    STATE(89), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    STATE(319), 2,
      sym_dotatom,
      sym_quoted_string,
  [1495] = 15,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    ACTIONS(84), 1,
      sym_wsp,
    ACTIONS(199), 1,
      sym_atom,
    ACTIONS(201), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      sym_dotatom_text,
    STATE(86), 1,
      aux_sym_fws_repeat1,
    STATE(136), 1,
      aux_sym_cfws_repeat2,
    STATE(148), 1,
      sym_fws,
    STATE(206), 1,
      sym_cfws,
    STATE(227), 1,
      sym_line_break,
    STATE(310), 1,
      sym_addrspec,
    STATE(324), 1,
      sym_local,
    STATE(89), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    STATE(319), 2,
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
  [1606] = 10,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(239), 1,
      sym_wsp,
    STATE(84), 1,
      aux_sym_cfws_repeat2,
    STATE(92), 1,
      aux_sym_fws_repeat1,
    STATE(106), 1,
      sym_fws,
    STATE(168), 1,
      sym_cfws,
    STATE(243), 1,
      sym_line_break,
    STATE(37), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    ACTIONS(235), 4,
      anon_sym_COMMA,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_SEMI,
  [1641] = 2,
    ACTIONS(243), 1,
      sym_headertype,
    ACTIONS(241), 13,
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
  [1660] = 2,
    ACTIONS(247), 1,
      sym_headertype,
    ACTIONS(245), 13,
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
  [1679] = 12,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(239), 1,
      sym_wsp,
    ACTIONS(249), 1,
      anon_sym_LT,
    STATE(45), 1,
      sym_references_field,
    STATE(84), 1,
      aux_sym_cfws_repeat2,
    STATE(92), 1,
      aux_sym_fws_repeat1,
    STATE(106), 1,
      sym_fws,
    STATE(243), 1,
      sym_line_break,
    STATE(309), 1,
      sym_cfws,
    STATE(37), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    STATE(57), 2,
      sym_msg_id,
      aux_sym_references_field_repeat1,
  [1718] = 9,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(239), 1,
      sym_wsp,
    STATE(69), 1,
      aux_sym_cfws_repeat2,
    STATE(92), 1,
      aux_sym_fws_repeat1,
    STATE(106), 1,
      sym_fws,
    STATE(243), 1,
      sym_line_break,
    STATE(55), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    ACTIONS(251), 5,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_SEMI,
  [1751] = 10,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(239), 1,
      sym_wsp,
    STATE(84), 1,
      aux_sym_cfws_repeat2,
    STATE(92), 1,
      aux_sym_fws_repeat1,
    STATE(106), 1,
      sym_fws,
    STATE(173), 1,
      sym_cfws,
    STATE(243), 1,
      sym_line_break,
    STATE(37), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    ACTIONS(253), 4,
      anon_sym_COMMA,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_SEMI,
  [1786] = 13,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    ACTIONS(84), 1,
      sym_wsp,
    ACTIONS(199), 1,
      sym_atom,
    STATE(70), 1,
      sym_dotatom_text,
    STATE(86), 1,
      aux_sym_fws_repeat1,
    STATE(136), 1,
      aux_sym_cfws_repeat2,
    STATE(148), 1,
      sym_fws,
    STATE(227), 1,
      sym_line_break,
    STATE(240), 1,
      sym_cfws,
    STATE(246), 1,
      sym_domain,
    STATE(250), 1,
      sym_dotatom,
    STATE(89), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [1827] = 2,
    ACTIONS(257), 1,
      sym_headertype,
    ACTIONS(255), 13,
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
  [1846] = 2,
    ACTIONS(261), 1,
      sym_headertype,
    ACTIONS(259), 13,
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
  [1865] = 2,
    ACTIONS(265), 1,
      sym_headertype,
    ACTIONS(263), 13,
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
  [1884] = 2,
    ACTIONS(269), 1,
      sym_headertype,
    ACTIONS(267), 13,
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
  [1903] = 10,
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      sym_wsp,
    ACTIONS(277), 1,
      sym__line_break,
    STATE(78), 1,
      aux_sym_cfws_repeat2,
    STATE(86), 1,
      aux_sym_fws_repeat1,
    STATE(116), 1,
      sym_fws,
    STATE(131), 1,
      sym_cfws,
    STATE(227), 1,
      sym_line_break,
    STATE(56), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    ACTIONS(181), 4,
      anon_sym_COLON,
      anon_sym_LT,
      sym_atom,
      anon_sym_DQUOTE,
  [1938] = 2,
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
  [1957] = 2,
    ACTIONS(286), 1,
      sym_headertype,
    ACTIONS(284), 13,
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
  [1976] = 10,
    ACTIONS(290), 1,
      anon_sym_LPAREN,
    ACTIONS(293), 1,
      sym_wsp,
    ACTIONS(296), 1,
      sym__line_break,
    STATE(78), 1,
      aux_sym_cfws_repeat2,
    STATE(86), 1,
      aux_sym_fws_repeat1,
    STATE(116), 1,
      sym_fws,
    STATE(137), 1,
      sym_cfws,
    STATE(227), 1,
      sym_line_break,
    STATE(56), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    ACTIONS(288), 4,
      anon_sym_COLON,
      anon_sym_LT,
      sym_atom,
      anon_sym_DQUOTE,
  [2011] = 2,
    ACTIONS(301), 1,
      sym_headertype,
    ACTIONS(299), 13,
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
  [2030] = 13,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    ACTIONS(84), 1,
      sym_wsp,
    ACTIONS(199), 1,
      sym_atom,
    STATE(33), 1,
      sym_dotatom_text,
    STATE(86), 1,
      aux_sym_fws_repeat1,
    STATE(136), 1,
      aux_sym_cfws_repeat2,
    STATE(148), 1,
      sym_fws,
    STATE(185), 1,
      sym_dotatom,
    STATE(186), 1,
      sym_domain,
    STATE(206), 1,
      sym_cfws,
    STATE(227), 1,
      sym_line_break,
    STATE(89), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [2071] = 2,
    ACTIONS(305), 1,
      sym_headertype,
    ACTIONS(303), 13,
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
  [2109] = 12,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(92), 1,
      anon_sym_LT,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(239), 1,
      sym_wsp,
    ACTIONS(311), 1,
      anon_sym_COLON,
    STATE(84), 1,
      aux_sym_cfws_repeat2,
    STATE(92), 1,
      aux_sym_fws_repeat1,
    STATE(106), 1,
      sym_fws,
    STATE(217), 1,
      sym_angle_addr,
    STATE(243), 1,
      sym_line_break,
    STATE(279), 1,
      sym_cfws,
    STATE(37), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [2147] = 11,
    ACTIONS(313), 1,
      anon_sym_LT,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      sym_wsp,
    ACTIONS(322), 1,
      sym__line_break,
    STATE(84), 1,
      aux_sym_cfws_repeat2,
    STATE(92), 1,
      aux_sym_fws_repeat1,
    STATE(106), 1,
      sym_fws,
    STATE(243), 1,
      sym_line_break,
    STATE(309), 1,
      sym_cfws,
    STATE(37), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    STATE(53), 2,
      sym_msg_id,
      aux_sym_references_field_repeat1,
  [2183] = 2,
    STATE(144), 1,
      sym_month,
    ACTIONS(325), 12,
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
  [2201] = 8,
    ACTIONS(329), 1,
      anon_sym_LPAREN,
    ACTIONS(332), 1,
      sym_wsp,
    ACTIONS(335), 1,
      sym__line_break,
    STATE(5), 1,
      aux_sym_fws_repeat1,
    STATE(219), 1,
      sym_line_break,
    STATE(223), 1,
      sym_fws,
    STATE(55), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    ACTIONS(327), 5,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_SEMI,
  [2231] = 9,
    ACTIONS(338), 1,
      anon_sym_LPAREN,
    ACTIONS(341), 1,
      sym_wsp,
    ACTIONS(344), 1,
      sym__line_break,
    STATE(75), 1,
      aux_sym_cfws_repeat2,
    STATE(86), 1,
      aux_sym_fws_repeat1,
    STATE(116), 1,
      sym_fws,
    STATE(227), 1,
      sym_line_break,
    STATE(61), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    ACTIONS(251), 4,
      anon_sym_COLON,
      anon_sym_LT,
      sym_atom,
      anon_sym_DQUOTE,
  [2263] = 11,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(239), 1,
      sym_wsp,
    ACTIONS(249), 1,
      anon_sym_LT,
    ACTIONS(347), 1,
      sym__line_break,
    STATE(84), 1,
      aux_sym_cfws_repeat2,
    STATE(92), 1,
      aux_sym_fws_repeat1,
    STATE(106), 1,
      sym_fws,
    STATE(243), 1,
      sym_line_break,
    STATE(309), 1,
      sym_cfws,
    STATE(37), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    STATE(53), 2,
      sym_msg_id,
      aux_sym_references_field_repeat1,
  [2299] = 12,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(239), 1,
      sym_wsp,
    ACTIONS(349), 1,
      anon_sym_LT,
    STATE(48), 1,
      sym_message_idfield,
    STATE(84), 1,
      aux_sym_cfws_repeat2,
    STATE(92), 1,
      aux_sym_fws_repeat1,
    STATE(106), 1,
      sym_fws,
    STATE(243), 1,
      sym_line_break,
    STATE(321), 1,
      sym_msg_id,
    STATE(335), 1,
      sym_cfws,
    STATE(37), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [2337] = 12,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(92), 1,
      anon_sym_LT,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(239), 1,
      sym_wsp,
    ACTIONS(351), 1,
      anon_sym_COLON,
    STATE(84), 1,
      aux_sym_cfws_repeat2,
    STATE(92), 1,
      aux_sym_fws_repeat1,
    STATE(106), 1,
      sym_fws,
    STATE(243), 1,
      sym_line_break,
    STATE(244), 1,
      sym_angle_addr,
    STATE(279), 1,
      sym_cfws,
    STATE(37), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [2375] = 11,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(80), 1,
      anon_sym_LT,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(239), 1,
      sym_wsp,
    STATE(84), 1,
      aux_sym_cfws_repeat2,
    STATE(92), 1,
      aux_sym_fws_repeat1,
    STATE(106), 1,
      sym_fws,
    STATE(243), 1,
      sym_line_break,
    STATE(256), 1,
      sym_angle_addr,
    STATE(326), 1,
      sym_cfws,
    STATE(37), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [2410] = 8,
    ACTIONS(335), 1,
      sym__line_break,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    ACTIONS(356), 1,
      sym_wsp,
    STATE(5), 1,
      aux_sym_fws_repeat1,
    STATE(219), 1,
      sym_line_break,
    STATE(235), 1,
      sym_fws,
    STATE(61), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    ACTIONS(327), 4,
      anon_sym_COLON,
      anon_sym_LT,
      sym_atom,
      anon_sym_DQUOTE,
  [2439] = 10,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(239), 1,
      sym_wsp,
    STATE(84), 1,
      aux_sym_cfws_repeat2,
    STATE(92), 1,
      aux_sym_fws_repeat1,
    STATE(106), 1,
      sym_fws,
    STATE(243), 1,
      sym_line_break,
    STATE(264), 1,
      sym_cfws,
    ACTIONS(359), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(37), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [2472] = 11,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(80), 1,
      anon_sym_LT,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(239), 1,
      sym_wsp,
    STATE(84), 1,
      aux_sym_cfws_repeat2,
    STATE(92), 1,
      aux_sym_fws_repeat1,
    STATE(106), 1,
      sym_fws,
    STATE(243), 1,
      sym_line_break,
    STATE(247), 1,
      sym_angle_addr,
    STATE(326), 1,
      sym_cfws,
    STATE(37), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [2507] = 10,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(239), 1,
      sym_wsp,
    STATE(84), 1,
      aux_sym_cfws_repeat2,
    STATE(92), 1,
      aux_sym_fws_repeat1,
    STATE(106), 1,
      sym_fws,
    STATE(243), 1,
      sym_line_break,
    STATE(260), 1,
      sym_cfws,
    ACTIONS(361), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(37), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [2540] = 1,
    ACTIONS(363), 12,
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
  [2555] = 8,
    ACTIONS(365), 1,
      aux_sym__bodycontent_token1,
    ACTIONS(367), 1,
      sym__quote,
    STATE(297), 1,
      sym_emailbody,
    STATE(298), 1,
      sym_blocks,
    STATE(71), 2,
      sym_block,
      aux_sym_blocks_repeat1,
    STATE(149), 2,
      sym_quote2,
      aux_sym_block_repeat3,
    STATE(150), 2,
      sym_quote1,
      aux_sym_block_repeat2,
    STATE(152), 2,
      sym_line,
      aux_sym_block_repeat1,
  [2584] = 1,
    ACTIONS(369), 12,
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
  [2599] = 6,
    ACTIONS(373), 1,
      sym_wsp,
    ACTIONS(376), 1,
      sym__line_break,
    STATE(92), 1,
      aux_sym_fws_repeat1,
    STATE(243), 1,
      sym_line_break,
    STATE(68), 2,
      sym_fws,
      aux_sym_cfws_repeat2,
    ACTIONS(371), 6,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_SEMI,
  [2624] = 6,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(239), 1,
      sym_wsp,
    STATE(92), 1,
      aux_sym_fws_repeat1,
    STATE(243), 1,
      sym_line_break,
    STATE(68), 2,
      sym_fws,
      aux_sym_cfws_repeat2,
    ACTIONS(379), 5,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_SEMI,
  [2648] = 10,
    ACTIONS(235), 1,
      anon_sym_COMMA,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(239), 1,
      sym_wsp,
    ACTIONS(381), 1,
      sym__line_break,
    STATE(92), 1,
      aux_sym_fws_repeat1,
    STATE(106), 1,
      sym_fws,
    STATE(130), 1,
      aux_sym_cfws_repeat2,
    STATE(243), 1,
      sym_line_break,
    STATE(249), 1,
      sym_cfws,
    STATE(91), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [2680] = 7,
    ACTIONS(365), 1,
      aux_sym__bodycontent_token1,
    ACTIONS(367), 1,
      sym__quote,
    ACTIONS(384), 1,
      ts_builtin_sym_end,
    STATE(76), 2,
      sym_block,
      aux_sym_blocks_repeat1,
    STATE(149), 2,
      sym_quote2,
      aux_sym_block_repeat3,
    STATE(150), 2,
      sym_quote1,
      aux_sym_block_repeat2,
    STATE(152), 2,
      sym_line,
      aux_sym_block_repeat1,
  [2706] = 10,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(239), 1,
      sym_wsp,
    ACTIONS(361), 1,
      anon_sym_COMMA,
    ACTIONS(386), 1,
      sym__line_break,
    STATE(92), 1,
      aux_sym_fws_repeat1,
    STATE(106), 1,
      sym_fws,
    STATE(130), 1,
      aux_sym_cfws_repeat2,
    STATE(207), 1,
      sym_cfws,
    STATE(243), 1,
      sym_line_break,
    STATE(91), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [2738] = 10,
    ACTIONS(388), 1,
      anon_sym_LT,
    ACTIONS(390), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      sym_wsp,
    ACTIONS(396), 1,
      sym__line_break,
    STATE(92), 1,
      aux_sym_fws_repeat1,
    STATE(118), 1,
      aux_sym_cfws_repeat2,
    STATE(146), 1,
      sym_fws,
    STATE(171), 1,
      sym_cfws,
    STATE(243), 1,
      sym_line_break,
    STATE(90), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [2770] = 10,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(239), 1,
      sym_wsp,
    ACTIONS(359), 1,
      anon_sym_COMMA,
    ACTIONS(399), 1,
      sym__line_break,
    STATE(92), 1,
      aux_sym_fws_repeat1,
    STATE(106), 1,
      sym_fws,
    STATE(130), 1,
      aux_sym_cfws_repeat2,
    STATE(222), 1,
      sym_cfws,
    STATE(243), 1,
      sym_line_break,
    STATE(91), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [2802] = 6,
    ACTIONS(401), 1,
      sym_wsp,
    ACTIONS(404), 1,
      sym__line_break,
    STATE(86), 1,
      aux_sym_fws_repeat1,
    STATE(227), 1,
      sym_line_break,
    STATE(79), 2,
      sym_fws,
      aux_sym_cfws_repeat2,
    ACTIONS(379), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym_atom,
      anon_sym_DQUOTE,
  [2826] = 7,
    ACTIONS(407), 1,
      ts_builtin_sym_end,
    ACTIONS(409), 1,
      aux_sym__bodycontent_token1,
    ACTIONS(412), 1,
      sym__quote,
    STATE(76), 2,
      sym_block,
      aux_sym_blocks_repeat1,
    STATE(149), 2,
      sym_quote2,
      aux_sym_block_repeat3,
    STATE(150), 2,
      sym_quote1,
      aux_sym_block_repeat2,
    STATE(152), 2,
      sym_line,
      aux_sym_block_repeat1,
  [2852] = 10,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(239), 1,
      sym_wsp,
    ACTIONS(415), 1,
      anon_sym_COMMA,
    ACTIONS(417), 1,
      sym__line_break,
    STATE(92), 1,
      aux_sym_fws_repeat1,
    STATE(106), 1,
      sym_fws,
    STATE(130), 1,
      aux_sym_cfws_repeat2,
    STATE(220), 1,
      sym_cfws,
    STATE(243), 1,
      sym_line_break,
    STATE(91), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [2884] = 6,
    ACTIONS(341), 1,
      sym_wsp,
    ACTIONS(344), 1,
      sym__line_break,
    STATE(86), 1,
      aux_sym_fws_repeat1,
    STATE(227), 1,
      sym_line_break,
    STATE(79), 2,
      sym_fws,
      aux_sym_cfws_repeat2,
    ACTIONS(251), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym_atom,
      anon_sym_DQUOTE,
  [2908] = 6,
    ACTIONS(376), 1,
      sym__line_break,
    ACTIONS(419), 1,
      sym_wsp,
    STATE(86), 1,
      aux_sym_fws_repeat1,
    STATE(227), 1,
      sym_line_break,
    STATE(79), 2,
      sym_fws,
      aux_sym_cfws_repeat2,
    ACTIONS(371), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym_atom,
      anon_sym_DQUOTE,
  [2932] = 10,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(239), 1,
      sym_wsp,
    ACTIONS(253), 1,
      anon_sym_COMMA,
    ACTIONS(422), 1,
      sym__line_break,
    STATE(92), 1,
      aux_sym_fws_repeat1,
    STATE(106), 1,
      sym_fws,
    STATE(130), 1,
      aux_sym_cfws_repeat2,
    STATE(243), 1,
      sym_line_break,
    STATE(257), 1,
      sym_cfws,
    STATE(91), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [2964] = 10,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(239), 1,
      sym_wsp,
    ACTIONS(425), 1,
      anon_sym_COMMA,
    ACTIONS(427), 1,
      sym__line_break,
    STATE(92), 1,
      aux_sym_fws_repeat1,
    STATE(106), 1,
      sym_fws,
    STATE(130), 1,
      aux_sym_cfws_repeat2,
    STATE(229), 1,
      sym_cfws,
    STATE(243), 1,
      sym_line_break,
    STATE(91), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [2996] = 10,
    ACTIONS(429), 1,
      anon_sym_LT,
    ACTIONS(431), 1,
      anon_sym_LPAREN,
    ACTIONS(434), 1,
      sym_wsp,
    ACTIONS(437), 1,
      sym__line_break,
    STATE(92), 1,
      aux_sym_fws_repeat1,
    STATE(118), 1,
      aux_sym_cfws_repeat2,
    STATE(146), 1,
      sym_fws,
    STATE(159), 1,
      sym_cfws,
    STATE(243), 1,
      sym_line_break,
    STATE(90), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [3028] = 10,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(239), 1,
      sym_wsp,
    ACTIONS(440), 1,
      anon_sym_COMMA,
    ACTIONS(442), 1,
      sym__line_break,
    STATE(92), 1,
      aux_sym_fws_repeat1,
    STATE(106), 1,
      sym_fws,
    STATE(130), 1,
      aux_sym_cfws_repeat2,
    STATE(213), 1,
      sym_cfws,
    STATE(243), 1,
      sym_line_break,
    STATE(91), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [3060] = 6,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(239), 1,
      sym_wsp,
    STATE(92), 1,
      aux_sym_fws_repeat1,
    STATE(243), 1,
      sym_line_break,
    STATE(68), 2,
      sym_fws,
      aux_sym_cfws_repeat2,
    ACTIONS(251), 5,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_SEMI,
  [3084] = 9,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(239), 1,
      sym_wsp,
    ACTIONS(444), 1,
      sym__line_break,
    STATE(92), 1,
      aux_sym_fws_repeat1,
    STATE(106), 1,
      sym_fws,
    STATE(130), 1,
      aux_sym_cfws_repeat2,
    STATE(243), 1,
      sym_line_break,
    STATE(277), 1,
      sym_cfws,
    STATE(91), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [3113] = 5,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(447), 1,
      sym_wsp,
    STATE(101), 1,
      aux_sym_fws_repeat1,
    STATE(225), 1,
      sym_line_break,
    ACTIONS(74), 6,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      sym_atom,
      anon_sym_DQUOTE,
  [3134] = 9,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(239), 1,
      sym_wsp,
    ACTIONS(396), 1,
      sym__line_break,
    STATE(92), 1,
      aux_sym_fws_repeat1,
    STATE(106), 1,
      sym_fws,
    STATE(130), 1,
      aux_sym_cfws_repeat2,
    STATE(171), 1,
      sym_cfws,
    STATE(243), 1,
      sym_line_break,
    STATE(91), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [3163] = 4,
    ACTIONS(451), 1,
      aux_sym_day_token1,
    ACTIONS(453), 1,
      aux_sym_day_token2,
    STATE(308), 1,
      sym_day_name,
    ACTIONS(449), 7,
      anon_sym_Mon,
      anon_sym_Tue,
      anon_sym_Wed,
      anon_sym_Thu,
      anon_sym_Fri,
      anon_sym_Sat,
      anon_sym_Sun,
  [3182] = 9,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    ACTIONS(84), 1,
      sym_wsp,
    ACTIONS(251), 1,
      sym_atom,
    STATE(86), 1,
      aux_sym_fws_repeat1,
    STATE(124), 1,
      aux_sym_cfws_repeat2,
    STATE(148), 1,
      sym_fws,
    STATE(227), 1,
      sym_line_break,
    STATE(61), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [3211] = 9,
    ACTIONS(251), 1,
      anon_sym_LT,
    ACTIONS(344), 1,
      sym__line_break,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    ACTIONS(458), 1,
      sym_wsp,
    STATE(92), 1,
      aux_sym_fws_repeat1,
    STATE(119), 1,
      aux_sym_cfws_repeat2,
    STATE(146), 1,
      sym_fws,
    STATE(243), 1,
      sym_line_break,
    STATE(55), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [3240] = 9,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(239), 1,
      sym_wsp,
    ACTIONS(251), 1,
      anon_sym_COMMA,
    ACTIONS(344), 1,
      sym__line_break,
    STATE(92), 1,
      aux_sym_fws_repeat1,
    STATE(106), 1,
      sym_fws,
    STATE(129), 1,
      aux_sym_cfws_repeat2,
    STATE(243), 1,
      sym_line_break,
    STATE(55), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [3269] = 5,
    ACTIONS(76), 1,
      sym_wsp,
    ACTIONS(78), 1,
      sym__line_break,
    STATE(4), 1,
      aux_sym_fws_repeat1,
    STATE(241), 1,
      sym_line_break,
    ACTIONS(74), 6,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_SEMI,
  [3290] = 9,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(239), 1,
      sym_wsp,
    ACTIONS(461), 1,
      sym__line_break,
    STATE(92), 1,
      aux_sym_fws_repeat1,
    STATE(106), 1,
      sym_fws,
    STATE(130), 1,
      aux_sym_cfws_repeat2,
    STATE(243), 1,
      sym_line_break,
    STATE(316), 1,
      sym_cfws,
    STATE(91), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [3319] = 9,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(239), 1,
      sym_wsp,
    ACTIONS(437), 1,
      sym__line_break,
    STATE(92), 1,
      aux_sym_fws_repeat1,
    STATE(106), 1,
      sym_fws,
    STATE(130), 1,
      aux_sym_cfws_repeat2,
    STATE(159), 1,
      sym_cfws,
    STATE(243), 1,
      sym_line_break,
    STATE(91), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [3348] = 4,
    ACTIONS(76), 1,
      sym_wsp,
    ACTIONS(464), 1,
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
  [3366] = 4,
    ACTIONS(193), 1,
      anon_sym_DOT,
    STATE(99), 1,
      aux_sym_dotatom_text_repeat1,
    ACTIONS(468), 2,
      sym__line_break,
      sym_wsp,
    ACTIONS(466), 5,
      anon_sym_COMMA,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_SEMI,
  [3384] = 9,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(470), 1,
      sym_wsp,
    ACTIONS(472), 1,
      aux_sym__bodycontent_token1,
    STATE(41), 1,
      sym__fieldbody,
    STATE(42), 1,
      sym__subjectfield,
    STATE(138), 1,
      aux_sym__fieldbody_repeat1,
    STATE(153), 1,
      aux_sym_fws_repeat1,
    STATE(263), 1,
      sym_line_break,
    STATE(300), 1,
      sym_fws,
  [3412] = 4,
    ACTIONS(447), 1,
      sym_wsp,
    ACTIONS(474), 1,
      sym__line_break,
    STATE(101), 1,
      aux_sym_fws_repeat1,
    ACTIONS(103), 6,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      sym_atom,
      anon_sym_DQUOTE,
  [3430] = 4,
    ACTIONS(480), 1,
      anon_sym_DOT,
    STATE(99), 1,
      aux_sym_dotatom_text_repeat1,
    ACTIONS(478), 2,
      sym__line_break,
      sym_wsp,
    ACTIONS(476), 5,
      anon_sym_COMMA,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_SEMI,
  [3448] = 8,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(132), 1,
      sym_wsp,
    STATE(5), 1,
      aux_sym_fws_repeat1,
    STATE(54), 1,
      sym_day,
    STATE(166), 1,
      sym_datefield,
    STATE(219), 1,
      sym_line_break,
    STATE(255), 1,
      sym_fws,
    ACTIONS(130), 2,
      aux_sym_day_token1,
      aux_sym_day_token2,
  [3474] = 4,
    ACTIONS(72), 1,
      sym__line_break,
    ACTIONS(483), 1,
      sym_wsp,
    STATE(101), 1,
      aux_sym_fws_repeat1,
    ACTIONS(67), 6,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      sym_atom,
      anon_sym_DQUOTE,
  [3492] = 4,
    ACTIONS(193), 1,
      anon_sym_DOT,
    STATE(96), 1,
      aux_sym_dotatom_text_repeat1,
    ACTIONS(486), 2,
      sym__line_break,
      sym_wsp,
    ACTIONS(183), 5,
      anon_sym_COMMA,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_SEMI,
  [3510] = 9,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(470), 1,
      sym_wsp,
    ACTIONS(472), 1,
      aux_sym__bodycontent_token1,
    STATE(40), 1,
      sym_headerentry,
    STATE(43), 1,
      sym__fieldbody,
    STATE(138), 1,
      aux_sym__fieldbody_repeat1,
    STATE(153), 1,
      aux_sym_fws_repeat1,
    STATE(263), 1,
      sym_line_break,
    STATE(300), 1,
      sym_fws,
  [3538] = 4,
    ACTIONS(76), 1,
      sym_wsp,
    ACTIONS(474), 1,
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
  [3556] = 4,
    ACTIONS(447), 1,
      sym_wsp,
    ACTIONS(464), 1,
      sym__line_break,
    STATE(101), 1,
      aux_sym_fws_repeat1,
    ACTIONS(99), 6,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      sym_atom,
      anon_sym_DQUOTE,
  [3574] = 4,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    STATE(110), 1,
      sym_comment,
    ACTIONS(490), 2,
      sym__line_break,
      sym_wsp,
    ACTIONS(488), 5,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_SEMI,
  [3592] = 8,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(492), 1,
      sym_wsp,
    ACTIONS(494), 1,
      anon_sym_DQUOTE,
    ACTIONS(496), 1,
      aux_sym_quoted_string_token1,
    STATE(117), 1,
      aux_sym_quoted_string_repeat1,
    STATE(141), 1,
      aux_sym_fws_repeat1,
    STATE(216), 1,
      sym_line_break,
    STATE(233), 1,
      sym_fws,
  [3617] = 2,
    ACTIONS(500), 1,
      sym__line_break,
    ACTIONS(498), 7,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_LPAREN,
      sym_wsp,
      sym_atom,
      anon_sym_DQUOTE,
  [3630] = 2,
    ACTIONS(504), 1,
      sym__line_break,
    ACTIONS(502), 7,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_LPAREN,
      sym_wsp,
      sym_atom,
      anon_sym_DQUOTE,
  [3643] = 2,
    ACTIONS(506), 2,
      sym__line_break,
      sym_wsp,
    ACTIONS(327), 6,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_SEMI,
  [3656] = 3,
    ACTIONS(510), 1,
      anon_sym_AT,
    ACTIONS(512), 1,
      sym__line_break,
    ACTIONS(508), 6,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym_wsp,
      sym_atom,
      anon_sym_DQUOTE,
  [3671] = 8,
    ACTIONS(514), 1,
      sym_wsp,
    ACTIONS(517), 1,
      anon_sym_DQUOTE,
    ACTIONS(519), 1,
      aux_sym_quoted_string_token1,
    ACTIONS(522), 1,
      sym__line_break,
    STATE(112), 1,
      aux_sym_quoted_string_repeat1,
    STATE(141), 1,
      aux_sym_fws_repeat1,
    STATE(216), 1,
      sym_line_break,
    STATE(272), 1,
      sym_fws,
  [3696] = 2,
    ACTIONS(527), 2,
      sym__line_break,
      sym_wsp,
    ACTIONS(525), 6,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_SEMI,
  [3709] = 2,
    ACTIONS(531), 2,
      sym__line_break,
      sym_wsp,
    ACTIONS(529), 6,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_SEMI,
  [3722] = 2,
    ACTIONS(535), 1,
      sym__line_break,
    ACTIONS(533), 7,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_LPAREN,
      sym_wsp,
      sym_atom,
      anon_sym_DQUOTE,
  [3735] = 4,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      sym__line_break,
    STATE(133), 1,
      sym_comment,
    ACTIONS(488), 5,
      anon_sym_COLON,
      anon_sym_LT,
      sym_wsp,
      sym_atom,
      anon_sym_DQUOTE,
  [3752] = 8,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(492), 1,
      sym_wsp,
    ACTIONS(537), 1,
      anon_sym_DQUOTE,
    ACTIONS(539), 1,
      aux_sym_quoted_string_token1,
    STATE(112), 1,
      aux_sym_quoted_string_repeat1,
    STATE(141), 1,
      aux_sym_fws_repeat1,
    STATE(216), 1,
      sym_line_break,
    STATE(242), 1,
      sym_fws,
  [3777] = 6,
    ACTIONS(344), 1,
      sym__line_break,
    ACTIONS(458), 1,
      sym_wsp,
    STATE(92), 1,
      aux_sym_fws_repeat1,
    STATE(243), 1,
      sym_line_break,
    ACTIONS(251), 2,
      anon_sym_LT,
      anon_sym_LPAREN,
    STATE(68), 2,
      sym_fws,
      aux_sym_cfws_repeat2,
  [3798] = 6,
    ACTIONS(404), 1,
      sym__line_break,
    ACTIONS(541), 1,
      sym_wsp,
    STATE(92), 1,
      aux_sym_fws_repeat1,
    STATE(243), 1,
      sym_line_break,
    ACTIONS(379), 2,
      anon_sym_LT,
      anon_sym_LPAREN,
    STATE(68), 2,
      sym_fws,
      aux_sym_cfws_repeat2,
  [3819] = 2,
    ACTIONS(478), 2,
      sym__line_break,
      sym_wsp,
    ACTIONS(476), 6,
      anon_sym_COMMA,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_SEMI,
      anon_sym_DOT,
  [3832] = 8,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(492), 1,
      sym_wsp,
    ACTIONS(544), 1,
      anon_sym_DQUOTE,
    ACTIONS(546), 1,
      aux_sym_quoted_string_token1,
    STATE(122), 1,
      aux_sym_quoted_string_repeat1,
    STATE(141), 1,
      aux_sym_fws_repeat1,
    STATE(216), 1,
      sym_line_break,
    STATE(238), 1,
      sym_fws,
  [3857] = 8,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(492), 1,
      sym_wsp,
    ACTIONS(539), 1,
      aux_sym_quoted_string_token1,
    ACTIONS(548), 1,
      anon_sym_DQUOTE,
    STATE(112), 1,
      aux_sym_quoted_string_repeat1,
    STATE(141), 1,
      aux_sym_fws_repeat1,
    STATE(216), 1,
      sym_line_break,
    STATE(232), 1,
      sym_fws,
  [3882] = 2,
    ACTIONS(531), 1,
      sym__line_break,
    ACTIONS(529), 6,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym_wsp,
      sym_atom,
      anon_sym_DQUOTE,
  [3894] = 6,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(84), 1,
      sym_wsp,
    ACTIONS(379), 1,
      sym_atom,
    STATE(86), 1,
      aux_sym_fws_repeat1,
    STATE(227), 1,
      sym_line_break,
    STATE(79), 2,
      sym_fws,
      aux_sym_cfws_repeat2,
  [3914] = 7,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(132), 1,
      sym_wsp,
    ACTIONS(550), 1,
      aux_sym_day_token1,
    STATE(5), 1,
      aux_sym_fws_repeat1,
    STATE(162), 1,
      aux_sym_year_repeat1,
    STATE(219), 1,
      sym_line_break,
    STATE(313), 1,
      sym_fws,
  [3936] = 2,
    ACTIONS(527), 1,
      sym__line_break,
    ACTIONS(525), 6,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym_wsp,
      sym_atom,
      anon_sym_DQUOTE,
  [3948] = 7,
    ACTIONS(552), 1,
      sym_wsp,
    ACTIONS(555), 1,
      aux_sym__bodycontent_token1,
    ACTIONS(558), 1,
      sym__line_break,
    STATE(127), 1,
      aux_sym__fieldbody_repeat1,
    STATE(153), 1,
      aux_sym_fws_repeat1,
    STATE(263), 1,
      sym_line_break,
    STATE(300), 1,
      sym_fws,
  [3970] = 2,
    ACTIONS(512), 1,
      sym__line_break,
    ACTIONS(508), 6,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym_wsp,
      sym_atom,
      anon_sym_DQUOTE,
  [3982] = 6,
    ACTIONS(239), 1,
      sym_wsp,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    ACTIONS(404), 1,
      sym__line_break,
    STATE(92), 1,
      aux_sym_fws_repeat1,
    STATE(243), 1,
      sym_line_break,
    STATE(68), 2,
      sym_fws,
      aux_sym_cfws_repeat2,
  [4002] = 6,
    ACTIONS(239), 1,
      sym_wsp,
    ACTIONS(251), 1,
      anon_sym_COMMA,
    ACTIONS(344), 1,
      sym__line_break,
    STATE(92), 1,
      aux_sym_fws_repeat1,
    STATE(243), 1,
      sym_line_break,
    STATE(68), 2,
      sym_fws,
      aux_sym_cfws_repeat2,
  [4022] = 2,
    ACTIONS(561), 1,
      sym__line_break,
    ACTIONS(288), 6,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym_wsp,
      sym_atom,
      anon_sym_DQUOTE,
  [4034] = 2,
    ACTIONS(566), 1,
      sym__line_break,
    ACTIONS(563), 6,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym_wsp,
      sym_atom,
      anon_sym_DQUOTE,
  [4046] = 2,
    ACTIONS(506), 1,
      sym__line_break,
    ACTIONS(327), 6,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym_wsp,
      sym_atom,
      anon_sym_DQUOTE,
  [4058] = 2,
    ACTIONS(512), 1,
      sym__line_break,
    ACTIONS(508), 6,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym_wsp,
      sym_atom,
      anon_sym_DQUOTE,
  [4070] = 7,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(132), 1,
      sym_wsp,
    ACTIONS(569), 1,
      aux_sym_day_token1,
    STATE(5), 1,
      aux_sym_fws_repeat1,
    STATE(125), 1,
      aux_sym_year_repeat1,
    STATE(219), 1,
      sym_line_break,
    STATE(315), 1,
      sym_fws,
  [4092] = 6,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(84), 1,
      sym_wsp,
    ACTIONS(251), 1,
      sym_atom,
    STATE(86), 1,
      aux_sym_fws_repeat1,
    STATE(227), 1,
      sym_line_break,
    STATE(79), 2,
      sym_fws,
      aux_sym_cfws_repeat2,
  [4112] = 2,
    ACTIONS(573), 1,
      sym__line_break,
    ACTIONS(571), 6,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym_wsp,
      sym_atom,
      anon_sym_DQUOTE,
  [4124] = 7,
    ACTIONS(470), 1,
      sym_wsp,
    ACTIONS(575), 1,
      aux_sym__bodycontent_token1,
    ACTIONS(577), 1,
      sym__line_break,
    STATE(127), 1,
      aux_sym__fieldbody_repeat1,
    STATE(153), 1,
      aux_sym_fws_repeat1,
    STATE(263), 1,
      sym_line_break,
    STATE(300), 1,
      sym_fws,
  [4146] = 3,
    ACTIONS(579), 1,
      sym_atom,
    ACTIONS(581), 1,
      sym__line_break,
    ACTIONS(168), 4,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym_wsp,
  [4159] = 5,
    ACTIONS(583), 1,
      aux_sym_ccontent_token1,
    ACTIONS(587), 1,
      anon_sym_LPAREN,
    ACTIONS(589), 1,
      anon_sym_RPAREN,
    STATE(248), 1,
      sym_comment,
    ACTIONS(585), 2,
      aux_sym_ccontent_token2,
      aux_sym_ccontent_token3,
  [4176] = 5,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(591), 1,
      sym_wsp,
    STATE(151), 1,
      aux_sym_fws_repeat1,
    STATE(215), 1,
      sym_line_break,
    ACTIONS(74), 2,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_token1,
  [4193] = 3,
    ACTIONS(579), 1,
      sym_atom,
    ACTIONS(595), 1,
      sym__line_break,
    ACTIONS(593), 4,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym_wsp,
  [4206] = 6,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(132), 1,
      sym_wsp,
    STATE(5), 1,
      aux_sym_fws_repeat1,
    STATE(187), 1,
      sym_zone,
    STATE(219), 1,
      sym_line_break,
    STATE(258), 1,
      sym_fws,
  [4225] = 6,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(597), 1,
      sym_wsp,
    STATE(158), 1,
      aux_sym_fws_repeat1,
    STATE(214), 1,
      sym_line_break,
    STATE(287), 1,
      sym_year,
    STATE(290), 1,
      sym_fws,
  [4244] = 2,
    ACTIONS(602), 1,
      sym__line_break,
    ACTIONS(599), 5,
      anon_sym_LT,
      anon_sym_LPAREN,
      sym_wsp,
      sym_atom,
      anon_sym_DQUOTE,
  [4255] = 4,
    ACTIONS(488), 1,
      anon_sym_LT,
    ACTIONS(605), 1,
      anon_sym_LPAREN,
    STATE(110), 1,
      sym_comment,
    ACTIONS(490), 2,
      sym__line_break,
      sym_wsp,
  [4269] = 5,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(132), 1,
      sym_wsp,
    STATE(5), 1,
      aux_sym_fws_repeat1,
    STATE(65), 1,
      sym_fws,
    STATE(219), 1,
      sym_line_break,
  [4285] = 4,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      sym__line_break,
    STATE(133), 1,
      sym_comment,
    ACTIONS(488), 2,
      sym_wsp,
      sym_atom,
  [4299] = 4,
    ACTIONS(608), 1,
      ts_builtin_sym_end,
    ACTIONS(610), 1,
      aux_sym__bodycontent_token1,
    ACTIONS(612), 1,
      sym__quote,
    STATE(157), 2,
      sym_quote2,
      aux_sym_block_repeat3,
  [4313] = 4,
    ACTIONS(608), 1,
      ts_builtin_sym_end,
    ACTIONS(610), 1,
      aux_sym__bodycontent_token1,
    ACTIONS(614), 1,
      sym__quote,
    STATE(154), 2,
      sym_quote1,
      aux_sym_block_repeat2,
  [4327] = 4,
    ACTIONS(72), 1,
      sym__line_break,
    ACTIONS(616), 1,
      sym_wsp,
    STATE(151), 1,
      aux_sym_fws_repeat1,
    ACTIONS(67), 2,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_token1,
  [4341] = 4,
    ACTIONS(365), 1,
      aux_sym__bodycontent_token1,
    ACTIONS(608), 1,
      ts_builtin_sym_end,
    ACTIONS(610), 1,
      sym__quote,
    STATE(155), 2,
      sym_line,
      aux_sym_block_repeat1,
  [4355] = 5,
    ACTIONS(74), 1,
      aux_sym__bodycontent_token1,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(619), 1,
      sym_wsp,
    STATE(160), 1,
      aux_sym_fws_repeat1,
    STATE(251), 1,
      sym_line_break,
  [4371] = 4,
    ACTIONS(621), 1,
      ts_builtin_sym_end,
    ACTIONS(623), 1,
      aux_sym__bodycontent_token1,
    ACTIONS(625), 1,
      sym__quote,
    STATE(154), 2,
      sym_quote1,
      aux_sym_block_repeat2,
  [4385] = 4,
    ACTIONS(628), 1,
      ts_builtin_sym_end,
    ACTIONS(630), 1,
      aux_sym__bodycontent_token1,
    ACTIONS(633), 1,
      sym__quote,
    STATE(155), 2,
      sym_line,
      aux_sym_block_repeat1,
  [4399] = 5,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(132), 1,
      sym_wsp,
    STATE(5), 1,
      aux_sym_fws_repeat1,
    STATE(67), 1,
      sym_fws,
    STATE(219), 1,
      sym_line_break,
  [4415] = 4,
    ACTIONS(635), 1,
      ts_builtin_sym_end,
    ACTIONS(637), 1,
      aux_sym__bodycontent_token1,
    ACTIONS(639), 1,
      sym__quote,
    STATE(157), 2,
      sym_quote2,
      aux_sym_block_repeat3,
  [4429] = 5,
    ACTIONS(74), 1,
      aux_sym_year_token1,
    ACTIONS(78), 1,
      sym__line_break,
    ACTIONS(642), 1,
      sym_wsp,
    STATE(169), 1,
      aux_sym_fws_repeat1,
    STATE(212), 1,
      sym_line_break,
  [4445] = 2,
    ACTIONS(644), 2,
      anon_sym_LT,
      anon_sym_LPAREN,
    ACTIONS(646), 2,
      sym__line_break,
      sym_wsp,
  [4454] = 4,
    ACTIONS(67), 1,
      aux_sym__bodycontent_token1,
    ACTIONS(72), 1,
      sym__line_break,
    ACTIONS(648), 1,
      sym_wsp,
    STATE(160), 1,
      aux_sym_fws_repeat1,
  [4467] = 3,
    ACTIONS(651), 1,
      anon_sym_DOT,
    STATE(164), 1,
      aux_sym_dotatom_text_repeat1,
    ACTIONS(486), 2,
      anon_sym_AT,
      anon_sym_GT,
  [4478] = 3,
    ACTIONS(653), 1,
      aux_sym_day_token1,
    STATE(162), 1,
      aux_sym_year_repeat1,
    ACTIONS(656), 2,
      sym__line_break,
      sym_wsp,
  [4489] = 4,
    ACTIONS(658), 1,
      aux_sym_day_token2,
    STATE(85), 1,
      sym_time,
    STATE(143), 1,
      sym_time_of_day,
    STATE(305), 1,
      sym_hour,
  [4502] = 3,
    ACTIONS(651), 1,
      anon_sym_DOT,
    STATE(165), 1,
      aux_sym_dotatom_text_repeat1,
    ACTIONS(468), 2,
      anon_sym_AT,
      anon_sym_GT,
  [4513] = 3,
    ACTIONS(660), 1,
      anon_sym_DOT,
    STATE(165), 1,
      aux_sym_dotatom_text_repeat1,
    ACTIONS(478), 2,
      anon_sym_AT,
      anon_sym_GT,
  [4524] = 4,
    ACTIONS(658), 1,
      aux_sym_day_token2,
    STATE(93), 1,
      sym_time,
    STATE(143), 1,
      sym_time_of_day,
    STATE(305), 1,
      sym_hour,
  [4537] = 2,
    ACTIONS(663), 1,
      sym__line_break,
    ACTIONS(517), 3,
      sym_wsp,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_token1,
  [4546] = 1,
    ACTIONS(665), 4,
      anon_sym_COMMA,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_SEMI,
  [4553] = 4,
    ACTIONS(67), 1,
      aux_sym_year_token1,
    ACTIONS(72), 1,
      sym__line_break,
    ACTIONS(667), 1,
      sym_wsp,
    STATE(169), 1,
      aux_sym_fws_repeat1,
  [4566] = 3,
    ACTIONS(670), 1,
      sym_wsp,
    STATE(170), 1,
      aux_sym_fws_repeat1,
    ACTIONS(67), 2,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_token1,
  [4577] = 2,
    ACTIONS(429), 2,
      anon_sym_LT,
      anon_sym_LPAREN,
    ACTIONS(673), 2,
      sym__line_break,
      sym_wsp,
  [4586] = 3,
    ACTIONS(675), 1,
      sym_wsp,
    STATE(170), 1,
      aux_sym_fws_repeat1,
    ACTIONS(99), 2,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_token1,
  [4597] = 1,
    ACTIONS(677), 4,
      anon_sym_COMMA,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_SEMI,
  [4604] = 3,
    ACTIONS(675), 1,
      sym_wsp,
    STATE(170), 1,
      aux_sym_fws_repeat1,
    ACTIONS(103), 2,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_token1,
  [4615] = 3,
    ACTIONS(99), 1,
      aux_sym_year_token1,
    ACTIONS(679), 1,
      sym_wsp,
    STATE(184), 1,
      aux_sym_fws_repeat1,
  [4625] = 3,
    ACTIONS(681), 1,
      aux_sym_ccontent_token1,
    ACTIONS(683), 1,
      anon_sym_RPAREN,
    STATE(181), 1,
      aux_sym_comment_repeat1,
  [4635] = 3,
    ACTIONS(103), 1,
      aux_sym_year_token1,
    ACTIONS(679), 1,
      sym_wsp,
    STATE(184), 1,
      aux_sym_fws_repeat1,
  [4645] = 3,
    ACTIONS(685), 1,
      anon_sym_COMMA,
    ACTIONS(688), 1,
      sym__line_break,
    STATE(178), 1,
      aux_sym_addresslist_repeat1,
  [4655] = 3,
    ACTIONS(690), 1,
      anon_sym_COMMA,
    ACTIONS(692), 1,
      sym__line_break,
    STATE(178), 1,
      aux_sym_addresslist_repeat1,
  [4665] = 3,
    ACTIONS(67), 1,
      aux_sym__bodycontent_token1,
    ACTIONS(694), 1,
      sym_wsp,
    STATE(180), 1,
      aux_sym_fws_repeat1,
  [4675] = 3,
    ACTIONS(697), 1,
      aux_sym_ccontent_token1,
    ACTIONS(700), 1,
      anon_sym_RPAREN,
    STATE(181), 1,
      aux_sym_comment_repeat1,
  [4685] = 3,
    ACTIONS(702), 1,
      anon_sym_COMMA,
    ACTIONS(704), 1,
      anon_sym_SEMI,
    STATE(204), 1,
      aux_sym_mailbox_list_repeat1,
  [4695] = 2,
    ACTIONS(708), 1,
      sym__line_break,
    ACTIONS(706), 2,
      sym_wsp,
      aux_sym__bodycontent_token1,
  [4703] = 3,
    ACTIONS(67), 1,
      aux_sym_year_token1,
    ACTIONS(710), 1,
      sym_wsp,
    STATE(184), 1,
      aux_sym_fws_repeat1,
  [4713] = 1,
    ACTIONS(713), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_SEMI,
  [4719] = 1,
    ACTIONS(715), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_SEMI,
  [4725] = 2,
    ACTIONS(717), 1,
      anon_sym_LPAREN,
    ACTIONS(719), 2,
      sym__line_break,
      sym_wsp,
  [4733] = 3,
    ACTIONS(681), 1,
      aux_sym_ccontent_token1,
    ACTIONS(721), 1,
      anon_sym_RPAREN,
    STATE(193), 1,
      aux_sym_comment_repeat1,
  [4743] = 1,
    ACTIONS(478), 3,
      anon_sym_AT,
      anon_sym_GT,
      anon_sym_DOT,
  [4749] = 2,
    ACTIONS(723), 1,
      ts_builtin_sym_end,
    ACTIONS(725), 2,
      aux_sym__bodycontent_token1,
      sym__quote,
  [4757] = 2,
    ACTIONS(727), 1,
      ts_builtin_sym_end,
    ACTIONS(729), 2,
      aux_sym__bodycontent_token1,
      sym__quote,
  [4765] = 3,
    ACTIONS(103), 1,
      aux_sym__bodycontent_token1,
    ACTIONS(731), 1,
      sym_wsp,
    STATE(180), 1,
      aux_sym_fws_repeat1,
  [4775] = 3,
    ACTIONS(681), 1,
      aux_sym_ccontent_token1,
    ACTIONS(733), 1,
      anon_sym_RPAREN,
    STATE(181), 1,
      aux_sym_comment_repeat1,
  [4785] = 3,
    ACTIONS(99), 1,
      aux_sym__bodycontent_token1,
    ACTIONS(731), 1,
      sym_wsp,
    STATE(180), 1,
      aux_sym_fws_repeat1,
  [4795] = 2,
    ACTIONS(735), 1,
      anon_sym_COLON,
    ACTIONS(737), 2,
      sym__line_break,
      sym_wsp,
  [4803] = 3,
    ACTIONS(681), 1,
      aux_sym_ccontent_token1,
    ACTIONS(739), 1,
      anon_sym_RPAREN,
    STATE(199), 1,
      aux_sym_comment_repeat1,
  [4813] = 2,
    ACTIONS(741), 1,
      anon_sym_COLON,
    ACTIONS(743), 2,
      sym__line_break,
      sym_wsp,
  [4821] = 3,
    ACTIONS(745), 1,
      anon_sym_COMMA,
    ACTIONS(748), 1,
      anon_sym_SEMI,
    STATE(198), 1,
      aux_sym_mailbox_list_repeat1,
  [4831] = 3,
    ACTIONS(681), 1,
      aux_sym_ccontent_token1,
    ACTIONS(750), 1,
      anon_sym_RPAREN,
    STATE(181), 1,
      aux_sym_comment_repeat1,
  [4841] = 2,
    ACTIONS(752), 1,
      anon_sym_LPAREN,
    ACTIONS(754), 2,
      sym__line_break,
      sym_wsp,
  [4849] = 3,
    ACTIONS(690), 1,
      anon_sym_COMMA,
    ACTIONS(756), 1,
      sym__line_break,
    STATE(179), 1,
      aux_sym_addresslist_repeat1,
  [4859] = 3,
    ACTIONS(681), 1,
      aux_sym_ccontent_token1,
    ACTIONS(758), 1,
      anon_sym_RPAREN,
    STATE(176), 1,
      aux_sym_comment_repeat1,
  [4869] = 2,
    ACTIONS(760), 1,
      ts_builtin_sym_end,
    ACTIONS(762), 2,
      aux_sym__bodycontent_token1,
      sym__quote,
  [4877] = 3,
    ACTIONS(702), 1,
      anon_sym_COMMA,
    ACTIONS(764), 1,
      anon_sym_SEMI,
    STATE(198), 1,
      aux_sym_mailbox_list_repeat1,
  [4887] = 2,
    ACTIONS(766), 1,
      sym__text,
    ACTIONS(768), 1,
      sym__quote,
  [4894] = 2,
    ACTIONS(770), 1,
      sym_atom,
    STATE(38), 1,
      sym_dotatom_text,
  [4901] = 1,
    ACTIONS(399), 2,
      sym__line_break,
      anon_sym_COMMA,
  [4906] = 2,
    ACTIONS(772), 1,
      sym_atom,
    STATE(332), 1,
      sym_dotatom_text,
  [4913] = 2,
    ACTIONS(772), 1,
      sym_atom,
    STATE(331), 1,
      sym_dotatom_text,
  [4920] = 2,
    ACTIONS(772), 1,
      sym_atom,
    STATE(312), 1,
      sym_dotatom_text,
  [4927] = 2,
    ACTIONS(772), 1,
      sym_atom,
    STATE(311), 1,
      sym_dotatom_text,
  [4934] = 2,
    ACTIONS(774), 1,
      sym_wsp,
    STATE(175), 1,
      aux_sym_fws_repeat1,
  [4941] = 1,
    ACTIONS(417), 2,
      sym__line_break,
      anon_sym_COMMA,
  [4946] = 2,
    ACTIONS(776), 1,
      sym_wsp,
    STATE(177), 1,
      aux_sym_fws_repeat1,
  [4953] = 2,
    ACTIONS(778), 1,
      sym_wsp,
    STATE(172), 1,
      aux_sym_fws_repeat1,
  [4960] = 2,
    ACTIONS(780), 1,
      sym_wsp,
    STATE(174), 1,
      aux_sym_fws_repeat1,
  [4967] = 1,
    ACTIONS(782), 2,
      sym__line_break,
      anon_sym_COMMA,
  [4972] = 2,
    ACTIONS(784), 1,
      sym_wsp,
    STATE(11), 1,
      aux_sym_fws_repeat1,
  [4979] = 2,
    ACTIONS(786), 1,
      sym_wsp,
    STATE(12), 1,
      aux_sym_fws_repeat1,
  [4986] = 1,
    ACTIONS(427), 2,
      sym__line_break,
      anon_sym_COMMA,
  [4991] = 2,
    ACTIONS(772), 1,
      sym_atom,
    STATE(291), 1,
      sym_dotatom_text,
  [4998] = 1,
    ACTIONS(788), 2,
      sym__line_break,
      anon_sym_COMMA,
  [5003] = 2,
    ACTIONS(790), 1,
      anon_sym_LPAREN,
    STATE(110), 1,
      sym_comment,
  [5010] = 1,
    ACTIONS(748), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5015] = 2,
    ACTIONS(792), 1,
      sym_wsp,
    STATE(105), 1,
      aux_sym_fws_repeat1,
  [5022] = 2,
    ACTIONS(794), 1,
      aux_sym_day_token2,
    STATE(231), 1,
      sym_second,
  [5029] = 2,
    ACTIONS(796), 1,
      sym_wsp,
    STATE(98), 1,
      aux_sym_fws_repeat1,
  [5036] = 1,
    ACTIONS(798), 2,
      sym__line_break,
      anon_sym_COMMA,
  [5041] = 1,
    ACTIONS(800), 2,
      sym__line_break,
      anon_sym_COMMA,
  [5046] = 1,
    ACTIONS(802), 2,
      sym__line_break,
      sym_wsp,
  [5051] = 1,
    ACTIONS(804), 2,
      sym__line_break,
      sym_wsp,
  [5056] = 2,
    ACTIONS(806), 1,
      anon_sym_DQUOTE,
    ACTIONS(808), 1,
      aux_sym_quoted_string_token1,
  [5063] = 2,
    ACTIONS(537), 1,
      anon_sym_DQUOTE,
    ACTIONS(808), 1,
      aux_sym_quoted_string_token1,
  [5070] = 1,
    ACTIONS(810), 2,
      sym__line_break,
      anon_sym_COMMA,
  [5075] = 2,
    ACTIONS(812), 1,
      anon_sym_LPAREN,
    STATE(133), 1,
      sym_comment,
  [5082] = 1,
    ACTIONS(798), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5087] = 2,
    ACTIONS(772), 1,
      sym_atom,
    STATE(302), 1,
      sym_dotatom_text,
  [5094] = 2,
    ACTIONS(548), 1,
      anon_sym_DQUOTE,
    ACTIONS(808), 1,
      aux_sym_quoted_string_token1,
  [5101] = 1,
    ACTIONS(814), 2,
      sym__line_break,
      sym_wsp,
  [5106] = 2,
    ACTIONS(770), 1,
      sym_atom,
    STATE(80), 1,
      sym_dotatom_text,
  [5113] = 2,
    ACTIONS(816), 1,
      sym_wsp,
    STATE(95), 1,
      aux_sym_fws_repeat1,
  [5120] = 2,
    ACTIONS(808), 1,
      aux_sym_quoted_string_token1,
    ACTIONS(818), 1,
      anon_sym_DQUOTE,
  [5127] = 2,
    ACTIONS(820), 1,
      sym_wsp,
    STATE(104), 1,
      aux_sym_fws_repeat1,
  [5134] = 1,
    ACTIONS(822), 2,
      sym__line_break,
      anon_sym_COMMA,
  [5139] = 1,
    ACTIONS(688), 2,
      sym__line_break,
      anon_sym_COMMA,
  [5144] = 1,
    ACTIONS(715), 2,
      sym__line_break,
      anon_sym_COMMA,
  [5149] = 1,
    ACTIONS(782), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5154] = 2,
    ACTIONS(700), 1,
      anon_sym_RPAREN,
    ACTIONS(824), 1,
      aux_sym_ccontent_token1,
  [5161] = 1,
    ACTIONS(665), 2,
      sym__line_break,
      anon_sym_COMMA,
  [5166] = 1,
    ACTIONS(713), 2,
      sym__line_break,
      anon_sym_COMMA,
  [5171] = 2,
    ACTIONS(826), 1,
      sym_wsp,
    STATE(194), 1,
      aux_sym_fws_repeat1,
  [5178] = 2,
    ACTIONS(772), 1,
      sym_atom,
    STATE(295), 1,
      sym_dotatom_text,
  [5185] = 2,
    ACTIONS(828), 1,
      ts_builtin_sym_end,
    ACTIONS(830), 1,
      sym__line_break,
  [5192] = 2,
    ACTIONS(832), 1,
      aux_sym_day_token2,
    STATE(197), 1,
      sym_minute,
  [5199] = 2,
    ACTIONS(451), 1,
      aux_sym_day_token1,
    ACTIONS(453), 1,
      aux_sym_day_token2,
  [5206] = 1,
    ACTIONS(822), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5211] = 1,
    ACTIONS(677), 2,
      sym__line_break,
      anon_sym_COMMA,
  [5216] = 1,
    ACTIONS(834), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5221] = 2,
    ACTIONS(529), 1,
      anon_sym_RPAREN,
    ACTIONS(531), 1,
      aux_sym_ccontent_token1,
  [5228] = 1,
    ACTIONS(399), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5233] = 2,
    ACTIONS(525), 1,
      anon_sym_RPAREN,
    ACTIONS(527), 1,
      aux_sym_ccontent_token1,
  [5240] = 2,
    ACTIONS(772), 1,
      sym_atom,
    STATE(318), 1,
      sym_dotatom_text,
  [5247] = 2,
    ACTIONS(836), 1,
      sym_wsp,
    STATE(192), 1,
      aux_sym_fws_repeat1,
  [5254] = 1,
    ACTIONS(788), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5259] = 1,
    ACTIONS(838), 1,
      anon_sym_COLON,
  [5263] = 1,
    ACTIONS(840), 1,
      anon_sym_COLON,
  [5267] = 1,
    ACTIONS(842), 1,
      sym_wsp,
  [5271] = 1,
    ACTIONS(844), 1,
      anon_sym_COLON,
  [5275] = 1,
    ACTIONS(846), 1,
      anon_sym_COLON,
  [5279] = 1,
    ACTIONS(848), 1,
      anon_sym_COLON,
  [5283] = 1,
    ACTIONS(850), 1,
      anon_sym_COLON,
  [5287] = 1,
    ACTIONS(808), 1,
      aux_sym_quoted_string_token1,
  [5291] = 1,
    ACTIONS(852), 1,
      anon_sym_GT,
  [5295] = 1,
    ACTIONS(854), 1,
      anon_sym_COLON,
  [5299] = 1,
    ACTIONS(504), 1,
      anon_sym_AT,
  [5303] = 1,
    ACTIONS(856), 1,
      sym_atom,
  [5307] = 1,
    ACTIONS(858), 1,
      sym__line_break,
  [5311] = 1,
    ACTIONS(860), 1,
      anon_sym_COLON,
  [5315] = 1,
    ACTIONS(862), 1,
      anon_sym_LT,
  [5319] = 1,
    ACTIONS(500), 1,
      anon_sym_AT,
  [5323] = 1,
    ACTIONS(864), 1,
      anon_sym_SEMI,
  [5327] = 1,
    ACTIONS(866), 1,
      anon_sym_COMMA,
  [5331] = 1,
    ACTIONS(868), 1,
      ts_builtin_sym_end,
  [5335] = 1,
    ACTIONS(870), 1,
      anon_sym_SEMI,
  [5339] = 1,
    ACTIONS(872), 1,
      anon_sym_COLON,
  [5343] = 1,
    ACTIONS(874), 1,
      anon_sym_COLON,
  [5347] = 1,
    ACTIONS(876), 1,
      aux_sym_day_token2,
  [5351] = 1,
    ACTIONS(878), 1,
      sym_atom,
  [5355] = 1,
    ACTIONS(880), 1,
      anon_sym_COLON,
  [5359] = 1,
    ACTIONS(882), 1,
      aux_sym_year_token1,
  [5363] = 1,
    ACTIONS(884), 1,
      anon_sym_GT,
  [5367] = 1,
    ACTIONS(886), 1,
      anon_sym_COLON,
  [5371] = 1,
    ACTIONS(535), 1,
      anon_sym_AT,
  [5375] = 1,
    ACTIONS(888), 1,
      anon_sym_GT,
  [5379] = 1,
    ACTIONS(890), 1,
      anon_sym_AT,
  [5383] = 1,
    ACTIONS(892), 1,
      sym__text,
  [5387] = 1,
    ACTIONS(894), 1,
      ts_builtin_sym_end,
  [5391] = 1,
    ACTIONS(896), 1,
      ts_builtin_sym_end,
  [5395] = 1,
    ACTIONS(898), 1,
      anon_sym_COLON,
  [5399] = 1,
    ACTIONS(900), 1,
      aux_sym__bodycontent_token1,
  [5403] = 1,
    ACTIONS(902), 1,
      sym__text,
  [5407] = 1,
    ACTIONS(904), 1,
      anon_sym_AT,
  [5411] = 1,
    ACTIONS(906), 1,
      anon_sym_GT,
  [5415] = 1,
    ACTIONS(908), 1,
      sym_atom,
  [5419] = 1,
    ACTIONS(910), 1,
      anon_sym_COLON,
  [5423] = 1,
    ACTIONS(912), 1,
      anon_sym_COLON,
  [5427] = 1,
    ACTIONS(914), 1,
      anon_sym_COLON,
  [5431] = 1,
    ACTIONS(916), 1,
      anon_sym_COMMA,
  [5435] = 1,
    ACTIONS(918), 1,
      anon_sym_LT,
  [5439] = 1,
    ACTIONS(920), 1,
      anon_sym_GT,
  [5443] = 1,
    ACTIONS(922), 1,
      anon_sym_GT,
  [5447] = 1,
    ACTIONS(924), 1,
      anon_sym_GT,
  [5451] = 1,
    ACTIONS(926), 1,
      aux_sym_day_token2,
  [5455] = 1,
    ACTIONS(928), 1,
      sym__quote,
  [5459] = 1,
    ACTIONS(930), 1,
      aux_sym_day_token2,
  [5463] = 1,
    ACTIONS(932), 1,
      sym__line_break,
  [5467] = 1,
    ACTIONS(934), 1,
      anon_sym_AT,
  [5471] = 1,
    ACTIONS(936), 1,
      anon_sym_GT,
  [5475] = 1,
    ACTIONS(938), 1,
      anon_sym_AT,
  [5479] = 1,
    ACTIONS(940), 1,
      aux_sym_year_token1,
  [5483] = 1,
    ACTIONS(942), 1,
      sym__line_break,
  [5487] = 1,
    ACTIONS(944), 1,
      anon_sym_COLON,
  [5491] = 1,
    ACTIONS(946), 1,
      anon_sym_COLON,
  [5495] = 1,
    ACTIONS(948), 1,
      anon_sym_AT,
  [5499] = 1,
    ACTIONS(950), 1,
      anon_sym_COLON,
  [5503] = 1,
    ACTIONS(952), 1,
      anon_sym_LT,
  [5507] = 1,
    ACTIONS(954), 1,
      sym__line_break,
  [5511] = 1,
    ACTIONS(956), 1,
      anon_sym_SEMI,
  [5515] = 1,
    ACTIONS(958), 1,
      anon_sym_COLON,
  [5519] = 1,
    ACTIONS(960), 1,
      anon_sym_COLON,
  [5523] = 1,
    ACTIONS(962), 1,
      anon_sym_AT,
  [5527] = 1,
    ACTIONS(964), 1,
      anon_sym_AT,
  [5531] = 1,
    ACTIONS(966), 1,
      anon_sym_COMMA,
  [5535] = 1,
    ACTIONS(968), 1,
      anon_sym_COMMA,
  [5539] = 1,
    ACTIONS(970), 1,
      anon_sym_LT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 77,
  [SMALL_STATE(4)] = 154,
  [SMALL_STATE(5)] = 195,
  [SMALL_STATE(6)] = 234,
  [SMALL_STATE(7)] = 310,
  [SMALL_STATE(8)] = 384,
  [SMALL_STATE(9)] = 460,
  [SMALL_STATE(10)] = 493,
  [SMALL_STATE(11)] = 564,
  [SMALL_STATE(12)] = 597,
  [SMALL_STATE(13)] = 630,
  [SMALL_STATE(14)] = 697,
  [SMALL_STATE(15)] = 766,
  [SMALL_STATE(16)] = 835,
  [SMALL_STATE(17)] = 901,
  [SMALL_STATE(18)] = 967,
  [SMALL_STATE(19)] = 1014,
  [SMALL_STATE(20)] = 1065,
  [SMALL_STATE(21)] = 1114,
  [SMALL_STATE(22)] = 1163,
  [SMALL_STATE(23)] = 1212,
  [SMALL_STATE(24)] = 1263,
  [SMALL_STATE(25)] = 1307,
  [SMALL_STATE(26)] = 1355,
  [SMALL_STATE(27)] = 1399,
  [SMALL_STATE(28)] = 1447,
  [SMALL_STATE(29)] = 1495,
  [SMALL_STATE(30)] = 1543,
  [SMALL_STATE(31)] = 1565,
  [SMALL_STATE(32)] = 1587,
  [SMALL_STATE(33)] = 1606,
  [SMALL_STATE(34)] = 1641,
  [SMALL_STATE(35)] = 1660,
  [SMALL_STATE(36)] = 1679,
  [SMALL_STATE(37)] = 1718,
  [SMALL_STATE(38)] = 1751,
  [SMALL_STATE(39)] = 1786,
  [SMALL_STATE(40)] = 1827,
  [SMALL_STATE(41)] = 1846,
  [SMALL_STATE(42)] = 1865,
  [SMALL_STATE(43)] = 1884,
  [SMALL_STATE(44)] = 1903,
  [SMALL_STATE(45)] = 1938,
  [SMALL_STATE(46)] = 1957,
  [SMALL_STATE(47)] = 1976,
  [SMALL_STATE(48)] = 2011,
  [SMALL_STATE(49)] = 2030,
  [SMALL_STATE(50)] = 2071,
  [SMALL_STATE(51)] = 2090,
  [SMALL_STATE(52)] = 2109,
  [SMALL_STATE(53)] = 2147,
  [SMALL_STATE(54)] = 2183,
  [SMALL_STATE(55)] = 2201,
  [SMALL_STATE(56)] = 2231,
  [SMALL_STATE(57)] = 2263,
  [SMALL_STATE(58)] = 2299,
  [SMALL_STATE(59)] = 2337,
  [SMALL_STATE(60)] = 2375,
  [SMALL_STATE(61)] = 2410,
  [SMALL_STATE(62)] = 2439,
  [SMALL_STATE(63)] = 2472,
  [SMALL_STATE(64)] = 2507,
  [SMALL_STATE(65)] = 2540,
  [SMALL_STATE(66)] = 2555,
  [SMALL_STATE(67)] = 2584,
  [SMALL_STATE(68)] = 2599,
  [SMALL_STATE(69)] = 2624,
  [SMALL_STATE(70)] = 2648,
  [SMALL_STATE(71)] = 2680,
  [SMALL_STATE(72)] = 2706,
  [SMALL_STATE(73)] = 2738,
  [SMALL_STATE(74)] = 2770,
  [SMALL_STATE(75)] = 2802,
  [SMALL_STATE(76)] = 2826,
  [SMALL_STATE(77)] = 2852,
  [SMALL_STATE(78)] = 2884,
  [SMALL_STATE(79)] = 2908,
  [SMALL_STATE(80)] = 2932,
  [SMALL_STATE(81)] = 2964,
  [SMALL_STATE(82)] = 2996,
  [SMALL_STATE(83)] = 3028,
  [SMALL_STATE(84)] = 3060,
  [SMALL_STATE(85)] = 3084,
  [SMALL_STATE(86)] = 3113,
  [SMALL_STATE(87)] = 3134,
  [SMALL_STATE(88)] = 3163,
  [SMALL_STATE(89)] = 3182,
  [SMALL_STATE(90)] = 3211,
  [SMALL_STATE(91)] = 3240,
  [SMALL_STATE(92)] = 3269,
  [SMALL_STATE(93)] = 3290,
  [SMALL_STATE(94)] = 3319,
  [SMALL_STATE(95)] = 3348,
  [SMALL_STATE(96)] = 3366,
  [SMALL_STATE(97)] = 3384,
  [SMALL_STATE(98)] = 3412,
  [SMALL_STATE(99)] = 3430,
  [SMALL_STATE(100)] = 3448,
  [SMALL_STATE(101)] = 3474,
  [SMALL_STATE(102)] = 3492,
  [SMALL_STATE(103)] = 3510,
  [SMALL_STATE(104)] = 3538,
  [SMALL_STATE(105)] = 3556,
  [SMALL_STATE(106)] = 3574,
  [SMALL_STATE(107)] = 3592,
  [SMALL_STATE(108)] = 3617,
  [SMALL_STATE(109)] = 3630,
  [SMALL_STATE(110)] = 3643,
  [SMALL_STATE(111)] = 3656,
  [SMALL_STATE(112)] = 3671,
  [SMALL_STATE(113)] = 3696,
  [SMALL_STATE(114)] = 3709,
  [SMALL_STATE(115)] = 3722,
  [SMALL_STATE(116)] = 3735,
  [SMALL_STATE(117)] = 3752,
  [SMALL_STATE(118)] = 3777,
  [SMALL_STATE(119)] = 3798,
  [SMALL_STATE(120)] = 3819,
  [SMALL_STATE(121)] = 3832,
  [SMALL_STATE(122)] = 3857,
  [SMALL_STATE(123)] = 3882,
  [SMALL_STATE(124)] = 3894,
  [SMALL_STATE(125)] = 3914,
  [SMALL_STATE(126)] = 3936,
  [SMALL_STATE(127)] = 3948,
  [SMALL_STATE(128)] = 3970,
  [SMALL_STATE(129)] = 3982,
  [SMALL_STATE(130)] = 4002,
  [SMALL_STATE(131)] = 4022,
  [SMALL_STATE(132)] = 4034,
  [SMALL_STATE(133)] = 4046,
  [SMALL_STATE(134)] = 4058,
  [SMALL_STATE(135)] = 4070,
  [SMALL_STATE(136)] = 4092,
  [SMALL_STATE(137)] = 4112,
  [SMALL_STATE(138)] = 4124,
  [SMALL_STATE(139)] = 4146,
  [SMALL_STATE(140)] = 4159,
  [SMALL_STATE(141)] = 4176,
  [SMALL_STATE(142)] = 4193,
  [SMALL_STATE(143)] = 4206,
  [SMALL_STATE(144)] = 4225,
  [SMALL_STATE(145)] = 4244,
  [SMALL_STATE(146)] = 4255,
  [SMALL_STATE(147)] = 4269,
  [SMALL_STATE(148)] = 4285,
  [SMALL_STATE(149)] = 4299,
  [SMALL_STATE(150)] = 4313,
  [SMALL_STATE(151)] = 4327,
  [SMALL_STATE(152)] = 4341,
  [SMALL_STATE(153)] = 4355,
  [SMALL_STATE(154)] = 4371,
  [SMALL_STATE(155)] = 4385,
  [SMALL_STATE(156)] = 4399,
  [SMALL_STATE(157)] = 4415,
  [SMALL_STATE(158)] = 4429,
  [SMALL_STATE(159)] = 4445,
  [SMALL_STATE(160)] = 4454,
  [SMALL_STATE(161)] = 4467,
  [SMALL_STATE(162)] = 4478,
  [SMALL_STATE(163)] = 4489,
  [SMALL_STATE(164)] = 4502,
  [SMALL_STATE(165)] = 4513,
  [SMALL_STATE(166)] = 4524,
  [SMALL_STATE(167)] = 4537,
  [SMALL_STATE(168)] = 4546,
  [SMALL_STATE(169)] = 4553,
  [SMALL_STATE(170)] = 4566,
  [SMALL_STATE(171)] = 4577,
  [SMALL_STATE(172)] = 4586,
  [SMALL_STATE(173)] = 4597,
  [SMALL_STATE(174)] = 4604,
  [SMALL_STATE(175)] = 4615,
  [SMALL_STATE(176)] = 4625,
  [SMALL_STATE(177)] = 4635,
  [SMALL_STATE(178)] = 4645,
  [SMALL_STATE(179)] = 4655,
  [SMALL_STATE(180)] = 4665,
  [SMALL_STATE(181)] = 4675,
  [SMALL_STATE(182)] = 4685,
  [SMALL_STATE(183)] = 4695,
  [SMALL_STATE(184)] = 4703,
  [SMALL_STATE(185)] = 4713,
  [SMALL_STATE(186)] = 4719,
  [SMALL_STATE(187)] = 4725,
  [SMALL_STATE(188)] = 4733,
  [SMALL_STATE(189)] = 4743,
  [SMALL_STATE(190)] = 4749,
  [SMALL_STATE(191)] = 4757,
  [SMALL_STATE(192)] = 4765,
  [SMALL_STATE(193)] = 4775,
  [SMALL_STATE(194)] = 4785,
  [SMALL_STATE(195)] = 4795,
  [SMALL_STATE(196)] = 4803,
  [SMALL_STATE(197)] = 4813,
  [SMALL_STATE(198)] = 4821,
  [SMALL_STATE(199)] = 4831,
  [SMALL_STATE(200)] = 4841,
  [SMALL_STATE(201)] = 4849,
  [SMALL_STATE(202)] = 4859,
  [SMALL_STATE(203)] = 4869,
  [SMALL_STATE(204)] = 4877,
  [SMALL_STATE(205)] = 4887,
  [SMALL_STATE(206)] = 4894,
  [SMALL_STATE(207)] = 4901,
  [SMALL_STATE(208)] = 4906,
  [SMALL_STATE(209)] = 4913,
  [SMALL_STATE(210)] = 4920,
  [SMALL_STATE(211)] = 4927,
  [SMALL_STATE(212)] = 4934,
  [SMALL_STATE(213)] = 4941,
  [SMALL_STATE(214)] = 4946,
  [SMALL_STATE(215)] = 4953,
  [SMALL_STATE(216)] = 4960,
  [SMALL_STATE(217)] = 4967,
  [SMALL_STATE(218)] = 4972,
  [SMALL_STATE(219)] = 4979,
  [SMALL_STATE(220)] = 4986,
  [SMALL_STATE(221)] = 4991,
  [SMALL_STATE(222)] = 4998,
  [SMALL_STATE(223)] = 5003,
  [SMALL_STATE(224)] = 5010,
  [SMALL_STATE(225)] = 5015,
  [SMALL_STATE(226)] = 5022,
  [SMALL_STATE(227)] = 5029,
  [SMALL_STATE(228)] = 5036,
  [SMALL_STATE(229)] = 5041,
  [SMALL_STATE(230)] = 5046,
  [SMALL_STATE(231)] = 5051,
  [SMALL_STATE(232)] = 5056,
  [SMALL_STATE(233)] = 5063,
  [SMALL_STATE(234)] = 5070,
  [SMALL_STATE(235)] = 5075,
  [SMALL_STATE(236)] = 5082,
  [SMALL_STATE(237)] = 5087,
  [SMALL_STATE(238)] = 5094,
  [SMALL_STATE(239)] = 5101,
  [SMALL_STATE(240)] = 5106,
  [SMALL_STATE(241)] = 5113,
  [SMALL_STATE(242)] = 5120,
  [SMALL_STATE(243)] = 5127,
  [SMALL_STATE(244)] = 5134,
  [SMALL_STATE(245)] = 5139,
  [SMALL_STATE(246)] = 5144,
  [SMALL_STATE(247)] = 5149,
  [SMALL_STATE(248)] = 5154,
  [SMALL_STATE(249)] = 5161,
  [SMALL_STATE(250)] = 5166,
  [SMALL_STATE(251)] = 5171,
  [SMALL_STATE(252)] = 5178,
  [SMALL_STATE(253)] = 5185,
  [SMALL_STATE(254)] = 5192,
  [SMALL_STATE(255)] = 5199,
  [SMALL_STATE(256)] = 5206,
  [SMALL_STATE(257)] = 5211,
  [SMALL_STATE(258)] = 5216,
  [SMALL_STATE(259)] = 5221,
  [SMALL_STATE(260)] = 5228,
  [SMALL_STATE(261)] = 5233,
  [SMALL_STATE(262)] = 5240,
  [SMALL_STATE(263)] = 5247,
  [SMALL_STATE(264)] = 5254,
  [SMALL_STATE(265)] = 5259,
  [SMALL_STATE(266)] = 5263,
  [SMALL_STATE(267)] = 5267,
  [SMALL_STATE(268)] = 5271,
  [SMALL_STATE(269)] = 5275,
  [SMALL_STATE(270)] = 5279,
  [SMALL_STATE(271)] = 5283,
  [SMALL_STATE(272)] = 5287,
  [SMALL_STATE(273)] = 5291,
  [SMALL_STATE(274)] = 5295,
  [SMALL_STATE(275)] = 5299,
  [SMALL_STATE(276)] = 5303,
  [SMALL_STATE(277)] = 5307,
  [SMALL_STATE(278)] = 5311,
  [SMALL_STATE(279)] = 5315,
  [SMALL_STATE(280)] = 5319,
  [SMALL_STATE(281)] = 5323,
  [SMALL_STATE(282)] = 5327,
  [SMALL_STATE(283)] = 5331,
  [SMALL_STATE(284)] = 5335,
  [SMALL_STATE(285)] = 5339,
  [SMALL_STATE(286)] = 5343,
  [SMALL_STATE(287)] = 5347,
  [SMALL_STATE(288)] = 5351,
  [SMALL_STATE(289)] = 5355,
  [SMALL_STATE(290)] = 5359,
  [SMALL_STATE(291)] = 5363,
  [SMALL_STATE(292)] = 5367,
  [SMALL_STATE(293)] = 5371,
  [SMALL_STATE(294)] = 5375,
  [SMALL_STATE(295)] = 5379,
  [SMALL_STATE(296)] = 5383,
  [SMALL_STATE(297)] = 5387,
  [SMALL_STATE(298)] = 5391,
  [SMALL_STATE(299)] = 5395,
  [SMALL_STATE(300)] = 5399,
  [SMALL_STATE(301)] = 5403,
  [SMALL_STATE(302)] = 5407,
  [SMALL_STATE(303)] = 5411,
  [SMALL_STATE(304)] = 5415,
  [SMALL_STATE(305)] = 5419,
  [SMALL_STATE(306)] = 5423,
  [SMALL_STATE(307)] = 5427,
  [SMALL_STATE(308)] = 5431,
  [SMALL_STATE(309)] = 5435,
  [SMALL_STATE(310)] = 5439,
  [SMALL_STATE(311)] = 5443,
  [SMALL_STATE(312)] = 5447,
  [SMALL_STATE(313)] = 5451,
  [SMALL_STATE(314)] = 5455,
  [SMALL_STATE(315)] = 5459,
  [SMALL_STATE(316)] = 5463,
  [SMALL_STATE(317)] = 5467,
  [SMALL_STATE(318)] = 5471,
  [SMALL_STATE(319)] = 5475,
  [SMALL_STATE(320)] = 5479,
  [SMALL_STATE(321)] = 5483,
  [SMALL_STATE(322)] = 5487,
  [SMALL_STATE(323)] = 5491,
  [SMALL_STATE(324)] = 5495,
  [SMALL_STATE(325)] = 5499,
  [SMALL_STATE(326)] = 5503,
  [SMALL_STATE(327)] = 5507,
  [SMALL_STATE(328)] = 5511,
  [SMALL_STATE(329)] = 5515,
  [SMALL_STATE(330)] = 5519,
  [SMALL_STATE(331)] = 5523,
  [SMALL_STATE(332)] = 5527,
  [SMALL_STATE(333)] = 5531,
  [SMALL_STATE(334)] = 5535,
  [SMALL_STATE(335)] = 5539,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(322),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(330),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(329),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(325),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(323),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(307),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(306),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(299),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(292),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(289),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(286),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(285),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headers, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_fws_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fws_repeat1, 2), SHIFT_REPEAT(4),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fws_repeat1, 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fws, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fws_repeat1, 2), SHIFT_REPEAT(9),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fws, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fws, 2),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cfws_repeat2, 1), SHIFT(27),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cfws_repeat2, 1), SHIFT(188),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cfws_repeat2, 1), SHIFT(86),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cfws_repeat2, 1), SHIFT(24),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cfws_repeat2, 1), SHIFT(107),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cfws_repeat2, 1), SHIFT(267),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cfws_repeat2, 1), SHIFT(28),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_phrase_repeat1, 2),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_phrase_repeat1, 2), SHIFT_REPEAT(188),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_phrase_repeat1, 2), SHIFT_REPEAT(86),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_phrase_repeat1, 2), SHIFT_REPEAT(44),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_phrase_repeat1, 2), SHIFT_REPEAT(107),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_phrase_repeat1, 2), SHIFT_REPEAT(267),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_phrase, 1),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_phrase, 1), SHIFT(188),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_phrase, 1), SHIFT(86),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_phrase, 1), SHIFT(267),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_phrase, 2),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_phrase, 2), SHIFT(188),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_phrase, 2), SHIFT(86),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_phrase, 2), SHIFT(267),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom2, 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotatom_text, 1),
  [185] = {.entry = {.count = 3, .reusable = false}}, REDUCE(sym_atom2, 1), REDUCE(sym_dotatom_text, 1), SHIFT(188),
  [189] = {.entry = {.count = 3, .reusable = false}}, REDUCE(sym_atom2, 1), REDUCE(sym_dotatom_text, 1), SHIFT(86),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [195] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym_atom2, 1), REDUCE(sym_dotatom_text, 1), SHIFT(267),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_atom2, 1), REDUCE(sym_atom2, 2),
  [206] = {.entry = {.count = 4, .reusable = false}}, REDUCE(sym_atom2, 1), REDUCE(sym_dotatom_text, 1), REDUCE(sym_atom2, 2), SHIFT(188),
  [211] = {.entry = {.count = 4, .reusable = false}}, REDUCE(sym_atom2, 1), REDUCE(sym_dotatom_text, 1), REDUCE(sym_atom2, 2), SHIFT(86),
  [216] = {.entry = {.count = 4, .reusable = true}}, REDUCE(sym_atom2, 1), REDUCE(sym_dotatom_text, 1), REDUCE(sym_atom2, 2), SHIFT(267),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fieldbody, 2),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fieldbody, 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_break, 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references_field, 2),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_references_field, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addressheader, 3),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addressheader, 3),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotatom, 1),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addresslist, 2),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addresslist, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addresslist, 3),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addresslist, 3),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cfws, 1),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotatom, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__subjectfield, 1, .production_id = 1),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__subjectfield, 1, .production_id = 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subjectheader, 3),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subjectheader, 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headerentry, 1),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headerentry, 1),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_atom2, 1), SHIFT(188),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_atom2, 1), SHIFT(86),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_atom2, 1), SHIFT(267),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref, 3),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ref, 3),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dateheader, 3),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dateheader, 3),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom2, 2),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_atom2, 2), SHIFT(188),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_atom2, 2), SHIFT(86),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_atom2, 2), SHIFT(267),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_midheader, 3),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_midheader, 3),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datefield, 2),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__datefield, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_idfield, 2),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_idfield, 2),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [313] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_references_field_repeat1, 2), SHIFT_REPEAT(237),
  [316] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_references_field_repeat1, 2), SHIFT_REPEAT(202),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_references_field_repeat1, 2), SHIFT_REPEAT(92),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_references_field_repeat1, 2), SHIFT_REPEAT(267),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cfws_repeat1, 2),
  [329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cfws_repeat1, 2), SHIFT_REPEAT(202),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cfws_repeat1, 2), SHIFT_REPEAT(5),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cfws_repeat1, 2), SHIFT_REPEAT(267),
  [338] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_cfws, 1), SHIFT(188),
  [341] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_cfws, 1), SHIFT(86),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_cfws, 1), SHIFT(267),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [353] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cfws_repeat1, 2), SHIFT_REPEAT(188),
  [356] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cfws_repeat1, 2), SHIFT_REPEAT(5),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_angle_addr, 4),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_angle_addr, 3),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_day, 3),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_day, 2),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cfws_repeat2, 2),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cfws_repeat2, 2), SHIFT_REPEAT(92),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cfws_repeat2, 2), SHIFT_REPEAT(267),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cfws, 2),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_dotatom, 1), SHIFT(267),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blocks, 1),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_angle_addr, 3),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msg_id, 5),
  [390] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_msg_id, 5), SHIFT(202),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_msg_id, 5), SHIFT(92),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_msg_id, 5), SHIFT(267),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_angle_addr, 4),
  [401] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_cfws, 2), SHIFT(86),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_cfws, 2), SHIFT(267),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_blocks_repeat1, 2),
  [409] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_blocks_repeat1, 2), SHIFT_REPEAT(191),
  [412] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_blocks_repeat1, 2), SHIFT_REPEAT(205),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mailgroup, 4),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailgroup, 4),
  [419] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cfws_repeat2, 2), SHIFT_REPEAT(86),
  [422] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_dotatom, 2), SHIFT(267),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mailgroup, 5),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailgroup, 5),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msg_id, 6),
  [431] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_msg_id, 6), SHIFT(202),
  [434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_msg_id, 6), SHIFT(92),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_msg_id, 6), SHIFT(267),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mailgroup, 3),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailgroup, 3),
  [444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_date_time, 2), SHIFT(267),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [455] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_cfws, 1), SHIFT(202),
  [458] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_cfws, 1), SHIFT(92),
  [461] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_date_time, 4), SHIFT(267),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fws, 3),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotatom_text, 2),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotatom_text, 2),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fws, 2),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dotatom_text_repeat1, 2),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dotatom_text_repeat1, 2),
  [480] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dotatom_text_repeat1, 2), SHIFT_REPEAT(276),
  [483] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fws_repeat1, 2), SHIFT_REPEAT(101),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotatom_text, 1),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cfws_repeat2, 1),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cfws_repeat2, 1),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 3),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 4),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 4),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cfws_repeat1, 2),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 1),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local, 1),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1),
  [514] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(141),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2),
  [519] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(112),
  [522] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(267),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 2),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [541] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_cfws, 2), SHIFT(92),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [552] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__fieldbody_repeat1, 2), SHIFT_REPEAT(153),
  [555] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__fieldbody_repeat1, 2), SHIFT_REPEAT(127),
  [558] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__fieldbody_repeat1, 2), SHIFT_REPEAT(267),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom2, 2),
  [563] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_atom2, 2), REDUCE(sym_atom2, 3),
  [566] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_atom2, 2), REDUCE(sym_atom2, 3),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom2, 3),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom2, 3),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_phrase, 2),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 1),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 1),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_phrase, 3),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_phrase, 3),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [599] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cfws_repeat1, 1), REDUCE(aux_sym_cfws_repeat1, 2),
  [602] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cfws_repeat1, 1), REDUCE(aux_sym_cfws_repeat1, 2),
  [605] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cfws_repeat2, 1), SHIFT(202),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [616] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fws_repeat1, 2), SHIFT_REPEAT(151),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat2, 2),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat2, 2),
  [625] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat2, 2), SHIFT_REPEAT(301),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [630] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(191),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat3, 2),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat3, 2),
  [639] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat3, 2), SHIFT_REPEAT(314),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_msg_id, 7),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msg_id, 7),
  [648] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fws_repeat1, 2), SHIFT_REPEAT(160),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [653] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_year_repeat1, 2), SHIFT_REPEAT(162),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_year_repeat1, 2),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [660] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotatom_text_repeat1, 2), SHIFT_REPEAT(304),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quoted_string_repeat1, 2),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotatom, 2),
  [667] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fws_repeat1, 2), SHIFT_REPEAT(169),
  [670] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fws_repeat1, 2), SHIFT_REPEAT(170),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_msg_id, 6),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotatom, 3),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [685] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_addresslist_repeat1, 2), SHIFT_REPEAT(10),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_addresslist_repeat1, 2),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [694] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fws_repeat1, 2), SHIFT_REPEAT(180),
  [697] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(140),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailbox_list, 1),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__fieldbody_repeat1, 2),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__fieldbody_repeat1, 2),
  [710] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fws_repeat1, 2), SHIFT_REPEAT(184),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain, 1),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addrspec, 3),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 2),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 2),
  [721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote1, 2),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote1, 2),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_minute, 1),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_minute, 1),
  [739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time_of_day, 3),
  [745] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mailbox_list_repeat1, 2), SHIFT_REPEAT(13),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mailbox_list_repeat1, 2),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [752] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_zone, 3),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_zone, 3),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote2, 3),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote2, 3),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailbox_list, 2),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailbox, 2),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_angle_addr, 5),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailbox, 1),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailgroup, 6),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_second, 1),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time_of_day, 5),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_internetaddress, 1),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_month, 1),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailbox, 3),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 1),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hour, 1),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_break, 1),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_midkind, 1),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addrkind, 1),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date_time, 3),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_list, 1),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_day_name, 1),
  [868] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 1),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datefield, 3),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_references, 1),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 3),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_emailbody, 1),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_reply_to, 1),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_id, 1),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replyto, 1),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_day_of_week, 2),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_year, 4),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_year, 3),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date_time, 5),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local, 1),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_to, 1),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sender, 1),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bcc, 1),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cc, 1),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 1),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_day_of_week, 1),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
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
