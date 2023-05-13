#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 114
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 77
#define ALIAS_COUNT 3
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 2
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
  aux_sym_textblock_token1 = 22,
  aux_sym__textline_token1 = 23,
  sym__qoute = 24,
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
  sym_textblock = 62,
  sym_quote = 63,
  sym__qtext = 64,
  sym__qoute1 = 65,
  sym_footer = 66,
  sym_footertext = 67,
  aux_sym_headers_repeat1 = 68,
  aux_sym__fieldbody_repeat1 = 69,
  aux_sym_seperator_repeat1 = 70,
  aux_sym_addresslist_repeat1 = 71,
  aux_sym_domain_repeat1 = 72,
  aux_sym_name_repeat1 = 73,
  aux_sym_textblock_repeat1 = 74,
  aux_sym_quote_repeat1 = 75,
  aux_sym_footertext_repeat1 = 76,
  alias_sym_datefield = 77,
  alias_sym_midfield = 78,
  alias_sym_subjectfield = 79,
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
  [aux_sym_textblock_token1] = "textblock_token1",
  [aux_sym__textline_token1] = "_textline_token1",
  [sym__qoute] = "_qoute",
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
  [sym_textblock] = "textblock",
  [sym_quote] = "quote",
  [sym__qtext] = "_qtext",
  [sym__qoute1] = "_qoute1",
  [sym_footer] = "footer",
  [sym_footertext] = "footertext",
  [aux_sym_headers_repeat1] = "headers_repeat1",
  [aux_sym__fieldbody_repeat1] = "_fieldbody_repeat1",
  [aux_sym_seperator_repeat1] = "seperator_repeat1",
  [aux_sym_addresslist_repeat1] = "addresslist_repeat1",
  [aux_sym_domain_repeat1] = "domain_repeat1",
  [aux_sym_name_repeat1] = "name_repeat1",
  [aux_sym_textblock_repeat1] = "textblock_repeat1",
  [aux_sym_quote_repeat1] = "quote_repeat1",
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
  [aux_sym_textblock_token1] = aux_sym_textblock_token1,
  [aux_sym__textline_token1] = aux_sym__textline_token1,
  [sym__qoute] = sym__qoute,
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
  [sym_textblock] = sym_textblock,
  [sym_quote] = sym_quote,
  [sym__qtext] = sym__qtext,
  [sym__qoute1] = sym__qoute1,
  [sym_footer] = sym_footer,
  [sym_footertext] = sym_footertext,
  [aux_sym_headers_repeat1] = aux_sym_headers_repeat1,
  [aux_sym__fieldbody_repeat1] = aux_sym__fieldbody_repeat1,
  [aux_sym_seperator_repeat1] = aux_sym_seperator_repeat1,
  [aux_sym_addresslist_repeat1] = aux_sym_addresslist_repeat1,
  [aux_sym_domain_repeat1] = aux_sym_domain_repeat1,
  [aux_sym_name_repeat1] = aux_sym_name_repeat1,
  [aux_sym_textblock_repeat1] = aux_sym_textblock_repeat1,
  [aux_sym_quote_repeat1] = aux_sym_quote_repeat1,
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
  [aux_sym_textblock_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__textline_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__qoute] = {
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
  [sym_textblock] = {
    .visible = true,
    .named = true,
  },
  [sym_quote] = {
    .visible = true,
    .named = true,
  },
  [sym__qtext] = {
    .visible = false,
    .named = true,
  },
  [sym__qoute1] = {
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
  [aux_sym_textblock_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quote_repeat1] = {
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
  [36] = 35,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 32,
  [46] = 46,
  [47] = 29,
  [48] = 42,
  [49] = 49,
  [50] = 41,
  [51] = 49,
  [52] = 52,
  [53] = 53,
  [54] = 32,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 40,
  [60] = 60,
  [61] = 61,
  [62] = 39,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 31,
  [72] = 72,
  [73] = 73,
  [74] = 65,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
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
  [98] = 86,
  [99] = 99,
  [100] = 100,
  [101] = 53,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 88,
  [108] = 108,
  [109] = 109,
  [110] = 88,
  [111] = 80,
  [112] = 100,
  [113] = 80,
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
      if (eof) ADVANCE(50);
      if (lookahead == '"') ADVANCE(150);
      if (lookahead == ',') ADVANCE(142);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(146);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == '<') ADVANCE(143);
      if (lookahead == '>') ADVANCE(144);
      if (lookahead == '@') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(4);
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
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(147);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(162);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(1);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(150);
      if (lookahead == ',') ADVANCE(142);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(146);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == '<') ADVANCE(143);
      if (lookahead == '>') ADVANCE(144);
      if (lookahead == '@') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
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
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(147);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(150);
      if (lookahead == ',') ADVANCE(142);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(146);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == '<') ADVANCE(143);
      if (lookahead == '>') ADVANCE(161);
      if (lookahead == '@') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(150);
      if (lookahead == '.') ADVANCE(146);
      if (lookahead == '<') ADVANCE(143);
      if (lookahead == '@') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(148);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(149);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(3);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(29);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(44);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(146);
      if (lookahead == '>') ADVANCE(144);
      if (lookahead == '@') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == '\r' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(110);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(108);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(105);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(132);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(115);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(116);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(117);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(11)
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(139);
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
          lookahead == 'c') ADVANCE(54);
      END_STATE();
    case 16:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(55);
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
          lookahead == 'd') ADVANCE(60);
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
          lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 25:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 26:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
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
          lookahead == 'm') ADVANCE(53);
      END_STATE();
    case 33:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 34:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 35:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 36:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 37:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 38:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(56);
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
          lookahead == 't') ADVANCE(59);
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
          lookahead == 'y') ADVANCE(9);
      END_STATE();
    case 46:
      if (eof) ADVANCE(50);
      if (lookahead == '\t') ADVANCE(153);
      if (lookahead == '\n') ADVANCE(153);
      if (lookahead == '\r') ADVANCE(61);
      if (lookahead == ' ') ADVANCE(61);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == ':') ADVANCE(158);
      if (lookahead == '>') ADVANCE(139);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(74);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(72);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(69);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(96);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(79);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(80);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(81);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(91);
      if (lookahead != 0) ADVANCE(103);
      END_STATE();
    case 47:
      if (eof) ADVANCE(50);
      if (lookahead == '\n') SKIP(47)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(159);
      if (lookahead != 0) ADVANCE(160);
      END_STATE();
    case 48:
      if (eof) ADVANCE(50);
      if (lookahead == '"') ADVANCE(150);
      if (lookahead == ',') ADVANCE(142);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(146);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == '<') ADVANCE(143);
      if (lookahead == '>') ADVANCE(161);
      if (lookahead == '@') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(48)
      END_STATE();
    case 49:
      if (eof) ADVANCE(50);
      if (lookahead == '-') ADVANCE(157);
      if (lookahead == '>') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(155);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(155);
      if (lookahead != 0) ADVANCE(158);
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
      if (lookahead == '\t') ADVANCE(153);
      if (lookahead == '\n') ADVANCE(153);
      if (lookahead == '\r') ADVANCE(61);
      if (lookahead == ' ') ADVANCE(61);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '>') ADVANCE(103);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(74);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(72);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(69);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(96);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(79);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(80);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(81);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(103);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == ':') ADVANCE(158);
      if (lookahead != 0) ADVANCE(103);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == ' ') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == ':') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(139);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == ':') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == ':') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(139);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '-') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == ':') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '\t' ||
          lookahead == ':') ADVANCE(158);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '\t' ||
          lookahead == ':') ADVANCE(158);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '\t' ||
          lookahead == ':') ADVANCE(158);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '\t' ||
          lookahead == ':') ADVANCE(158);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '\t' ||
          lookahead == ':') ADVANCE(158);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '\t' ||
          lookahead == ':') ADVANCE(158);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '\t' ||
          lookahead == ':') ADVANCE(158);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '\t' ||
          lookahead == ':') ADVANCE(158);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '\t' ||
          lookahead == ':') ADVANCE(158);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '\t' ||
          lookahead == ':') ADVANCE(158);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '\t' ||
          lookahead == ':') ADVANCE(158);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '\t' ||
          lookahead == ':') ADVANCE(158);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '\t' ||
          lookahead == ':') ADVANCE(158);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(90);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '\t' ||
          lookahead == ':') ADVANCE(158);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '\t' ||
          lookahead == ':') ADVANCE(158);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '\t' ||
          lookahead == ':') ADVANCE(158);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '\t' ||
          lookahead == ':') ADVANCE(158);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '\t' ||
          lookahead == ':') ADVANCE(158);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '\t' ||
          lookahead == ':') ADVANCE(158);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '\t' ||
          lookahead == ':') ADVANCE(158);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '\t' ||
          lookahead == ':') ADVANCE(158);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '\t' ||
          lookahead == ':') ADVANCE(158);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '\t' ||
          lookahead == ':') ADVANCE(158);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '\t' ||
          lookahead == ':') ADVANCE(158);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '\t' ||
          lookahead == ':') ADVANCE(158);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '\t' ||
          lookahead == ':') ADVANCE(158);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '\t' ||
          lookahead == ':') ADVANCE(158);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '\t' ||
          lookahead == ':') ADVANCE(158);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '\t' ||
          lookahead == ':') ADVANCE(158);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '\t' ||
          lookahead == ':') ADVANCE(158);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '\t' ||
          lookahead == ':') ADVANCE(158);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '\t' ||
          lookahead == ':') ADVANCE(158);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '\t' ||
          lookahead == ':') ADVANCE(158);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '\t' ||
          lookahead == ':') ADVANCE(158);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '\t' ||
          lookahead == ':') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == '\r' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(110);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(108);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(105);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(132);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(115);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(116);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(117);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(139);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(139);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(139);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(139);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(139);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(139);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(139);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(139);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(139);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(139);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(139);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(139);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(139);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(139);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(139);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(139);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(139);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(139);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(139);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(139);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(139);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(139);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(139);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(139);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(139);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(139);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(139);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(139);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(139);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(139);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(139);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(139);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(139);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(139);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_headertype);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__bodycontent);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__bodycontent);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__specails);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(148);
      if (!sym__atom_character_set_1(lookahead)) ADVANCE(149);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__atom);
      if (!sym__atom_character_set_1(lookahead)) ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_quotedstring_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(152);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_quotedstring_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_textblock_token1);
      if (lookahead == '\t') ADVANCE(153);
      if (lookahead == '\n') ADVANCE(153);
      if (lookahead == '\r') ADVANCE(61);
      if (lookahead == ' ') ADVANCE(61);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == ':') ADVANCE(158);
      if (lookahead == '>') ADVANCE(103);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(74);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(72);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(69);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(96);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(79);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(80);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(81);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(91);
      if (lookahead != 0) ADVANCE(103);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_textblock_token1);
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead != 0) ADVANCE(158);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_textblock_token1);
      if (lookahead == '\n') ADVANCE(155);
      if (lookahead == '\r') ADVANCE(155);
      if (lookahead == '-') ADVANCE(157);
      if (lookahead == '>') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(155);
      if (lookahead != 0) ADVANCE(158);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_textblock_token1);
      if (lookahead == ' ') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(158);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_textblock_token1);
      if (lookahead == '-') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(158);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_textblock_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym__textline_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym__textline_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__qoute);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_footersep);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 11},
  [2] = {.lex_state = 46, .external_lex_state = 2},
  [3] = {.lex_state = 46, .external_lex_state = 2},
  [4] = {.lex_state = 46, .external_lex_state = 1},
  [5] = {.lex_state = 46, .external_lex_state = 1},
  [6] = {.lex_state = 46, .external_lex_state = 1},
  [7] = {.lex_state = 46, .external_lex_state = 1},
  [8] = {.lex_state = 46, .external_lex_state = 2},
  [9] = {.lex_state = 46, .external_lex_state = 2},
  [10] = {.lex_state = 46, .external_lex_state = 2},
  [11] = {.lex_state = 46, .external_lex_state = 2},
  [12] = {.lex_state = 46, .external_lex_state = 2},
  [13] = {.lex_state = 46, .external_lex_state = 2},
  [14] = {.lex_state = 46, .external_lex_state = 2},
  [15] = {.lex_state = 46, .external_lex_state = 2},
  [16] = {.lex_state = 46, .external_lex_state = 2},
  [17] = {.lex_state = 49, .external_lex_state = 2},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 49},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 48, .external_lex_state = 1},
  [23] = {.lex_state = 48, .external_lex_state = 1},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 48, .external_lex_state = 1},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 48, .external_lex_state = 1},
  [30] = {.lex_state = 0, .external_lex_state = 1},
  [31] = {.lex_state = 48, .external_lex_state = 1},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 0, .external_lex_state = 1},
  [34] = {.lex_state = 48},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 48},
  [38] = {.lex_state = 0, .external_lex_state = 1},
  [39] = {.lex_state = 48, .external_lex_state = 1},
  [40] = {.lex_state = 48, .external_lex_state = 1},
  [41] = {.lex_state = 2, .external_lex_state = 1},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 47},
  [44] = {.lex_state = 49},
  [45] = {.lex_state = 48, .external_lex_state = 1},
  [46] = {.lex_state = 49},
  [47] = {.lex_state = 10},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 48, .external_lex_state = 1},
  [50] = {.lex_state = 48, .external_lex_state = 1},
  [51] = {.lex_state = 2, .external_lex_state = 1},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 48, .external_lex_state = 1},
  [54] = {.lex_state = 10},
  [55] = {.lex_state = 48, .external_lex_state = 1},
  [56] = {.lex_state = 48, .external_lex_state = 1},
  [57] = {.lex_state = 48, .external_lex_state = 1},
  [58] = {.lex_state = 48, .external_lex_state = 1},
  [59] = {.lex_state = 10},
  [60] = {.lex_state = 48},
  [61] = {.lex_state = 48, .external_lex_state = 1},
  [62] = {.lex_state = 10},
  [63] = {.lex_state = 47},
  [64] = {.lex_state = 47},
  [65] = {.lex_state = 48, .external_lex_state = 1},
  [66] = {.lex_state = 48},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 48, .external_lex_state = 1},
  [71] = {.lex_state = 10},
  [72] = {.lex_state = 48},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2, .external_lex_state = 1},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0, .external_lex_state = 1},
  [77] = {.lex_state = 47},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 48},
  [80] = {.lex_state = 151},
  [81] = {.lex_state = 48},
  [82] = {.lex_state = 48},
  [83] = {.lex_state = 48},
  [84] = {.lex_state = 48},
  [85] = {.lex_state = 48},
  [86] = {.lex_state = 0, .external_lex_state = 3},
  [87] = {.lex_state = 48},
  [88] = {.lex_state = 48},
  [89] = {.lex_state = 10},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 48},
  [93] = {.lex_state = 48},
  [94] = {.lex_state = 48},
  [95] = {.lex_state = 48},
  [96] = {.lex_state = 48},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0, .external_lex_state = 3},
  [99] = {.lex_state = 48},
  [100] = {.lex_state = 48},
  [101] = {.lex_state = 10},
  [102] = {.lex_state = 48},
  [103] = {.lex_state = 48},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 48},
  [108] = {.lex_state = 48},
  [109] = {.lex_state = 48},
  [110] = {.lex_state = 48},
  [111] = {.lex_state = 151},
  [112] = {.lex_state = 48},
  [113] = {.lex_state = 151},
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
    [sym__qoute] = ACTIONS(1),
    [sym_footersep] = ACTIONS(1),
    [sym__line_break] = ACTIONS(1),
    [sym__lwsp] = ACTIONS(1),
  },
  [1] = {
    [sym_message] = STATE(97),
    [sym_headers] = STATE(17),
    [sym_header] = STATE(3),
    [sym_addressheader] = STATE(3),
    [sym_dateheader] = STATE(3),
    [sym_subjectheader] = STATE(3),
    [sym_midheader] = STATE(3),
    [sym_addrkind] = STATE(99),
    [sym_to] = STATE(103),
    [sym_from] = STATE(103),
    [sym_cc] = STATE(103),
    [sym_bcc] = STATE(103),
    [sym_sender] = STATE(103),
    [sym_replyto] = STATE(103),
    [sym_date] = STATE(87),
    [sym_subject] = STATE(109),
    [sym_message_id] = STATE(108),
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
    STATE(87), 1,
      sym_date,
    STATE(99), 1,
      sym_addrkind,
    STATE(108), 1,
      sym_message_id,
    STATE(109), 1,
      sym_subject,
    ACTIONS(23), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(55), 3,
      aux_sym_textblock_token1,
      sym__qoute,
      sym_footersep,
    STATE(2), 6,
      sym_header,
      sym_addressheader,
      sym_dateheader,
      sym_subjectheader,
      sym_midheader,
      aux_sym_headers_repeat1,
    STATE(103), 6,
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
    STATE(87), 1,
      sym_date,
    STATE(99), 1,
      sym_addrkind,
    STATE(108), 1,
      sym_message_id,
    STATE(109), 1,
      sym_subject,
    ACTIONS(57), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(59), 3,
      aux_sym_textblock_token1,
      sym__qoute,
      sym_footersep,
    STATE(2), 6,
      sym_header,
      sym_addressheader,
      sym_dateheader,
      sym_subjectheader,
      sym_midheader,
      aux_sym_headers_repeat1,
    STATE(103), 6,
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
      aux_sym_textblock_token1,
      sym__qoute,
      sym_footersep,
  [159] = 3,
    ACTIONS(71), 1,
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
      aux_sym_textblock_token1,
      sym__qoute,
      sym_footersep,
  [182] = 3,
    ACTIONS(65), 1,
      sym__lwsp,
    ACTIONS(73), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(75), 13,
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
      aux_sym_textblock_token1,
      sym__qoute,
      sym_footersep,
  [205] = 3,
    ACTIONS(71), 1,
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
      aux_sym_textblock_token1,
      sym__qoute,
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
      aux_sym_textblock_token1,
      sym__qoute,
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
      aux_sym_textblock_token1,
      sym__qoute,
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
      aux_sym_textblock_token1,
      sym__qoute,
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
      aux_sym_textblock_token1,
      sym__qoute,
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
      aux_sym_textblock_token1,
      sym__qoute,
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
      aux_sym_textblock_token1,
      sym__qoute,
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
      aux_sym_textblock_token1,
      sym__qoute,
      sym_footersep,
  [368] = 2,
    ACTIONS(109), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(111), 13,
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
      aux_sym_textblock_token1,
      sym__qoute,
      sym_footersep,
  [388] = 2,
    ACTIONS(113), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(115), 13,
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
      aux_sym_textblock_token1,
      sym__qoute,
      sym_footersep,
  [408] = 10,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    ACTIONS(119), 1,
      aux_sym_textblock_token1,
    ACTIONS(121), 1,
      sym__qoute,
    ACTIONS(123), 1,
      sym_footersep,
    ACTIONS(125), 1,
      sym__line_break,
    STATE(46), 1,
      aux_sym_textblock_repeat1,
    STATE(75), 1,
      sym_emailbody,
    STATE(106), 1,
      sym_footer,
    STATE(34), 2,
      sym__qoute1,
      aux_sym_quote_repeat1,
    STATE(78), 2,
      sym_textblock,
      sym_quote,
  [441] = 10,
    ACTIONS(127), 1,
      sym__atom,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      sym_addresslist,
    STATE(25), 1,
      sym_internetaddress,
    STATE(27), 1,
      aux_sym_name_repeat1,
    STATE(58), 1,
      sym__addrspec,
    STATE(61), 1,
      sym_mailbox,
    STATE(79), 1,
      sym_name,
    STATE(100), 1,
      sym_local,
    STATE(24), 2,
      sym__word,
      sym_quotedstring,
  [473] = 9,
    ACTIONS(119), 1,
      aux_sym_textblock_token1,
    ACTIONS(121), 1,
      sym__qoute,
    ACTIONS(123), 1,
      sym_footersep,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
    STATE(46), 1,
      aux_sym_textblock_repeat1,
    STATE(67), 1,
      sym_emailbody,
    STATE(105), 1,
      sym_footer,
    STATE(34), 2,
      sym__qoute1,
      aux_sym_quote_repeat1,
    STATE(78), 2,
      sym_textblock,
      sym_quote,
  [503] = 9,
    ACTIONS(127), 1,
      sym__atom,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    STATE(27), 1,
      aux_sym_name_repeat1,
    STATE(57), 1,
      sym_internetaddress,
    STATE(58), 1,
      sym__addrspec,
    STATE(61), 1,
      sym_mailbox,
    STATE(79), 1,
      sym_name,
    STATE(100), 1,
      sym_local,
    STATE(24), 2,
      sym__word,
      sym_quotedstring,
  [532] = 9,
    ACTIONS(127), 1,
      sym__atom,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    STATE(27), 1,
      aux_sym_name_repeat1,
    STATE(56), 1,
      sym_internetaddress,
    STATE(58), 1,
      sym__addrspec,
    STATE(61), 1,
      sym_mailbox,
    STATE(79), 1,
      sym_name,
    STATE(100), 1,
      sym_local,
    STATE(24), 2,
      sym__word,
      sym_quotedstring,
  [561] = 6,
    ACTIONS(133), 1,
      anon_sym_COMMA,
    ACTIONS(135), 1,
      sym__line_break,
    ACTIONS(137), 1,
      sym__lwsp,
    STATE(23), 1,
      aux_sym_addresslist_repeat1,
    STATE(50), 1,
      aux_sym_seperator_repeat1,
    STATE(83), 1,
      sym_seperator,
  [580] = 6,
    ACTIONS(139), 1,
      anon_sym_COMMA,
    ACTIONS(142), 1,
      sym__line_break,
    ACTIONS(145), 1,
      sym__lwsp,
    STATE(23), 1,
      aux_sym_addresslist_repeat1,
    STATE(50), 1,
      aux_sym_seperator_repeat1,
    STATE(83), 1,
      sym_seperator,
  [599] = 5,
    ACTIONS(150), 1,
      anon_sym_AT,
    ACTIONS(152), 1,
      anon_sym_DOT,
    ACTIONS(154), 1,
      sym__atom,
    STATE(72), 1,
      aux_sym_domain_repeat1,
    ACTIONS(148), 2,
      anon_sym_LT,
      anon_sym_DQUOTE,
  [616] = 6,
    ACTIONS(133), 1,
      anon_sym_COMMA,
    ACTIONS(137), 1,
      sym__lwsp,
    ACTIONS(156), 1,
      sym__line_break,
    STATE(22), 1,
      aux_sym_addresslist_repeat1,
    STATE(50), 1,
      aux_sym_seperator_repeat1,
    STATE(83), 1,
      sym_seperator,
  [635] = 5,
    ACTIONS(158), 1,
      sym__atom,
    ACTIONS(160), 1,
      anon_sym_DQUOTE,
    STATE(89), 1,
      sym__addrspec,
    STATE(112), 1,
      sym_local,
    STATE(60), 2,
      sym__word,
      sym_quotedstring,
  [652] = 4,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    ACTIONS(162), 1,
      anon_sym_LT,
    ACTIONS(164), 1,
      sym__atom,
    STATE(28), 3,
      sym__word,
      sym_quotedstring,
      aux_sym_name_repeat1,
  [667] = 4,
    ACTIONS(166), 1,
      anon_sym_LT,
    ACTIONS(168), 1,
      sym__atom,
    ACTIONS(171), 1,
      anon_sym_DQUOTE,
    STATE(28), 3,
      sym__word,
      sym_quotedstring,
      aux_sym_name_repeat1,
  [682] = 3,
    ACTIONS(176), 1,
      anon_sym_DOT,
    STATE(29), 1,
      aux_sym_domain_repeat1,
    ACTIONS(174), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [694] = 5,
    ACTIONS(179), 1,
      sym__line_break,
    ACTIONS(182), 1,
      sym__lwsp,
    STATE(30), 1,
      aux_sym__fieldbody_repeat1,
    STATE(41), 1,
      aux_sym_seperator_repeat1,
    STATE(91), 1,
      sym_seperator,
  [710] = 3,
    ACTIONS(187), 1,
      anon_sym_DOT,
    STATE(29), 1,
      aux_sym_domain_repeat1,
    ACTIONS(185), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [722] = 2,
    ACTIONS(191), 1,
      sym__atom,
    ACTIONS(189), 4,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_DQUOTE,
  [732] = 5,
    ACTIONS(193), 1,
      sym__line_break,
    ACTIONS(195), 1,
      sym__lwsp,
    STATE(38), 1,
      aux_sym__fieldbody_repeat1,
    STATE(41), 1,
      aux_sym_seperator_repeat1,
    STATE(91), 1,
      sym_seperator,
  [748] = 3,
    ACTIONS(199), 1,
      sym__qoute,
    ACTIONS(197), 2,
      ts_builtin_sym_end,
      sym_footersep,
    STATE(37), 2,
      sym__qoute1,
      aux_sym_quote_repeat1,
  [760] = 4,
    ACTIONS(201), 1,
      sym__atom,
    ACTIONS(203), 1,
      anon_sym_DQUOTE,
    STATE(53), 1,
      sym_domain,
    STATE(39), 2,
      sym__word,
      sym_quotedstring,
  [774] = 4,
    ACTIONS(160), 1,
      anon_sym_DQUOTE,
    ACTIONS(205), 1,
      sym__atom,
    STATE(101), 1,
      sym_domain,
    STATE(62), 2,
      sym__word,
      sym_quotedstring,
  [788] = 3,
    ACTIONS(209), 1,
      sym__qoute,
    ACTIONS(207), 2,
      ts_builtin_sym_end,
      sym_footersep,
    STATE(37), 2,
      sym__qoute1,
      aux_sym_quote_repeat1,
  [800] = 5,
    ACTIONS(195), 1,
      sym__lwsp,
    ACTIONS(212), 1,
      sym__line_break,
    STATE(30), 1,
      aux_sym__fieldbody_repeat1,
    STATE(41), 1,
      aux_sym_seperator_repeat1,
    STATE(91), 1,
      sym_seperator,
  [816] = 3,
    ACTIONS(187), 1,
      anon_sym_DOT,
    STATE(31), 1,
      aux_sym_domain_repeat1,
    ACTIONS(214), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [828] = 1,
    ACTIONS(174), 4,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
      anon_sym_DOT,
  [835] = 4,
    ACTIONS(216), 1,
      sym__bodycontent,
    ACTIONS(218), 1,
      sym__line_break,
    ACTIONS(220), 1,
      sym__lwsp,
    STATE(51), 1,
      aux_sym_seperator_repeat1,
  [848] = 3,
    ACTIONS(203), 1,
      anon_sym_DQUOTE,
    ACTIONS(222), 1,
      sym__atom,
    STATE(40), 2,
      sym__word,
      sym_quotedstring,
  [859] = 4,
    ACTIONS(224), 1,
      ts_builtin_sym_end,
    ACTIONS(226), 1,
      aux_sym__textline_token1,
    STATE(63), 1,
      aux_sym_footertext_repeat1,
    STATE(104), 1,
      sym_footertext,
  [872] = 4,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
    ACTIONS(230), 1,
      aux_sym_textblock_token1,
    ACTIONS(233), 1,
      sym_footersep,
    STATE(44), 1,
      aux_sym_textblock_repeat1,
  [885] = 1,
    ACTIONS(191), 4,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
      anon_sym_DOT,
  [892] = 4,
    ACTIONS(235), 1,
      ts_builtin_sym_end,
    ACTIONS(237), 1,
      aux_sym_textblock_token1,
    ACTIONS(239), 1,
      sym_footersep,
    STATE(44), 1,
      aux_sym_textblock_repeat1,
  [905] = 3,
    ACTIONS(241), 1,
      anon_sym_DOT,
    STATE(47), 1,
      aux_sym_domain_repeat1,
    ACTIONS(174), 2,
      anon_sym_GT,
      anon_sym_AT,
  [916] = 3,
    ACTIONS(160), 1,
      anon_sym_DQUOTE,
    ACTIONS(244), 1,
      sym__atom,
    STATE(59), 2,
      sym__word,
      sym_quotedstring,
  [927] = 4,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    ACTIONS(248), 1,
      sym__line_break,
    ACTIONS(251), 1,
      sym__lwsp,
    STATE(49), 1,
      aux_sym_seperator_repeat1,
  [940] = 4,
    ACTIONS(216), 1,
      anon_sym_COMMA,
    ACTIONS(254), 1,
      sym__line_break,
    ACTIONS(256), 1,
      sym__lwsp,
    STATE(49), 1,
      aux_sym_seperator_repeat1,
  [953] = 4,
    ACTIONS(246), 1,
      sym__bodycontent,
    ACTIONS(258), 1,
      sym__line_break,
    ACTIONS(261), 1,
      sym__lwsp,
    STATE(51), 1,
      aux_sym_seperator_repeat1,
  [966] = 3,
    ACTIONS(264), 1,
      sym__bodycontent,
    STATE(10), 1,
      sym__fieldbody,
    STATE(11), 1,
      sym__subjectfield,
  [976] = 1,
    ACTIONS(266), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [982] = 1,
    ACTIONS(191), 3,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_DOT,
  [988] = 1,
    ACTIONS(268), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [994] = 1,
    ACTIONS(270), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [1000] = 1,
    ACTIONS(272), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [1006] = 1,
    ACTIONS(274), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [1012] = 1,
    ACTIONS(174), 3,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_DOT,
  [1018] = 3,
    ACTIONS(276), 1,
      anon_sym_AT,
    ACTIONS(278), 1,
      anon_sym_DOT,
    STATE(72), 1,
      aux_sym_domain_repeat1,
  [1028] = 1,
    ACTIONS(280), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [1034] = 3,
    ACTIONS(214), 1,
      anon_sym_GT,
    ACTIONS(278), 1,
      anon_sym_DOT,
    STATE(71), 1,
      aux_sym_domain_repeat1,
  [1044] = 3,
    ACTIONS(282), 1,
      ts_builtin_sym_end,
    ACTIONS(284), 1,
      aux_sym__textline_token1,
    STATE(64), 1,
      aux_sym_footertext_repeat1,
  [1054] = 3,
    ACTIONS(286), 1,
      ts_builtin_sym_end,
    ACTIONS(288), 1,
      aux_sym__textline_token1,
    STATE(64), 1,
      aux_sym_footertext_repeat1,
  [1064] = 1,
    ACTIONS(246), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [1070] = 1,
    ACTIONS(291), 3,
      ts_builtin_sym_end,
      sym__qoute,
      sym_footersep,
  [1076] = 3,
    ACTIONS(293), 1,
      ts_builtin_sym_end,
    ACTIONS(295), 1,
      sym_footersep,
    STATE(90), 1,
      sym_footer,
  [1086] = 3,
    ACTIONS(264), 1,
      sym__bodycontent,
    STATE(8), 1,
      sym__fieldbody,
    STATE(9), 1,
      sym_mid,
  [1096] = 3,
    ACTIONS(264), 1,
      sym__bodycontent,
    STATE(12), 1,
      sym__fieldbody,
    STATE(13), 1,
      sym__datefield,
  [1106] = 1,
    ACTIONS(297), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [1112] = 3,
    ACTIONS(185), 1,
      anon_sym_GT,
    ACTIONS(278), 1,
      anon_sym_DOT,
    STATE(47), 1,
      aux_sym_domain_repeat1,
  [1122] = 3,
    ACTIONS(278), 1,
      anon_sym_DOT,
    ACTIONS(299), 1,
      anon_sym_AT,
    STATE(47), 1,
      aux_sym_domain_repeat1,
  [1132] = 3,
    ACTIONS(264), 1,
      sym__bodycontent,
    STATE(15), 1,
      sym__fieldbody,
    STATE(16), 1,
      sym_headerentry,
  [1142] = 1,
    ACTIONS(246), 3,
      sym__line_break,
      sym__lwsp,
      sym__bodycontent,
  [1148] = 3,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
    ACTIONS(295), 1,
      sym_footersep,
    STATE(105), 1,
      sym_footer,
  [1158] = 1,
    ACTIONS(301), 2,
      sym__line_break,
      sym__lwsp,
  [1163] = 2,
    ACTIONS(303), 1,
      aux_sym__textline_token1,
    STATE(66), 1,
      sym__qtext,
  [1170] = 1,
    ACTIONS(305), 2,
      ts_builtin_sym_end,
      sym_footersep,
  [1175] = 2,
    ACTIONS(307), 1,
      anon_sym_LT,
    STATE(70), 1,
      sym__routeaddr,
  [1182] = 1,
    ACTIONS(309), 1,
      aux_sym_quotedstring_token1,
  [1186] = 1,
    ACTIONS(311), 1,
      anon_sym_COLON,
  [1190] = 1,
    ACTIONS(313), 1,
      anon_sym_COLON,
  [1194] = 1,
    ACTIONS(315), 1,
      anon_sym_COMMA,
  [1198] = 1,
    ACTIONS(317), 1,
      anon_sym_COLON,
  [1202] = 1,
    ACTIONS(319), 1,
      anon_sym_COLON,
  [1206] = 1,
    ACTIONS(71), 1,
      sym__lwsp,
  [1210] = 1,
    ACTIONS(321), 1,
      anon_sym_COLON,
  [1214] = 1,
    ACTIONS(323), 1,
      anon_sym_DQUOTE,
  [1218] = 1,
    ACTIONS(325), 1,
      anon_sym_GT,
  [1222] = 1,
    ACTIONS(327), 1,
      ts_builtin_sym_end,
  [1226] = 1,
    ACTIONS(329), 1,
      sym__bodycontent,
  [1230] = 1,
    ACTIONS(331), 1,
      anon_sym_COLON,
  [1234] = 1,
    ACTIONS(333), 1,
      anon_sym_COLON,
  [1238] = 1,
    ACTIONS(335), 1,
      anon_sym_COLON,
  [1242] = 1,
    ACTIONS(337), 1,
      anon_sym_COLON,
  [1246] = 1,
    ACTIONS(339), 1,
      anon_sym_COLON,
  [1250] = 1,
    ACTIONS(341), 1,
      ts_builtin_sym_end,
  [1254] = 1,
    ACTIONS(65), 1,
      sym__lwsp,
  [1258] = 1,
    ACTIONS(343), 1,
      anon_sym_COLON,
  [1262] = 1,
    ACTIONS(345), 1,
      anon_sym_AT,
  [1266] = 1,
    ACTIONS(266), 1,
      anon_sym_GT,
  [1270] = 1,
    ACTIONS(347), 1,
      anon_sym_COLON,
  [1274] = 1,
    ACTIONS(349), 1,
      anon_sym_COLON,
  [1278] = 1,
    ACTIONS(351), 1,
      ts_builtin_sym_end,
  [1282] = 1,
    ACTIONS(293), 1,
      ts_builtin_sym_end,
  [1286] = 1,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
  [1290] = 1,
    ACTIONS(353), 1,
      anon_sym_DQUOTE,
  [1294] = 1,
    ACTIONS(355), 1,
      anon_sym_COLON,
  [1298] = 1,
    ACTIONS(357), 1,
      anon_sym_COLON,
  [1302] = 1,
    ACTIONS(359), 1,
      anon_sym_DQUOTE,
  [1306] = 1,
    ACTIONS(361), 1,
      aux_sym_quotedstring_token1,
  [1310] = 1,
    ACTIONS(363), 1,
      anon_sym_AT,
  [1314] = 1,
    ACTIONS(365), 1,
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
  [SMALL_STATE(16)] = 388,
  [SMALL_STATE(17)] = 408,
  [SMALL_STATE(18)] = 441,
  [SMALL_STATE(19)] = 473,
  [SMALL_STATE(20)] = 503,
  [SMALL_STATE(21)] = 532,
  [SMALL_STATE(22)] = 561,
  [SMALL_STATE(23)] = 580,
  [SMALL_STATE(24)] = 599,
  [SMALL_STATE(25)] = 616,
  [SMALL_STATE(26)] = 635,
  [SMALL_STATE(27)] = 652,
  [SMALL_STATE(28)] = 667,
  [SMALL_STATE(29)] = 682,
  [SMALL_STATE(30)] = 694,
  [SMALL_STATE(31)] = 710,
  [SMALL_STATE(32)] = 722,
  [SMALL_STATE(33)] = 732,
  [SMALL_STATE(34)] = 748,
  [SMALL_STATE(35)] = 760,
  [SMALL_STATE(36)] = 774,
  [SMALL_STATE(37)] = 788,
  [SMALL_STATE(38)] = 800,
  [SMALL_STATE(39)] = 816,
  [SMALL_STATE(40)] = 828,
  [SMALL_STATE(41)] = 835,
  [SMALL_STATE(42)] = 848,
  [SMALL_STATE(43)] = 859,
  [SMALL_STATE(44)] = 872,
  [SMALL_STATE(45)] = 885,
  [SMALL_STATE(46)] = 892,
  [SMALL_STATE(47)] = 905,
  [SMALL_STATE(48)] = 916,
  [SMALL_STATE(49)] = 927,
  [SMALL_STATE(50)] = 940,
  [SMALL_STATE(51)] = 953,
  [SMALL_STATE(52)] = 966,
  [SMALL_STATE(53)] = 976,
  [SMALL_STATE(54)] = 982,
  [SMALL_STATE(55)] = 988,
  [SMALL_STATE(56)] = 994,
  [SMALL_STATE(57)] = 1000,
  [SMALL_STATE(58)] = 1006,
  [SMALL_STATE(59)] = 1012,
  [SMALL_STATE(60)] = 1018,
  [SMALL_STATE(61)] = 1028,
  [SMALL_STATE(62)] = 1034,
  [SMALL_STATE(63)] = 1044,
  [SMALL_STATE(64)] = 1054,
  [SMALL_STATE(65)] = 1064,
  [SMALL_STATE(66)] = 1070,
  [SMALL_STATE(67)] = 1076,
  [SMALL_STATE(68)] = 1086,
  [SMALL_STATE(69)] = 1096,
  [SMALL_STATE(70)] = 1106,
  [SMALL_STATE(71)] = 1112,
  [SMALL_STATE(72)] = 1122,
  [SMALL_STATE(73)] = 1132,
  [SMALL_STATE(74)] = 1142,
  [SMALL_STATE(75)] = 1148,
  [SMALL_STATE(76)] = 1158,
  [SMALL_STATE(77)] = 1163,
  [SMALL_STATE(78)] = 1170,
  [SMALL_STATE(79)] = 1175,
  [SMALL_STATE(80)] = 1182,
  [SMALL_STATE(81)] = 1186,
  [SMALL_STATE(82)] = 1190,
  [SMALL_STATE(83)] = 1194,
  [SMALL_STATE(84)] = 1198,
  [SMALL_STATE(85)] = 1202,
  [SMALL_STATE(86)] = 1206,
  [SMALL_STATE(87)] = 1210,
  [SMALL_STATE(88)] = 1214,
  [SMALL_STATE(89)] = 1218,
  [SMALL_STATE(90)] = 1222,
  [SMALL_STATE(91)] = 1226,
  [SMALL_STATE(92)] = 1230,
  [SMALL_STATE(93)] = 1234,
  [SMALL_STATE(94)] = 1238,
  [SMALL_STATE(95)] = 1242,
  [SMALL_STATE(96)] = 1246,
  [SMALL_STATE(97)] = 1250,
  [SMALL_STATE(98)] = 1254,
  [SMALL_STATE(99)] = 1258,
  [SMALL_STATE(100)] = 1262,
  [SMALL_STATE(101)] = 1266,
  [SMALL_STATE(102)] = 1270,
  [SMALL_STATE(103)] = 1274,
  [SMALL_STATE(104)] = 1278,
  [SMALL_STATE(105)] = 1282,
  [SMALL_STATE(106)] = 1286,
  [SMALL_STATE(107)] = 1290,
  [SMALL_STATE(108)] = 1294,
  [SMALL_STATE(109)] = 1298,
  [SMALL_STATE(110)] = 1302,
  [SMALL_STATE(111)] = 1306,
  [SMALL_STATE(112)] = 1310,
  [SMALL_STATE(113)] = 1314,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(102),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(85),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(84),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(82),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(81),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(92),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(93),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(94),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(95),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(96),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headers, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headers, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addresslist, 3),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addresslist, 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fieldbody, 3),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fieldbody, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addresslist, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addresslist, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fieldbody, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fieldbody, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mid, 1, .production_id = 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mid, 1, .production_id = 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_midheader, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_midheader, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__subjectfield, 1, .production_id = 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__subjectfield, 1, .production_id = 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subjectheader, 3),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subjectheader, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__datefield, 1, .production_id = 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__datefield, 1, .production_id = 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dateheader, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dateheader, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addressheader, 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addressheader, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headerentry, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headerentry, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_addresslist_repeat1, 2), SHIFT_REPEAT(21),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_addresslist_repeat1, 2), SHIFT_REPEAT(98),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_addresslist_repeat1, 2), SHIFT_REPEAT(50),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 1),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(28),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_name_repeat1, 2), SHIFT_REPEAT(80),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_domain_repeat1, 2),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_domain_repeat1, 2), SHIFT_REPEAT(42),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__fieldbody_repeat1, 2), SHIFT_REPEAT(86),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__fieldbody_repeat1, 2), SHIFT_REPEAT(41),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quotedstring, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quotedstring, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quote_repeat1, 2), SHIFT_REPEAT(77),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seperator, 1),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_textblock_repeat1, 2),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_textblock_repeat1, 2), SHIFT_REPEAT(44),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_textblock_repeat1, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_textblock, 1),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_textblock, 1),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_domain_repeat1, 2), SHIFT_REPEAT(48),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_seperator_repeat1, 2),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seperator_repeat1, 2), SHIFT_REPEAT(98),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seperator_repeat1, 2), SHIFT_REPEAT(49),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seperator_repeat1, 2), SHIFT_REPEAT(86),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seperator_repeat1, 2), SHIFT_REPEAT(51),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__addrspec, 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__routeaddr, 3),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_addresslist_repeat1, 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_addresslist_repeat1, 3),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailbox, 1),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local, 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_internetaddress, 1),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footertext, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_footertext_repeat1, 2),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_footertext_repeat1, 2), SHIFT_REPEAT(64),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__qoute1, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 3),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailbox, 2),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__fieldbody_repeat1, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_emailbody, 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sender, 1),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bcc, 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cc, 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 1),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 4),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replyto, 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_id, 1),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [341] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_to, 1),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addrkind, 1),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 2),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
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
