#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 192
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 95
#define ALIAS_COUNT 3
#define TOKEN_COUNT 36
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
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
  aux_sym_comment_token1 = 13,
  anon_sym_RPAREN = 14,
  sym__bodycontent = 15,
  anon_sym_COMMA = 16,
  anon_sym_SEMI = 17,
  anon_sym_LT = 18,
  anon_sym_GT = 19,
  anon_sym_AT = 20,
  aux_sym_domainliteral_token1 = 21,
  sym_atom = 22,
  anon_sym_DOT = 23,
  anon_sym_LBRACK = 24,
  anon_sym_RBRACK = 25,
  anon_sym_DQUOTE = 26,
  aux_sym_quoted_string_token1 = 27,
  anon_sym_LF = 28,
  aux_sym_line_token1 = 29,
  anon_sym_CR = 30,
  sym__quote = 31,
  sym_footersep = 32,
  sym__line_break = 33,
  sym_wsp = 34,
  sym__eof = 35,
  sym_message = 36,
  sym_headers = 37,
  sym_header = 38,
  sym_addressheader = 39,
  sym_dateheader = 40,
  sym_subjectheader = 41,
  sym_midheader = 42,
  sym_addrkind = 43,
  sym_to = 44,
  sym_from = 45,
  sym_cc = 46,
  sym_bcc = 47,
  sym_sender = 48,
  sym_replyto = 49,
  sym_date = 50,
  sym_subject = 51,
  sym_message_id = 52,
  sym_mid = 53,
  sym__subjectfield = 54,
  sym__datefield = 55,
  sym_headerentry = 56,
  sym_lspw = 57,
  sym_fws = 58,
  sym_comment = 59,
  sym_cfws = 60,
  sym__fieldbody = 61,
  sym_addresslist = 62,
  sym_internetaddress = 63,
  sym_mailgroup = 64,
  sym_group_list = 65,
  sym_mailbox_list = 66,
  sym_mailbox = 67,
  sym_angle_addr = 68,
  sym_addrspec = 69,
  sym_domain = 70,
  sym_local = 71,
  sym_name = 72,
  sym_word = 73,
  sym_dotatom = 74,
  sym_quoted_string = 75,
  sym_emailbody = 76,
  sym_block = 77,
  sym_line = 78,
  sym__eol = 79,
  sym_footer = 80,
  sym_footertext = 81,
  sym_footerline = 82,
  aux_sym_headers_repeat1 = 83,
  aux_sym_lspw_repeat1 = 84,
  aux_sym_fws_repeat1 = 85,
  aux_sym_cfws_repeat1 = 86,
  aux_sym__fieldbody_repeat1 = 87,
  aux_sym_addresslist_repeat1 = 88,
  aux_sym_mailbox_list_repeat1 = 89,
  aux_sym_name_repeat1 = 90,
  aux_sym_dotatom_repeat1 = 91,
  aux_sym_quoted_string_repeat1 = 92,
  aux_sym_block_repeat1 = 93,
  aux_sym_footertext_repeat1 = 94,
  alias_sym_datefield = 95,
  alias_sym_midfield = 96,
  alias_sym_subjectfield = 97,
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
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_RPAREN] = ")",
  [sym__bodycontent] = "_bodycontent",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_AT] = "@",
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
  [sym_comment] = "comment",
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
  [sym_name] = "name",
  [sym_word] = "word",
  [sym_dotatom] = "dotatom",
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
  [aux_sym_cfws_repeat1] = "cfws_repeat1",
  [aux_sym__fieldbody_repeat1] = "_fieldbody_repeat1",
  [aux_sym_addresslist_repeat1] = "addresslist_repeat1",
  [aux_sym_mailbox_list_repeat1] = "mailbox_list_repeat1",
  [aux_sym_name_repeat1] = "name_repeat1",
  [aux_sym_dotatom_repeat1] = "dotatom_repeat1",
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
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym__bodycontent] = sym__bodycontent,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_AT] = anon_sym_AT,
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
  [sym_comment] = sym_comment,
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
  [sym_name] = sym_name,
  [sym_word] = sym_word,
  [sym_dotatom] = sym_dotatom,
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
  [aux_sym_cfws_repeat1] = aux_sym_cfws_repeat1,
  [aux_sym__fieldbody_repeat1] = aux_sym__fieldbody_repeat1,
  [aux_sym_addresslist_repeat1] = aux_sym_addresslist_repeat1,
  [aux_sym_mailbox_list_repeat1] = aux_sym_mailbox_list_repeat1,
  [aux_sym_name_repeat1] = aux_sym_name_repeat1,
  [aux_sym_dotatom_repeat1] = aux_sym_dotatom_repeat1,
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
  [aux_sym_comment_token1] = {
    .visible = false,
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
  [sym_comment] = {
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
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [sym_dotatom] = {
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
  [aux_sym_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dotatom_repeat1] = {
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
  [10] = 9,
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
  [30] = 28,
  [31] = 31,
  [32] = 31,
  [33] = 29,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 38,
  [40] = 37,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 48,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 54,
  [57] = 57,
  [58] = 58,
  [59] = 36,
  [60] = 53,
  [61] = 41,
  [62] = 62,
  [63] = 45,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 69,
  [71] = 71,
  [72] = 72,
  [73] = 65,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 52,
  [78] = 36,
  [79] = 79,
  [80] = 80,
  [81] = 45,
  [82] = 45,
  [83] = 83,
  [84] = 84,
  [85] = 50,
  [86] = 86,
  [87] = 45,
  [88] = 45,
  [89] = 57,
  [90] = 84,
  [91] = 76,
  [92] = 92,
  [93] = 79,
  [94] = 71,
  [95] = 95,
  [96] = 96,
  [97] = 92,
  [98] = 98,
  [99] = 99,
  [100] = 95,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 104,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 118,
  [120] = 117,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 103,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 130,
  [134] = 134,
  [135] = 113,
  [136] = 128,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 112,
  [141] = 114,
  [142] = 142,
  [143] = 132,
  [144] = 142,
  [145] = 109,
  [146] = 139,
  [147] = 138,
  [148] = 148,
  [149] = 149,
  [150] = 42,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 149,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 44,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 35,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 173,
  [179] = 179,
  [180] = 157,
  [181] = 156,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 179,
  [187] = 169,
  [188] = 164,
  [189] = 189,
  [190] = 190,
  [191] = 166,
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
      if (eof) ADVANCE(51);
      if (lookahead == '"') ADVANCE(117);
      if (lookahead == '(') ADVANCE(99);
      if (lookahead == ')') ADVANCE(102);
      if (lookahead == ',') ADVANCE(105);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '.') ADVANCE(114);
      if (lookahead == ':') ADVANCE(52);
      if (lookahead == ';') ADVANCE(106);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == '>') ADVANCE(128);
      if (lookahead == '@') ADVANCE(109);
      if (lookahead == '[') ADVANCE(115);
      if (lookahead == ']') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(0)
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(19);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(17);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(14);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(41);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(23);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(24);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(25);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(36);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(129);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '"') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(118);
      if (lookahead != 0) ADVANCE(119);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(120);
      if (lookahead == '\r') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(101);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(1);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(117);
      if (lookahead == '(') ADVANCE(99);
      if (lookahead == ')') ADVANCE(102);
      if (lookahead == ',') ADVANCE(105);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '.') ADVANCE(114);
      if (lookahead == ':') ADVANCE(52);
      if (lookahead == ';') ADVANCE(106);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == '>') ADVANCE(128);
      if (lookahead == '@') ADVANCE(109);
      if (lookahead == '[') ADVANCE(115);
      if (lookahead == ']') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(7)
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(19);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(17);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(14);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(41);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(23);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(24);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(25);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(36);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(117);
      if (lookahead == '(') ADVANCE(99);
      if (lookahead == '.') ADVANCE(114);
      if (lookahead == ':') ADVANCE(52);
      if (lookahead == ';') ADVANCE(106);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == '@') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(112);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(113);
      END_STATE();
    case 9:
      if (lookahead == ',') ADVANCE(105);
      if (lookahead == '.') ADVANCE(114);
      if (lookahead == ';') ADVANCE(106);
      if (lookahead == '>') ADVANCE(108);
      if (lookahead == '@') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(6);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(31);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(46);
      END_STATE();
    case 13:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(125);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(13)
      if (lookahead != 0) ADVANCE(126);
      END_STATE();
    case 14:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 15:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 16:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(32);
      END_STATE();
    case 17:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 18:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 19:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(44);
      END_STATE();
    case 21:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 22:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(27);
      END_STATE();
    case 23:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 24:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 25:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(35);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 26:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 27:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 28:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 29:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 30:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(28);
      END_STATE();
    case 31:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 32:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(29);
      END_STATE();
    case 33:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 34:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(54);
      END_STATE();
    case 35:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 36:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 37:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 38:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 39:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(33);
      END_STATE();
    case 40:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 41:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 42:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(15);
      END_STATE();
    case 43:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(42);
      END_STATE();
    case 44:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(60);
      END_STATE();
    case 45:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(26);
      END_STATE();
    case 46:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(38);
      END_STATE();
    case 47:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(12);
      END_STATE();
    case 48:
      if (eof) ADVANCE(51);
      if (lookahead == '\n') SKIP(48)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(110);
      if (lookahead != 0) ADVANCE(111);
      END_STATE();
    case 49:
      if (eof) ADVANCE(51);
      if (lookahead == '-') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(49)
      if (lookahead != 0) ADVANCE(126);
      END_STATE();
    case 50:
      if (eof) ADVANCE(51);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(69);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(67);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(64);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(91);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(74);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(75);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(76);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(98);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_to_token1);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_from_token1);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_cc_token1);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_bcc_token1);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_sender_token1);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_replyto_token1);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_date_token1);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_subject_token1);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_message_id_token1);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '-') ADVANCE(81);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(98);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '-') ADVANCE(96);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(98);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(95);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(98);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(80);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(98);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(82);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(98);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(55);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(98);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(56);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(98);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(68);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(98);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(94);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(98);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(61);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(98);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(77);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(98);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(98);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(93);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(98);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(89);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(98);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(85);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(66);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(98);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(90);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(98);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(62);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(98);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(70);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(98);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(78);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(98);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(71);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(98);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(79);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(98);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(97);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(98);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(54);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(98);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(72);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(98);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(53);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(98);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(58);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(98);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(84);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(98);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(83);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(98);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(57);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(98);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(88);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(98);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(65);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(98);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(92);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(98);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(60);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(98);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(73);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(98);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(87);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(98);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(63);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_headertype);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ')') ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ')') ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__bodycontent);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__bodycontent);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_domainliteral_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(111);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_domainliteral_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(112);
      if (!sym_atom_character_set_1(lookahead)) ADVANCE(113);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_atom);
      if (!sym_atom_character_set_1(lookahead)) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(120);
      if (lookahead == '\r') ADVANCE(127);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(126);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(126);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == '-') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(126);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(126);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(120);
      if (lookahead == '\r') ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__quote);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_footersep);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 50},
  [2] = {.lex_state = 50, .external_lex_state = 2},
  [3] = {.lex_state = 50, .external_lex_state = 2},
  [4] = {.lex_state = 8, .external_lex_state = 3},
  [5] = {.lex_state = 8, .external_lex_state = 3},
  [6] = {.lex_state = 8, .external_lex_state = 3},
  [7] = {.lex_state = 8, .external_lex_state = 3},
  [8] = {.lex_state = 8, .external_lex_state = 3},
  [9] = {.lex_state = 8, .external_lex_state = 4},
  [10] = {.lex_state = 8, .external_lex_state = 4},
  [11] = {.lex_state = 50, .external_lex_state = 3},
  [12] = {.lex_state = 50, .external_lex_state = 3},
  [13] = {.lex_state = 50, .external_lex_state = 3},
  [14] = {.lex_state = 50, .external_lex_state = 3},
  [15] = {.lex_state = 50, .external_lex_state = 2},
  [16] = {.lex_state = 50, .external_lex_state = 2},
  [17] = {.lex_state = 50, .external_lex_state = 2},
  [18] = {.lex_state = 50, .external_lex_state = 2},
  [19] = {.lex_state = 50, .external_lex_state = 2},
  [20] = {.lex_state = 50, .external_lex_state = 2},
  [21] = {.lex_state = 50, .external_lex_state = 2},
  [22] = {.lex_state = 50, .external_lex_state = 2},
  [23] = {.lex_state = 50, .external_lex_state = 2},
  [24] = {.lex_state = 8, .external_lex_state = 4},
  [25] = {.lex_state = 0, .external_lex_state = 4},
  [26] = {.lex_state = 8, .external_lex_state = 4},
  [27] = {.lex_state = 8, .external_lex_state = 4},
  [28] = {.lex_state = 0, .external_lex_state = 4},
  [29] = {.lex_state = 0, .external_lex_state = 4},
  [30] = {.lex_state = 0, .external_lex_state = 3},
  [31] = {.lex_state = 0, .external_lex_state = 4},
  [32] = {.lex_state = 0, .external_lex_state = 3},
  [33] = {.lex_state = 0, .external_lex_state = 4},
  [34] = {.lex_state = 0, .external_lex_state = 4},
  [35] = {.lex_state = 8, .external_lex_state = 4},
  [36] = {.lex_state = 8, .external_lex_state = 3},
  [37] = {.lex_state = 2, .external_lex_state = 3},
  [38] = {.lex_state = 2, .external_lex_state = 3},
  [39] = {.lex_state = 2, .external_lex_state = 3},
  [40] = {.lex_state = 2, .external_lex_state = 3},
  [41] = {.lex_state = 0, .external_lex_state = 4},
  [42] = {.lex_state = 8, .external_lex_state = 4},
  [43] = {.lex_state = 2, .external_lex_state = 3},
  [44] = {.lex_state = 8, .external_lex_state = 4},
  [45] = {.lex_state = 8, .external_lex_state = 3},
  [46] = {.lex_state = 8, .external_lex_state = 4},
  [47] = {.lex_state = 8, .external_lex_state = 3},
  [48] = {.lex_state = 0, .external_lex_state = 4},
  [49] = {.lex_state = 0, .external_lex_state = 3},
  [50] = {.lex_state = 8, .external_lex_state = 4},
  [51] = {.lex_state = 0, .external_lex_state = 3},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 0, .external_lex_state = 3},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 8, .external_lex_state = 4},
  [58] = {.lex_state = 3, .external_lex_state = 3},
  [59] = {.lex_state = 0, .external_lex_state = 4},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 0, .external_lex_state = 3},
  [62] = {.lex_state = 3, .external_lex_state = 3},
  [63] = {.lex_state = 8, .external_lex_state = 4},
  [64] = {.lex_state = 3, .external_lex_state = 3},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 0, .external_lex_state = 3},
  [67] = {.lex_state = 8, .external_lex_state = 4},
  [68] = {.lex_state = 8, .external_lex_state = 4},
  [69] = {.lex_state = 9},
  [70] = {.lex_state = 0, .external_lex_state = 3},
  [71] = {.lex_state = 0, .external_lex_state = 4},
  [72] = {.lex_state = 49},
  [73] = {.lex_state = 0, .external_lex_state = 3},
  [74] = {.lex_state = 48},
  [75] = {.lex_state = 2, .external_lex_state = 3},
  [76] = {.lex_state = 0, .external_lex_state = 4},
  [77] = {.lex_state = 0, .external_lex_state = 3},
  [78] = {.lex_state = 0, .external_lex_state = 3},
  [79] = {.lex_state = 0, .external_lex_state = 4},
  [80] = {.lex_state = 13},
  [81] = {.lex_state = 2, .external_lex_state = 3},
  [82] = {.lex_state = 0, .external_lex_state = 4},
  [83] = {.lex_state = 49},
  [84] = {.lex_state = 9},
  [85] = {.lex_state = 2, .external_lex_state = 4},
  [86] = {.lex_state = 48},
  [87] = {.lex_state = 0, .external_lex_state = 3},
  [88] = {.lex_state = 2, .external_lex_state = 4},
  [89] = {.lex_state = 2, .external_lex_state = 4},
  [90] = {.lex_state = 0, .external_lex_state = 3},
  [91] = {.lex_state = 0, .external_lex_state = 3},
  [92] = {.lex_state = 0, .external_lex_state = 3},
  [93] = {.lex_state = 0, .external_lex_state = 3},
  [94] = {.lex_state = 0, .external_lex_state = 3},
  [95] = {.lex_state = 0, .external_lex_state = 3},
  [96] = {.lex_state = 4, .external_lex_state = 5},
  [97] = {.lex_state = 3, .external_lex_state = 3},
  [98] = {.lex_state = 48},
  [99] = {.lex_state = 2, .external_lex_state = 3},
  [100] = {.lex_state = 3, .external_lex_state = 3},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 8},
  [104] = {.lex_state = 3, .external_lex_state = 3},
  [105] = {.lex_state = 4, .external_lex_state = 5},
  [106] = {.lex_state = 3, .external_lex_state = 3},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 0, .external_lex_state = 3},
  [109] = {.lex_state = 0, .external_lex_state = 3},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0, .external_lex_state = 3},
  [113] = {.lex_state = 0, .external_lex_state = 3},
  [114] = {.lex_state = 0, .external_lex_state = 3},
  [115] = {.lex_state = 0, .external_lex_state = 3},
  [116] = {.lex_state = 0, .external_lex_state = 3},
  [117] = {.lex_state = 9},
  [118] = {.lex_state = 9},
  [119] = {.lex_state = 0, .external_lex_state = 3},
  [120] = {.lex_state = 0, .external_lex_state = 3},
  [121] = {.lex_state = 0, .external_lex_state = 3},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 0, .external_lex_state = 3},
  [125] = {.lex_state = 0, .external_lex_state = 3},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 49},
  [128] = {.lex_state = 0, .external_lex_state = 3},
  [129] = {.lex_state = 8},
  [130] = {.lex_state = 0, .external_lex_state = 4},
  [131] = {.lex_state = 48},
  [132] = {.lex_state = 0, .external_lex_state = 4},
  [133] = {.lex_state = 0, .external_lex_state = 4},
  [134] = {.lex_state = 0, .external_lex_state = 2},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 2},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 2},
  [143] = {.lex_state = 0, .external_lex_state = 4},
  [144] = {.lex_state = 2},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0, .external_lex_state = 4},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0, .external_lex_state = 4},
  [156] = {.lex_state = 8},
  [157] = {.lex_state = 9},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 5},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 9},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 3},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 9},
  [181] = {.lex_state = 8},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 9},
  [188] = {.lex_state = 5},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
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
    [ts_external_token__line_break] = true,
    [ts_external_token_wsp] = true,
  },
  [4] = {
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
    [sym_wsp] = ACTIONS(1),
    [sym__eof] = ACTIONS(1),
  },
  [1] = {
    [sym_message] = STATE(168),
    [sym_headers] = STATE(134),
    [sym_header] = STATE(2),
    [sym_addressheader] = STATE(2),
    [sym_dateheader] = STATE(2),
    [sym_subjectheader] = STATE(2),
    [sym_midheader] = STATE(2),
    [sym_addrkind] = STATE(158),
    [sym_to] = STATE(153),
    [sym_from] = STATE(153),
    [sym_cc] = STATE(153),
    [sym_bcc] = STATE(153),
    [sym_sender] = STATE(153),
    [sym_replyto] = STATE(153),
    [sym_date] = STATE(152),
    [sym_subject] = STATE(148),
    [sym_message_id] = STATE(151),
    [aux_sym_headers_repeat1] = STATE(2),
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
    STATE(148), 1,
      sym_subject,
    STATE(151), 1,
      sym_message_id,
    STATE(152), 1,
      sym_date,
    STATE(158), 1,
      sym_addrkind,
    ACTIONS(23), 2,
      sym__line_break,
      ts_builtin_sym_end,
    STATE(3), 6,
      sym_header,
      sym_addressheader,
      sym_dateheader,
      sym_subjectheader,
      sym_midheader,
      aux_sym_headers_repeat1,
    STATE(153), 6,
      sym_to,
      sym_from,
      sym_cc,
      sym_bcc,
      sym_sender,
      sym_replyto,
  [63] = 17,
    ACTIONS(27), 1,
      aux_sym_to_token1,
    ACTIONS(30), 1,
      aux_sym_from_token1,
    ACTIONS(33), 1,
      aux_sym_cc_token1,
    ACTIONS(36), 1,
      aux_sym_bcc_token1,
    ACTIONS(39), 1,
      aux_sym_sender_token1,
    ACTIONS(42), 1,
      aux_sym_replyto_token1,
    ACTIONS(45), 1,
      aux_sym_date_token1,
    ACTIONS(48), 1,
      aux_sym_subject_token1,
    ACTIONS(51), 1,
      aux_sym_message_id_token1,
    ACTIONS(54), 1,
      sym_headertype,
    STATE(148), 1,
      sym_subject,
    STATE(151), 1,
      sym_message_id,
    STATE(152), 1,
      sym_date,
    STATE(158), 1,
      sym_addrkind,
    ACTIONS(25), 2,
      sym__line_break,
      ts_builtin_sym_end,
    STATE(3), 6,
      sym_header,
      sym_addressheader,
      sym_dateheader,
      sym_subjectheader,
      sym_midheader,
      aux_sym_headers_repeat1,
    STATE(153), 6,
      sym_to,
      sym_from,
      sym_cc,
      sym_bcc,
      sym_sender,
      sym_replyto,
  [126] = 19,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_LT,
    ACTIONS(61), 1,
      sym_atom,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 1,
      sym__line_break,
    ACTIONS(67), 1,
      sym_wsp,
    STATE(9), 1,
      sym_fws,
    STATE(16), 1,
      sym_addresslist,
    STATE(25), 1,
      sym_name,
    STATE(46), 1,
      sym_quoted_string,
    STATE(47), 1,
      aux_sym_fws_repeat1,
    STATE(66), 1,
      sym_internetaddress,
    STATE(166), 1,
      sym_cfws,
    STATE(173), 1,
      sym_local,
    STATE(174), 1,
      sym_dotatom,
    STATE(27), 2,
      sym_word,
      aux_sym_name_repeat1,
    STATE(48), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    STATE(112), 2,
      sym_angle_addr,
      sym_addrspec,
    STATE(116), 2,
      sym_mailgroup,
      sym_mailbox,
  [188] = 20,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      sym_atom,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 1,
      sym__line_break,
    ACTIONS(67), 1,
      sym_wsp,
    ACTIONS(69), 1,
      anon_sym_SEMI,
    ACTIONS(71), 1,
      anon_sym_LT,
    STATE(10), 1,
      sym_fws,
    STATE(34), 1,
      sym_name,
    STATE(46), 1,
      sym_quoted_string,
    STATE(47), 1,
      aux_sym_fws_repeat1,
    STATE(102), 1,
      sym_mailbox,
    STATE(162), 1,
      sym_mailbox_list,
    STATE(163), 1,
      sym_group_list,
    STATE(174), 1,
      sym_dotatom,
    STATE(178), 1,
      sym_local,
    STATE(191), 1,
      sym_cfws,
    STATE(27), 2,
      sym_word,
      aux_sym_name_repeat1,
    STATE(48), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    STATE(140), 2,
      sym_angle_addr,
      sym_addrspec,
  [252] = 18,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_LT,
    ACTIONS(61), 1,
      sym_atom,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 1,
      sym__line_break,
    ACTIONS(67), 1,
      sym_wsp,
    STATE(9), 1,
      sym_fws,
    STATE(25), 1,
      sym_name,
    STATE(46), 1,
      sym_quoted_string,
    STATE(47), 1,
      aux_sym_fws_repeat1,
    STATE(125), 1,
      sym_internetaddress,
    STATE(166), 1,
      sym_cfws,
    STATE(173), 1,
      sym_local,
    STATE(174), 1,
      sym_dotatom,
    STATE(27), 2,
      sym_word,
      aux_sym_name_repeat1,
    STATE(48), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    STATE(112), 2,
      sym_angle_addr,
      sym_addrspec,
    STATE(116), 2,
      sym_mailgroup,
      sym_mailbox,
  [311] = 18,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_LT,
    ACTIONS(61), 1,
      sym_atom,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 1,
      sym__line_break,
    ACTIONS(67), 1,
      sym_wsp,
    STATE(9), 1,
      sym_fws,
    STATE(25), 1,
      sym_name,
    STATE(46), 1,
      sym_quoted_string,
    STATE(47), 1,
      aux_sym_fws_repeat1,
    STATE(115), 1,
      sym_internetaddress,
    STATE(166), 1,
      sym_cfws,
    STATE(173), 1,
      sym_local,
    STATE(174), 1,
      sym_dotatom,
    STATE(27), 2,
      sym_word,
      aux_sym_name_repeat1,
    STATE(48), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    STATE(112), 2,
      sym_angle_addr,
      sym_addrspec,
    STATE(116), 2,
      sym_mailgroup,
      sym_mailbox,
  [370] = 17,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      sym_atom,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 1,
      sym__line_break,
    ACTIONS(67), 1,
      sym_wsp,
    ACTIONS(71), 1,
      anon_sym_LT,
    STATE(10), 1,
      sym_fws,
    STATE(34), 1,
      sym_name,
    STATE(46), 1,
      sym_quoted_string,
    STATE(47), 1,
      aux_sym_fws_repeat1,
    STATE(137), 1,
      sym_mailbox,
    STATE(174), 1,
      sym_dotatom,
    STATE(178), 1,
      sym_local,
    STATE(191), 1,
      sym_cfws,
    STATE(27), 2,
      sym_word,
      aux_sym_name_repeat1,
    STATE(48), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    STATE(140), 2,
      sym_angle_addr,
      sym_addrspec,
  [425] = 14,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_LT,
    ACTIONS(61), 1,
      sym_atom,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      sym_wsp,
    STATE(33), 1,
      sym_name,
    STATE(46), 1,
      sym_quoted_string,
    STATE(79), 1,
      aux_sym_fws_repeat1,
    STATE(166), 1,
      sym_cfws,
    STATE(173), 1,
      sym_local,
    STATE(174), 1,
      sym_dotatom,
    STATE(27), 2,
      sym_word,
      aux_sym_name_repeat1,
    STATE(48), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    STATE(109), 2,
      sym_angle_addr,
      sym_addrspec,
  [471] = 14,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      sym_atom,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_LT,
    ACTIONS(73), 1,
      sym_wsp,
    STATE(29), 1,
      sym_name,
    STATE(46), 1,
      sym_quoted_string,
    STATE(79), 1,
      aux_sym_fws_repeat1,
    STATE(174), 1,
      sym_dotatom,
    STATE(178), 1,
      sym_local,
    STATE(191), 1,
      sym_cfws,
    STATE(27), 2,
      sym_word,
      aux_sym_name_repeat1,
    STATE(48), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    STATE(145), 2,
      sym_angle_addr,
      sym_addrspec,
  [517] = 3,
    ACTIONS(77), 1,
      sym_headertype,
    ACTIONS(79), 1,
      sym_wsp,
    ACTIONS(75), 11,
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
  [537] = 3,
    ACTIONS(83), 1,
      sym_headertype,
    ACTIONS(85), 1,
      sym_wsp,
    ACTIONS(81), 11,
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
  [557] = 3,
    ACTIONS(79), 1,
      sym_wsp,
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
  [577] = 3,
    ACTIONS(85), 1,
      sym_wsp,
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
  [597] = 2,
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
  [614] = 2,
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
  [631] = 2,
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
  [648] = 2,
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
  [665] = 2,
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
  [682] = 2,
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
  [699] = 2,
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
  [716] = 2,
    ACTIONS(125), 1,
      sym_headertype,
    ACTIONS(123), 11,
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
  [733] = 2,
    ACTIONS(129), 1,
      sym_headertype,
    ACTIONS(127), 11,
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
  [750] = 6,
    ACTIONS(133), 1,
      sym_atom,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    ACTIONS(139), 1,
      sym_wsp,
    STATE(67), 1,
      sym_quoted_string,
    STATE(24), 2,
      sym_word,
      aux_sym_name_repeat1,
    ACTIONS(131), 3,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_LT,
  [772] = 8,
    ACTIONS(73), 1,
      sym_wsp,
    ACTIONS(141), 1,
      anon_sym_COLON,
    ACTIONS(143), 1,
      anon_sym_LPAREN,
    ACTIONS(145), 1,
      anon_sym_LT,
    STATE(79), 1,
      aux_sym_fws_repeat1,
    STATE(109), 1,
      sym_angle_addr,
    STATE(166), 1,
      sym_cfws,
    STATE(48), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [798] = 5,
    ACTIONS(149), 1,
      anon_sym_AT,
    ACTIONS(153), 1,
      anon_sym_DOT,
    STATE(65), 1,
      aux_sym_dotatom_repeat1,
    ACTIONS(151), 2,
      sym_wsp,
      sym_atom,
    ACTIONS(147), 4,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_LT,
      anon_sym_DQUOTE,
  [818] = 6,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      sym_atom,
    ACTIONS(159), 1,
      sym_wsp,
    STATE(67), 1,
      sym_quoted_string,
    STATE(24), 2,
      sym_word,
      aux_sym_name_repeat1,
    ACTIONS(155), 3,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_LT,
  [840] = 6,
    ACTIONS(73), 1,
      sym_wsp,
    ACTIONS(143), 1,
      anon_sym_LPAREN,
    STATE(79), 1,
      aux_sym_fws_repeat1,
    STATE(136), 1,
      sym_cfws,
    ACTIONS(161), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(48), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [861] = 7,
    ACTIONS(73), 1,
      sym_wsp,
    ACTIONS(143), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      anon_sym_LT,
    STATE(79), 1,
      aux_sym_fws_repeat1,
    STATE(135), 1,
      sym_angle_addr,
    STATE(191), 1,
      sym_cfws,
    STATE(48), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [884] = 6,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      sym_wsp,
    STATE(93), 1,
      aux_sym_fws_repeat1,
    STATE(128), 1,
      sym_cfws,
    ACTIONS(161), 2,
      sym__line_break,
      anon_sym_COMMA,
    STATE(49), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [905] = 6,
    ACTIONS(73), 1,
      sym_wsp,
    ACTIONS(143), 1,
      anon_sym_LPAREN,
    STATE(79), 1,
      aux_sym_fws_repeat1,
    STATE(141), 1,
      sym_cfws,
    ACTIONS(169), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(48), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [926] = 6,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      sym_wsp,
    STATE(93), 1,
      aux_sym_fws_repeat1,
    STATE(114), 1,
      sym_cfws,
    ACTIONS(169), 2,
      sym__line_break,
      anon_sym_COMMA,
    STATE(49), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [947] = 7,
    ACTIONS(73), 1,
      sym_wsp,
    ACTIONS(143), 1,
      anon_sym_LPAREN,
    ACTIONS(145), 1,
      anon_sym_LT,
    STATE(79), 1,
      aux_sym_fws_repeat1,
    STATE(113), 1,
      sym_angle_addr,
    STATE(166), 1,
      sym_cfws,
    STATE(48), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [970] = 7,
    ACTIONS(73), 1,
      sym_wsp,
    ACTIONS(143), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      anon_sym_LT,
    STATE(79), 1,
      aux_sym_fws_repeat1,
    STATE(145), 1,
      sym_angle_addr,
    STATE(191), 1,
      sym_cfws,
    STATE(48), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [993] = 2,
    ACTIONS(173), 2,
      sym_wsp,
      sym_atom,
    ACTIONS(171), 5,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DQUOTE,
  [1005] = 4,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    STATE(71), 1,
      sym_comment,
    ACTIONS(178), 2,
      anon_sym_LT,
      anon_sym_DQUOTE,
    ACTIONS(180), 3,
      sym__line_break,
      sym_wsp,
      sym_atom,
  [1021] = 7,
    ACTIONS(182), 1,
      anon_sym_DQUOTE,
    ACTIONS(184), 1,
      aux_sym_quoted_string_token1,
    ACTIONS(186), 1,
      sym__line_break,
    ACTIONS(188), 1,
      sym_wsp,
    STATE(43), 1,
      aux_sym_quoted_string_repeat1,
    STATE(75), 1,
      aux_sym_fws_repeat1,
    STATE(138), 1,
      sym_fws,
  [1043] = 7,
    ACTIONS(186), 1,
      sym__line_break,
    ACTIONS(188), 1,
      sym_wsp,
    ACTIONS(190), 1,
      anon_sym_DQUOTE,
    ACTIONS(192), 1,
      aux_sym_quoted_string_token1,
    STATE(40), 1,
      aux_sym_quoted_string_repeat1,
    STATE(75), 1,
      aux_sym_fws_repeat1,
    STATE(144), 1,
      sym_fws,
  [1065] = 7,
    ACTIONS(186), 1,
      sym__line_break,
    ACTIONS(188), 1,
      sym_wsp,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      aux_sym_quoted_string_token1,
    STATE(37), 1,
      aux_sym_quoted_string_repeat1,
    STATE(75), 1,
      aux_sym_fws_repeat1,
    STATE(142), 1,
      sym_fws,
  [1087] = 7,
    ACTIONS(184), 1,
      aux_sym_quoted_string_token1,
    ACTIONS(186), 1,
      sym__line_break,
    ACTIONS(188), 1,
      sym_wsp,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      aux_sym_quoted_string_repeat1,
    STATE(75), 1,
      aux_sym_fws_repeat1,
    STATE(147), 1,
      sym_fws,
  [1109] = 4,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      sym_wsp,
    STATE(41), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    ACTIONS(203), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LT,
  [1125] = 2,
    ACTIONS(210), 2,
      sym_wsp,
      sym_atom,
    ACTIONS(208), 5,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DQUOTE,
  [1137] = 7,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(214), 1,
      aux_sym_quoted_string_token1,
    ACTIONS(217), 1,
      sym__line_break,
    ACTIONS(220), 1,
      sym_wsp,
    STATE(43), 1,
      aux_sym_quoted_string_repeat1,
    STATE(75), 1,
      aux_sym_fws_repeat1,
    STATE(159), 1,
      sym_fws,
  [1159] = 2,
    ACTIONS(225), 2,
      sym_wsp,
      sym_atom,
    ACTIONS(223), 5,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DQUOTE,
  [1171] = 4,
    ACTIONS(231), 1,
      sym_wsp,
    STATE(45), 1,
      aux_sym_fws_repeat1,
    ACTIONS(229), 2,
      sym__line_break,
      sym_atom,
    ACTIONS(227), 3,
      anon_sym_LPAREN,
      anon_sym_LT,
      anon_sym_DQUOTE,
  [1187] = 3,
    ACTIONS(234), 1,
      anon_sym_AT,
    ACTIONS(151), 2,
      sym_wsp,
      sym_atom,
    ACTIONS(147), 4,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_LT,
      anon_sym_DQUOTE,
  [1201] = 5,
    ACTIONS(238), 1,
      anon_sym_LT,
    ACTIONS(243), 1,
      sym__line_break,
    STATE(45), 1,
      aux_sym_fws_repeat1,
    ACTIONS(236), 2,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
    ACTIONS(241), 2,
      sym_wsp,
      sym_atom,
  [1219] = 4,
    ACTIONS(143), 1,
      anon_sym_LPAREN,
    ACTIONS(247), 1,
      sym_wsp,
    STATE(41), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
    ACTIONS(245), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LT,
  [1235] = 4,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      sym_wsp,
    ACTIONS(245), 2,
      sym__line_break,
      anon_sym_COMMA,
    STATE(61), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [1250] = 3,
    STATE(63), 1,
      aux_sym_fws_repeat1,
    ACTIONS(253), 2,
      sym_wsp,
      sym_atom,
    ACTIONS(251), 3,
      anon_sym_LPAREN,
      anon_sym_LT,
      anon_sym_DQUOTE,
  [1263] = 6,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    ACTIONS(257), 1,
      sym__line_break,
    ACTIONS(259), 1,
      sym_wsp,
    STATE(55), 1,
      aux_sym_addresslist_repeat1,
    STATE(95), 1,
      aux_sym_lspw_repeat1,
    STATE(165), 1,
      sym_lspw,
  [1282] = 3,
    ACTIONS(263), 1,
      anon_sym_DOT,
    STATE(52), 1,
      aux_sym_dotatom_repeat1,
    ACTIONS(261), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AT,
  [1295] = 5,
    ACTIONS(266), 1,
      sym_atom,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    STATE(178), 1,
      sym_local,
    STATE(187), 1,
      sym_addrspec,
    STATE(174), 2,
      sym_dotatom,
      sym_quoted_string,
  [1312] = 5,
    ACTIONS(266), 1,
      sym_atom,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    STATE(157), 1,
      sym_addrspec,
    STATE(178), 1,
      sym_local,
    STATE(174), 2,
      sym_dotatom,
      sym_quoted_string,
  [1329] = 6,
    ACTIONS(270), 1,
      anon_sym_COMMA,
    ACTIONS(273), 1,
      sym__line_break,
    ACTIONS(276), 1,
      sym_wsp,
    STATE(55), 1,
      aux_sym_addresslist_repeat1,
    STATE(95), 1,
      aux_sym_lspw_repeat1,
    STATE(165), 1,
      sym_lspw,
  [1348] = 5,
    ACTIONS(266), 1,
      sym_atom,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    STATE(178), 1,
      sym_local,
    STATE(180), 1,
      sym_addrspec,
    STATE(174), 2,
      sym_dotatom,
      sym_quoted_string,
  [1365] = 3,
    STATE(63), 1,
      aux_sym_fws_repeat1,
    ACTIONS(281), 2,
      sym_wsp,
      sym_atom,
    ACTIONS(279), 3,
      anon_sym_LPAREN,
      anon_sym_LT,
      anon_sym_DQUOTE,
  [1378] = 6,
    ACTIONS(283), 1,
      sym__bodycontent,
    ACTIONS(285), 1,
      sym__line_break,
    ACTIONS(287), 1,
      sym_wsp,
    STATE(62), 1,
      aux_sym__fieldbody_repeat1,
    STATE(100), 1,
      aux_sym_lspw_repeat1,
    STATE(175), 1,
      sym_lspw,
  [1397] = 3,
    ACTIONS(143), 1,
      anon_sym_LPAREN,
    STATE(71), 1,
      sym_comment,
    ACTIONS(180), 4,
      sym_wsp,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LT,
  [1410] = 5,
    ACTIONS(266), 1,
      sym_atom,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    STATE(169), 1,
      sym_addrspec,
    STATE(178), 1,
      sym_local,
    STATE(174), 2,
      sym_dotatom,
      sym_quoted_string,
  [1427] = 4,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      sym_wsp,
    ACTIONS(203), 2,
      sym__line_break,
      anon_sym_COMMA,
    STATE(61), 2,
      sym_comment,
      aux_sym_cfws_repeat1,
  [1442] = 6,
    ACTIONS(287), 1,
      sym_wsp,
    ACTIONS(295), 1,
      sym__bodycontent,
    ACTIONS(297), 1,
      sym__line_break,
    STATE(64), 1,
      aux_sym__fieldbody_repeat1,
    STATE(100), 1,
      aux_sym_lspw_repeat1,
    STATE(175), 1,
      sym_lspw,
  [1461] = 4,
    ACTIONS(229), 1,
      sym_atom,
    ACTIONS(299), 1,
      sym_wsp,
    STATE(63), 1,
      aux_sym_fws_repeat1,
    ACTIONS(227), 3,
      anon_sym_LPAREN,
      anon_sym_LT,
      anon_sym_DQUOTE,
  [1476] = 6,
    ACTIONS(302), 1,
      sym__bodycontent,
    ACTIONS(305), 1,
      sym__line_break,
    ACTIONS(308), 1,
      sym_wsp,
    STATE(64), 1,
      aux_sym__fieldbody_repeat1,
    STATE(100), 1,
      aux_sym_lspw_repeat1,
    STATE(175), 1,
      sym_lspw,
  [1495] = 3,
    ACTIONS(313), 1,
      anon_sym_DOT,
    STATE(52), 1,
      aux_sym_dotatom_repeat1,
    ACTIONS(311), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AT,
  [1508] = 6,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    ACTIONS(259), 1,
      sym_wsp,
    ACTIONS(315), 1,
      sym__line_break,
    STATE(51), 1,
      aux_sym_addresslist_repeat1,
    STATE(95), 1,
      aux_sym_lspw_repeat1,
    STATE(165), 1,
      sym_lspw,
  [1527] = 2,
    ACTIONS(151), 2,
      sym_wsp,
      sym_atom,
    ACTIONS(147), 4,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_LT,
      anon_sym_DQUOTE,
  [1538] = 2,
    ACTIONS(151), 2,
      sym_wsp,
      sym_atom,
    ACTIONS(147), 4,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_LT,
      anon_sym_DQUOTE,
  [1549] = 3,
    ACTIONS(313), 1,
      anon_sym_DOT,
    STATE(65), 1,
      aux_sym_dotatom_repeat1,
    ACTIONS(317), 4,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AT,
  [1562] = 3,
    ACTIONS(319), 1,
      anon_sym_DOT,
    STATE(73), 1,
      aux_sym_dotatom_repeat1,
    ACTIONS(317), 3,
      sym__line_break,
      sym_wsp,
      anon_sym_COMMA,
  [1574] = 1,
    ACTIONS(203), 5,
      sym_wsp,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LT,
  [1582] = 4,
    ACTIONS(321), 1,
      ts_builtin_sym_end,
    ACTIONS(323), 1,
      aux_sym_line_token1,
    ACTIONS(326), 1,
      sym_footersep,
    STATE(72), 2,
      sym_line,
      aux_sym_block_repeat1,
  [1596] = 3,
    ACTIONS(319), 1,
      anon_sym_DOT,
    STATE(77), 1,
      aux_sym_dotatom_repeat1,
    ACTIONS(311), 3,
      sym__line_break,
      sym_wsp,
      anon_sym_COMMA,
  [1608] = 5,
    ACTIONS(328), 1,
      ts_builtin_sym_end,
    ACTIONS(330), 1,
      aux_sym_domainliteral_token1,
    STATE(96), 1,
      sym_footerline,
    STATE(98), 1,
      aux_sym_footertext_repeat1,
    STATE(185), 1,
      sym_footertext,
  [1624] = 5,
    ACTIONS(236), 1,
      anon_sym_DQUOTE,
    ACTIONS(241), 1,
      aux_sym_quoted_string_token1,
    ACTIONS(332), 1,
      sym__line_break,
    ACTIONS(334), 1,
      sym_wsp,
    STATE(81), 1,
      aux_sym_fws_repeat1,
  [1640] = 1,
    ACTIONS(336), 5,
      sym_wsp,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LT,
  [1648] = 3,
    ACTIONS(338), 1,
      anon_sym_DOT,
    STATE(77), 1,
      aux_sym_dotatom_repeat1,
    ACTIONS(261), 3,
      sym__line_break,
      sym_wsp,
      anon_sym_COMMA,
  [1660] = 3,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    STATE(94), 1,
      sym_comment,
    ACTIONS(180), 3,
      sym__line_break,
      sym_wsp,
      anon_sym_COMMA,
  [1672] = 3,
    ACTIONS(341), 1,
      sym_wsp,
    STATE(82), 1,
      aux_sym_fws_repeat1,
    ACTIONS(245), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LT,
  [1684] = 4,
    ACTIONS(343), 1,
      aux_sym_line_token1,
    STATE(126), 1,
      sym_block,
    STATE(160), 1,
      sym_emailbody,
    STATE(83), 2,
      sym_line,
      aux_sym_block_repeat1,
  [1698] = 4,
    ACTIONS(227), 1,
      anon_sym_DQUOTE,
    ACTIONS(345), 1,
      sym_wsp,
    STATE(81), 1,
      aux_sym_fws_repeat1,
    ACTIONS(229), 2,
      sym__line_break,
      aux_sym_quoted_string_token1,
  [1712] = 3,
    ACTIONS(348), 1,
      sym_wsp,
    STATE(82), 1,
      aux_sym_fws_repeat1,
    ACTIONS(229), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_LT,
  [1724] = 4,
    ACTIONS(351), 1,
      ts_builtin_sym_end,
    ACTIONS(353), 1,
      aux_sym_line_token1,
    ACTIONS(355), 1,
      sym_footersep,
    STATE(72), 2,
      sym_line,
      aux_sym_block_repeat1,
  [1738] = 1,
    ACTIONS(261), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_DOT,
  [1746] = 4,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      aux_sym_quoted_string_token1,
    ACTIONS(357), 1,
      sym_wsp,
    STATE(88), 1,
      aux_sym_fws_repeat1,
  [1759] = 4,
    ACTIONS(359), 1,
      ts_builtin_sym_end,
    ACTIONS(361), 1,
      aux_sym_domainliteral_token1,
    STATE(86), 1,
      aux_sym_footertext_repeat1,
    STATE(96), 1,
      sym_footerline,
  [1772] = 3,
    ACTIONS(364), 1,
      sym_wsp,
    STATE(87), 1,
      aux_sym_fws_repeat1,
    ACTIONS(229), 2,
      sym__line_break,
      anon_sym_COMMA,
  [1783] = 4,
    ACTIONS(227), 1,
      anon_sym_DQUOTE,
    ACTIONS(229), 1,
      aux_sym_quoted_string_token1,
    ACTIONS(367), 1,
      sym_wsp,
    STATE(88), 1,
      aux_sym_fws_repeat1,
  [1796] = 4,
    ACTIONS(279), 1,
      anon_sym_DQUOTE,
    ACTIONS(281), 1,
      aux_sym_quoted_string_token1,
    ACTIONS(357), 1,
      sym_wsp,
    STATE(88), 1,
      aux_sym_fws_repeat1,
  [1809] = 1,
    ACTIONS(261), 4,
      sym__line_break,
      sym_wsp,
      anon_sym_COMMA,
      anon_sym_DOT,
  [1816] = 1,
    ACTIONS(336), 4,
      sym__line_break,
      sym_wsp,
      anon_sym_LPAREN,
      anon_sym_COMMA,
  [1823] = 4,
    ACTIONS(370), 1,
      anon_sym_COMMA,
    ACTIONS(372), 1,
      sym__line_break,
    ACTIONS(375), 1,
      sym_wsp,
    STATE(92), 1,
      aux_sym_lspw_repeat1,
  [1836] = 3,
    ACTIONS(378), 1,
      sym_wsp,
    STATE(87), 1,
      aux_sym_fws_repeat1,
    ACTIONS(245), 2,
      sym__line_break,
      anon_sym_COMMA,
  [1847] = 1,
    ACTIONS(203), 4,
      sym__line_break,
      sym_wsp,
      anon_sym_LPAREN,
      anon_sym_COMMA,
  [1854] = 4,
    ACTIONS(380), 1,
      anon_sym_COMMA,
    ACTIONS(382), 1,
      sym__line_break,
    ACTIONS(384), 1,
      sym_wsp,
    STATE(92), 1,
      aux_sym_lspw_repeat1,
  [1867] = 3,
    ACTIONS(388), 1,
      sym__eof,
    STATE(131), 1,
      sym__eol,
    ACTIONS(386), 2,
      anon_sym_LF,
      anon_sym_CR,
  [1878] = 4,
    ACTIONS(370), 1,
      sym__bodycontent,
    ACTIONS(390), 1,
      sym__line_break,
    ACTIONS(393), 1,
      sym_wsp,
    STATE(97), 1,
      aux_sym_lspw_repeat1,
  [1891] = 4,
    ACTIONS(330), 1,
      aux_sym_domainliteral_token1,
    ACTIONS(396), 1,
      ts_builtin_sym_end,
    STATE(86), 1,
      aux_sym_footertext_repeat1,
    STATE(96), 1,
      sym_footerline,
  [1904] = 2,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    ACTIONS(398), 3,
      sym__line_break,
      sym_wsp,
      aux_sym_quoted_string_token1,
  [1913] = 4,
    ACTIONS(380), 1,
      sym__bodycontent,
    ACTIONS(400), 1,
      sym__line_break,
    ACTIONS(402), 1,
      sym_wsp,
    STATE(97), 1,
      aux_sym_lspw_repeat1,
  [1926] = 3,
    ACTIONS(404), 1,
      sym__bodycontent,
    STATE(21), 1,
      sym__fieldbody,
    STATE(22), 1,
      sym__subjectfield,
  [1936] = 3,
    ACTIONS(406), 1,
      anon_sym_COMMA,
    ACTIONS(408), 1,
      anon_sym_SEMI,
    STATE(122), 1,
      aux_sym_mailbox_list_repeat1,
  [1946] = 3,
    ACTIONS(266), 1,
      sym_atom,
    STATE(117), 1,
      sym_dotatom,
    STATE(118), 1,
      sym_domain,
  [1956] = 1,
    ACTIONS(370), 3,
      sym__line_break,
      sym_wsp,
      sym__bodycontent,
  [1962] = 2,
    ACTIONS(412), 1,
      sym__eof,
    ACTIONS(410), 2,
      anon_sym_LF,
      anon_sym_CR,
  [1970] = 1,
    ACTIONS(414), 3,
      sym__line_break,
      sym_wsp,
      sym__bodycontent,
  [1976] = 3,
    ACTIONS(404), 1,
      sym__bodycontent,
    STATE(19), 1,
      sym_headerentry,
    STATE(20), 1,
      sym__fieldbody,
  [1986] = 1,
    ACTIONS(370), 3,
      sym__line_break,
      sym_wsp,
      anon_sym_COMMA,
  [1992] = 1,
    ACTIONS(416), 3,
      sym__line_break,
      sym_wsp,
      anon_sym_COMMA,
  [1998] = 3,
    ACTIONS(404), 1,
      sym__bodycontent,
    STATE(18), 1,
      sym__datefield,
    STATE(23), 1,
      sym__fieldbody,
  [2008] = 3,
    ACTIONS(418), 1,
      anon_sym_COMMA,
    ACTIONS(421), 1,
      anon_sym_SEMI,
    STATE(111), 1,
      aux_sym_mailbox_list_repeat1,
  [2018] = 1,
    ACTIONS(423), 3,
      sym__line_break,
      sym_wsp,
      anon_sym_COMMA,
  [2024] = 1,
    ACTIONS(425), 3,
      sym__line_break,
      sym_wsp,
      anon_sym_COMMA,
  [2030] = 1,
    ACTIONS(427), 3,
      sym__line_break,
      sym_wsp,
      anon_sym_COMMA,
  [2036] = 1,
    ACTIONS(429), 3,
      sym__line_break,
      sym_wsp,
      anon_sym_COMMA,
  [2042] = 1,
    ACTIONS(431), 3,
      sym__line_break,
      sym_wsp,
      anon_sym_COMMA,
  [2048] = 1,
    ACTIONS(433), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
  [2054] = 1,
    ACTIONS(435), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_GT,
  [2060] = 1,
    ACTIONS(435), 3,
      sym__line_break,
      sym_wsp,
      anon_sym_COMMA,
  [2066] = 1,
    ACTIONS(433), 3,
      sym__line_break,
      sym_wsp,
      anon_sym_COMMA,
  [2072] = 1,
    ACTIONS(437), 3,
      sym__line_break,
      sym_wsp,
      anon_sym_COMMA,
  [2078] = 3,
    ACTIONS(406), 1,
      anon_sym_COMMA,
    ACTIONS(439), 1,
      anon_sym_SEMI,
    STATE(111), 1,
      aux_sym_mailbox_list_repeat1,
  [2088] = 3,
    ACTIONS(404), 1,
      sym__bodycontent,
    STATE(15), 1,
      sym_mid,
    STATE(17), 1,
      sym__fieldbody,
  [2098] = 1,
    ACTIONS(441), 3,
      sym__line_break,
      sym_wsp,
      anon_sym_COMMA,
  [2104] = 1,
    ACTIONS(443), 3,
      sym__line_break,
      sym_wsp,
      anon_sym_COMMA,
  [2110] = 3,
    ACTIONS(445), 1,
      ts_builtin_sym_end,
    ACTIONS(447), 1,
      sym_footersep,
    STATE(182), 1,
      sym_footer,
  [2120] = 2,
    ACTIONS(449), 1,
      ts_builtin_sym_end,
    ACTIONS(451), 2,
      aux_sym_line_token1,
      sym_footersep,
  [2128] = 1,
    ACTIONS(169), 3,
      sym__line_break,
      sym_wsp,
      anon_sym_COMMA,
  [2134] = 3,
    ACTIONS(453), 1,
      sym_atom,
    STATE(119), 1,
      sym_domain,
    STATE(120), 1,
      sym_dotatom,
  [2144] = 2,
    ACTIONS(455), 1,
      sym_wsp,
    STATE(57), 1,
      aux_sym_fws_repeat1,
  [2151] = 1,
    ACTIONS(359), 2,
      ts_builtin_sym_end,
      aux_sym_domainliteral_token1,
  [2156] = 2,
    ACTIONS(457), 1,
      sym_wsp,
    STATE(50), 1,
      aux_sym_fws_repeat1,
  [2163] = 2,
    ACTIONS(459), 1,
      sym_wsp,
    STATE(89), 1,
      aux_sym_fws_repeat1,
  [2170] = 2,
    ACTIONS(461), 1,
      ts_builtin_sym_end,
    ACTIONS(463), 1,
      sym__line_break,
  [2177] = 1,
    ACTIONS(425), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [2182] = 1,
    ACTIONS(169), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [2187] = 1,
    ACTIONS(421), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [2192] = 2,
    ACTIONS(465), 1,
      anon_sym_DQUOTE,
    ACTIONS(467), 1,
      aux_sym_quoted_string_token1,
  [2199] = 2,
    ACTIONS(143), 1,
      anon_sym_LPAREN,
    STATE(71), 1,
      sym_comment,
  [2206] = 1,
    ACTIONS(423), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [2211] = 1,
    ACTIONS(427), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [2216] = 2,
    ACTIONS(182), 1,
      anon_sym_DQUOTE,
    ACTIONS(467), 1,
      aux_sym_quoted_string_token1,
  [2223] = 2,
    ACTIONS(469), 1,
      sym_wsp,
    STATE(85), 1,
      aux_sym_fws_repeat1,
  [2230] = 2,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    ACTIONS(467), 1,
      aux_sym_quoted_string_token1,
  [2237] = 1,
    ACTIONS(416), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [2242] = 2,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    STATE(94), 1,
      sym_comment,
  [2249] = 2,
    ACTIONS(467), 1,
      aux_sym_quoted_string_token1,
    ACTIONS(471), 1,
      anon_sym_DQUOTE,
  [2256] = 1,
    ACTIONS(473), 1,
      anon_sym_COLON,
  [2260] = 1,
    ACTIONS(85), 1,
      sym_wsp,
  [2264] = 1,
    ACTIONS(210), 1,
      anon_sym_AT,
  [2268] = 1,
    ACTIONS(475), 1,
      anon_sym_COLON,
  [2272] = 1,
    ACTIONS(477), 1,
      anon_sym_COLON,
  [2276] = 1,
    ACTIONS(479), 1,
      anon_sym_COLON,
  [2280] = 1,
    ACTIONS(481), 1,
      anon_sym_COLON,
  [2284] = 1,
    ACTIONS(79), 1,
      sym_wsp,
  [2288] = 1,
    ACTIONS(483), 1,
      sym_atom,
  [2292] = 1,
    ACTIONS(485), 1,
      anon_sym_GT,
  [2296] = 1,
    ACTIONS(487), 1,
      anon_sym_COLON,
  [2300] = 1,
    ACTIONS(467), 1,
      aux_sym_quoted_string_token1,
  [2304] = 1,
    ACTIONS(489), 1,
      ts_builtin_sym_end,
  [2308] = 1,
    ACTIONS(225), 1,
      anon_sym_AT,
  [2312] = 1,
    ACTIONS(491), 1,
      anon_sym_SEMI,
  [2316] = 1,
    ACTIONS(493), 1,
      anon_sym_SEMI,
  [2320] = 1,
    ACTIONS(495), 1,
      aux_sym_comment_token1,
  [2324] = 1,
    ACTIONS(497), 1,
      anon_sym_COMMA,
  [2328] = 1,
    ACTIONS(499), 1,
      anon_sym_LT,
  [2332] = 1,
    ACTIONS(173), 1,
      anon_sym_AT,
  [2336] = 1,
    ACTIONS(501), 1,
      ts_builtin_sym_end,
  [2340] = 1,
    ACTIONS(503), 1,
      anon_sym_GT,
  [2344] = 1,
    ACTIONS(505), 1,
      anon_sym_COLON,
  [2348] = 1,
    ACTIONS(507), 1,
      anon_sym_COLON,
  [2352] = 1,
    ACTIONS(509), 1,
      anon_sym_COLON,
  [2356] = 1,
    ACTIONS(511), 1,
      anon_sym_AT,
  [2360] = 1,
    ACTIONS(513), 1,
      anon_sym_AT,
  [2364] = 1,
    ACTIONS(515), 1,
      sym__bodycontent,
  [2368] = 1,
    ACTIONS(517), 1,
      anon_sym_COLON,
  [2372] = 1,
    ACTIONS(519), 1,
      anon_sym_COLON,
  [2376] = 1,
    ACTIONS(521), 1,
      anon_sym_AT,
  [2380] = 1,
    ACTIONS(523), 1,
      anon_sym_RPAREN,
  [2384] = 1,
    ACTIONS(525), 1,
      anon_sym_GT,
  [2388] = 1,
    ACTIONS(527), 1,
      sym_atom,
  [2392] = 1,
    ACTIONS(529), 1,
      ts_builtin_sym_end,
  [2396] = 1,
    ACTIONS(531), 1,
      anon_sym_COLON,
  [2400] = 1,
    ACTIONS(533), 1,
      anon_sym_COLON,
  [2404] = 1,
    ACTIONS(535), 1,
      ts_builtin_sym_end,
  [2408] = 1,
    ACTIONS(537), 1,
      anon_sym_RPAREN,
  [2412] = 1,
    ACTIONS(539), 1,
      anon_sym_GT,
  [2416] = 1,
    ACTIONS(541), 1,
      aux_sym_comment_token1,
  [2420] = 1,
    ACTIONS(543), 1,
      anon_sym_COLON,
  [2424] = 1,
    ACTIONS(545), 1,
      anon_sym_COLON,
  [2428] = 1,
    ACTIONS(547), 1,
      anon_sym_LT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 63,
  [SMALL_STATE(4)] = 126,
  [SMALL_STATE(5)] = 188,
  [SMALL_STATE(6)] = 252,
  [SMALL_STATE(7)] = 311,
  [SMALL_STATE(8)] = 370,
  [SMALL_STATE(9)] = 425,
  [SMALL_STATE(10)] = 471,
  [SMALL_STATE(11)] = 517,
  [SMALL_STATE(12)] = 537,
  [SMALL_STATE(13)] = 557,
  [SMALL_STATE(14)] = 577,
  [SMALL_STATE(15)] = 597,
  [SMALL_STATE(16)] = 614,
  [SMALL_STATE(17)] = 631,
  [SMALL_STATE(18)] = 648,
  [SMALL_STATE(19)] = 665,
  [SMALL_STATE(20)] = 682,
  [SMALL_STATE(21)] = 699,
  [SMALL_STATE(22)] = 716,
  [SMALL_STATE(23)] = 733,
  [SMALL_STATE(24)] = 750,
  [SMALL_STATE(25)] = 772,
  [SMALL_STATE(26)] = 798,
  [SMALL_STATE(27)] = 818,
  [SMALL_STATE(28)] = 840,
  [SMALL_STATE(29)] = 861,
  [SMALL_STATE(30)] = 884,
  [SMALL_STATE(31)] = 905,
  [SMALL_STATE(32)] = 926,
  [SMALL_STATE(33)] = 947,
  [SMALL_STATE(34)] = 970,
  [SMALL_STATE(35)] = 993,
  [SMALL_STATE(36)] = 1005,
  [SMALL_STATE(37)] = 1021,
  [SMALL_STATE(38)] = 1043,
  [SMALL_STATE(39)] = 1065,
  [SMALL_STATE(40)] = 1087,
  [SMALL_STATE(41)] = 1109,
  [SMALL_STATE(42)] = 1125,
  [SMALL_STATE(43)] = 1137,
  [SMALL_STATE(44)] = 1159,
  [SMALL_STATE(45)] = 1171,
  [SMALL_STATE(46)] = 1187,
  [SMALL_STATE(47)] = 1201,
  [SMALL_STATE(48)] = 1219,
  [SMALL_STATE(49)] = 1235,
  [SMALL_STATE(50)] = 1250,
  [SMALL_STATE(51)] = 1263,
  [SMALL_STATE(52)] = 1282,
  [SMALL_STATE(53)] = 1295,
  [SMALL_STATE(54)] = 1312,
  [SMALL_STATE(55)] = 1329,
  [SMALL_STATE(56)] = 1348,
  [SMALL_STATE(57)] = 1365,
  [SMALL_STATE(58)] = 1378,
  [SMALL_STATE(59)] = 1397,
  [SMALL_STATE(60)] = 1410,
  [SMALL_STATE(61)] = 1427,
  [SMALL_STATE(62)] = 1442,
  [SMALL_STATE(63)] = 1461,
  [SMALL_STATE(64)] = 1476,
  [SMALL_STATE(65)] = 1495,
  [SMALL_STATE(66)] = 1508,
  [SMALL_STATE(67)] = 1527,
  [SMALL_STATE(68)] = 1538,
  [SMALL_STATE(69)] = 1549,
  [SMALL_STATE(70)] = 1562,
  [SMALL_STATE(71)] = 1574,
  [SMALL_STATE(72)] = 1582,
  [SMALL_STATE(73)] = 1596,
  [SMALL_STATE(74)] = 1608,
  [SMALL_STATE(75)] = 1624,
  [SMALL_STATE(76)] = 1640,
  [SMALL_STATE(77)] = 1648,
  [SMALL_STATE(78)] = 1660,
  [SMALL_STATE(79)] = 1672,
  [SMALL_STATE(80)] = 1684,
  [SMALL_STATE(81)] = 1698,
  [SMALL_STATE(82)] = 1712,
  [SMALL_STATE(83)] = 1724,
  [SMALL_STATE(84)] = 1738,
  [SMALL_STATE(85)] = 1746,
  [SMALL_STATE(86)] = 1759,
  [SMALL_STATE(87)] = 1772,
  [SMALL_STATE(88)] = 1783,
  [SMALL_STATE(89)] = 1796,
  [SMALL_STATE(90)] = 1809,
  [SMALL_STATE(91)] = 1816,
  [SMALL_STATE(92)] = 1823,
  [SMALL_STATE(93)] = 1836,
  [SMALL_STATE(94)] = 1847,
  [SMALL_STATE(95)] = 1854,
  [SMALL_STATE(96)] = 1867,
  [SMALL_STATE(97)] = 1878,
  [SMALL_STATE(98)] = 1891,
  [SMALL_STATE(99)] = 1904,
  [SMALL_STATE(100)] = 1913,
  [SMALL_STATE(101)] = 1926,
  [SMALL_STATE(102)] = 1936,
  [SMALL_STATE(103)] = 1946,
  [SMALL_STATE(104)] = 1956,
  [SMALL_STATE(105)] = 1962,
  [SMALL_STATE(106)] = 1970,
  [SMALL_STATE(107)] = 1976,
  [SMALL_STATE(108)] = 1986,
  [SMALL_STATE(109)] = 1992,
  [SMALL_STATE(110)] = 1998,
  [SMALL_STATE(111)] = 2008,
  [SMALL_STATE(112)] = 2018,
  [SMALL_STATE(113)] = 2024,
  [SMALL_STATE(114)] = 2030,
  [SMALL_STATE(115)] = 2036,
  [SMALL_STATE(116)] = 2042,
  [SMALL_STATE(117)] = 2048,
  [SMALL_STATE(118)] = 2054,
  [SMALL_STATE(119)] = 2060,
  [SMALL_STATE(120)] = 2066,
  [SMALL_STATE(121)] = 2072,
  [SMALL_STATE(122)] = 2078,
  [SMALL_STATE(123)] = 2088,
  [SMALL_STATE(124)] = 2098,
  [SMALL_STATE(125)] = 2104,
  [SMALL_STATE(126)] = 2110,
  [SMALL_STATE(127)] = 2120,
  [SMALL_STATE(128)] = 2128,
  [SMALL_STATE(129)] = 2134,
  [SMALL_STATE(130)] = 2144,
  [SMALL_STATE(131)] = 2151,
  [SMALL_STATE(132)] = 2156,
  [SMALL_STATE(133)] = 2163,
  [SMALL_STATE(134)] = 2170,
  [SMALL_STATE(135)] = 2177,
  [SMALL_STATE(136)] = 2182,
  [SMALL_STATE(137)] = 2187,
  [SMALL_STATE(138)] = 2192,
  [SMALL_STATE(139)] = 2199,
  [SMALL_STATE(140)] = 2206,
  [SMALL_STATE(141)] = 2211,
  [SMALL_STATE(142)] = 2216,
  [SMALL_STATE(143)] = 2223,
  [SMALL_STATE(144)] = 2230,
  [SMALL_STATE(145)] = 2237,
  [SMALL_STATE(146)] = 2242,
  [SMALL_STATE(147)] = 2249,
  [SMALL_STATE(148)] = 2256,
  [SMALL_STATE(149)] = 2260,
  [SMALL_STATE(150)] = 2264,
  [SMALL_STATE(151)] = 2268,
  [SMALL_STATE(152)] = 2272,
  [SMALL_STATE(153)] = 2276,
  [SMALL_STATE(154)] = 2280,
  [SMALL_STATE(155)] = 2284,
  [SMALL_STATE(156)] = 2288,
  [SMALL_STATE(157)] = 2292,
  [SMALL_STATE(158)] = 2296,
  [SMALL_STATE(159)] = 2300,
  [SMALL_STATE(160)] = 2304,
  [SMALL_STATE(161)] = 2308,
  [SMALL_STATE(162)] = 2312,
  [SMALL_STATE(163)] = 2316,
  [SMALL_STATE(164)] = 2320,
  [SMALL_STATE(165)] = 2324,
  [SMALL_STATE(166)] = 2328,
  [SMALL_STATE(167)] = 2332,
  [SMALL_STATE(168)] = 2336,
  [SMALL_STATE(169)] = 2340,
  [SMALL_STATE(170)] = 2344,
  [SMALL_STATE(171)] = 2348,
  [SMALL_STATE(172)] = 2352,
  [SMALL_STATE(173)] = 2356,
  [SMALL_STATE(174)] = 2360,
  [SMALL_STATE(175)] = 2364,
  [SMALL_STATE(176)] = 2368,
  [SMALL_STATE(177)] = 2372,
  [SMALL_STATE(178)] = 2376,
  [SMALL_STATE(179)] = 2380,
  [SMALL_STATE(180)] = 2384,
  [SMALL_STATE(181)] = 2388,
  [SMALL_STATE(182)] = 2392,
  [SMALL_STATE(183)] = 2396,
  [SMALL_STATE(184)] = 2400,
  [SMALL_STATE(185)] = 2404,
  [SMALL_STATE(186)] = 2408,
  [SMALL_STATE(187)] = 2412,
  [SMALL_STATE(188)] = 2416,
  [SMALL_STATE(189)] = 2420,
  [SMALL_STATE(190)] = 2424,
  [SMALL_STATE(191)] = 2428,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headers, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(154),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(190),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(189),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(184),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(183),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(177),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(176),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(172),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(171),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(170),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addresslist, 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addresslist, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fieldbody, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fieldbody, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addresslist, 2),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addresslist, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fieldbody, 2),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fieldbody, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_midheader, 3),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_midheader, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addressheader, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addressheader, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mid, 1, .production_id = 3),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mid, 1, .production_id = 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dateheader, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dateheader, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headerentry, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headerentry, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__subjectfield, 1, .production_id = 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__subjectfield, 1, .production_id = 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subjectheader, 3),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subjectheader, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datefield, 1, .production_id = 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__datefield, 1, .production_id = 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(68),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(39),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dotatom, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_angle_addr, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_angle_addr, 4),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 4),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 4),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fws_repeat1, 1), SHIFT(164),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_fws_repeat1, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fws_repeat1, 1),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cfws_repeat1, 2), SHIFT_REPEAT(164),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cfws_repeat1, 2),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cfws_repeat1, 2), SHIFT_REPEAT(139),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(43),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(143),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(75),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_fws_repeat1, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fws_repeat1, 2),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fws_repeat1, 2), SHIFT_REPEAT(45),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local, 1),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fws, 1),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_fws, 1), REDUCE(sym_cfws, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fws, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cfws, 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fws, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fws, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dotatom_repeat1, 2),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotatom_repeat1, 2), SHIFT_REPEAT(156),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_addresslist_repeat1, 2), SHIFT_REPEAT(7),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_addresslist_repeat1, 2), SHIFT_REPEAT(155),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_addresslist_repeat1, 2), SHIFT_REPEAT(95),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fws, 3),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fws, 3),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cfws_repeat1, 2), SHIFT_REPEAT(188),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cfws_repeat1, 2), SHIFT_REPEAT(146),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fws_repeat1, 2), SHIFT_REPEAT(63),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__fieldbody_repeat1, 2), SHIFT_REPEAT(64),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__fieldbody_repeat1, 2), SHIFT_REPEAT(149),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__fieldbody_repeat1, 2), SHIFT_REPEAT(100),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotatom, 2),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotatom, 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [323] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(127),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dotatom_repeat1, 2), SHIFT_REPEAT(181),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fws_repeat1, 2), SHIFT_REPEAT(81),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fws_repeat1, 2), SHIFT_REPEAT(82),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_footertext_repeat1, 2),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_footertext_repeat1, 2), SHIFT_REPEAT(105),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fws_repeat1, 2), SHIFT_REPEAT(87),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fws_repeat1, 2), SHIFT_REPEAT(88),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lspw_repeat1, 2),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lspw_repeat1, 2), SHIFT_REPEAT(155),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lspw_repeat1, 2), SHIFT_REPEAT(92),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lspw, 1),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lspw_repeat1, 2), SHIFT_REPEAT(149),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lspw_repeat1, 2), SHIFT_REPEAT(97),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footertext, 1),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quoted_string_repeat1, 2),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailbox_list, 1),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_footerline, 1),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footerline, 1),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__fieldbody_repeat1, 2),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailbox, 2),
  [418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mailbox_list_repeat1, 2), SHIFT_REPEAT(8),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mailbox_list_repeat1, 2),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailbox, 1),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailbox, 3),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_angle_addr, 5),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_addresslist_repeat1, 2),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_internetaddress, 1),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain, 1),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addrspec, 3),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailgroup, 3),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailbox_list, 2),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailgroup, 4),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_addresslist_repeat1, 3),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_emailbody, 1),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 1),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addrkind, 1),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_to, 1),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 3),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_list, 1),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [501] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_id, 1),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 1),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local, 1),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replyto, 1),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_emailbody, 2),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sender, 1),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bcc, 1),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 2),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cc, 1),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 1),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
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
