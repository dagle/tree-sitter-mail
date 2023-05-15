#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 122
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 81
#define ALIAS_COUNT 3
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
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
  sym__bodycontent = 12,
  anon_sym_COMMA = 13,
  anon_sym_LT = 14,
  anon_sym_GT = 15,
  anon_sym_AT = 16,
  anon_sym_DOT = 17,
  sym__specails = 18,
  sym__atom = 19,
  anon_sym_DQUOTE = 20,
  aux_sym_quotedstring_token1 = 21,
  sym_textline = 22,
  aux_sym__textline_token1 = 23,
  sym__quote = 24,
  sym_footersep = 25,
  sym__line_break = 26,
  sym__lwsp = 27,
  sym_message = 28,
  sym_headers = 29,
  sym_header = 30,
  sym_addressheader = 31,
  sym_dateheader = 32,
  sym_subjectheader = 33,
  sym_midheader = 34,
  sym_addrkind = 35,
  sym_to = 36,
  sym_from = 37,
  sym_cc = 38,
  sym_bcc = 39,
  sym_sender = 40,
  sym_replyto = 41,
  sym_date = 42,
  sym_subject = 43,
  sym_message_id = 44,
  sym_mid = 45,
  sym__subjectfield = 46,
  sym__datefield = 47,
  sym_headerentry = 48,
  sym__fieldbody = 49,
  sym_seperator = 50,
  sym_addresslist = 51,
  sym_internetaddress = 52,
  sym_mailbox = 53,
  sym__routeaddr = 54,
  sym__addrspec = 55,
  sym_domain = 56,
  sym_local = 57,
  sym_name = 58,
  sym__word = 59,
  sym_quotedstring = 60,
  sym_emailbody = 61,
  sym__text = 62,
  sym_quote1 = 63,
  sym_quote2 = 64,
  sym_quote3 = 65,
  sym_quote4 = 66,
  sym_quote5 = 67,
  sym_quote6 = 68,
  sym__quoted = 69,
  sym_footer = 70,
  sym_footertext = 71,
  sym_footerline = 72,
  aux_sym_headers_repeat1 = 73,
  aux_sym__fieldbody_repeat1 = 74,
  aux_sym_seperator_repeat1 = 75,
  aux_sym_addresslist_repeat1 = 76,
  aux_sym_domain_repeat1 = 77,
  aux_sym_name_repeat1 = 78,
  aux_sym_emailbody_repeat1 = 79,
  aux_sym_footertext_repeat1 = 80,
  alias_sym_datefield = 81,
  alias_sym_midfield = 82,
  alias_sym_subjectfield = 83,
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
  [sym__bodycontent] = "_bodycontent",
  [anon_sym_COMMA] = ",",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_AT] = "@",
  [anon_sym_DOT] = ".",
  [sym__specails] = "_specails",
  [sym__atom] = "_atom",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quotedstring_token1] = "quotedstring_token1",
  [sym_textline] = "textline",
  [aux_sym__textline_token1] = "_textline_token1",
  [sym__quote] = "_quote",
  [sym_footersep] = "footersep",
  [sym__line_break] = "_line_break",
  [sym__lwsp] = "_lwsp",
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
  [sym__fieldbody] = "_fieldbody",
  [sym_seperator] = "seperator",
  [sym_addresslist] = "addresslist",
  [sym_internetaddress] = "internetaddress",
  [sym_mailbox] = "mailbox",
  [sym__routeaddr] = "_routeaddr",
  [sym__addrspec] = "_addrspec",
  [sym_domain] = "domain",
  [sym_local] = "local",
  [sym_name] = "name",
  [sym__word] = "_word",
  [sym_quotedstring] = "quotedstring",
  [sym_emailbody] = "emailbody",
  [sym__text] = "_text",
  [sym_quote1] = "quote1",
  [sym_quote2] = "quote2",
  [sym_quote3] = "quote3",
  [sym_quote4] = "quote4",
  [sym_quote5] = "quote5",
  [sym_quote6] = "quote6",
  [sym__quoted] = "_quoted",
  [sym_footer] = "footer",
  [sym_footertext] = "footertext",
  [sym_footerline] = "footerline",
  [aux_sym_headers_repeat1] = "headers_repeat1",
  [aux_sym__fieldbody_repeat1] = "_fieldbody_repeat1",
  [aux_sym_seperator_repeat1] = "seperator_repeat1",
  [aux_sym_addresslist_repeat1] = "addresslist_repeat1",
  [aux_sym_domain_repeat1] = "domain_repeat1",
  [aux_sym_name_repeat1] = "name_repeat1",
  [aux_sym_emailbody_repeat1] = "emailbody_repeat1",
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
  [sym__bodycontent] = sym__bodycontent,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym__specails] = sym__specails,
  [sym__atom] = sym__atom,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quotedstring_token1] = aux_sym_quotedstring_token1,
  [sym_textline] = sym_textline,
  [aux_sym__textline_token1] = aux_sym__textline_token1,
  [sym__quote] = sym__quote,
  [sym_footersep] = sym_footersep,
  [sym__line_break] = sym__line_break,
  [sym__lwsp] = sym__lwsp,
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
  [sym__fieldbody] = sym__fieldbody,
  [sym_seperator] = sym_seperator,
  [sym_addresslist] = sym_addresslist,
  [sym_internetaddress] = sym_internetaddress,
  [sym_mailbox] = sym_mailbox,
  [sym__routeaddr] = sym__routeaddr,
  [sym__addrspec] = sym__addrspec,
  [sym_domain] = sym_domain,
  [sym_local] = sym_local,
  [sym_name] = sym_name,
  [sym__word] = sym__word,
  [sym_quotedstring] = sym_quotedstring,
  [sym_emailbody] = sym_emailbody,
  [sym__text] = sym__text,
  [sym_quote1] = sym_quote1,
  [sym_quote2] = sym_quote2,
  [sym_quote3] = sym_quote3,
  [sym_quote4] = sym_quote4,
  [sym_quote5] = sym_quote5,
  [sym_quote6] = sym_quote6,
  [sym__quoted] = sym__quoted,
  [sym_footer] = sym_footer,
  [sym_footertext] = sym_footertext,
  [sym_footerline] = sym_footerline,
  [aux_sym_headers_repeat1] = aux_sym_headers_repeat1,
  [aux_sym__fieldbody_repeat1] = aux_sym__fieldbody_repeat1,
  [aux_sym_seperator_repeat1] = aux_sym_seperator_repeat1,
  [aux_sym_addresslist_repeat1] = aux_sym_addresslist_repeat1,
  [aux_sym_domain_repeat1] = aux_sym_domain_repeat1,
  [aux_sym_name_repeat1] = aux_sym_name_repeat1,
  [aux_sym_emailbody_repeat1] = aux_sym_emailbody_repeat1,
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
  [sym__bodycontent] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COMMA] = {
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
  [sym__specails] = {
    .visible = false,
    .named = true,
  },
  [sym__atom] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quotedstring_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_textline] = {
    .visible = true,
    .named = true,
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
  [sym__lwsp] = {
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
  [sym__fieldbody] = {
    .visible = false,
    .named = true,
  },
  [sym_seperator] = {
    .visible = true,
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
  [sym_mailbox] = {
    .visible = true,
    .named = true,
  },
  [sym__routeaddr] = {
    .visible = false,
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
  [sym__word] = {
    .visible = false,
    .named = true,
  },
  [sym_quotedstring] = {
    .visible = true,
    .named = true,
  },
  [sym_emailbody] = {
    .visible = true,
    .named = true,
  },
  [sym__text] = {
    .visible = false,
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
  [sym_quote3] = {
    .visible = true,
    .named = true,
  },
  [sym_quote4] = {
    .visible = true,
    .named = true,
  },
  [sym_quote5] = {
    .visible = true,
    .named = true,
  },
  [sym_quote6] = {
    .visible = true,
    .named = true,
  },
  [sym__quoted] = {
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
  [aux_sym__fieldbody_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_seperator_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_addresslist_repeat1] = {
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
  [aux_sym_emailbody_repeat1] = {
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
  [39] = 38,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 35,
  [46] = 46,
  [47] = 41,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 37,
  [53] = 53,
  [54] = 54,
  [55] = 46,
  [56] = 56,
  [57] = 43,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 35,
  [62] = 36,
  [63] = 63,
  [64] = 64,
  [65] = 33,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 59,
  [78] = 44,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
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
  [98] = 98,
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
  [109] = 80,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 106,
  [115] = 108,
  [116] = 116,
  [117] = 117,
  [118] = 108,
  [119] = 95,
  [120] = 117,
  [121] = 95,
};

static inline bool sym__atom_character_set_1(int32_t c) {
  return (c < '.'
    ? (c < ' '
      ? (c < '\n'
        ? c == 0
        : c <= '\n')
      : (c <= ' ' || (c < ','
        ? c == '"'
        : c <= ',')))
    : (c <= '.' || (c < '@'
      ? (c < '>'
        ? (c >= ':' && c <= '<')
        : c <= '>')
      : (c <= '@' || (c >= '[' && c <= ']')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(47);
      if (lookahead == '"') ADVANCE(110);
      if (lookahead == ',') ADVANCE(102);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(106);
      if (lookahead == ':') ADVANCE(48);
      if (lookahead == '<') ADVANCE(103);
      if (lookahead == '>') ADVANCE(124);
      if (lookahead == '@') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(0)
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(17);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(15);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(12);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(39);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(21);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(22);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(23);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(34);
      if (lookahead == ';' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(107);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(125);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(100);
      if (lookahead != 0) ADVANCE(101);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') ADVANCE(121);
      if (lookahead == '>') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(121);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(1);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(110);
      if (lookahead == ',') ADVANCE(102);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(106);
      if (lookahead == ':') ADVANCE(48);
      if (lookahead == '<') ADVANCE(103);
      if (lookahead == '>') ADVANCE(124);
      if (lookahead == '@') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(17);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(15);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(12);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(39);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(21);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(22);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(23);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(34);
      if (lookahead == ';' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(107);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(110);
      if (lookahead == ',') ADVANCE(102);
      if (lookahead == '.') ADVANCE(106);
      if (lookahead == ':') ADVANCE(48);
      if (lookahead == '<') ADVANCE(103);
      if (lookahead == '>') ADVANCE(104);
      if (lookahead == '@') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(110);
      if (lookahead == '.') ADVANCE(106);
      if (lookahead == '<') ADVANCE(103);
      if (lookahead == '@') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(108);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(109);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(4);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(29);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(44);
      END_STATE();
    case 11:
      if (lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(70);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(68);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(65);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(92);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(75);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(76);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(77);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(11)
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 12:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 13:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 14:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(30);
      END_STATE();
    case 15:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 16:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 17:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(42);
      END_STATE();
    case 19:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(57);
      END_STATE();
    case 20:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(25);
      END_STATE();
    case 21:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 22:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 23:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(33);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 24:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 25:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 26:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 27:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 28:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(26);
      END_STATE();
    case 29:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 30:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(27);
      END_STATE();
    case 31:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 32:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(50);
      END_STATE();
    case 33:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 34:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 35:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 36:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 37:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 38:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 39:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 40:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(13);
      END_STATE();
    case 41:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(40);
      END_STATE();
    case 42:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(56);
      END_STATE();
    case 43:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(24);
      END_STATE();
    case 44:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(36);
      END_STATE();
    case 45:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(10);
      END_STATE();
    case 46:
      if (eof) ADVANCE(47);
      if (lookahead == '\n') SKIP(46)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(122);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_to_token1);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_from_token1);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_cc_token1);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_bcc_token1);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_sender_token1);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_replyto_token1);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_date_token1);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_subject_token1);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_message_id_token1);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '\t') ADVANCE(113);
      if (lookahead == '\r') ADVANCE(58);
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '>') ADVANCE(124);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(70);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(68);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(65);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(92);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(75);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(76);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(77);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '\n') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == ' ') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '-') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(70);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(68);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(65);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(92);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(75);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(76);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(77);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(86);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(99);
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
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__specails);
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
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_quotedstring_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_quotedstring_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_textline);
      if (lookahead == '\t') ADVANCE(113);
      if (lookahead == '\n') SKIP(113)
      if (lookahead == '\r') ADVANCE(58);
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == '>') ADVANCE(124);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(70);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(68);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(65);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(92);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(75);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(76);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(77);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(87);
      if (lookahead != 0) ADVANCE(99);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_textline);
      if (lookahead == '\n') ADVANCE(125);
      if (lookahead != 0) ADVANCE(118);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_textline);
      if (lookahead == '\n') SKIP(115)
      if (lookahead == '\r') ADVANCE(115);
      if (lookahead == '-') ADVANCE(117);
      if (lookahead == '>') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(115);
      if (lookahead != 0) ADVANCE(118);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_textline);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(118);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_textline);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_textline);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_textline);
      if (eof) ADVANCE(47);
      if (lookahead == '\t') ADVANCE(113);
      if (lookahead == '\n') SKIP(119)
      if (lookahead == '\r') ADVANCE(58);
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == '>') ADVANCE(124);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(70);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(68);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(65);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(92);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(75);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(76);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(77);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(87);
      if (lookahead != 0) ADVANCE(99);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_textline);
      if (eof) ADVANCE(47);
      if (lookahead == '\n') SKIP(120)
      if (lookahead == '\r') ADVANCE(115);
      if (lookahead == '-') ADVANCE(117);
      if (lookahead == '>') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(115);
      if (lookahead != 0) ADVANCE(118);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym__textline_token1);
      if (lookahead == '\r') ADVANCE(121);
      if (lookahead == '>') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(123);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym__textline_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym__textline_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__quote);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_footersep);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 11},
  [2] = {.lex_state = 119, .external_lex_state = 2},
  [3] = {.lex_state = 119, .external_lex_state = 2},
  [4] = {.lex_state = 119, .external_lex_state = 1},
  [5] = {.lex_state = 119, .external_lex_state = 1},
  [6] = {.lex_state = 119, .external_lex_state = 1},
  [7] = {.lex_state = 119, .external_lex_state = 1},
  [8] = {.lex_state = 119, .external_lex_state = 2},
  [9] = {.lex_state = 119, .external_lex_state = 2},
  [10] = {.lex_state = 119, .external_lex_state = 2},
  [11] = {.lex_state = 119, .external_lex_state = 2},
  [12] = {.lex_state = 119, .external_lex_state = 2},
  [13] = {.lex_state = 119, .external_lex_state = 2},
  [14] = {.lex_state = 119, .external_lex_state = 2},
  [15] = {.lex_state = 120, .external_lex_state = 2},
  [16] = {.lex_state = 119, .external_lex_state = 2},
  [17] = {.lex_state = 119, .external_lex_state = 2},
  [18] = {.lex_state = 120},
  [19] = {.lex_state = 120},
  [20] = {.lex_state = 120},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 6, .external_lex_state = 1},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 6, .external_lex_state = 1},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 6, .external_lex_state = 1},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 46},
  [32] = {.lex_state = 0, .external_lex_state = 1},
  [33] = {.lex_state = 6, .external_lex_state = 1},
  [34] = {.lex_state = 0, .external_lex_state = 1},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 6, .external_lex_state = 1},
  [37] = {.lex_state = 6, .external_lex_state = 1},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 0, .external_lex_state = 1},
  [41] = {.lex_state = 2, .external_lex_state = 1},
  [42] = {.lex_state = 120},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 6, .external_lex_state = 1},
  [45] = {.lex_state = 6, .external_lex_state = 1},
  [46] = {.lex_state = 6, .external_lex_state = 1},
  [47] = {.lex_state = 6, .external_lex_state = 1},
  [48] = {.lex_state = 120},
  [49] = {.lex_state = 120},
  [50] = {.lex_state = 120},
  [51] = {.lex_state = 120},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 46},
  [54] = {.lex_state = 120},
  [55] = {.lex_state = 2, .external_lex_state = 1},
  [56] = {.lex_state = 46},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 6, .external_lex_state = 1},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 6, .external_lex_state = 1},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 6, .external_lex_state = 1},
  [73] = {.lex_state = 6, .external_lex_state = 1},
  [74] = {.lex_state = 6, .external_lex_state = 1},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 2, .external_lex_state = 1},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 6, .external_lex_state = 1},
  [81] = {.lex_state = 6, .external_lex_state = 1},
  [82] = {.lex_state = 6, .external_lex_state = 1},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 0, .external_lex_state = 1},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 46},
  [87] = {.lex_state = 46},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 111},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 0, .external_lex_state = 3},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 0, .external_lex_state = 3},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 6},
  [117] = {.lex_state = 6},
  [118] = {.lex_state = 6},
  [119] = {.lex_state = 111},
  [120] = {.lex_state = 6},
  [121] = {.lex_state = 111},
};

enum {
  ts_external_token__line_break = 0,
  ts_external_token__lwsp = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__line_break] = sym__line_break,
  [ts_external_token__lwsp] = sym__lwsp,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__line_break] = true,
    [ts_external_token__lwsp] = true,
  },
  [2] = {
    [ts_external_token__line_break] = true,
  },
  [3] = {
    [ts_external_token__lwsp] = true,
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
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym__specails] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym__quote] = ACTIONS(1),
    [sym_footersep] = ACTIONS(1),
    [sym__line_break] = ACTIONS(1),
    [sym__lwsp] = ACTIONS(1),
  },
  [1] = {
    [sym_message] = STATE(88),
    [sym_headers] = STATE(15),
    [sym_header] = STATE(3),
    [sym_addressheader] = STATE(3),
    [sym_dateheader] = STATE(3),
    [sym_subjectheader] = STATE(3),
    [sym_midheader] = STATE(3),
    [sym_addrkind] = STATE(96),
    [sym_to] = STATE(98),
    [sym_from] = STATE(98),
    [sym_cc] = STATE(98),
    [sym_bcc] = STATE(98),
    [sym_sender] = STATE(98),
    [sym_replyto] = STATE(98),
    [sym_date] = STATE(100),
    [sym_subject] = STATE(103),
    [sym_message_id] = STATE(107),
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
  [0] = 18,
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
    STATE(96), 1,
      sym_addrkind,
    STATE(100), 1,
      sym_date,
    STATE(103), 1,
      sym_subject,
    STATE(107), 1,
      sym_message_id,
    ACTIONS(23), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(55), 3,
      sym_textline,
      sym__quote,
      sym_footersep,
    STATE(2), 6,
      sym_header,
      sym_addressheader,
      sym_dateheader,
      sym_subjectheader,
      sym_midheader,
      aux_sym_headers_repeat1,
    STATE(98), 6,
      sym_to,
      sym_from,
      sym_cc,
      sym_bcc,
      sym_sender,
      sym_replyto,
  [68] = 18,
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
    STATE(96), 1,
      sym_addrkind,
    STATE(100), 1,
      sym_date,
    STATE(103), 1,
      sym_subject,
    STATE(107), 1,
      sym_message_id,
    ACTIONS(57), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(59), 3,
      sym_textline,
      sym__quote,
      sym_footersep,
    STATE(2), 6,
      sym_header,
      sym_addressheader,
      sym_dateheader,
      sym_subjectheader,
      sym_midheader,
      aux_sym_headers_repeat1,
    STATE(98), 6,
      sym_to,
      sym_from,
      sym_cc,
      sym_bcc,
      sym_sender,
      sym_replyto,
  [136] = 3,
    ACTIONS(65), 1,
      sym__lwsp,
    ACTIONS(61), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(63), 13,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      aux_sym_date_token1,
      aux_sym_subject_token1,
      aux_sym_message_id_token1,
      sym_headertype,
      sym_textline,
      sym__quote,
      sym_footersep,
  [159] = 3,
    ACTIONS(65), 1,
      sym__lwsp,
    ACTIONS(67), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(69), 13,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      aux_sym_date_token1,
      aux_sym_subject_token1,
      aux_sym_message_id_token1,
      sym_headertype,
      sym_textline,
      sym__quote,
      sym_footersep,
  [182] = 3,
    ACTIONS(75), 1,
      sym__lwsp,
    ACTIONS(71), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(73), 13,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      aux_sym_date_token1,
      aux_sym_subject_token1,
      aux_sym_message_id_token1,
      sym_headertype,
      sym_textline,
      sym__quote,
      sym_footersep,
  [205] = 3,
    ACTIONS(75), 1,
      sym__lwsp,
    ACTIONS(77), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(79), 13,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      aux_sym_date_token1,
      aux_sym_subject_token1,
      aux_sym_message_id_token1,
      sym_headertype,
      sym_textline,
      sym__quote,
      sym_footersep,
  [228] = 2,
    ACTIONS(81), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(83), 13,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      aux_sym_date_token1,
      aux_sym_subject_token1,
      aux_sym_message_id_token1,
      sym_headertype,
      sym_textline,
      sym__quote,
      sym_footersep,
  [248] = 2,
    ACTIONS(85), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(87), 13,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      aux_sym_date_token1,
      aux_sym_subject_token1,
      aux_sym_message_id_token1,
      sym_headertype,
      sym_textline,
      sym__quote,
      sym_footersep,
  [268] = 2,
    ACTIONS(89), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(91), 13,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      aux_sym_date_token1,
      aux_sym_subject_token1,
      aux_sym_message_id_token1,
      sym_headertype,
      sym_textline,
      sym__quote,
      sym_footersep,
  [288] = 2,
    ACTIONS(93), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(95), 13,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      aux_sym_date_token1,
      aux_sym_subject_token1,
      aux_sym_message_id_token1,
      sym_headertype,
      sym_textline,
      sym__quote,
      sym_footersep,
  [308] = 2,
    ACTIONS(97), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(99), 13,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      aux_sym_date_token1,
      aux_sym_subject_token1,
      aux_sym_message_id_token1,
      sym_headertype,
      sym_textline,
      sym__quote,
      sym_footersep,
  [328] = 2,
    ACTIONS(101), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(103), 13,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      aux_sym_date_token1,
      aux_sym_subject_token1,
      aux_sym_message_id_token1,
      sym_headertype,
      sym_textline,
      sym__quote,
      sym_footersep,
  [348] = 2,
    ACTIONS(105), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(107), 13,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      aux_sym_date_token1,
      aux_sym_subject_token1,
      aux_sym_message_id_token1,
      sym_headertype,
      sym_textline,
      sym__quote,
      sym_footersep,
  [368] = 8,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    ACTIONS(111), 1,
      sym_textline,
    ACTIONS(113), 1,
      sym__quote,
    ACTIONS(115), 1,
      sym_footersep,
    ACTIONS(117), 1,
      sym__line_break,
    STATE(66), 1,
      sym_emailbody,
    STATE(94), 1,
      sym_footer,
    STATE(20), 8,
      sym_quote1,
      sym_quote2,
      sym_quote3,
      sym_quote4,
      sym_quote5,
      sym_quote6,
      sym__quoted,
      aux_sym_emailbody_repeat1,
  [400] = 2,
    ACTIONS(119), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(121), 13,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      aux_sym_date_token1,
      aux_sym_subject_token1,
      aux_sym_message_id_token1,
      sym_headertype,
      sym_textline,
      sym__quote,
      sym_footersep,
  [420] = 2,
    ACTIONS(123), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(125), 13,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      aux_sym_date_token1,
      aux_sym_subject_token1,
      aux_sym_message_id_token1,
      sym_headertype,
      sym_textline,
      sym__quote,
      sym_footersep,
  [440] = 7,
    ACTIONS(111), 1,
      sym_textline,
    ACTIONS(113), 1,
      sym__quote,
    ACTIONS(115), 1,
      sym_footersep,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
    STATE(69), 1,
      sym_emailbody,
    STATE(104), 1,
      sym_footer,
    STATE(20), 8,
      sym_quote1,
      sym_quote2,
      sym_quote3,
      sym_quote4,
      sym_quote5,
      sym_quote6,
      sym__quoted,
      aux_sym_emailbody_repeat1,
  [469] = 5,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
    ACTIONS(131), 1,
      sym_textline,
    ACTIONS(134), 1,
      sym__quote,
    ACTIONS(137), 1,
      sym_footersep,
    STATE(19), 8,
      sym_quote1,
      sym_quote2,
      sym_quote3,
      sym_quote4,
      sym_quote5,
      sym_quote6,
      sym__quoted,
      aux_sym_emailbody_repeat1,
  [492] = 5,
    ACTIONS(113), 1,
      sym__quote,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
    ACTIONS(141), 1,
      sym_textline,
    ACTIONS(143), 1,
      sym_footersep,
    STATE(19), 8,
      sym_quote1,
      sym_quote2,
      sym_quote3,
      sym_quote4,
      sym_quote5,
      sym_quote6,
      sym__quoted,
      aux_sym_emailbody_repeat1,
  [515] = 10,
    ACTIONS(145), 1,
      sym__atom,
    ACTIONS(147), 1,
      anon_sym_DQUOTE,
    STATE(16), 1,
      sym_addresslist,
    STATE(25), 1,
      aux_sym_name_repeat1,
    STATE(29), 1,
      sym_internetaddress,
    STATE(70), 1,
      sym__addrspec,
    STATE(82), 1,
      sym_mailbox,
    STATE(85), 1,
      sym_name,
    STATE(117), 1,
      sym_local,
    STATE(27), 2,
      sym__word,
      sym_quotedstring,
  [547] = 9,
    ACTIONS(145), 1,
      sym__atom,
    ACTIONS(147), 1,
      anon_sym_DQUOTE,
    STATE(25), 1,
      aux_sym_name_repeat1,
    STATE(70), 1,
      sym__addrspec,
    STATE(73), 1,
      sym_internetaddress,
    STATE(82), 1,
      sym_mailbox,
    STATE(85), 1,
      sym_name,
    STATE(117), 1,
      sym_local,
    STATE(27), 2,
      sym__word,
      sym_quotedstring,
  [576] = 9,
    ACTIONS(145), 1,
      sym__atom,
    ACTIONS(147), 1,
      anon_sym_DQUOTE,
    STATE(25), 1,
      aux_sym_name_repeat1,
    STATE(70), 1,
      sym__addrspec,
    STATE(81), 1,
      sym_internetaddress,
    STATE(82), 1,
      sym_mailbox,
    STATE(85), 1,
      sym_name,
    STATE(117), 1,
      sym_local,
    STATE(27), 2,
      sym__word,
      sym_quotedstring,
  [605] = 6,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(152), 1,
      sym__line_break,
    ACTIONS(155), 1,
      sym__lwsp,
    STATE(24), 1,
      aux_sym_addresslist_repeat1,
    STATE(47), 1,
      aux_sym_seperator_repeat1,
    STATE(89), 1,
      sym_seperator,
  [624] = 4,
    ACTIONS(147), 1,
      anon_sym_DQUOTE,
    ACTIONS(158), 1,
      anon_sym_LT,
    ACTIONS(160), 1,
      sym__atom,
    STATE(30), 3,
      sym__word,
      sym_quotedstring,
      aux_sym_name_repeat1,
  [639] = 6,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    ACTIONS(164), 1,
      sym__line_break,
    ACTIONS(166), 1,
      sym__lwsp,
    STATE(24), 1,
      aux_sym_addresslist_repeat1,
    STATE(47), 1,
      aux_sym_seperator_repeat1,
    STATE(89), 1,
      sym_seperator,
  [658] = 5,
    ACTIONS(170), 1,
      anon_sym_AT,
    ACTIONS(172), 1,
      anon_sym_DOT,
    ACTIONS(174), 1,
      sym__atom,
    STATE(75), 1,
      aux_sym_domain_repeat1,
    ACTIONS(168), 2,
      anon_sym_LT,
      anon_sym_DQUOTE,
  [675] = 5,
    ACTIONS(176), 1,
      sym__atom,
    ACTIONS(178), 1,
      anon_sym_DQUOTE,
    STATE(93), 1,
      sym__addrspec,
    STATE(120), 1,
      sym_local,
    STATE(79), 2,
      sym__word,
      sym_quotedstring,
  [692] = 6,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    ACTIONS(166), 1,
      sym__lwsp,
    ACTIONS(180), 1,
      sym__line_break,
    STATE(26), 1,
      aux_sym_addresslist_repeat1,
    STATE(47), 1,
      aux_sym_seperator_repeat1,
    STATE(89), 1,
      sym_seperator,
  [711] = 4,
    ACTIONS(182), 1,
      anon_sym_LT,
    ACTIONS(184), 1,
      sym__atom,
    ACTIONS(187), 1,
      anon_sym_DQUOTE,
    STATE(30), 3,
      sym__word,
      sym_quotedstring,
      aux_sym_name_repeat1,
  [726] = 4,
    ACTIONS(190), 1,
      ts_builtin_sym_end,
    ACTIONS(192), 1,
      aux_sym__textline_token1,
    STATE(97), 1,
      sym_footertext,
    STATE(53), 2,
      sym_footerline,
      aux_sym_footertext_repeat1,
  [740] = 5,
    ACTIONS(194), 1,
      sym__line_break,
    ACTIONS(196), 1,
      sym__lwsp,
    STATE(40), 1,
      aux_sym__fieldbody_repeat1,
    STATE(41), 1,
      aux_sym_seperator_repeat1,
    STATE(113), 1,
      sym_seperator,
  [756] = 3,
    ACTIONS(200), 1,
      anon_sym_DOT,
    STATE(36), 1,
      aux_sym_domain_repeat1,
    ACTIONS(198), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [768] = 5,
    ACTIONS(202), 1,
      sym__line_break,
    ACTIONS(205), 1,
      sym__lwsp,
    STATE(34), 1,
      aux_sym__fieldbody_repeat1,
    STATE(41), 1,
      aux_sym_seperator_repeat1,
    STATE(113), 1,
      sym_seperator,
  [784] = 2,
    ACTIONS(210), 1,
      sym__atom,
    ACTIONS(208), 4,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_DQUOTE,
  [794] = 3,
    ACTIONS(200), 1,
      anon_sym_DOT,
    STATE(37), 1,
      aux_sym_domain_repeat1,
    ACTIONS(212), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [806] = 3,
    ACTIONS(216), 1,
      anon_sym_DOT,
    STATE(37), 1,
      aux_sym_domain_repeat1,
    ACTIONS(214), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [818] = 4,
    ACTIONS(178), 1,
      anon_sym_DQUOTE,
    ACTIONS(219), 1,
      sym__atom,
    STATE(109), 1,
      sym_domain,
    STATE(65), 2,
      sym__word,
      sym_quotedstring,
  [832] = 4,
    ACTIONS(221), 1,
      sym__atom,
    ACTIONS(223), 1,
      anon_sym_DQUOTE,
    STATE(80), 1,
      sym_domain,
    STATE(33), 2,
      sym__word,
      sym_quotedstring,
  [846] = 5,
    ACTIONS(196), 1,
      sym__lwsp,
    ACTIONS(225), 1,
      sym__line_break,
    STATE(34), 1,
      aux_sym__fieldbody_repeat1,
    STATE(41), 1,
      aux_sym_seperator_repeat1,
    STATE(113), 1,
      sym_seperator,
  [862] = 4,
    ACTIONS(227), 1,
      sym__bodycontent,
    ACTIONS(229), 1,
      sym__line_break,
    ACTIONS(231), 1,
      sym__lwsp,
    STATE(55), 1,
      aux_sym_seperator_repeat1,
  [875] = 2,
    ACTIONS(233), 1,
      ts_builtin_sym_end,
    ACTIONS(235), 3,
      sym_textline,
      sym__quote,
      sym_footersep,
  [884] = 3,
    ACTIONS(223), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      sym__atom,
    STATE(44), 2,
      sym__word,
      sym_quotedstring,
  [895] = 1,
    ACTIONS(214), 4,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
      anon_sym_DOT,
  [902] = 1,
    ACTIONS(210), 4,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
      anon_sym_DOT,
  [909] = 4,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(241), 1,
      sym__line_break,
    ACTIONS(244), 1,
      sym__lwsp,
    STATE(46), 1,
      aux_sym_seperator_repeat1,
  [922] = 4,
    ACTIONS(227), 1,
      anon_sym_COMMA,
    ACTIONS(247), 1,
      sym__line_break,
    ACTIONS(249), 1,
      sym__lwsp,
    STATE(46), 1,
      aux_sym_seperator_repeat1,
  [935] = 2,
    ACTIONS(251), 1,
      ts_builtin_sym_end,
    ACTIONS(253), 3,
      sym_textline,
      sym__quote,
      sym_footersep,
  [944] = 2,
    ACTIONS(255), 1,
      ts_builtin_sym_end,
    ACTIONS(257), 3,
      sym_textline,
      sym__quote,
      sym_footersep,
  [953] = 2,
    ACTIONS(259), 1,
      ts_builtin_sym_end,
    ACTIONS(261), 3,
      sym_textline,
      sym__quote,
      sym_footersep,
  [962] = 2,
    ACTIONS(263), 1,
      ts_builtin_sym_end,
    ACTIONS(265), 3,
      sym_textline,
      sym__quote,
      sym_footersep,
  [971] = 3,
    ACTIONS(267), 1,
      anon_sym_DOT,
    STATE(52), 1,
      aux_sym_domain_repeat1,
    ACTIONS(214), 2,
      anon_sym_GT,
      anon_sym_AT,
  [982] = 3,
    ACTIONS(192), 1,
      aux_sym__textline_token1,
    ACTIONS(270), 1,
      ts_builtin_sym_end,
    STATE(56), 2,
      sym_footerline,
      aux_sym_footertext_repeat1,
  [993] = 2,
    ACTIONS(272), 1,
      ts_builtin_sym_end,
    ACTIONS(274), 3,
      sym_textline,
      sym__quote,
      sym_footersep,
  [1002] = 4,
    ACTIONS(239), 1,
      sym__bodycontent,
    ACTIONS(276), 1,
      sym__line_break,
    ACTIONS(279), 1,
      sym__lwsp,
    STATE(55), 1,
      aux_sym_seperator_repeat1,
  [1015] = 3,
    ACTIONS(282), 1,
      ts_builtin_sym_end,
    ACTIONS(284), 1,
      aux_sym__textline_token1,
    STATE(56), 2,
      sym_footerline,
      aux_sym_footertext_repeat1,
  [1026] = 3,
    ACTIONS(178), 1,
      anon_sym_DQUOTE,
    ACTIONS(287), 1,
      sym__atom,
    STATE(78), 2,
      sym__word,
      sym_quotedstring,
  [1037] = 3,
    ACTIONS(289), 1,
      aux_sym__textline_token1,
    ACTIONS(291), 1,
      sym__quote,
    STATE(54), 1,
      sym__text,
  [1047] = 1,
    ACTIONS(239), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [1053] = 3,
    ACTIONS(293), 1,
      sym__bodycontent,
    STATE(10), 1,
      sym__datefield,
    STATE(14), 1,
      sym__fieldbody,
  [1063] = 1,
    ACTIONS(210), 3,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_DOT,
  [1069] = 3,
    ACTIONS(212), 1,
      anon_sym_GT,
    ACTIONS(295), 1,
      anon_sym_DOT,
    STATE(52), 1,
      aux_sym_domain_repeat1,
  [1079] = 3,
    ACTIONS(293), 1,
      sym__bodycontent,
    STATE(8), 1,
      sym__fieldbody,
    STATE(17), 1,
      sym__subjectfield,
  [1089] = 3,
    ACTIONS(297), 1,
      aux_sym__textline_token1,
    ACTIONS(299), 1,
      sym__quote,
    STATE(50), 1,
      sym__text,
  [1099] = 3,
    ACTIONS(198), 1,
      anon_sym_GT,
    ACTIONS(295), 1,
      anon_sym_DOT,
    STATE(62), 1,
      aux_sym_domain_repeat1,
  [1109] = 3,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
    ACTIONS(301), 1,
      sym_footersep,
    STATE(104), 1,
      sym_footer,
  [1119] = 3,
    ACTIONS(293), 1,
      sym__bodycontent,
    STATE(11), 1,
      sym__fieldbody,
    STATE(12), 1,
      sym_mid,
  [1129] = 3,
    ACTIONS(293), 1,
      sym__bodycontent,
    STATE(9), 1,
      sym_headerentry,
    STATE(13), 1,
      sym__fieldbody,
  [1139] = 3,
    ACTIONS(301), 1,
      sym_footersep,
    ACTIONS(303), 1,
      ts_builtin_sym_end,
    STATE(110), 1,
      sym_footer,
  [1149] = 1,
    ACTIONS(305), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [1155] = 3,
    ACTIONS(307), 1,
      aux_sym__textline_token1,
    ACTIONS(309), 1,
      sym__quote,
    STATE(42), 1,
      sym__text,
  [1165] = 1,
    ACTIONS(311), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [1171] = 1,
    ACTIONS(313), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [1177] = 1,
    ACTIONS(315), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [1183] = 3,
    ACTIONS(295), 1,
      anon_sym_DOT,
    ACTIONS(317), 1,
      anon_sym_AT,
    STATE(52), 1,
      aux_sym_domain_repeat1,
  [1193] = 3,
    ACTIONS(319), 1,
      aux_sym__textline_token1,
    ACTIONS(321), 1,
      sym__quote,
    STATE(49), 1,
      sym__text,
  [1203] = 1,
    ACTIONS(239), 3,
      sym__line_break,
      sym__lwsp,
      sym__bodycontent,
  [1209] = 1,
    ACTIONS(214), 3,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_DOT,
  [1215] = 3,
    ACTIONS(295), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_AT,
    STATE(75), 1,
      aux_sym_domain_repeat1,
  [1225] = 1,
    ACTIONS(325), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [1231] = 1,
    ACTIONS(327), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [1237] = 1,
    ACTIONS(329), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [1243] = 3,
    ACTIONS(331), 1,
      aux_sym__textline_token1,
    ACTIONS(333), 1,
      sym__quote,
    STATE(51), 1,
      sym__text,
  [1253] = 1,
    ACTIONS(335), 2,
      sym__line_break,
      sym__lwsp,
  [1258] = 2,
    ACTIONS(337), 1,
      anon_sym_LT,
    STATE(74), 1,
      sym__routeaddr,
  [1265] = 1,
    ACTIONS(339), 2,
      ts_builtin_sym_end,
      aux_sym__textline_token1,
  [1270] = 2,
    ACTIONS(341), 1,
      aux_sym__textline_token1,
    STATE(48), 1,
      sym__text,
  [1277] = 1,
    ACTIONS(343), 1,
      ts_builtin_sym_end,
  [1281] = 1,
    ACTIONS(345), 1,
      anon_sym_COMMA,
  [1285] = 1,
    ACTIONS(347), 1,
      anon_sym_COLON,
  [1289] = 1,
    ACTIONS(349), 1,
      anon_sym_COLON,
  [1293] = 1,
    ACTIONS(351), 1,
      anon_sym_COLON,
  [1297] = 1,
    ACTIONS(353), 1,
      anon_sym_GT,
  [1301] = 1,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
  [1305] = 1,
    ACTIONS(355), 1,
      aux_sym_quotedstring_token1,
  [1309] = 1,
    ACTIONS(357), 1,
      anon_sym_COLON,
  [1313] = 1,
    ACTIONS(359), 1,
      ts_builtin_sym_end,
  [1317] = 1,
    ACTIONS(361), 1,
      anon_sym_COLON,
  [1321] = 1,
    ACTIONS(363), 1,
      anon_sym_COLON,
  [1325] = 1,
    ACTIONS(365), 1,
      anon_sym_COLON,
  [1329] = 1,
    ACTIONS(367), 1,
      anon_sym_COLON,
  [1333] = 1,
    ACTIONS(369), 1,
      anon_sym_COLON,
  [1337] = 1,
    ACTIONS(371), 1,
      anon_sym_COLON,
  [1341] = 1,
    ACTIONS(303), 1,
      ts_builtin_sym_end,
  [1345] = 1,
    ACTIONS(373), 1,
      anon_sym_COLON,
  [1349] = 1,
    ACTIONS(75), 1,
      sym__lwsp,
  [1353] = 1,
    ACTIONS(375), 1,
      anon_sym_COLON,
  [1357] = 1,
    ACTIONS(377), 1,
      anon_sym_DQUOTE,
  [1361] = 1,
    ACTIONS(325), 1,
      anon_sym_GT,
  [1365] = 1,
    ACTIONS(379), 1,
      ts_builtin_sym_end,
  [1369] = 1,
    ACTIONS(381), 1,
      anon_sym_COLON,
  [1373] = 1,
    ACTIONS(383), 1,
      anon_sym_COLON,
  [1377] = 1,
    ACTIONS(385), 1,
      sym__bodycontent,
  [1381] = 1,
    ACTIONS(65), 1,
      sym__lwsp,
  [1385] = 1,
    ACTIONS(387), 1,
      anon_sym_DQUOTE,
  [1389] = 1,
    ACTIONS(389), 1,
      anon_sym_COLON,
  [1393] = 1,
    ACTIONS(391), 1,
      anon_sym_AT,
  [1397] = 1,
    ACTIONS(393), 1,
      anon_sym_DQUOTE,
  [1401] = 1,
    ACTIONS(395), 1,
      aux_sym_quotedstring_token1,
  [1405] = 1,
    ACTIONS(397), 1,
      anon_sym_AT,
  [1409] = 1,
    ACTIONS(399), 1,
      aux_sym_quotedstring_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 68,
  [SMALL_STATE(4)] = 136,
  [SMALL_STATE(5)] = 159,
  [SMALL_STATE(6)] = 182,
  [SMALL_STATE(7)] = 205,
  [SMALL_STATE(8)] = 228,
  [SMALL_STATE(9)] = 248,
  [SMALL_STATE(10)] = 268,
  [SMALL_STATE(11)] = 288,
  [SMALL_STATE(12)] = 308,
  [SMALL_STATE(13)] = 328,
  [SMALL_STATE(14)] = 348,
  [SMALL_STATE(15)] = 368,
  [SMALL_STATE(16)] = 400,
  [SMALL_STATE(17)] = 420,
  [SMALL_STATE(18)] = 440,
  [SMALL_STATE(19)] = 469,
  [SMALL_STATE(20)] = 492,
  [SMALL_STATE(21)] = 515,
  [SMALL_STATE(22)] = 547,
  [SMALL_STATE(23)] = 576,
  [SMALL_STATE(24)] = 605,
  [SMALL_STATE(25)] = 624,
  [SMALL_STATE(26)] = 639,
  [SMALL_STATE(27)] = 658,
  [SMALL_STATE(28)] = 675,
  [SMALL_STATE(29)] = 692,
  [SMALL_STATE(30)] = 711,
  [SMALL_STATE(31)] = 726,
  [SMALL_STATE(32)] = 740,
  [SMALL_STATE(33)] = 756,
  [SMALL_STATE(34)] = 768,
  [SMALL_STATE(35)] = 784,
  [SMALL_STATE(36)] = 794,
  [SMALL_STATE(37)] = 806,
  [SMALL_STATE(38)] = 818,
  [SMALL_STATE(39)] = 832,
  [SMALL_STATE(40)] = 846,
  [SMALL_STATE(41)] = 862,
  [SMALL_STATE(42)] = 875,
  [SMALL_STATE(43)] = 884,
  [SMALL_STATE(44)] = 895,
  [SMALL_STATE(45)] = 902,
  [SMALL_STATE(46)] = 909,
  [SMALL_STATE(47)] = 922,
  [SMALL_STATE(48)] = 935,
  [SMALL_STATE(49)] = 944,
  [SMALL_STATE(50)] = 953,
  [SMALL_STATE(51)] = 962,
  [SMALL_STATE(52)] = 971,
  [SMALL_STATE(53)] = 982,
  [SMALL_STATE(54)] = 993,
  [SMALL_STATE(55)] = 1002,
  [SMALL_STATE(56)] = 1015,
  [SMALL_STATE(57)] = 1026,
  [SMALL_STATE(58)] = 1037,
  [SMALL_STATE(59)] = 1047,
  [SMALL_STATE(60)] = 1053,
  [SMALL_STATE(61)] = 1063,
  [SMALL_STATE(62)] = 1069,
  [SMALL_STATE(63)] = 1079,
  [SMALL_STATE(64)] = 1089,
  [SMALL_STATE(65)] = 1099,
  [SMALL_STATE(66)] = 1109,
  [SMALL_STATE(67)] = 1119,
  [SMALL_STATE(68)] = 1129,
  [SMALL_STATE(69)] = 1139,
  [SMALL_STATE(70)] = 1149,
  [SMALL_STATE(71)] = 1155,
  [SMALL_STATE(72)] = 1165,
  [SMALL_STATE(73)] = 1171,
  [SMALL_STATE(74)] = 1177,
  [SMALL_STATE(75)] = 1183,
  [SMALL_STATE(76)] = 1193,
  [SMALL_STATE(77)] = 1203,
  [SMALL_STATE(78)] = 1209,
  [SMALL_STATE(79)] = 1215,
  [SMALL_STATE(80)] = 1225,
  [SMALL_STATE(81)] = 1231,
  [SMALL_STATE(82)] = 1237,
  [SMALL_STATE(83)] = 1243,
  [SMALL_STATE(84)] = 1253,
  [SMALL_STATE(85)] = 1258,
  [SMALL_STATE(86)] = 1265,
  [SMALL_STATE(87)] = 1270,
  [SMALL_STATE(88)] = 1277,
  [SMALL_STATE(89)] = 1281,
  [SMALL_STATE(90)] = 1285,
  [SMALL_STATE(91)] = 1289,
  [SMALL_STATE(92)] = 1293,
  [SMALL_STATE(93)] = 1297,
  [SMALL_STATE(94)] = 1301,
  [SMALL_STATE(95)] = 1305,
  [SMALL_STATE(96)] = 1309,
  [SMALL_STATE(97)] = 1313,
  [SMALL_STATE(98)] = 1317,
  [SMALL_STATE(99)] = 1321,
  [SMALL_STATE(100)] = 1325,
  [SMALL_STATE(101)] = 1329,
  [SMALL_STATE(102)] = 1333,
  [SMALL_STATE(103)] = 1337,
  [SMALL_STATE(104)] = 1341,
  [SMALL_STATE(105)] = 1345,
  [SMALL_STATE(106)] = 1349,
  [SMALL_STATE(107)] = 1353,
  [SMALL_STATE(108)] = 1357,
  [SMALL_STATE(109)] = 1361,
  [SMALL_STATE(110)] = 1365,
  [SMALL_STATE(111)] = 1369,
  [SMALL_STATE(112)] = 1373,
  [SMALL_STATE(113)] = 1377,
  [SMALL_STATE(114)] = 1381,
  [SMALL_STATE(115)] = 1385,
  [SMALL_STATE(116)] = 1389,
  [SMALL_STATE(117)] = 1393,
  [SMALL_STATE(118)] = 1397,
  [SMALL_STATE(119)] = 1401,
  [SMALL_STATE(120)] = 1405,
  [SMALL_STATE(121)] = 1409,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(111),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(116),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(112),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(99),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(92),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(90),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(105),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(102),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(101),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(91),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headers, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headers, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fieldbody, 3),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fieldbody, 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fieldbody, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fieldbody, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addresslist, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addresslist, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addresslist, 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addresslist, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__subjectfield, 1, .production_id = 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__subjectfield, 1, .production_id = 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dateheader, 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dateheader, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mid, 1, .production_id = 3),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mid, 1, .production_id = 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_midheader, 3),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_midheader, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headerentry, 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headerentry, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datefield, 1, .production_id = 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__datefield, 1, .production_id = 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addressheader, 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addressheader, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subjectheader, 3),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subjectheader, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_emailbody_repeat1, 2),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_emailbody_repeat1, 2), SHIFT_REPEAT(19),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_emailbody_repeat1, 2), SHIFT_REPEAT(64),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_emailbody_repeat1, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_emailbody, 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_emailbody, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_addresslist_repeat1, 2), SHIFT_REPEAT(23),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_addresslist_repeat1, 2), SHIFT_REPEAT(106),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_addresslist_repeat1, 2), SHIFT_REPEAT(47),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 1),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local, 1),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(30),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(95),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__fieldbody_repeat1, 2), SHIFT_REPEAT(114),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__fieldbody_repeat1, 2), SHIFT_REPEAT(41),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quotedstring, 3),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quotedstring, 3),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_domain_repeat1, 2),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_domain_repeat1, 2), SHIFT_REPEAT(43),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seperator, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote2, 3),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote2, 3),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_seperator_repeat1, 2),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seperator_repeat1, 2), SHIFT_REPEAT(106),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seperator_repeat1, 2), SHIFT_REPEAT(46),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote6, 7),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote6, 7),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote5, 6),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote5, 6),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote1, 2),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote1, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote4, 5),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote4, 5),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_domain_repeat1, 2), SHIFT_REPEAT(57),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footertext, 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote3, 4),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote3, 4),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seperator_repeat1, 2), SHIFT_REPEAT(114),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seperator_repeat1, 2), SHIFT_REPEAT(55),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_footertext_repeat1, 2),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_footertext_repeat1, 2), SHIFT_REPEAT(86),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailbox, 1),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__routeaddr, 3),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_addresslist_repeat1, 3),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailbox, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local, 2),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local, 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__addrspec, 3),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_addresslist_repeat1, 2),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_internetaddress, 1),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__fieldbody_repeat1, 2),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footerline, 1),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [343] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replyto, 1),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sender, 1),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 2),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addrkind, 1),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bcc, 1),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_id, 1),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 1),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 4),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_to, 1),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cc, 1),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 1),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
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
