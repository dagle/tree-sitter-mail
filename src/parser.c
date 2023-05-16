#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 155
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 90
#define ALIAS_COUNT 3
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 4

enum {
  anon_sym_COLON = 1,
  aux_sym_to_token1 = 2,
  aux_sym_from_token1 = 3,
  aux_sym_cc_token1 = 4,
  aux_sym_bcc_token1 = 5,
  aux_sym_sender_token1 = 6,
  aux_sym_replyto_token1 = 7,
  aux_sym_date_token1 = 8,
  aux_sym_subject_token1 = 9,
  aux_sym_message_id_token1 = 10,
  sym_headertype = 11,
  anon_sym_LPAREN = 12,
  anon_sym_RPAREN = 13,
  sym__bodycontent = 14,
  anon_sym_COMMA = 15,
  anon_sym_SEMI = 16,
  anon_sym_LT = 17,
  anon_sym_GT = 18,
  anon_sym_AT = 19,
  anon_sym_DOT = 20,
  sym__atom = 21,
  anon_sym_LBRACK = 22,
  anon_sym_RBRACK = 23,
  anon_sym_DQUOTE = 24,
  aux_sym_quoted_string_token1 = 25,
  anon_sym_LF = 26,
  aux_sym_line_token1 = 27,
  anon_sym_CR = 28,
  aux_sym__textline_token1 = 29,
  sym__quote = 30,
  sym_footersep = 31,
  sym__line_break = 32,
  sym__wsp = 33,
  sym__eof = 34,
  sym_message = 35,
  sym_headers = 36,
  sym_header = 37,
  sym_addressheader = 38,
  sym_dateheader = 39,
  sym_subjectheader = 40,
  sym_midheader = 41,
  sym_addrkind = 42,
  sym_to = 43,
  sym_from = 44,
  sym_cc = 45,
  sym_bcc = 46,
  sym_sender = 47,
  sym_replyto = 48,
  sym_date = 49,
  sym_subject = 50,
  sym_message_id = 51,
  sym_mid = 52,
  sym__subjectfield = 53,
  sym__datefield = 54,
  sym_headerentry = 55,
  sym_lspw = 56,
  sym_fws = 57,
  sym__fieldbody = 58,
  sym_addresslist = 59,
  sym_internetaddress = 60,
  sym_mailgroup = 61,
  sym_group_list = 62,
  sym_mailbox_list = 63,
  sym_mailbox = 64,
  sym_angle_addr = 65,
  sym__addrspec = 66,
  sym_domain = 67,
  sym_local = 68,
  sym_name = 69,
  sym_word = 70,
  sym_quoted_string = 71,
  sym_emailbody = 72,
  sym_block = 73,
  sym_line = 74,
  sym__eol = 75,
  sym_footer = 76,
  sym_footertext = 77,
  sym_footerline = 78,
  aux_sym_headers_repeat1 = 79,
  aux_sym_lspw_repeat1 = 80,
  aux_sym_fws_repeat1 = 81,
  aux_sym__fieldbody_repeat1 = 82,
  aux_sym_addresslist_repeat1 = 83,
  aux_sym_mailbox_list_repeat1 = 84,
  aux_sym_domain_repeat1 = 85,
  aux_sym_name_repeat1 = 86,
  aux_sym_quoted_string_repeat1 = 87,
  aux_sym_block_repeat1 = 88,
  aux_sym_footertext_repeat1 = 89,
  alias_sym_datefield = 90,
  alias_sym_midfield = 91,
  alias_sym_subjectfield = 92,
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
  [aux_sym_date_token1] = "date",
  [aux_sym_subject_token1] = "subject",
  [aux_sym_message_id_token1] = "message-id",
  [sym_headertype] = "headertype",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym__bodycontent] = "_bodycontent",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_AT] = "@",
  [anon_sym_DOT] = ".",
  [sym__atom] = "_atom",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_string_token1] = "quoted_string_token1",
  [anon_sym_LF] = "\n",
  [aux_sym_line_token1] = "line_token1",
  [anon_sym_CR] = "\r",
  [aux_sym__textline_token1] = "_textline_token1",
  [sym__quote] = "_quote",
  [sym_footersep] = "footersep",
  [sym__line_break] = "_line_break",
  [sym__wsp] = "_wsp",
  [sym__eof] = "_eof",
  [sym_message] = "message",
  [sym_headers] = "headers",
  [sym_header] = "header",
  [sym_addressheader] = "addressheader",
  [sym_dateheader] = "dateheader",
  [sym_subjectheader] = "subjectheader",
  [sym_midheader] = "midheader",
  [sym_addrkind] = "addrkind",
  [sym_to] = "to",
  [sym_from] = "from",
  [sym_cc] = "cc",
  [sym_bcc] = "bcc",
  [sym_sender] = "sender",
  [sym_replyto] = "replyto",
  [sym_date] = "date",
  [sym_subject] = "subject",
  [sym_message_id] = "message_id",
  [sym_mid] = "mid",
  [sym__subjectfield] = "_subjectfield",
  [sym__datefield] = "_datefield",
  [sym_headerentry] = "headerentry",
  [sym_lspw] = "lspw",
  [sym_fws] = "fws",
  [sym__fieldbody] = "_fieldbody",
  [sym_addresslist] = "addresslist",
  [sym_internetaddress] = "internetaddress",
  [sym_mailgroup] = "mailgroup",
  [sym_group_list] = "group_list",
  [sym_mailbox_list] = "mailbox_list",
  [sym_mailbox] = "mailbox",
  [sym_angle_addr] = "angle_addr",
  [sym__addrspec] = "_addrspec",
  [sym_domain] = "domain",
  [sym_local] = "local",
  [sym_name] = "name",
  [sym_word] = "word",
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
  [aux_sym_fws_repeat1] = "fws_repeat1",
  [aux_sym__fieldbody_repeat1] = "_fieldbody_repeat1",
  [aux_sym_addresslist_repeat1] = "addresslist_repeat1",
  [aux_sym_mailbox_list_repeat1] = "mailbox_list_repeat1",
  [aux_sym_domain_repeat1] = "domain_repeat1",
  [aux_sym_name_repeat1] = "name_repeat1",
  [aux_sym_quoted_string_repeat1] = "quoted_string_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_footertext_repeat1] = "footertext_repeat1",
  [alias_sym_datefield] = "datefield",
  [alias_sym_midfield] = "midfield",
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
  [aux_sym_date_token1] = aux_sym_date_token1,
  [aux_sym_subject_token1] = aux_sym_subject_token1,
  [aux_sym_message_id_token1] = aux_sym_message_id_token1,
  [sym_headertype] = sym_headertype,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym__bodycontent] = sym__bodycontent,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym__atom] = sym__atom,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_string_token1] = aux_sym_quoted_string_token1,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_line_token1] = aux_sym_line_token1,
  [anon_sym_CR] = anon_sym_CR,
  [aux_sym__textline_token1] = aux_sym__textline_token1,
  [sym__quote] = sym__quote,
  [sym_footersep] = sym_footersep,
  [sym__line_break] = sym__line_break,
  [sym__wsp] = sym__wsp,
  [sym__eof] = sym__eof,
  [sym_message] = sym_message,
  [sym_headers] = sym_headers,
  [sym_header] = sym_header,
  [sym_addressheader] = sym_addressheader,
  [sym_dateheader] = sym_dateheader,
  [sym_subjectheader] = sym_subjectheader,
  [sym_midheader] = sym_midheader,
  [sym_addrkind] = sym_addrkind,
  [sym_to] = sym_to,
  [sym_from] = sym_from,
  [sym_cc] = sym_cc,
  [sym_bcc] = sym_bcc,
  [sym_sender] = sym_sender,
  [sym_replyto] = sym_replyto,
  [sym_date] = sym_date,
  [sym_subject] = sym_subject,
  [sym_message_id] = sym_message_id,
  [sym_mid] = sym_mid,
  [sym__subjectfield] = sym__subjectfield,
  [sym__datefield] = sym__datefield,
  [sym_headerentry] = sym_headerentry,
  [sym_lspw] = sym_lspw,
  [sym_fws] = sym_fws,
  [sym__fieldbody] = sym__fieldbody,
  [sym_addresslist] = sym_addresslist,
  [sym_internetaddress] = sym_internetaddress,
  [sym_mailgroup] = sym_mailgroup,
  [sym_group_list] = sym_group_list,
  [sym_mailbox_list] = sym_mailbox_list,
  [sym_mailbox] = sym_mailbox,
  [sym_angle_addr] = sym_angle_addr,
  [sym__addrspec] = sym__addrspec,
  [sym_domain] = sym_domain,
  [sym_local] = sym_local,
  [sym_name] = sym_name,
  [sym_word] = sym_word,
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
  [aux_sym_fws_repeat1] = aux_sym_fws_repeat1,
  [aux_sym__fieldbody_repeat1] = aux_sym__fieldbody_repeat1,
  [aux_sym_addresslist_repeat1] = aux_sym_addresslist_repeat1,
  [aux_sym_mailbox_list_repeat1] = aux_sym_mailbox_list_repeat1,
  [aux_sym_domain_repeat1] = aux_sym_domain_repeat1,
  [aux_sym_name_repeat1] = aux_sym_name_repeat1,
  [aux_sym_quoted_string_repeat1] = aux_sym_quoted_string_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_footertext_repeat1] = aux_sym_footertext_repeat1,
  [alias_sym_datefield] = alias_sym_datefield,
  [alias_sym_midfield] = alias_sym_midfield,
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
  [aux_sym_date_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_subject_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_message_id_token1] = {
    .visible = true,
    .named = false,
  },
  [sym_headertype] = {
    .visible = true,
    .named = true,
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym__atom] = {
    .visible = false,
    .named = true,
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
  [aux_sym__textline_token1] = {
    .visible = false,
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
  [sym__wsp] = {
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
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym_subject] = {
    .visible = true,
    .named = true,
  },
  [sym_message_id] = {
    .visible = true,
    .named = true,
  },
  [sym_mid] = {
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
  [sym_fws] = {
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
  [sym__addrspec] = {
    .visible = false,
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
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_word] = {
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
  [aux_sym_fws_repeat1] = {
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
  [aux_sym_domain_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_name_repeat1] = {
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
  [alias_sym_datefield] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_midfield] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_subjectfield] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_datefield,
  },
  [2] = {
    [0] = alias_sym_subjectfield,
  },
  [3] = {
    [0] = alias_sym_midfield,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__fieldbody, 4,
    sym__fieldbody,
    alias_sym_datefield,
    alias_sym_midfield,
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
  [28] = 24,
  [29] = 26,
  [30] = 24,
  [31] = 26,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 34,
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
  [52] = 52,
  [53] = 35,
  [54] = 50,
  [55] = 44,
  [56] = 56,
  [57] = 46,
  [58] = 45,
  [59] = 43,
  [60] = 60,
  [61] = 51,
  [62] = 37,
  [63] = 63,
  [64] = 42,
  [65] = 65,
  [66] = 48,
  [67] = 67,
  [68] = 68,
  [69] = 68,
  [70] = 52,
  [71] = 35,
  [72] = 44,
  [73] = 37,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 42,
  [78] = 45,
  [79] = 67,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 74,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 96,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 101,
  [110] = 89,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 111,
  [115] = 113,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 111,
  [120] = 93,
  [121] = 121,
  [122] = 122,
  [123] = 113,
  [124] = 84,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 131,
  [144] = 129,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 135,
};

static inline bool sym__atom_character_set_1(int32_t c) {
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
      if (eof) ADVANCE(50);
      if (lookahead == '"') ADVANCE(112);
      if (lookahead == '(') ADVANCE(98);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == ',') ADVANCE(102);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == ';') ADVANCE(103);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == '>') ADVANCE(125);
      if (lookahead == '@') ADVANCE(106);
      if (lookahead == '[') ADVANCE(110);
      if (lookahead == ']') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(0)
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(18);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(16);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(13);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(40);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(22);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(23);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(24);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(35);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(126);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '"') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(113);
      if (lookahead != 0) ADVANCE(114);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(100);
      if (lookahead != 0) ADVANCE(101);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == '\r') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(1);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(112);
      if (lookahead == '(') ADVANCE(98);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == ',') ADVANCE(102);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == ';') ADVANCE(103);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == '>') ADVANCE(125);
      if (lookahead == '@') ADVANCE(106);
      if (lookahead == '[') ADVANCE(110);
      if (lookahead == ']') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(6)
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(18);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(16);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(13);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(40);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(22);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(23);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(24);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(35);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(112);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == ';') ADVANCE(103);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == '@') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(108);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(109);
      END_STATE();
    case 8:
      if (lookahead == ',') ADVANCE(102);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == ';') ADVANCE(103);
      if (lookahead == '>') ADVANCE(105);
      if (lookahead == '@') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(5);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(30);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(45);
      END_STATE();
    case 12:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(12)
      if (lookahead != 0) ADVANCE(121);
      END_STATE();
    case 13:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 14:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 15:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(31);
      END_STATE();
    case 16:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(54);
      END_STATE();
    case 17:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 18:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 20:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 21:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(26);
      END_STATE();
    case 22:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 23:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 24:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 25:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 26:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 27:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 28:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 29:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(27);
      END_STATE();
    case 30:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 31:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(28);
      END_STATE();
    case 32:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 33:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(53);
      END_STATE();
    case 34:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 35:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 36:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 37:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 38:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(32);
      END_STATE();
    case 39:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 40:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 41:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(14);
      END_STATE();
    case 42:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(41);
      END_STATE();
    case 43:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(59);
      END_STATE();
    case 44:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(25);
      END_STATE();
    case 45:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(37);
      END_STATE();
    case 46:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(11);
      END_STATE();
    case 47:
      if (eof) ADVANCE(50);
      if (lookahead == '\n') SKIP(47)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0) ADVANCE(124);
      END_STATE();
    case 48:
      if (eof) ADVANCE(50);
      if (lookahead == '-') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(118);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(48)
      if (lookahead != 0) ADVANCE(121);
      END_STATE();
    case 49:
      if (eof) ADVANCE(50);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(68);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(66);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(63);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(90);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(73);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(74);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(75);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(97);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_to_token1);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_from_token1);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_cc_token1);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_bcc_token1);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_sender_token1);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_replyto_token1);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_date_token1);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_subject_token1);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_message_id_token1);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '-') ADVANCE(80);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(97);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '-') ADVANCE(95);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(97);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(94);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(97);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(79);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(97);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(81);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(97);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(54);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(97);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(55);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(97);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(67);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(97);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(93);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(97);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(60);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(97);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(76);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(97);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(58);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(97);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(92);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(97);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(88);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(97);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(84);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(65);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(97);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(89);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(97);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(61);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(97);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(69);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(97);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(77);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(97);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(70);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(97);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(78);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(97);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(96);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(97);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(53);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(97);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(71);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(97);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(52);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(97);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(57);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(97);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(83);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(97);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(82);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(97);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(56);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(97);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(87);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(97);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(64);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(97);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(91);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(97);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(59);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(97);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(72);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(97);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(86);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(97);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(62);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_headertype);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__bodycontent);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__bodycontent);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(108);
      if (!sym__atom_character_set_1(lookahead)) ADVANCE(109);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__atom);
      if (!sym__atom_character_set_1(lookahead)) ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == '\n') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(121);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == ' ') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(121);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == '-') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(121);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == '-') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(121);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym__textline_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym__textline_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__quote);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_footersep);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 49},
  [2] = {.lex_state = 49, .external_lex_state = 2},
  [3] = {.lex_state = 49, .external_lex_state = 2},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 49, .external_lex_state = 3},
  [7] = {.lex_state = 49, .external_lex_state = 3},
  [8] = {.lex_state = 49, .external_lex_state = 3},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 49, .external_lex_state = 3},
  [12] = {.lex_state = 49, .external_lex_state = 2},
  [13] = {.lex_state = 49, .external_lex_state = 2},
  [14] = {.lex_state = 49, .external_lex_state = 2},
  [15] = {.lex_state = 49, .external_lex_state = 2},
  [16] = {.lex_state = 49, .external_lex_state = 2},
  [17] = {.lex_state = 49, .external_lex_state = 2},
  [18] = {.lex_state = 49, .external_lex_state = 2},
  [19] = {.lex_state = 49, .external_lex_state = 2},
  [20] = {.lex_state = 49, .external_lex_state = 2},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 2, .external_lex_state = 3},
  [24] = {.lex_state = 2, .external_lex_state = 3},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 2, .external_lex_state = 3},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 2, .external_lex_state = 3},
  [29] = {.lex_state = 2, .external_lex_state = 3},
  [30] = {.lex_state = 2, .external_lex_state = 3},
  [31] = {.lex_state = 2, .external_lex_state = 3},
  [32] = {.lex_state = 0, .external_lex_state = 3},
  [33] = {.lex_state = 0, .external_lex_state = 3},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 3, .external_lex_state = 3},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 0, .external_lex_state = 3},
  [39] = {.lex_state = 3, .external_lex_state = 3},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 3, .external_lex_state = 3},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 0, .external_lex_state = 3},
  [47] = {.lex_state = 48},
  [48] = {.lex_state = 2, .external_lex_state = 3},
  [49] = {.lex_state = 12},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 0, .external_lex_state = 3},
  [52] = {.lex_state = 8},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 48},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 0, .external_lex_state = 3},
  [60] = {.lex_state = 2, .external_lex_state = 3},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 47},
  [64] = {.lex_state = 8},
  [65] = {.lex_state = 4, .external_lex_state = 4},
  [66] = {.lex_state = 2, .external_lex_state = 5},
  [67] = {.lex_state = 0, .external_lex_state = 3},
  [68] = {.lex_state = 3, .external_lex_state = 3},
  [69] = {.lex_state = 0, .external_lex_state = 3},
  [70] = {.lex_state = 0, .external_lex_state = 3},
  [71] = {.lex_state = 0, .external_lex_state = 3},
  [72] = {.lex_state = 0, .external_lex_state = 3},
  [73] = {.lex_state = 0, .external_lex_state = 3},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 2, .external_lex_state = 5},
  [76] = {.lex_state = 47},
  [77] = {.lex_state = 0, .external_lex_state = 3},
  [78] = {.lex_state = 0, .external_lex_state = 3},
  [79] = {.lex_state = 3, .external_lex_state = 3},
  [80] = {.lex_state = 47},
  [81] = {.lex_state = 2, .external_lex_state = 3},
  [82] = {.lex_state = 2, .external_lex_state = 5},
  [83] = {.lex_state = 7},
  [84] = {.lex_state = 0, .external_lex_state = 3},
  [85] = {.lex_state = 0, .external_lex_state = 3},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 4, .external_lex_state = 4},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 0, .external_lex_state = 3},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 48},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0, .external_lex_state = 3},
  [94] = {.lex_state = 0, .external_lex_state = 3},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 8},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0, .external_lex_state = 3},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 0, .external_lex_state = 3},
  [101] = {.lex_state = 0, .external_lex_state = 3},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0, .external_lex_state = 3},
  [107] = {.lex_state = 0, .external_lex_state = 3},
  [108] = {.lex_state = 3, .external_lex_state = 3},
  [109] = {.lex_state = 3, .external_lex_state = 3},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 47},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 0, .external_lex_state = 5},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0, .external_lex_state = 2},
  [122] = {.lex_state = 0, .external_lex_state = 5},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0, .external_lex_state = 5},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 8},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 2},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 8},
  [144] = {.lex_state = 0, .external_lex_state = 5},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
};

enum {
  ts_external_token__line_break = 0,
  ts_external_token__wsp = 1,
  ts_external_token__eof = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__line_break] = sym__line_break,
  [ts_external_token__wsp] = sym__wsp,
  [ts_external_token__eof] = sym__eof,
};

static const bool ts_external_scanner_states[6][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__line_break] = true,
    [ts_external_token__wsp] = true,
    [ts_external_token__eof] = true,
  },
  [2] = {
    [ts_external_token__line_break] = true,
  },
  [3] = {
    [ts_external_token__line_break] = true,
    [ts_external_token__wsp] = true,
  },
  [4] = {
    [ts_external_token__eof] = true,
  },
  [5] = {
    [ts_external_token__wsp] = true,
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
    [aux_sym_date_token1] = ACTIONS(1),
    [aux_sym_subject_token1] = ACTIONS(1),
    [aux_sym_message_id_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym__quote] = ACTIONS(1),
    [sym_footersep] = ACTIONS(1),
    [sym__line_break] = ACTIONS(1),
    [sym__wsp] = ACTIONS(1),
    [sym__eof] = ACTIONS(1),
  },
  [1] = {
    [sym_message] = STATE(130),
    [sym_headers] = STATE(121),
    [sym_header] = STATE(3),
    [sym_addressheader] = STATE(3),
    [sym_dateheader] = STATE(3),
    [sym_subjectheader] = STATE(3),
    [sym_midheader] = STATE(3),
    [sym_addrkind] = STATE(134),
    [sym_to] = STATE(136),
    [sym_from] = STATE(136),
    [sym_cc] = STATE(136),
    [sym_bcc] = STATE(136),
    [sym_sender] = STATE(136),
    [sym_replyto] = STATE(136),
    [sym_date] = STATE(141),
    [sym_subject] = STATE(147),
    [sym_message_id] = STATE(140),
    [aux_sym_headers_repeat1] = STATE(3),
    [aux_sym_to_token1] = ACTIONS(3),
    [aux_sym_from_token1] = ACTIONS(5),
    [aux_sym_cc_token1] = ACTIONS(7),
    [aux_sym_bcc_token1] = ACTIONS(9),
    [aux_sym_sender_token1] = ACTIONS(11),
    [aux_sym_replyto_token1] = ACTIONS(13),
    [aux_sym_date_token1] = ACTIONS(15),
    [aux_sym_subject_token1] = ACTIONS(17),
    [aux_sym_message_id_token1] = ACTIONS(19),
    [sym_headertype] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(25), 1,
      aux_sym_to_token1,
    ACTIONS(28), 1,
      aux_sym_from_token1,
    ACTIONS(31), 1,
      aux_sym_cc_token1,
    ACTIONS(34), 1,
      aux_sym_bcc_token1,
    ACTIONS(37), 1,
      aux_sym_sender_token1,
    ACTIONS(40), 1,
      aux_sym_replyto_token1,
    ACTIONS(43), 1,
      aux_sym_date_token1,
    ACTIONS(46), 1,
      aux_sym_subject_token1,
    ACTIONS(49), 1,
      aux_sym_message_id_token1,
    ACTIONS(52), 1,
      sym_headertype,
    STATE(134), 1,
      sym_addrkind,
    STATE(140), 1,
      sym_message_id,
    STATE(141), 1,
      sym_date,
    STATE(147), 1,
      sym_subject,
    ACTIONS(23), 2,
      sym__line_break,
      ts_builtin_sym_end,
    STATE(2), 6,
      sym_header,
      sym_addressheader,
      sym_dateheader,
      sym_subjectheader,
      sym_midheader,
      aux_sym_headers_repeat1,
    STATE(136), 6,
      sym_to,
      sym_from,
      sym_cc,
      sym_bcc,
      sym_sender,
      sym_replyto,
  [63] = 17,
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
      aux_sym_date_token1,
    ACTIONS(17), 1,
      aux_sym_subject_token1,
    ACTIONS(19), 1,
      aux_sym_message_id_token1,
    ACTIONS(21), 1,
      sym_headertype,
    STATE(134), 1,
      sym_addrkind,
    STATE(140), 1,
      sym_message_id,
    STATE(141), 1,
      sym_date,
    STATE(147), 1,
      sym_subject,
    ACTIONS(55), 2,
      sym__line_break,
      ts_builtin_sym_end,
    STATE(2), 6,
      sym_header,
      sym_addressheader,
      sym_dateheader,
      sym_subjectheader,
      sym_midheader,
      aux_sym_headers_repeat1,
    STATE(136), 6,
      sym_to,
      sym_from,
      sym_cc,
      sym_bcc,
      sym_sender,
      sym_replyto,
  [126] = 13,
    ACTIONS(57), 1,
      anon_sym_SEMI,
    ACTIONS(59), 1,
      anon_sym_LT,
    ACTIONS(61), 1,
      sym__atom,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(22), 1,
      sym_word,
    STATE(25), 1,
      aux_sym_name_repeat1,
    STATE(44), 1,
      sym_quoted_string,
    STATE(103), 1,
      sym_mailbox,
    STATE(118), 1,
      sym_name,
    STATE(126), 1,
      sym_mailbox_list,
    STATE(128), 1,
      sym_group_list,
    STATE(154), 1,
      sym_local,
    STATE(120), 2,
      sym_angle_addr,
      sym__addrspec,
  [167] = 12,
    ACTIONS(61), 1,
      sym__atom,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 1,
      anon_sym_LT,
    STATE(20), 1,
      sym_addresslist,
    STATE(22), 1,
      sym_word,
    STATE(25), 1,
      aux_sym_name_repeat1,
    STATE(38), 1,
      sym_internetaddress,
    STATE(44), 1,
      sym_quoted_string,
    STATE(95), 1,
      sym_name,
    STATE(135), 1,
      sym_local,
    STATE(85), 2,
      sym_mailgroup,
      sym_mailbox,
    STATE(93), 2,
      sym_angle_addr,
      sym__addrspec,
  [206] = 3,
    ACTIONS(69), 1,
      sym_headertype,
    ACTIONS(71), 1,
      sym__wsp,
    ACTIONS(67), 11,
      sym__line_break,
      ts_builtin_sym_end,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      aux_sym_date_token1,
      aux_sym_subject_token1,
      aux_sym_message_id_token1,
  [226] = 3,
    ACTIONS(75), 1,
      sym_headertype,
    ACTIONS(77), 1,
      sym__wsp,
    ACTIONS(73), 11,
      sym__line_break,
      ts_builtin_sym_end,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      aux_sym_date_token1,
      aux_sym_subject_token1,
      aux_sym_message_id_token1,
  [246] = 3,
    ACTIONS(77), 1,
      sym__wsp,
    ACTIONS(81), 1,
      sym_headertype,
    ACTIONS(79), 11,
      sym__line_break,
      ts_builtin_sym_end,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      aux_sym_date_token1,
      aux_sym_subject_token1,
      aux_sym_message_id_token1,
  [266] = 11,
    ACTIONS(61), 1,
      sym__atom,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 1,
      anon_sym_LT,
    STATE(22), 1,
      sym_word,
    STATE(25), 1,
      aux_sym_name_repeat1,
    STATE(44), 1,
      sym_quoted_string,
    STATE(95), 1,
      sym_name,
    STATE(107), 1,
      sym_internetaddress,
    STATE(135), 1,
      sym_local,
    STATE(85), 2,
      sym_mailgroup,
      sym_mailbox,
    STATE(93), 2,
      sym_angle_addr,
      sym__addrspec,
  [302] = 11,
    ACTIONS(61), 1,
      sym__atom,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 1,
      anon_sym_LT,
    STATE(22), 1,
      sym_word,
    STATE(25), 1,
      aux_sym_name_repeat1,
    STATE(44), 1,
      sym_quoted_string,
    STATE(94), 1,
      sym_internetaddress,
    STATE(95), 1,
      sym_name,
    STATE(135), 1,
      sym_local,
    STATE(85), 2,
      sym_mailgroup,
      sym_mailbox,
    STATE(93), 2,
      sym_angle_addr,
      sym__addrspec,
  [338] = 3,
    ACTIONS(71), 1,
      sym__wsp,
    ACTIONS(85), 1,
      sym_headertype,
    ACTIONS(83), 11,
      sym__line_break,
      ts_builtin_sym_end,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      aux_sym_date_token1,
      aux_sym_subject_token1,
      aux_sym_message_id_token1,
  [358] = 2,
    ACTIONS(89), 1,
      sym_headertype,
    ACTIONS(87), 11,
      sym__line_break,
      ts_builtin_sym_end,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      aux_sym_date_token1,
      aux_sym_subject_token1,
      aux_sym_message_id_token1,
  [375] = 2,
    ACTIONS(93), 1,
      sym_headertype,
    ACTIONS(91), 11,
      sym__line_break,
      ts_builtin_sym_end,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      aux_sym_date_token1,
      aux_sym_subject_token1,
      aux_sym_message_id_token1,
  [392] = 2,
    ACTIONS(97), 1,
      sym_headertype,
    ACTIONS(95), 11,
      sym__line_break,
      ts_builtin_sym_end,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      aux_sym_date_token1,
      aux_sym_subject_token1,
      aux_sym_message_id_token1,
  [409] = 2,
    ACTIONS(101), 1,
      sym_headertype,
    ACTIONS(99), 11,
      sym__line_break,
      ts_builtin_sym_end,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      aux_sym_date_token1,
      aux_sym_subject_token1,
      aux_sym_message_id_token1,
  [426] = 2,
    ACTIONS(105), 1,
      sym_headertype,
    ACTIONS(103), 11,
      sym__line_break,
      ts_builtin_sym_end,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      aux_sym_date_token1,
      aux_sym_subject_token1,
      aux_sym_message_id_token1,
  [443] = 2,
    ACTIONS(109), 1,
      sym_headertype,
    ACTIONS(107), 11,
      sym__line_break,
      ts_builtin_sym_end,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      aux_sym_date_token1,
      aux_sym_subject_token1,
      aux_sym_message_id_token1,
  [460] = 2,
    ACTIONS(113), 1,
      sym_headertype,
    ACTIONS(111), 11,
      sym__line_break,
      ts_builtin_sym_end,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      aux_sym_date_token1,
      aux_sym_subject_token1,
      aux_sym_message_id_token1,
  [477] = 2,
    ACTIONS(117), 1,
      sym_headertype,
    ACTIONS(115), 11,
      sym__line_break,
      ts_builtin_sym_end,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      aux_sym_date_token1,
      aux_sym_subject_token1,
      aux_sym_message_id_token1,
  [494] = 2,
    ACTIONS(121), 1,
      sym_headertype,
    ACTIONS(119), 11,
      sym__line_break,
      ts_builtin_sym_end,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      aux_sym_date_token1,
      aux_sym_subject_token1,
      aux_sym_message_id_token1,
  [511] = 10,
    ACTIONS(59), 1,
      anon_sym_LT,
    ACTIONS(61), 1,
      sym__atom,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(22), 1,
      sym_word,
    STATE(25), 1,
      aux_sym_name_repeat1,
    STATE(44), 1,
      sym_quoted_string,
    STATE(117), 1,
      sym_mailbox,
    STATE(118), 1,
      sym_name,
    STATE(154), 1,
      sym_local,
    STATE(120), 2,
      sym_angle_addr,
      sym__addrspec,
  [543] = 5,
    ACTIONS(125), 1,
      anon_sym_AT,
    ACTIONS(127), 1,
      anon_sym_DOT,
    ACTIONS(129), 1,
      sym__atom,
    STATE(102), 1,
      aux_sym_domain_repeat1,
    ACTIONS(123), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_DQUOTE,
  [561] = 7,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      aux_sym_quoted_string_token1,
    ACTIONS(136), 1,
      sym__line_break,
    ACTIONS(139), 1,
      sym__wsp,
    STATE(23), 1,
      aux_sym_quoted_string_repeat1,
    STATE(60), 1,
      aux_sym_fws_repeat1,
    STATE(138), 1,
      sym_fws,
  [583] = 7,
    ACTIONS(142), 1,
      anon_sym_DQUOTE,
    ACTIONS(144), 1,
      aux_sym_quoted_string_token1,
    ACTIONS(146), 1,
      sym__line_break,
    ACTIONS(148), 1,
      sym__wsp,
    STATE(23), 1,
      aux_sym_quoted_string_repeat1,
    STATE(60), 1,
      aux_sym_fws_repeat1,
    STATE(119), 1,
      sym_fws,
  [605] = 5,
    ACTIONS(61), 1,
      sym__atom,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(44), 1,
      sym_quoted_string,
    ACTIONS(150), 2,
      anon_sym_COLON,
      anon_sym_LT,
    STATE(27), 2,
      sym_word,
      aux_sym_name_repeat1,
  [623] = 7,
    ACTIONS(146), 1,
      sym__line_break,
    ACTIONS(148), 1,
      sym__wsp,
    ACTIONS(152), 1,
      anon_sym_DQUOTE,
    ACTIONS(154), 1,
      aux_sym_quoted_string_token1,
    STATE(28), 1,
      aux_sym_quoted_string_repeat1,
    STATE(60), 1,
      aux_sym_fws_repeat1,
    STATE(115), 1,
      sym_fws,
  [645] = 5,
    ACTIONS(158), 1,
      sym__atom,
    ACTIONS(161), 1,
      anon_sym_DQUOTE,
    STATE(44), 1,
      sym_quoted_string,
    ACTIONS(156), 2,
      anon_sym_COLON,
      anon_sym_LT,
    STATE(27), 2,
      sym_word,
      aux_sym_name_repeat1,
  [663] = 7,
    ACTIONS(144), 1,
      aux_sym_quoted_string_token1,
    ACTIONS(146), 1,
      sym__line_break,
    ACTIONS(148), 1,
      sym__wsp,
    ACTIONS(164), 1,
      anon_sym_DQUOTE,
    STATE(23), 1,
      aux_sym_quoted_string_repeat1,
    STATE(60), 1,
      aux_sym_fws_repeat1,
    STATE(114), 1,
      sym_fws,
  [685] = 7,
    ACTIONS(146), 1,
      sym__line_break,
    ACTIONS(148), 1,
      sym__wsp,
    ACTIONS(166), 1,
      anon_sym_DQUOTE,
    ACTIONS(168), 1,
      aux_sym_quoted_string_token1,
    STATE(30), 1,
      aux_sym_quoted_string_repeat1,
    STATE(60), 1,
      aux_sym_fws_repeat1,
    STATE(113), 1,
      sym_fws,
  [707] = 7,
    ACTIONS(144), 1,
      aux_sym_quoted_string_token1,
    ACTIONS(146), 1,
      sym__line_break,
    ACTIONS(148), 1,
      sym__wsp,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    STATE(23), 1,
      aux_sym_quoted_string_repeat1,
    STATE(60), 1,
      aux_sym_fws_repeat1,
    STATE(111), 1,
      sym_fws,
  [729] = 7,
    ACTIONS(146), 1,
      sym__line_break,
    ACTIONS(148), 1,
      sym__wsp,
    ACTIONS(172), 1,
      anon_sym_DQUOTE,
    ACTIONS(174), 1,
      aux_sym_quoted_string_token1,
    STATE(24), 1,
      aux_sym_quoted_string_repeat1,
    STATE(60), 1,
      aux_sym_fws_repeat1,
    STATE(123), 1,
      sym_fws,
  [751] = 6,
    ACTIONS(176), 1,
      anon_sym_COMMA,
    ACTIONS(179), 1,
      sym__line_break,
    ACTIONS(182), 1,
      sym__wsp,
    STATE(32), 1,
      aux_sym_addresslist_repeat1,
    STATE(69), 1,
      aux_sym_lspw_repeat1,
    STATE(127), 1,
      sym_lspw,
  [770] = 6,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(187), 1,
      sym__line_break,
    ACTIONS(189), 1,
      sym__wsp,
    STATE(32), 1,
      aux_sym_addresslist_repeat1,
    STATE(69), 1,
      aux_sym_lspw_repeat1,
    STATE(127), 1,
      sym_lspw,
  [789] = 6,
    ACTIONS(191), 1,
      sym__atom,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    STATE(55), 1,
      sym_quoted_string,
    STATE(97), 1,
      sym_word,
    STATE(131), 1,
      sym__addrspec,
    STATE(154), 1,
      sym_local,
  [808] = 2,
    ACTIONS(197), 1,
      sym__atom,
    ACTIONS(195), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_DQUOTE,
  [819] = 6,
    ACTIONS(199), 1,
      sym__bodycontent,
    ACTIONS(201), 1,
      sym__line_break,
    ACTIONS(203), 1,
      sym__wsp,
    STATE(39), 1,
      aux_sym__fieldbody_repeat1,
    STATE(68), 1,
      aux_sym_lspw_repeat1,
    STATE(133), 1,
      sym_lspw,
  [838] = 2,
    ACTIONS(207), 1,
      sym__atom,
    ACTIONS(205), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_DQUOTE,
  [849] = 6,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(189), 1,
      sym__wsp,
    ACTIONS(209), 1,
      sym__line_break,
    STATE(33), 1,
      aux_sym_addresslist_repeat1,
    STATE(69), 1,
      aux_sym_lspw_repeat1,
    STATE(127), 1,
      sym_lspw,
  [868] = 6,
    ACTIONS(203), 1,
      sym__wsp,
    ACTIONS(211), 1,
      sym__bodycontent,
    ACTIONS(213), 1,
      sym__line_break,
    STATE(41), 1,
      aux_sym__fieldbody_repeat1,
    STATE(68), 1,
      aux_sym_lspw_repeat1,
    STATE(133), 1,
      sym_lspw,
  [887] = 6,
    ACTIONS(191), 1,
      sym__atom,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    STATE(55), 1,
      sym_quoted_string,
    STATE(97), 1,
      sym_word,
    STATE(143), 1,
      sym__addrspec,
    STATE(154), 1,
      sym_local,
  [906] = 6,
    ACTIONS(215), 1,
      sym__bodycontent,
    ACTIONS(218), 1,
      sym__line_break,
    ACTIONS(221), 1,
      sym__wsp,
    STATE(41), 1,
      aux_sym__fieldbody_repeat1,
    STATE(68), 1,
      aux_sym_lspw_repeat1,
    STATE(133), 1,
      sym_lspw,
  [925] = 2,
    ACTIONS(226), 1,
      sym__atom,
    ACTIONS(224), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_DQUOTE,
  [936] = 3,
    ACTIONS(230), 1,
      anon_sym_DOT,
    STATE(43), 1,
      aux_sym_domain_repeat1,
    ACTIONS(228), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AT,
  [949] = 2,
    ACTIONS(197), 1,
      sym__atom,
    ACTIONS(195), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_DQUOTE,
  [960] = 2,
    ACTIONS(235), 1,
      sym__atom,
    ACTIONS(233), 5,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_DQUOTE,
  [971] = 3,
    ACTIONS(239), 1,
      anon_sym_DOT,
    STATE(59), 1,
      aux_sym_domain_repeat1,
    ACTIONS(237), 3,
      sym__line_break,
      sym__wsp,
      anon_sym_COMMA,
  [983] = 4,
    ACTIONS(241), 1,
      ts_builtin_sym_end,
    ACTIONS(243), 1,
      aux_sym_line_token1,
    ACTIONS(246), 1,
      sym_footersep,
    STATE(47), 2,
      sym_line,
      aux_sym_block_repeat1,
  [997] = 4,
    ACTIONS(248), 1,
      anon_sym_DQUOTE,
    ACTIONS(252), 1,
      sym__wsp,
    STATE(48), 1,
      aux_sym_fws_repeat1,
    ACTIONS(250), 2,
      sym__line_break,
      aux_sym_quoted_string_token1,
  [1011] = 4,
    ACTIONS(255), 1,
      aux_sym_line_token1,
    STATE(92), 1,
      sym_block,
    STATE(139), 1,
      sym_emailbody,
    STATE(56), 2,
      sym_line,
      aux_sym_block_repeat1,
  [1025] = 5,
    ACTIONS(191), 1,
      sym__atom,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    STATE(55), 1,
      sym_quoted_string,
    STATE(61), 1,
      sym_word,
    STATE(96), 1,
      sym_domain,
  [1041] = 3,
    ACTIONS(239), 1,
      anon_sym_DOT,
    STATE(46), 1,
      aux_sym_domain_repeat1,
    ACTIONS(257), 3,
      sym__line_break,
      sym__wsp,
      anon_sym_COMMA,
  [1053] = 1,
    ACTIONS(228), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_DOT,
  [1061] = 1,
    ACTIONS(197), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_DOT,
  [1069] = 5,
    ACTIONS(259), 1,
      sym__atom,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    STATE(51), 1,
      sym_word,
    STATE(72), 1,
      sym_quoted_string,
    STATE(98), 1,
      sym_domain,
  [1085] = 1,
    ACTIONS(197), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_DOT,
  [1093] = 4,
    ACTIONS(263), 1,
      ts_builtin_sym_end,
    ACTIONS(265), 1,
      aux_sym_line_token1,
    ACTIONS(267), 1,
      sym_footersep,
    STATE(47), 2,
      sym_line,
      aux_sym_block_repeat1,
  [1107] = 3,
    ACTIONS(269), 1,
      anon_sym_DOT,
    STATE(43), 1,
      aux_sym_domain_repeat1,
    ACTIONS(237), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
  [1119] = 1,
    ACTIONS(235), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_DOT,
  [1127] = 3,
    ACTIONS(271), 1,
      anon_sym_DOT,
    STATE(59), 1,
      aux_sym_domain_repeat1,
    ACTIONS(228), 3,
      sym__line_break,
      sym__wsp,
      anon_sym_COMMA,
  [1139] = 5,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(276), 1,
      aux_sym_quoted_string_token1,
    ACTIONS(278), 1,
      sym__line_break,
    ACTIONS(280), 1,
      sym__wsp,
    STATE(48), 1,
      aux_sym_fws_repeat1,
  [1155] = 3,
    ACTIONS(269), 1,
      anon_sym_DOT,
    STATE(57), 1,
      aux_sym_domain_repeat1,
    ACTIONS(257), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
  [1167] = 1,
    ACTIONS(207), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_DOT,
  [1175] = 5,
    ACTIONS(282), 1,
      ts_builtin_sym_end,
    ACTIONS(284), 1,
      aux_sym__textline_token1,
    STATE(65), 1,
      sym_footerline,
    STATE(80), 1,
      aux_sym_footertext_repeat1,
    STATE(146), 1,
      sym_footertext,
  [1191] = 1,
    ACTIONS(226), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_DOT,
  [1199] = 3,
    ACTIONS(288), 1,
      sym__eof,
    STATE(112), 1,
      sym__eol,
    ACTIONS(286), 2,
      anon_sym_LF,
      anon_sym_CR,
  [1210] = 4,
    ACTIONS(248), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      aux_sym_quoted_string_token1,
    ACTIONS(290), 1,
      sym__wsp,
    STATE(66), 1,
      aux_sym_fws_repeat1,
  [1223] = 4,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    ACTIONS(295), 1,
      sym__line_break,
    ACTIONS(298), 1,
      sym__wsp,
    STATE(67), 1,
      aux_sym_lspw_repeat1,
  [1236] = 4,
    ACTIONS(301), 1,
      sym__bodycontent,
    ACTIONS(303), 1,
      sym__line_break,
    ACTIONS(305), 1,
      sym__wsp,
    STATE(79), 1,
      aux_sym_lspw_repeat1,
  [1249] = 4,
    ACTIONS(301), 1,
      anon_sym_COMMA,
    ACTIONS(307), 1,
      sym__line_break,
    ACTIONS(309), 1,
      sym__wsp,
    STATE(67), 1,
      aux_sym_lspw_repeat1,
  [1262] = 1,
    ACTIONS(228), 4,
      sym__line_break,
      sym__wsp,
      anon_sym_COMMA,
      anon_sym_DOT,
  [1269] = 1,
    ACTIONS(197), 4,
      sym__line_break,
      sym__wsp,
      anon_sym_COMMA,
      anon_sym_DOT,
  [1276] = 1,
    ACTIONS(197), 4,
      sym__line_break,
      sym__wsp,
      anon_sym_COMMA,
      anon_sym_DOT,
  [1283] = 1,
    ACTIONS(207), 4,
      sym__line_break,
      sym__wsp,
      anon_sym_COMMA,
      anon_sym_DOT,
  [1290] = 4,
    ACTIONS(191), 1,
      sym__atom,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    STATE(52), 1,
      sym_word,
    STATE(55), 1,
      sym_quoted_string,
  [1303] = 4,
    ACTIONS(311), 1,
      anon_sym_DQUOTE,
    ACTIONS(313), 1,
      aux_sym_quoted_string_token1,
    ACTIONS(315), 1,
      sym__wsp,
    STATE(66), 1,
      aux_sym_fws_repeat1,
  [1316] = 4,
    ACTIONS(317), 1,
      ts_builtin_sym_end,
    ACTIONS(319), 1,
      aux_sym__textline_token1,
    STATE(65), 1,
      sym_footerline,
    STATE(76), 1,
      aux_sym_footertext_repeat1,
  [1329] = 1,
    ACTIONS(226), 4,
      sym__line_break,
      sym__wsp,
      anon_sym_COMMA,
      anon_sym_DOT,
  [1336] = 1,
    ACTIONS(235), 4,
      sym__line_break,
      sym__wsp,
      anon_sym_COMMA,
      anon_sym_DOT,
  [1343] = 4,
    ACTIONS(293), 1,
      sym__bodycontent,
    ACTIONS(322), 1,
      sym__line_break,
    ACTIONS(325), 1,
      sym__wsp,
    STATE(79), 1,
      aux_sym_lspw_repeat1,
  [1356] = 4,
    ACTIONS(284), 1,
      aux_sym__textline_token1,
    ACTIONS(328), 1,
      ts_builtin_sym_end,
    STATE(65), 1,
      sym_footerline,
    STATE(76), 1,
      aux_sym_footertext_repeat1,
  [1369] = 2,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    ACTIONS(330), 3,
      sym__line_break,
      sym__wsp,
      aux_sym_quoted_string_token1,
  [1378] = 4,
    ACTIONS(315), 1,
      sym__wsp,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      aux_sym_quoted_string_token1,
    STATE(66), 1,
      aux_sym_fws_repeat1,
  [1391] = 4,
    ACTIONS(259), 1,
      sym__atom,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    STATE(70), 1,
      sym_word,
    STATE(72), 1,
      sym_quoted_string,
  [1404] = 1,
    ACTIONS(336), 3,
      sym__line_break,
      sym__wsp,
      anon_sym_COMMA,
  [1410] = 1,
    ACTIONS(338), 3,
      sym__line_break,
      sym__wsp,
      anon_sym_COMMA,
  [1416] = 3,
    ACTIONS(340), 1,
      sym__bodycontent,
    STATE(13), 1,
      sym__datefield,
    STATE(14), 1,
      sym__fieldbody,
  [1426] = 2,
    ACTIONS(344), 1,
      sym__eof,
    ACTIONS(342), 2,
      anon_sym_LF,
      anon_sym_CR,
  [1434] = 3,
    ACTIONS(340), 1,
      sym__bodycontent,
    STATE(15), 1,
      sym__subjectfield,
    STATE(16), 1,
      sym__fieldbody,
  [1444] = 1,
    ACTIONS(346), 3,
      sym__line_break,
      sym__wsp,
      anon_sym_COMMA,
  [1450] = 3,
    ACTIONS(340), 1,
      sym__bodycontent,
    STATE(12), 1,
      sym__fieldbody,
    STATE(17), 1,
      sym_mid,
  [1460] = 2,
    ACTIONS(348), 1,
      ts_builtin_sym_end,
    ACTIONS(350), 2,
      aux_sym_line_token1,
      sym_footersep,
  [1468] = 3,
    ACTIONS(352), 1,
      ts_builtin_sym_end,
    ACTIONS(354), 1,
      sym_footersep,
    STATE(125), 1,
      sym_footer,
  [1478] = 1,
    ACTIONS(356), 3,
      sym__line_break,
      sym__wsp,
      anon_sym_COMMA,
  [1484] = 1,
    ACTIONS(358), 3,
      sym__line_break,
      sym__wsp,
      anon_sym_COMMA,
  [1490] = 3,
    ACTIONS(360), 1,
      anon_sym_COLON,
    ACTIONS(362), 1,
      anon_sym_LT,
    STATE(84), 1,
      sym_angle_addr,
  [1500] = 1,
    ACTIONS(364), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
  [1506] = 3,
    ACTIONS(269), 1,
      anon_sym_DOT,
    ACTIONS(366), 1,
      anon_sym_AT,
    STATE(102), 1,
      aux_sym_domain_repeat1,
  [1516] = 1,
    ACTIONS(364), 3,
      sym__line_break,
      sym__wsp,
      anon_sym_COMMA,
  [1522] = 3,
    ACTIONS(340), 1,
      sym__bodycontent,
    STATE(18), 1,
      sym_headerentry,
    STATE(19), 1,
      sym__fieldbody,
  [1532] = 1,
    ACTIONS(368), 3,
      sym__line_break,
      sym__wsp,
      anon_sym_COMMA,
  [1538] = 1,
    ACTIONS(293), 3,
      sym__line_break,
      sym__wsp,
      anon_sym_COMMA,
  [1544] = 3,
    ACTIONS(269), 1,
      anon_sym_DOT,
    ACTIONS(370), 1,
      anon_sym_AT,
    STATE(43), 1,
      aux_sym_domain_repeat1,
  [1554] = 3,
    ACTIONS(372), 1,
      anon_sym_COMMA,
    ACTIONS(374), 1,
      anon_sym_SEMI,
    STATE(105), 1,
      aux_sym_mailbox_list_repeat1,
  [1564] = 3,
    ACTIONS(376), 1,
      anon_sym_COMMA,
    ACTIONS(379), 1,
      anon_sym_SEMI,
    STATE(104), 1,
      aux_sym_mailbox_list_repeat1,
  [1574] = 3,
    ACTIONS(372), 1,
      anon_sym_COMMA,
    ACTIONS(381), 1,
      anon_sym_SEMI,
    STATE(104), 1,
      aux_sym_mailbox_list_repeat1,
  [1584] = 1,
    ACTIONS(383), 3,
      sym__line_break,
      sym__wsp,
      anon_sym_COMMA,
  [1590] = 1,
    ACTIONS(385), 3,
      sym__line_break,
      sym__wsp,
      anon_sym_COMMA,
  [1596] = 1,
    ACTIONS(387), 3,
      sym__line_break,
      sym__wsp,
      sym__bodycontent,
  [1602] = 1,
    ACTIONS(293), 3,
      sym__line_break,
      sym__wsp,
      sym__bodycontent,
  [1608] = 1,
    ACTIONS(346), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1613] = 2,
    ACTIONS(389), 1,
      anon_sym_DQUOTE,
    ACTIONS(391), 1,
      aux_sym_quoted_string_token1,
  [1620] = 1,
    ACTIONS(317), 2,
      ts_builtin_sym_end,
      aux_sym__textline_token1,
  [1625] = 2,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(391), 1,
      aux_sym_quoted_string_token1,
  [1632] = 2,
    ACTIONS(391), 1,
      aux_sym_quoted_string_token1,
    ACTIONS(393), 1,
      anon_sym_DQUOTE,
  [1639] = 2,
    ACTIONS(164), 1,
      anon_sym_DQUOTE,
    ACTIONS(391), 1,
      aux_sym_quoted_string_token1,
  [1646] = 2,
    ACTIONS(395), 1,
      sym__wsp,
    STATE(75), 1,
      aux_sym_fws_repeat1,
  [1653] = 1,
    ACTIONS(379), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1658] = 2,
    ACTIONS(397), 1,
      anon_sym_LT,
    STATE(124), 1,
      sym_angle_addr,
  [1665] = 2,
    ACTIONS(391), 1,
      aux_sym_quoted_string_token1,
    ACTIONS(399), 1,
      anon_sym_DQUOTE,
  [1672] = 1,
    ACTIONS(356), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1677] = 2,
    ACTIONS(401), 1,
      ts_builtin_sym_end,
    ACTIONS(403), 1,
      sym__line_break,
  [1684] = 2,
    ACTIONS(405), 1,
      sym__wsp,
    STATE(82), 1,
      aux_sym_fws_repeat1,
  [1691] = 2,
    ACTIONS(142), 1,
      anon_sym_DQUOTE,
    ACTIONS(391), 1,
      aux_sym_quoted_string_token1,
  [1698] = 1,
    ACTIONS(336), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1703] = 1,
    ACTIONS(407), 1,
      ts_builtin_sym_end,
  [1707] = 1,
    ACTIONS(409), 1,
      anon_sym_SEMI,
  [1711] = 1,
    ACTIONS(411), 1,
      anon_sym_COMMA,
  [1715] = 1,
    ACTIONS(413), 1,
      anon_sym_SEMI,
  [1719] = 1,
    ACTIONS(71), 1,
      sym__wsp,
  [1723] = 1,
    ACTIONS(415), 1,
      ts_builtin_sym_end,
  [1727] = 1,
    ACTIONS(417), 1,
      anon_sym_GT,
  [1731] = 1,
    ACTIONS(419), 1,
      anon_sym_COLON,
  [1735] = 1,
    ACTIONS(421), 1,
      sym__bodycontent,
  [1739] = 1,
    ACTIONS(423), 1,
      anon_sym_COLON,
  [1743] = 1,
    ACTIONS(425), 1,
      anon_sym_AT,
  [1747] = 1,
    ACTIONS(427), 1,
      anon_sym_COLON,
  [1751] = 1,
    ACTIONS(429), 1,
      anon_sym_COLON,
  [1755] = 1,
    ACTIONS(391), 1,
      aux_sym_quoted_string_token1,
  [1759] = 1,
    ACTIONS(431), 1,
      ts_builtin_sym_end,
  [1763] = 1,
    ACTIONS(433), 1,
      anon_sym_COLON,
  [1767] = 1,
    ACTIONS(435), 1,
      anon_sym_COLON,
  [1771] = 1,
    ACTIONS(437), 1,
      anon_sym_COLON,
  [1775] = 1,
    ACTIONS(439), 1,
      anon_sym_GT,
  [1779] = 1,
    ACTIONS(77), 1,
      sym__wsp,
  [1783] = 1,
    ACTIONS(441), 1,
      anon_sym_COLON,
  [1787] = 1,
    ACTIONS(443), 1,
      ts_builtin_sym_end,
  [1791] = 1,
    ACTIONS(445), 1,
      anon_sym_COLON,
  [1795] = 1,
    ACTIONS(447), 1,
      anon_sym_COLON,
  [1799] = 1,
    ACTIONS(449), 1,
      anon_sym_COLON,
  [1803] = 1,
    ACTIONS(451), 1,
      anon_sym_COLON,
  [1807] = 1,
    ACTIONS(453), 1,
      anon_sym_COLON,
  [1811] = 1,
    ACTIONS(455), 1,
      anon_sym_COLON,
  [1815] = 1,
    ACTIONS(457), 1,
      anon_sym_COLON,
  [1819] = 1,
    ACTIONS(459), 1,
      anon_sym_AT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 63,
  [SMALL_STATE(4)] = 126,
  [SMALL_STATE(5)] = 167,
  [SMALL_STATE(6)] = 206,
  [SMALL_STATE(7)] = 226,
  [SMALL_STATE(8)] = 246,
  [SMALL_STATE(9)] = 266,
  [SMALL_STATE(10)] = 302,
  [SMALL_STATE(11)] = 338,
  [SMALL_STATE(12)] = 358,
  [SMALL_STATE(13)] = 375,
  [SMALL_STATE(14)] = 392,
  [SMALL_STATE(15)] = 409,
  [SMALL_STATE(16)] = 426,
  [SMALL_STATE(17)] = 443,
  [SMALL_STATE(18)] = 460,
  [SMALL_STATE(19)] = 477,
  [SMALL_STATE(20)] = 494,
  [SMALL_STATE(21)] = 511,
  [SMALL_STATE(22)] = 543,
  [SMALL_STATE(23)] = 561,
  [SMALL_STATE(24)] = 583,
  [SMALL_STATE(25)] = 605,
  [SMALL_STATE(26)] = 623,
  [SMALL_STATE(27)] = 645,
  [SMALL_STATE(28)] = 663,
  [SMALL_STATE(29)] = 685,
  [SMALL_STATE(30)] = 707,
  [SMALL_STATE(31)] = 729,
  [SMALL_STATE(32)] = 751,
  [SMALL_STATE(33)] = 770,
  [SMALL_STATE(34)] = 789,
  [SMALL_STATE(35)] = 808,
  [SMALL_STATE(36)] = 819,
  [SMALL_STATE(37)] = 838,
  [SMALL_STATE(38)] = 849,
  [SMALL_STATE(39)] = 868,
  [SMALL_STATE(40)] = 887,
  [SMALL_STATE(41)] = 906,
  [SMALL_STATE(42)] = 925,
  [SMALL_STATE(43)] = 936,
  [SMALL_STATE(44)] = 949,
  [SMALL_STATE(45)] = 960,
  [SMALL_STATE(46)] = 971,
  [SMALL_STATE(47)] = 983,
  [SMALL_STATE(48)] = 997,
  [SMALL_STATE(49)] = 1011,
  [SMALL_STATE(50)] = 1025,
  [SMALL_STATE(51)] = 1041,
  [SMALL_STATE(52)] = 1053,
  [SMALL_STATE(53)] = 1061,
  [SMALL_STATE(54)] = 1069,
  [SMALL_STATE(55)] = 1085,
  [SMALL_STATE(56)] = 1093,
  [SMALL_STATE(57)] = 1107,
  [SMALL_STATE(58)] = 1119,
  [SMALL_STATE(59)] = 1127,
  [SMALL_STATE(60)] = 1139,
  [SMALL_STATE(61)] = 1155,
  [SMALL_STATE(62)] = 1167,
  [SMALL_STATE(63)] = 1175,
  [SMALL_STATE(64)] = 1191,
  [SMALL_STATE(65)] = 1199,
  [SMALL_STATE(66)] = 1210,
  [SMALL_STATE(67)] = 1223,
  [SMALL_STATE(68)] = 1236,
  [SMALL_STATE(69)] = 1249,
  [SMALL_STATE(70)] = 1262,
  [SMALL_STATE(71)] = 1269,
  [SMALL_STATE(72)] = 1276,
  [SMALL_STATE(73)] = 1283,
  [SMALL_STATE(74)] = 1290,
  [SMALL_STATE(75)] = 1303,
  [SMALL_STATE(76)] = 1316,
  [SMALL_STATE(77)] = 1329,
  [SMALL_STATE(78)] = 1336,
  [SMALL_STATE(79)] = 1343,
  [SMALL_STATE(80)] = 1356,
  [SMALL_STATE(81)] = 1369,
  [SMALL_STATE(82)] = 1378,
  [SMALL_STATE(83)] = 1391,
  [SMALL_STATE(84)] = 1404,
  [SMALL_STATE(85)] = 1410,
  [SMALL_STATE(86)] = 1416,
  [SMALL_STATE(87)] = 1426,
  [SMALL_STATE(88)] = 1434,
  [SMALL_STATE(89)] = 1444,
  [SMALL_STATE(90)] = 1450,
  [SMALL_STATE(91)] = 1460,
  [SMALL_STATE(92)] = 1468,
  [SMALL_STATE(93)] = 1478,
  [SMALL_STATE(94)] = 1484,
  [SMALL_STATE(95)] = 1490,
  [SMALL_STATE(96)] = 1500,
  [SMALL_STATE(97)] = 1506,
  [SMALL_STATE(98)] = 1516,
  [SMALL_STATE(99)] = 1522,
  [SMALL_STATE(100)] = 1532,
  [SMALL_STATE(101)] = 1538,
  [SMALL_STATE(102)] = 1544,
  [SMALL_STATE(103)] = 1554,
  [SMALL_STATE(104)] = 1564,
  [SMALL_STATE(105)] = 1574,
  [SMALL_STATE(106)] = 1584,
  [SMALL_STATE(107)] = 1590,
  [SMALL_STATE(108)] = 1596,
  [SMALL_STATE(109)] = 1602,
  [SMALL_STATE(110)] = 1608,
  [SMALL_STATE(111)] = 1613,
  [SMALL_STATE(112)] = 1620,
  [SMALL_STATE(113)] = 1625,
  [SMALL_STATE(114)] = 1632,
  [SMALL_STATE(115)] = 1639,
  [SMALL_STATE(116)] = 1646,
  [SMALL_STATE(117)] = 1653,
  [SMALL_STATE(118)] = 1658,
  [SMALL_STATE(119)] = 1665,
  [SMALL_STATE(120)] = 1672,
  [SMALL_STATE(121)] = 1677,
  [SMALL_STATE(122)] = 1684,
  [SMALL_STATE(123)] = 1691,
  [SMALL_STATE(124)] = 1698,
  [SMALL_STATE(125)] = 1703,
  [SMALL_STATE(126)] = 1707,
  [SMALL_STATE(127)] = 1711,
  [SMALL_STATE(128)] = 1715,
  [SMALL_STATE(129)] = 1719,
  [SMALL_STATE(130)] = 1723,
  [SMALL_STATE(131)] = 1727,
  [SMALL_STATE(132)] = 1731,
  [SMALL_STATE(133)] = 1735,
  [SMALL_STATE(134)] = 1739,
  [SMALL_STATE(135)] = 1743,
  [SMALL_STATE(136)] = 1747,
  [SMALL_STATE(137)] = 1751,
  [SMALL_STATE(138)] = 1755,
  [SMALL_STATE(139)] = 1759,
  [SMALL_STATE(140)] = 1763,
  [SMALL_STATE(141)] = 1767,
  [SMALL_STATE(142)] = 1771,
  [SMALL_STATE(143)] = 1775,
  [SMALL_STATE(144)] = 1779,
  [SMALL_STATE(145)] = 1783,
  [SMALL_STATE(146)] = 1787,
  [SMALL_STATE(147)] = 1791,
  [SMALL_STATE(148)] = 1795,
  [SMALL_STATE(149)] = 1799,
  [SMALL_STATE(150)] = 1803,
  [SMALL_STATE(151)] = 1807,
  [SMALL_STATE(152)] = 1811,
  [SMALL_STATE(153)] = 1815,
  [SMALL_STATE(154)] = 1819,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(137),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(153),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(151),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(149),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(145),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(142),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(148),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(152),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(132),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(150),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headers, 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addresslist, 3),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addresslist, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fieldbody, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fieldbody, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fieldbody, 3),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fieldbody, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addresslist, 2),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addresslist, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mid, 1, .production_id = 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mid, 1, .production_id = 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dateheader, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dateheader, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datefield, 1, .production_id = 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__datefield, 1, .production_id = 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subjectheader, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subjectheader, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__subjectfield, 1, .production_id = 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__subjectfield, 1, .production_id = 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_midheader, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_midheader, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headerentry, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headerentry, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addressheader, 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addressheader, 3),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(23),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(122),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(60),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(35),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(31),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_addresslist_repeat1, 2), SHIFT_REPEAT(10),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_addresslist_repeat1, 2), SHIFT_REPEAT(129),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_addresslist_repeat1, 2), SHIFT_REPEAT(69),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__fieldbody_repeat1, 2), SHIFT_REPEAT(41),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__fieldbody_repeat1, 2), SHIFT_REPEAT(144),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__fieldbody_repeat1, 2), SHIFT_REPEAT(68),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_domain_repeat1, 2),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_domain_repeat1, 2), SHIFT_REPEAT(74),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 4),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 4),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(91),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_fws_repeat1, 2),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fws_repeat1, 2),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fws_repeat1, 2), SHIFT_REPEAT(48),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_domain_repeat1, 2), SHIFT_REPEAT(83),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fws, 1),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fws, 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fws_repeat1, 2), SHIFT_REPEAT(66),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lspw_repeat1, 2),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lspw_repeat1, 2), SHIFT_REPEAT(129),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lspw_repeat1, 2), SHIFT_REPEAT(67),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lspw, 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fws, 3),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fws, 3),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_footertext_repeat1, 2),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_footertext_repeat1, 2), SHIFT_REPEAT(87),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lspw_repeat1, 2), SHIFT_REPEAT(144),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lspw_repeat1, 2), SHIFT_REPEAT(79),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footertext, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quoted_string_repeat1, 2),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fws, 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fws, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailbox, 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_internetaddress, 1),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footerline, 1),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footerline, 1),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_angle_addr, 3),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_emailbody, 1),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailbox, 1),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_addresslist_repeat1, 2),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__addrspec, 3),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local, 1),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailgroup, 3),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local, 2),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailbox_list, 1),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mailbox_list_repeat1, 2), SHIFT_REPEAT(21),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mailbox_list_repeat1, 2),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailbox_list, 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailgroup, 4),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_addresslist_repeat1, 3),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__fieldbody_repeat1, 2),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 1),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_emailbody, 2),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_list, 1),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [415] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_id, 1),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addrkind, 1),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_to, 1),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 3),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replyto, 1),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sender, 1),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 2),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bcc, 1),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cc, 1),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 1),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 1),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
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
