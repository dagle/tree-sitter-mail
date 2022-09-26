#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 109
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 75
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_specialFrom_token1 = 1,
  anon_sym_COLON = 2,
  aux_sym_dateheader_token1 = 3,
  aux_sym_subjectheader_token1 = 4,
  aux_sym_midheader_token1 = 5,
  aux_sym_to_token1 = 6,
  aux_sym_cc_token1 = 7,
  aux_sym_bcc_token1 = 8,
  aux_sym_sender_token1 = 9,
  aux_sym_replyto_token1 = 10,
  aux_sym_mid_token1 = 11,
  sym_fieldname = 12,
  sym__bodycontent = 13,
  anon_sym_COMMA = 14,
  anon_sym_LT = 15,
  anon_sym_GT = 16,
  anon_sym_AT = 17,
  anon_sym_DOT = 18,
  sym__specails = 19,
  sym__atom = 20,
  anon_sym_DQUOTE = 21,
  aux_sym_quotedstring_token1 = 22,
  aux_sym__mimeline_token1 = 23,
  anon_sym_DASH_DASH_LF = 24,
  anon_sym_diff_DASH_DASH = 25,
  anon_sym_git = 26,
  anon_sym_cc = 27,
  anon_sym_combined = 28,
  anon_sym_index = 29,
  aux_sym_index_token1 = 30,
  anon_sym_DASH_DASH_DASH = 31,
  anon_sym_PLUS_PLUS_PLUS = 32,
  sym__line_break = 33,
  sym__lwsp = 34,
  sym_message = 35,
  sym_headers = 36,
  sym_headerextra = 37,
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
  sym_mid = 49,
  sym_subject = 50,
  sym_date = 51,
  sym_fieldbody = 52,
  sym_seperator = 53,
  sym_addresslist = 54,
  sym_ia = 55,
  sym_mailbox = 56,
  sym_routeaddr = 57,
  sym_addrspec = 58,
  sym_domain = 59,
  sym_local = 60,
  sym_phrase = 61,
  sym__word = 62,
  sym_quotedstring = 63,
  sym_emailbody = 64,
  sym__mimeline = 65,
  sym_footer = 66,
  aux_sym_headers_repeat1 = 67,
  aux_sym_fieldbody_repeat1 = 68,
  aux_sym_seperator_repeat1 = 69,
  aux_sym_addresslist_repeat1 = 70,
  aux_sym_domain_repeat1 = 71,
  aux_sym_phrase_repeat1 = 72,
  aux_sym_emailbody_repeat1 = 73,
  aux_sym_footer_repeat1 = 74,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_specialFrom_token1] = "from",
  [anon_sym_COLON] = ":",
  [aux_sym_dateheader_token1] = "date",
  [aux_sym_subjectheader_token1] = "subject",
  [aux_sym_midheader_token1] = "message-id",
  [aux_sym_to_token1] = "to",
  [aux_sym_cc_token1] = "cc",
  [aux_sym_bcc_token1] = "bcc",
  [aux_sym_sender_token1] = "sender",
  [aux_sym_replyto_token1] = "reply-to",
  [aux_sym_mid_token1] = "mid_token1",
  [sym_fieldname] = "fieldname",
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
  [aux_sym__mimeline_token1] = "_mimeline_token1",
  [anon_sym_DASH_DASH_LF] = "-- \n",
  [anon_sym_diff_DASH_DASH] = "diff --",
  [anon_sym_git] = "git",
  [anon_sym_cc] = "cc",
  [anon_sym_combined] = "combined",
  [anon_sym_index] = "index",
  [aux_sym_index_token1] = "index_token1",
  [anon_sym_DASH_DASH_DASH] = "---",
  [anon_sym_PLUS_PLUS_PLUS] = "+++",
  [sym__line_break] = "_line_break",
  [sym__lwsp] = "_lwsp",
  [sym_message] = "message",
  [sym_headers] = "headers",
  [sym_headerextra] = "headerextra",
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
  [sym_mid] = "mid",
  [sym_subject] = "subject",
  [sym_date] = "date",
  [sym_fieldbody] = "fieldbody",
  [sym_seperator] = "seperator",
  [sym_addresslist] = "addresslist",
  [sym_ia] = "ia",
  [sym_mailbox] = "mailbox",
  [sym_routeaddr] = "routeaddr",
  [sym_addrspec] = "addrspec",
  [sym_domain] = "domain",
  [sym_local] = "local",
  [sym_phrase] = "phrase",
  [sym__word] = "_word",
  [sym_quotedstring] = "quotedstring",
  [sym_emailbody] = "emailbody",
  [sym__mimeline] = "_mimeline",
  [sym_footer] = "footer",
  [aux_sym_headers_repeat1] = "headers_repeat1",
  [aux_sym_fieldbody_repeat1] = "fieldbody_repeat1",
  [aux_sym_seperator_repeat1] = "seperator_repeat1",
  [aux_sym_addresslist_repeat1] = "addresslist_repeat1",
  [aux_sym_domain_repeat1] = "domain_repeat1",
  [aux_sym_phrase_repeat1] = "phrase_repeat1",
  [aux_sym_emailbody_repeat1] = "emailbody_repeat1",
  [aux_sym_footer_repeat1] = "footer_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_specialFrom_token1] = aux_sym_specialFrom_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_dateheader_token1] = aux_sym_dateheader_token1,
  [aux_sym_subjectheader_token1] = aux_sym_subjectheader_token1,
  [aux_sym_midheader_token1] = aux_sym_midheader_token1,
  [aux_sym_to_token1] = aux_sym_to_token1,
  [aux_sym_cc_token1] = anon_sym_cc,
  [aux_sym_bcc_token1] = aux_sym_bcc_token1,
  [aux_sym_sender_token1] = aux_sym_sender_token1,
  [aux_sym_replyto_token1] = aux_sym_replyto_token1,
  [aux_sym_mid_token1] = aux_sym_mid_token1,
  [sym_fieldname] = sym_fieldname,
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
  [aux_sym__mimeline_token1] = aux_sym__mimeline_token1,
  [anon_sym_DASH_DASH_LF] = anon_sym_DASH_DASH_LF,
  [anon_sym_diff_DASH_DASH] = anon_sym_diff_DASH_DASH,
  [anon_sym_git] = anon_sym_git,
  [anon_sym_cc] = anon_sym_cc,
  [anon_sym_combined] = anon_sym_combined,
  [anon_sym_index] = anon_sym_index,
  [aux_sym_index_token1] = aux_sym_index_token1,
  [anon_sym_DASH_DASH_DASH] = anon_sym_DASH_DASH_DASH,
  [anon_sym_PLUS_PLUS_PLUS] = anon_sym_PLUS_PLUS_PLUS,
  [sym__line_break] = sym__line_break,
  [sym__lwsp] = sym__lwsp,
  [sym_message] = sym_message,
  [sym_headers] = sym_headers,
  [sym_headerextra] = sym_headerextra,
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
  [sym_mid] = sym_mid,
  [sym_subject] = sym_subject,
  [sym_date] = sym_date,
  [sym_fieldbody] = sym_fieldbody,
  [sym_seperator] = sym_seperator,
  [sym_addresslist] = sym_addresslist,
  [sym_ia] = sym_ia,
  [sym_mailbox] = sym_mailbox,
  [sym_routeaddr] = sym_routeaddr,
  [sym_addrspec] = sym_addrspec,
  [sym_domain] = sym_domain,
  [sym_local] = sym_local,
  [sym_phrase] = sym_phrase,
  [sym__word] = sym__word,
  [sym_quotedstring] = sym_quotedstring,
  [sym_emailbody] = sym_emailbody,
  [sym__mimeline] = sym__mimeline,
  [sym_footer] = sym_footer,
  [aux_sym_headers_repeat1] = aux_sym_headers_repeat1,
  [aux_sym_fieldbody_repeat1] = aux_sym_fieldbody_repeat1,
  [aux_sym_seperator_repeat1] = aux_sym_seperator_repeat1,
  [aux_sym_addresslist_repeat1] = aux_sym_addresslist_repeat1,
  [aux_sym_domain_repeat1] = aux_sym_domain_repeat1,
  [aux_sym_phrase_repeat1] = aux_sym_phrase_repeat1,
  [aux_sym_emailbody_repeat1] = aux_sym_emailbody_repeat1,
  [aux_sym_footer_repeat1] = aux_sym_footer_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_specialFrom_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_dateheader_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_subjectheader_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_midheader_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_to_token1] = {
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
  [aux_sym_mid_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_fieldname] = {
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
  [aux_sym__mimeline_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH_DASH_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_diff_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_git] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_combined] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_index] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_index_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS_PLUS] = {
    .visible = true,
    .named = false,
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
  [sym_headerextra] = {
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
  [sym_mid] = {
    .visible = true,
    .named = true,
  },
  [sym_subject] = {
    .visible = true,
    .named = true,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym_fieldbody] = {
    .visible = true,
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
  [sym_ia] = {
    .visible = true,
    .named = true,
  },
  [sym_mailbox] = {
    .visible = true,
    .named = true,
  },
  [sym_routeaddr] = {
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
  [sym__mimeline] = {
    .visible = false,
    .named = true,
  },
  [sym_footer] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_headers_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fieldbody_repeat1] = {
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
  [aux_sym_phrase_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_emailbody_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_footer_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
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
  [38] = 33,
  [39] = 39,
  [40] = 40,
  [41] = 39,
  [42] = 40,
  [43] = 31,
  [44] = 44,
  [45] = 35,
  [46] = 46,
  [47] = 44,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 35,
  [52] = 52,
  [53] = 30,
  [54] = 54,
  [55] = 32,
  [56] = 56,
  [57] = 57,
  [58] = 56,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 46,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
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
  [93] = 82,
  [94] = 94,
  [95] = 95,
  [96] = 54,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 76,
  [103] = 103,
  [104] = 104,
  [105] = 76,
  [106] = 88,
  [107] = 78,
  [108] = 88,
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
      if (eof) ADVANCE(70);
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '+') ADVANCE(10);
      if (lookahead == ',') ADVANCE(127);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == '>') ADVANCE(129);
      if (lookahead == '@') ADVANCE(130);
      if (lookahead == 'B') ADVANCE(38);
      if (lookahead == 'C') ADVANCE(36);
      if (lookahead == 'D') ADVANCE(33);
      if (lookahead == 'b') ADVANCE(149);
      if (lookahead == 'c') ADVANCE(16);
      if (lookahead == 'd') ADVANCE(24);
      if (lookahead == 'g') ADVANCE(25);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(60);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(42);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(43);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(44);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(55);
      if (lookahead == ';' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(138);
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == ':') ADVANCE(143);
      if (lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(95);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(93);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(90);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(117);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(100);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(101);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(102);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(112);
      if (lookahead != 0) ADVANCE(124);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(144);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '-') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '^') ADVANCE(126);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '-') ADVANCE(151);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == ',') ADVANCE(127);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == '>') ADVANCE(129);
      if (lookahead == '@') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(135);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == '@') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(133);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(134);
      END_STATE();
    case 9:
      if (lookahead == '+') ADVANCE(152);
      END_STATE();
    case 10:
      if (lookahead == '+') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(5);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(145);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(50);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(65);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(12);
      END_STATE();
    case 16:
      if (lookahead == 'C') ADVANCE(77);
      if (lookahead == 'c') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 17:
      if (lookahead == 'b') ADVANCE(26);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(147);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == 'f') ADVANCE(6);
      END_STATE();
    case 23:
      if (lookahead == 'f') ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(23);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 27:
      if (lookahead == 'm') ADVANCE(17);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 31:
      if (lookahead == 'x') ADVANCE(148);
      END_STATE();
    case 32:
      if (lookahead == '\r' ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(95);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(93);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(90);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(117);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(100);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(101);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(102);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(32)
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(124);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 35:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(51);
      END_STATE();
    case 36:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(77);
      END_STATE();
    case 37:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(78);
      END_STATE();
    case 38:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 39:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 40:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(75);
      END_STATE();
    case 41:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(46);
      END_STATE();
    case 42:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 43:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 44:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(54);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 45:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 46:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 47:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 48:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 49:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(48);
      END_STATE();
    case 50:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 51:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(47);
      END_STATE();
    case 52:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 53:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(71);
      END_STATE();
    case 54:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 55:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 56:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 57:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 58:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(52);
      END_STATE();
    case 59:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 60:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 61:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(34);
      END_STATE();
    case 62:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(61);
      END_STATE();
    case 63:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(74);
      END_STATE();
    case 64:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(45);
      END_STATE();
    case 65:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(57);
      END_STATE();
    case 66:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(14);
      END_STATE();
    case 67:
      if (eof) ADVANCE(70);
      if (lookahead == '\t') ADVANCE(138);
      if (lookahead == '\n') SKIP(67)
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == ':') ADVANCE(143);
      if (lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(95);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(93);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(90);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(117);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(100);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(101);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(102);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(112);
      if (lookahead != 0) ADVANCE(124);
      END_STATE();
    case 68:
      if (eof) ADVANCE(70);
      if (lookahead == '\n') SKIP(68)
      if (lookahead == '-') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 69:
      if (eof) ADVANCE(70);
      if (lookahead == '\n') SKIP(69)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_specialFrom_token1);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_dateheader_token1);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_subjectheader_token1);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_midheader_token1);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_to_token1);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_cc_token1);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_bcc_token1);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_sender_token1);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_replyto_token1);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_mid_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_mid_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == '\t') ADVANCE(138);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(95);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(93);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(90);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(117);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(100);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(101);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(102);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(124);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == '\n') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ':') ADVANCE(124);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == ' ') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(124);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(124);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == '-') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(124);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(124);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == '\r' ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(95);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(93);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(90);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(117);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(100);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(101);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(102);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(124);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(124);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(124);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(124);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(124);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(124);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(124);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(124);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(124);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(124);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(124);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(124);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(124);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(124);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(124);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(124);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(124);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(124);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(124);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(124);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(124);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(124);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(124);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(124);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(124);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(124);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(124);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(124);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(124);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(124);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(124);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(124);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(124);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(124);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__bodycontent);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != '^') ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__bodycontent);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != '^') ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__specails);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(133);
      if (!sym__atom_character_set_1(lookahead)) ADVANCE(134);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__atom);
      if (!sym__atom_character_set_1(lookahead)) ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_quotedstring_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_quotedstring_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym__mimeline_token1);
      if (lookahead == '\t') ADVANCE(138);
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == ':') ADVANCE(143);
      if (lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(95);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(93);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(90);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(117);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(100);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(101);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(102);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(112);
      if (lookahead != 0) ADVANCE(124);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym__mimeline_token1);
      if (lookahead == '\n') ADVANCE(144);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym__mimeline_token1);
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '-') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym__mimeline_token1);
      if (lookahead == ' ') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(143);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym__mimeline_token1);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(143);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym__mimeline_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_LF);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_diff_DASH_DASH);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_git);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_combined);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_index);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_index_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(150);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_index_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 32},
  [2] = {.lex_state = 67, .external_lex_state = 2},
  [3] = {.lex_state = 67, .external_lex_state = 2},
  [4] = {.lex_state = 67, .external_lex_state = 1},
  [5] = {.lex_state = 67, .external_lex_state = 1},
  [6] = {.lex_state = 67, .external_lex_state = 1},
  [7] = {.lex_state = 67, .external_lex_state = 1},
  [8] = {.lex_state = 67, .external_lex_state = 2},
  [9] = {.lex_state = 67, .external_lex_state = 2},
  [10] = {.lex_state = 67, .external_lex_state = 2},
  [11] = {.lex_state = 67, .external_lex_state = 2},
  [12] = {.lex_state = 67, .external_lex_state = 2},
  [13] = {.lex_state = 67, .external_lex_state = 2},
  [14] = {.lex_state = 67, .external_lex_state = 2},
  [15] = {.lex_state = 67, .external_lex_state = 2},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 68, .external_lex_state = 2},
  [20] = {.lex_state = 68},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 7, .external_lex_state = 1},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 7, .external_lex_state = 1},
  [25] = {.lex_state = 7, .external_lex_state = 1},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 68},
  [29] = {.lex_state = 0, .external_lex_state = 1},
  [30] = {.lex_state = 7, .external_lex_state = 1},
  [31] = {.lex_state = 7, .external_lex_state = 1},
  [32] = {.lex_state = 7, .external_lex_state = 1},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 68},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 0, .external_lex_state = 1},
  [37] = {.lex_state = 0, .external_lex_state = 1},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 7, .external_lex_state = 1},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 4, .external_lex_state = 1},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 7, .external_lex_state = 1},
  [45] = {.lex_state = 7, .external_lex_state = 1},
  [46] = {.lex_state = 7, .external_lex_state = 1},
  [47] = {.lex_state = 4, .external_lex_state = 1},
  [48] = {.lex_state = 69},
  [49] = {.lex_state = 7, .external_lex_state = 1},
  [50] = {.lex_state = 7, .external_lex_state = 1},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 7, .external_lex_state = 1},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 4, .external_lex_state = 1},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 7, .external_lex_state = 1},
  [59] = {.lex_state = 69},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 7, .external_lex_state = 1},
  [62] = {.lex_state = 69},
  [63] = {.lex_state = 7, .external_lex_state = 1},
  [64] = {.lex_state = 7, .external_lex_state = 1},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 68},
  [67] = {.lex_state = 7, .external_lex_state = 1},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 69},
  [71] = {.lex_state = 69},
  [72] = {.lex_state = 0, .external_lex_state = 1},
  [73] = {.lex_state = 69},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 7},
  [77] = {.lex_state = 0, .external_lex_state = 2},
  [78] = {.lex_state = 7},
  [79] = {.lex_state = 0, .external_lex_state = 2},
  [80] = {.lex_state = 7},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0, .external_lex_state = 3},
  [83] = {.lex_state = 0, .external_lex_state = 2},
  [84] = {.lex_state = 7},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 7},
  [88] = {.lex_state = 136},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 0, .external_lex_state = 2},
  [93] = {.lex_state = 0, .external_lex_state = 3},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 7},
  [98] = {.lex_state = 7},
  [99] = {.lex_state = 7},
  [100] = {.lex_state = 7},
  [101] = {.lex_state = 7},
  [102] = {.lex_state = 7},
  [103] = {.lex_state = 7},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 7},
  [106] = {.lex_state = 136},
  [107] = {.lex_state = 7},
  [108] = {.lex_state = 136},
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
    [aux_sym_specialFrom_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_dateheader_token1] = ACTIONS(1),
    [aux_sym_subjectheader_token1] = ACTIONS(1),
    [aux_sym_midheader_token1] = ACTIONS(1),
    [aux_sym_to_token1] = ACTIONS(1),
    [aux_sym_cc_token1] = ACTIONS(1),
    [aux_sym_bcc_token1] = ACTIONS(1),
    [aux_sym_sender_token1] = ACTIONS(1),
    [aux_sym_replyto_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym__specails] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DASH_DASH_LF] = ACTIONS(1),
    [anon_sym_diff_DASH_DASH] = ACTIONS(1),
    [anon_sym_git] = ACTIONS(1),
    [anon_sym_cc] = ACTIONS(1),
    [anon_sym_combined] = ACTIONS(1),
    [anon_sym_index] = ACTIONS(1),
    [aux_sym_index_token1] = ACTIONS(1),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(1),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(1),
    [sym__line_break] = ACTIONS(1),
    [sym__lwsp] = ACTIONS(1),
  },
  [1] = {
    [sym_message] = STATE(104),
    [sym_headers] = STATE(19),
    [sym_headerextra] = STATE(2),
    [sym_addressheader] = STATE(2),
    [sym_dateheader] = STATE(2),
    [sym_subjectheader] = STATE(2),
    [sym_midheader] = STATE(2),
    [sym_addrkind] = STATE(103),
    [sym_to] = STATE(99),
    [sym_from] = STATE(99),
    [sym_cc] = STATE(99),
    [sym_bcc] = STATE(99),
    [sym_sender] = STATE(99),
    [sym_replyto] = STATE(99),
    [aux_sym_headers_repeat1] = STATE(2),
    [aux_sym_specialFrom_token1] = ACTIONS(3),
    [aux_sym_dateheader_token1] = ACTIONS(5),
    [aux_sym_subjectheader_token1] = ACTIONS(7),
    [aux_sym_midheader_token1] = ACTIONS(9),
    [aux_sym_to_token1] = ACTIONS(11),
    [aux_sym_cc_token1] = ACTIONS(13),
    [aux_sym_bcc_token1] = ACTIONS(15),
    [aux_sym_sender_token1] = ACTIONS(17),
    [aux_sym_replyto_token1] = ACTIONS(19),
    [sym_fieldname] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(3), 1,
      aux_sym_specialFrom_token1,
    ACTIONS(5), 1,
      aux_sym_dateheader_token1,
    ACTIONS(7), 1,
      aux_sym_subjectheader_token1,
    ACTIONS(9), 1,
      aux_sym_midheader_token1,
    ACTIONS(11), 1,
      aux_sym_to_token1,
    ACTIONS(13), 1,
      aux_sym_cc_token1,
    ACTIONS(15), 1,
      aux_sym_bcc_token1,
    ACTIONS(17), 1,
      aux_sym_sender_token1,
    ACTIONS(19), 1,
      aux_sym_replyto_token1,
    ACTIONS(21), 1,
      sym_fieldname,
    STATE(103), 1,
      sym_addrkind,
    ACTIONS(23), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(25), 2,
      aux_sym__mimeline_token1,
      anon_sym_DASH_DASH_LF,
    STATE(3), 6,
      sym_headerextra,
      sym_addressheader,
      sym_dateheader,
      sym_subjectheader,
      sym_midheader,
      aux_sym_headers_repeat1,
    STATE(99), 6,
      sym_to,
      sym_from,
      sym_cc,
      sym_bcc,
      sym_sender,
      sym_replyto,
  [58] = 15,
    ACTIONS(29), 1,
      aux_sym_specialFrom_token1,
    ACTIONS(32), 1,
      aux_sym_dateheader_token1,
    ACTIONS(35), 1,
      aux_sym_subjectheader_token1,
    ACTIONS(38), 1,
      aux_sym_midheader_token1,
    ACTIONS(41), 1,
      aux_sym_to_token1,
    ACTIONS(44), 1,
      aux_sym_cc_token1,
    ACTIONS(47), 1,
      aux_sym_bcc_token1,
    ACTIONS(50), 1,
      aux_sym_sender_token1,
    ACTIONS(53), 1,
      aux_sym_replyto_token1,
    ACTIONS(56), 1,
      sym_fieldname,
    STATE(103), 1,
      sym_addrkind,
    ACTIONS(27), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(59), 2,
      aux_sym__mimeline_token1,
      anon_sym_DASH_DASH_LF,
    STATE(3), 6,
      sym_headerextra,
      sym_addressheader,
      sym_dateheader,
      sym_subjectheader,
      sym_midheader,
      aux_sym_headers_repeat1,
    STATE(99), 6,
      sym_to,
      sym_from,
      sym_cc,
      sym_bcc,
      sym_sender,
      sym_replyto,
  [116] = 3,
    ACTIONS(65), 1,
      sym__lwsp,
    ACTIONS(61), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(63), 12,
      aux_sym_specialFrom_token1,
      aux_sym_dateheader_token1,
      aux_sym_subjectheader_token1,
      aux_sym_midheader_token1,
      aux_sym_to_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      sym_fieldname,
      aux_sym__mimeline_token1,
      anon_sym_DASH_DASH_LF,
  [138] = 3,
    ACTIONS(71), 1,
      sym__lwsp,
    ACTIONS(67), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(69), 12,
      aux_sym_specialFrom_token1,
      aux_sym_dateheader_token1,
      aux_sym_subjectheader_token1,
      aux_sym_midheader_token1,
      aux_sym_to_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      sym_fieldname,
      aux_sym__mimeline_token1,
      anon_sym_DASH_DASH_LF,
  [160] = 3,
    ACTIONS(65), 1,
      sym__lwsp,
    ACTIONS(73), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(75), 12,
      aux_sym_specialFrom_token1,
      aux_sym_dateheader_token1,
      aux_sym_subjectheader_token1,
      aux_sym_midheader_token1,
      aux_sym_to_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      sym_fieldname,
      aux_sym__mimeline_token1,
      anon_sym_DASH_DASH_LF,
  [182] = 3,
    ACTIONS(71), 1,
      sym__lwsp,
    ACTIONS(77), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(79), 12,
      aux_sym_specialFrom_token1,
      aux_sym_dateheader_token1,
      aux_sym_subjectheader_token1,
      aux_sym_midheader_token1,
      aux_sym_to_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      sym_fieldname,
      aux_sym__mimeline_token1,
      anon_sym_DASH_DASH_LF,
  [204] = 2,
    ACTIONS(81), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(83), 12,
      aux_sym_specialFrom_token1,
      aux_sym_dateheader_token1,
      aux_sym_subjectheader_token1,
      aux_sym_midheader_token1,
      aux_sym_to_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      sym_fieldname,
      aux_sym__mimeline_token1,
      anon_sym_DASH_DASH_LF,
  [223] = 2,
    ACTIONS(85), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(87), 12,
      aux_sym_specialFrom_token1,
      aux_sym_dateheader_token1,
      aux_sym_subjectheader_token1,
      aux_sym_midheader_token1,
      aux_sym_to_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      sym_fieldname,
      aux_sym__mimeline_token1,
      anon_sym_DASH_DASH_LF,
  [242] = 2,
    ACTIONS(89), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(91), 12,
      aux_sym_specialFrom_token1,
      aux_sym_dateheader_token1,
      aux_sym_subjectheader_token1,
      aux_sym_midheader_token1,
      aux_sym_to_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      sym_fieldname,
      aux_sym__mimeline_token1,
      anon_sym_DASH_DASH_LF,
  [261] = 2,
    ACTIONS(93), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(95), 12,
      aux_sym_specialFrom_token1,
      aux_sym_dateheader_token1,
      aux_sym_subjectheader_token1,
      aux_sym_midheader_token1,
      aux_sym_to_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      sym_fieldname,
      aux_sym__mimeline_token1,
      anon_sym_DASH_DASH_LF,
  [280] = 2,
    ACTIONS(97), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(99), 12,
      aux_sym_specialFrom_token1,
      aux_sym_dateheader_token1,
      aux_sym_subjectheader_token1,
      aux_sym_midheader_token1,
      aux_sym_to_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      sym_fieldname,
      aux_sym__mimeline_token1,
      anon_sym_DASH_DASH_LF,
  [299] = 2,
    ACTIONS(101), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(103), 12,
      aux_sym_specialFrom_token1,
      aux_sym_dateheader_token1,
      aux_sym_subjectheader_token1,
      aux_sym_midheader_token1,
      aux_sym_to_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      sym_fieldname,
      aux_sym__mimeline_token1,
      anon_sym_DASH_DASH_LF,
  [318] = 2,
    ACTIONS(105), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(107), 12,
      aux_sym_specialFrom_token1,
      aux_sym_dateheader_token1,
      aux_sym_subjectheader_token1,
      aux_sym_midheader_token1,
      aux_sym_to_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      sym_fieldname,
      aux_sym__mimeline_token1,
      anon_sym_DASH_DASH_LF,
  [337] = 2,
    ACTIONS(109), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(111), 12,
      aux_sym_specialFrom_token1,
      aux_sym_dateheader_token1,
      aux_sym_subjectheader_token1,
      aux_sym_midheader_token1,
      aux_sym_to_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      sym_fieldname,
      aux_sym__mimeline_token1,
      anon_sym_DASH_DASH_LF,
  [356] = 10,
    ACTIONS(113), 1,
      sym__atom,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      sym_addresslist,
    STATE(22), 1,
      sym_ia,
    STATE(23), 1,
      aux_sym_phrase_repeat1,
    STATE(50), 1,
      sym_addrspec,
    STATE(64), 1,
      sym_mailbox,
    STATE(74), 1,
      sym_phrase,
    STATE(78), 1,
      sym_local,
    STATE(21), 2,
      sym__word,
      sym_quotedstring,
  [388] = 9,
    ACTIONS(113), 1,
      sym__atom,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    STATE(23), 1,
      aux_sym_phrase_repeat1,
    STATE(50), 1,
      sym_addrspec,
    STATE(61), 1,
      sym_ia,
    STATE(64), 1,
      sym_mailbox,
    STATE(74), 1,
      sym_phrase,
    STATE(78), 1,
      sym_local,
    STATE(21), 2,
      sym__word,
      sym_quotedstring,
  [417] = 9,
    ACTIONS(113), 1,
      sym__atom,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    STATE(23), 1,
      aux_sym_phrase_repeat1,
    STATE(50), 1,
      sym_addrspec,
    STATE(63), 1,
      sym_ia,
    STATE(64), 1,
      sym_mailbox,
    STATE(74), 1,
      sym_phrase,
    STATE(78), 1,
      sym_local,
    STATE(21), 2,
      sym__word,
      sym_quotedstring,
  [446] = 8,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    ACTIONS(119), 1,
      aux_sym__mimeline_token1,
    ACTIONS(121), 1,
      anon_sym_DASH_DASH_LF,
    ACTIONS(123), 1,
      sym__line_break,
    STATE(34), 1,
      aux_sym_emailbody_repeat1,
    STATE(65), 1,
      sym_emailbody,
    STATE(81), 1,
      sym_footer,
    STATE(83), 1,
      sym__mimeline,
  [471] = 7,
    ACTIONS(119), 1,
      aux_sym__mimeline_token1,
    ACTIONS(121), 1,
      anon_sym_DASH_DASH_LF,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    STATE(34), 1,
      aux_sym_emailbody_repeat1,
    STATE(52), 1,
      sym_emailbody,
    STATE(83), 1,
      sym__mimeline,
    STATE(86), 1,
      sym_footer,
  [493] = 5,
    ACTIONS(129), 1,
      anon_sym_AT,
    ACTIONS(131), 1,
      anon_sym_DOT,
    ACTIONS(133), 1,
      sym__atom,
    STATE(60), 1,
      aux_sym_domain_repeat1,
    ACTIONS(127), 2,
      anon_sym_LT,
      anon_sym_DQUOTE,
  [510] = 6,
    ACTIONS(135), 1,
      anon_sym_COMMA,
    ACTIONS(137), 1,
      sym__line_break,
    ACTIONS(139), 1,
      sym__lwsp,
    STATE(24), 1,
      aux_sym_addresslist_repeat1,
    STATE(44), 1,
      aux_sym_seperator_repeat1,
    STATE(89), 1,
      sym_seperator,
  [529] = 4,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_LT,
    ACTIONS(143), 1,
      sym__atom,
    STATE(26), 3,
      sym__word,
      sym_quotedstring,
      aux_sym_phrase_repeat1,
  [544] = 6,
    ACTIONS(135), 1,
      anon_sym_COMMA,
    ACTIONS(139), 1,
      sym__lwsp,
    ACTIONS(145), 1,
      sym__line_break,
    STATE(25), 1,
      aux_sym_addresslist_repeat1,
    STATE(44), 1,
      aux_sym_seperator_repeat1,
    STATE(89), 1,
      sym_seperator,
  [563] = 6,
    ACTIONS(147), 1,
      anon_sym_COMMA,
    ACTIONS(150), 1,
      sym__line_break,
    ACTIONS(153), 1,
      sym__lwsp,
    STATE(25), 1,
      aux_sym_addresslist_repeat1,
    STATE(44), 1,
      aux_sym_seperator_repeat1,
    STATE(89), 1,
      sym_seperator,
  [582] = 4,
    ACTIONS(156), 1,
      anon_sym_LT,
    ACTIONS(158), 1,
      sym__atom,
    ACTIONS(161), 1,
      anon_sym_DQUOTE,
    STATE(26), 3,
      sym__word,
      sym_quotedstring,
      aux_sym_phrase_repeat1,
  [597] = 5,
    ACTIONS(164), 1,
      sym__atom,
    ACTIONS(166), 1,
      anon_sym_DQUOTE,
    STATE(84), 1,
      sym_addrspec,
    STATE(107), 1,
      sym_local,
    STATE(57), 2,
      sym__word,
      sym_quotedstring,
  [614] = 5,
    ACTIONS(168), 1,
      ts_builtin_sym_end,
    ACTIONS(170), 1,
      aux_sym__mimeline_token1,
    ACTIONS(173), 1,
      anon_sym_DASH_DASH_LF,
    STATE(28), 1,
      aux_sym_emailbody_repeat1,
    STATE(83), 1,
      sym__mimeline,
  [630] = 5,
    ACTIONS(175), 1,
      sym__line_break,
    ACTIONS(177), 1,
      sym__lwsp,
    STATE(36), 1,
      aux_sym_fieldbody_repeat1,
    STATE(47), 1,
      aux_sym_seperator_repeat1,
    STATE(95), 1,
      sym_seperator,
  [646] = 3,
    ACTIONS(181), 1,
      anon_sym_DOT,
    STATE(31), 1,
      aux_sym_domain_repeat1,
    ACTIONS(179), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [658] = 3,
    ACTIONS(185), 1,
      anon_sym_DOT,
    STATE(31), 1,
      aux_sym_domain_repeat1,
    ACTIONS(183), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [670] = 3,
    ACTIONS(181), 1,
      anon_sym_DOT,
    STATE(30), 1,
      aux_sym_domain_repeat1,
    ACTIONS(188), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [682] = 4,
    ACTIONS(166), 1,
      anon_sym_DQUOTE,
    ACTIONS(190), 1,
      sym__atom,
    STATE(96), 1,
      sym_domain,
    STATE(55), 2,
      sym__word,
      sym_quotedstring,
  [696] = 5,
    ACTIONS(119), 1,
      aux_sym__mimeline_token1,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
    ACTIONS(194), 1,
      anon_sym_DASH_DASH_LF,
    STATE(28), 1,
      aux_sym_emailbody_repeat1,
    STATE(83), 1,
      sym__mimeline,
  [712] = 2,
    ACTIONS(198), 1,
      sym__atom,
    ACTIONS(196), 4,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_DQUOTE,
  [722] = 5,
    ACTIONS(200), 1,
      sym__line_break,
    ACTIONS(203), 1,
      sym__lwsp,
    STATE(36), 1,
      aux_sym_fieldbody_repeat1,
    STATE(47), 1,
      aux_sym_seperator_repeat1,
    STATE(95), 1,
      sym_seperator,
  [738] = 5,
    ACTIONS(177), 1,
      sym__lwsp,
    ACTIONS(206), 1,
      sym__line_break,
    STATE(29), 1,
      aux_sym_fieldbody_repeat1,
    STATE(47), 1,
      aux_sym_seperator_repeat1,
    STATE(95), 1,
      sym_seperator,
  [754] = 4,
    ACTIONS(208), 1,
      sym__atom,
    ACTIONS(210), 1,
      anon_sym_DQUOTE,
    STATE(54), 1,
      sym_domain,
    STATE(32), 2,
      sym__word,
      sym_quotedstring,
  [768] = 4,
    ACTIONS(212), 1,
      anon_sym_COMMA,
    ACTIONS(214), 1,
      sym__line_break,
    ACTIONS(217), 1,
      sym__lwsp,
    STATE(39), 1,
      aux_sym_seperator_repeat1,
  [781] = 3,
    ACTIONS(166), 1,
      anon_sym_DQUOTE,
    ACTIONS(220), 1,
      sym__atom,
    STATE(68), 2,
      sym__word,
      sym_quotedstring,
  [792] = 4,
    ACTIONS(212), 1,
      sym__bodycontent,
    ACTIONS(222), 1,
      sym__line_break,
    ACTIONS(225), 1,
      sym__lwsp,
    STATE(41), 1,
      aux_sym_seperator_repeat1,
  [805] = 3,
    ACTIONS(210), 1,
      anon_sym_DQUOTE,
    ACTIONS(228), 1,
      sym__atom,
    STATE(46), 2,
      sym__word,
      sym_quotedstring,
  [816] = 3,
    ACTIONS(230), 1,
      anon_sym_DOT,
    STATE(43), 1,
      aux_sym_domain_repeat1,
    ACTIONS(183), 2,
      anon_sym_GT,
      anon_sym_AT,
  [827] = 4,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    ACTIONS(235), 1,
      sym__line_break,
    ACTIONS(237), 1,
      sym__lwsp,
    STATE(39), 1,
      aux_sym_seperator_repeat1,
  [840] = 1,
    ACTIONS(198), 4,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
      anon_sym_DOT,
  [847] = 1,
    ACTIONS(183), 4,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
      anon_sym_DOT,
  [854] = 4,
    ACTIONS(233), 1,
      sym__bodycontent,
    ACTIONS(239), 1,
      sym__line_break,
    ACTIONS(241), 1,
      sym__lwsp,
    STATE(41), 1,
      aux_sym_seperator_repeat1,
  [867] = 3,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
    ACTIONS(245), 1,
      aux_sym_mid_token1,
    STATE(59), 1,
      aux_sym_footer_repeat1,
  [877] = 1,
    ACTIONS(247), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [883] = 1,
    ACTIONS(249), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [889] = 1,
    ACTIONS(198), 3,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_DOT,
  [895] = 3,
    ACTIONS(251), 1,
      ts_builtin_sym_end,
    ACTIONS(253), 1,
      anon_sym_DASH_DASH_LF,
    STATE(94), 1,
      sym_footer,
  [905] = 3,
    ACTIONS(179), 1,
      anon_sym_GT,
    ACTIONS(255), 1,
      anon_sym_DOT,
    STATE(43), 1,
      aux_sym_domain_repeat1,
  [915] = 1,
    ACTIONS(257), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [921] = 3,
    ACTIONS(188), 1,
      anon_sym_GT,
    ACTIONS(255), 1,
      anon_sym_DOT,
    STATE(53), 1,
      aux_sym_domain_repeat1,
  [931] = 1,
    ACTIONS(212), 3,
      sym__line_break,
      sym__lwsp,
      sym__bodycontent,
  [937] = 3,
    ACTIONS(255), 1,
      anon_sym_DOT,
    ACTIONS(259), 1,
      anon_sym_AT,
    STATE(60), 1,
      aux_sym_domain_repeat1,
  [947] = 1,
    ACTIONS(212), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [953] = 3,
    ACTIONS(261), 1,
      ts_builtin_sym_end,
    ACTIONS(263), 1,
      aux_sym_mid_token1,
    STATE(59), 1,
      aux_sym_footer_repeat1,
  [963] = 3,
    ACTIONS(255), 1,
      anon_sym_DOT,
    ACTIONS(266), 1,
      anon_sym_AT,
    STATE(43), 1,
      aux_sym_domain_repeat1,
  [973] = 1,
    ACTIONS(268), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [979] = 3,
    ACTIONS(270), 1,
      ts_builtin_sym_end,
    ACTIONS(272), 1,
      aux_sym_mid_token1,
    STATE(48), 1,
      aux_sym_footer_repeat1,
  [989] = 1,
    ACTIONS(274), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [995] = 1,
    ACTIONS(276), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [1001] = 3,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    ACTIONS(253), 1,
      anon_sym_DASH_DASH_LF,
    STATE(86), 1,
      sym_footer,
  [1011] = 2,
    ACTIONS(168), 1,
      ts_builtin_sym_end,
    ACTIONS(173), 2,
      aux_sym__mimeline_token1,
      anon_sym_DASH_DASH_LF,
  [1019] = 1,
    ACTIONS(278), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [1025] = 1,
    ACTIONS(183), 3,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_DOT,
  [1031] = 2,
    ACTIONS(280), 1,
      sym__bodycontent,
    STATE(12), 1,
      sym_fieldbody,
  [1038] = 2,
    ACTIONS(282), 1,
      aux_sym_mid_token1,
    STATE(14), 1,
      sym_mid,
  [1045] = 2,
    ACTIONS(284), 1,
      aux_sym_mid_token1,
    STATE(15), 1,
      sym_subject,
  [1052] = 1,
    ACTIONS(286), 2,
      sym__line_break,
      sym__lwsp,
  [1057] = 2,
    ACTIONS(288), 1,
      aux_sym_mid_token1,
    STATE(13), 1,
      sym_date,
  [1064] = 2,
    ACTIONS(290), 1,
      anon_sym_LT,
    STATE(67), 1,
      sym_routeaddr,
  [1071] = 1,
    ACTIONS(292), 1,
      anon_sym_COLON,
  [1075] = 1,
    ACTIONS(294), 1,
      anon_sym_DQUOTE,
  [1079] = 1,
    ACTIONS(296), 1,
      sym__line_break,
  [1083] = 1,
    ACTIONS(298), 1,
      anon_sym_AT,
  [1087] = 1,
    ACTIONS(300), 1,
      sym__line_break,
  [1091] = 1,
    ACTIONS(302), 1,
      anon_sym_COLON,
  [1095] = 1,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
  [1099] = 1,
    ACTIONS(71), 1,
      sym__lwsp,
  [1103] = 1,
    ACTIONS(304), 1,
      sym__line_break,
  [1107] = 1,
    ACTIONS(306), 1,
      anon_sym_GT,
  [1111] = 1,
    ACTIONS(308), 1,
      anon_sym_COLON,
  [1115] = 1,
    ACTIONS(251), 1,
      ts_builtin_sym_end,
  [1119] = 1,
    ACTIONS(310), 1,
      anon_sym_COLON,
  [1123] = 1,
    ACTIONS(312), 1,
      aux_sym_quotedstring_token1,
  [1127] = 1,
    ACTIONS(314), 1,
      anon_sym_COMMA,
  [1131] = 1,
    ACTIONS(316), 1,
      anon_sym_COLON,
  [1135] = 1,
    ACTIONS(318), 1,
      anon_sym_COLON,
  [1139] = 1,
    ACTIONS(320), 1,
      sym__line_break,
  [1143] = 1,
    ACTIONS(65), 1,
      sym__lwsp,
  [1147] = 1,
    ACTIONS(322), 1,
      ts_builtin_sym_end,
  [1151] = 1,
    ACTIONS(324), 1,
      sym__bodycontent,
  [1155] = 1,
    ACTIONS(257), 1,
      anon_sym_GT,
  [1159] = 1,
    ACTIONS(326), 1,
      anon_sym_COLON,
  [1163] = 1,
    ACTIONS(328), 1,
      anon_sym_COLON,
  [1167] = 1,
    ACTIONS(330), 1,
      anon_sym_COLON,
  [1171] = 1,
    ACTIONS(332), 1,
      anon_sym_COLON,
  [1175] = 1,
    ACTIONS(334), 1,
      anon_sym_COLON,
  [1179] = 1,
    ACTIONS(336), 1,
      anon_sym_DQUOTE,
  [1183] = 1,
    ACTIONS(338), 1,
      anon_sym_COLON,
  [1187] = 1,
    ACTIONS(340), 1,
      ts_builtin_sym_end,
  [1191] = 1,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
  [1195] = 1,
    ACTIONS(344), 1,
      aux_sym_quotedstring_token1,
  [1199] = 1,
    ACTIONS(346), 1,
      anon_sym_AT,
  [1203] = 1,
    ACTIONS(348), 1,
      aux_sym_quotedstring_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 58,
  [SMALL_STATE(4)] = 116,
  [SMALL_STATE(5)] = 138,
  [SMALL_STATE(6)] = 160,
  [SMALL_STATE(7)] = 182,
  [SMALL_STATE(8)] = 204,
  [SMALL_STATE(9)] = 223,
  [SMALL_STATE(10)] = 242,
  [SMALL_STATE(11)] = 261,
  [SMALL_STATE(12)] = 280,
  [SMALL_STATE(13)] = 299,
  [SMALL_STATE(14)] = 318,
  [SMALL_STATE(15)] = 337,
  [SMALL_STATE(16)] = 356,
  [SMALL_STATE(17)] = 388,
  [SMALL_STATE(18)] = 417,
  [SMALL_STATE(19)] = 446,
  [SMALL_STATE(20)] = 471,
  [SMALL_STATE(21)] = 493,
  [SMALL_STATE(22)] = 510,
  [SMALL_STATE(23)] = 529,
  [SMALL_STATE(24)] = 544,
  [SMALL_STATE(25)] = 563,
  [SMALL_STATE(26)] = 582,
  [SMALL_STATE(27)] = 597,
  [SMALL_STATE(28)] = 614,
  [SMALL_STATE(29)] = 630,
  [SMALL_STATE(30)] = 646,
  [SMALL_STATE(31)] = 658,
  [SMALL_STATE(32)] = 670,
  [SMALL_STATE(33)] = 682,
  [SMALL_STATE(34)] = 696,
  [SMALL_STATE(35)] = 712,
  [SMALL_STATE(36)] = 722,
  [SMALL_STATE(37)] = 738,
  [SMALL_STATE(38)] = 754,
  [SMALL_STATE(39)] = 768,
  [SMALL_STATE(40)] = 781,
  [SMALL_STATE(41)] = 792,
  [SMALL_STATE(42)] = 805,
  [SMALL_STATE(43)] = 816,
  [SMALL_STATE(44)] = 827,
  [SMALL_STATE(45)] = 840,
  [SMALL_STATE(46)] = 847,
  [SMALL_STATE(47)] = 854,
  [SMALL_STATE(48)] = 867,
  [SMALL_STATE(49)] = 877,
  [SMALL_STATE(50)] = 883,
  [SMALL_STATE(51)] = 889,
  [SMALL_STATE(52)] = 895,
  [SMALL_STATE(53)] = 905,
  [SMALL_STATE(54)] = 915,
  [SMALL_STATE(55)] = 921,
  [SMALL_STATE(56)] = 931,
  [SMALL_STATE(57)] = 937,
  [SMALL_STATE(58)] = 947,
  [SMALL_STATE(59)] = 953,
  [SMALL_STATE(60)] = 963,
  [SMALL_STATE(61)] = 973,
  [SMALL_STATE(62)] = 979,
  [SMALL_STATE(63)] = 989,
  [SMALL_STATE(64)] = 995,
  [SMALL_STATE(65)] = 1001,
  [SMALL_STATE(66)] = 1011,
  [SMALL_STATE(67)] = 1019,
  [SMALL_STATE(68)] = 1025,
  [SMALL_STATE(69)] = 1031,
  [SMALL_STATE(70)] = 1038,
  [SMALL_STATE(71)] = 1045,
  [SMALL_STATE(72)] = 1052,
  [SMALL_STATE(73)] = 1057,
  [SMALL_STATE(74)] = 1064,
  [SMALL_STATE(75)] = 1071,
  [SMALL_STATE(76)] = 1075,
  [SMALL_STATE(77)] = 1079,
  [SMALL_STATE(78)] = 1083,
  [SMALL_STATE(79)] = 1087,
  [SMALL_STATE(80)] = 1091,
  [SMALL_STATE(81)] = 1095,
  [SMALL_STATE(82)] = 1099,
  [SMALL_STATE(83)] = 1103,
  [SMALL_STATE(84)] = 1107,
  [SMALL_STATE(85)] = 1111,
  [SMALL_STATE(86)] = 1115,
  [SMALL_STATE(87)] = 1119,
  [SMALL_STATE(88)] = 1123,
  [SMALL_STATE(89)] = 1127,
  [SMALL_STATE(90)] = 1131,
  [SMALL_STATE(91)] = 1135,
  [SMALL_STATE(92)] = 1139,
  [SMALL_STATE(93)] = 1143,
  [SMALL_STATE(94)] = 1147,
  [SMALL_STATE(95)] = 1151,
  [SMALL_STATE(96)] = 1155,
  [SMALL_STATE(97)] = 1159,
  [SMALL_STATE(98)] = 1163,
  [SMALL_STATE(99)] = 1167,
  [SMALL_STATE(100)] = 1171,
  [SMALL_STATE(101)] = 1175,
  [SMALL_STATE(102)] = 1179,
  [SMALL_STATE(103)] = 1183,
  [SMALL_STATE(104)] = 1187,
  [SMALL_STATE(105)] = 1191,
  [SMALL_STATE(106)] = 1195,
  [SMALL_STATE(107)] = 1199,
  [SMALL_STATE(108)] = 1203,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headers, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headers, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(75),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(80),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(85),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(91),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(97),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(98),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(100),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(101),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(87),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(90),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addresslist, 3),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addresslist, 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldbody, 3),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fieldbody, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addresslist, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addresslist, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldbody, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fieldbody, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mid, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mid, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subject, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addressheader, 3),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addressheader, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headerextra, 3),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headerextra, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dateheader, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dateheader, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_midheader, 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_midheader, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subjectheader, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subjectheader, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_phrase_repeat1, 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_phrase_repeat1, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_phrase, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_addresslist_repeat1, 2), SHIFT_REPEAT(17),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_addresslist_repeat1, 2), SHIFT_REPEAT(93),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_addresslist_repeat1, 2), SHIFT_REPEAT(44),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_phrase_repeat1, 2),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_phrase_repeat1, 2), SHIFT_REPEAT(26),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_phrase_repeat1, 2), SHIFT_REPEAT(88),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_emailbody_repeat1, 2),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_emailbody_repeat1, 2), SHIFT_REPEAT(83),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_emailbody_repeat1, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_domain_repeat1, 2),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_domain_repeat1, 2), SHIFT_REPEAT(42),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_emailbody, 1),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_emailbody, 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quotedstring, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quotedstring, 3),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fieldbody_repeat1, 2), SHIFT_REPEAT(82),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fieldbody_repeat1, 2), SHIFT_REPEAT(47),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_seperator_repeat1, 2),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seperator_repeat1, 2), SHIFT_REPEAT(93),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seperator_repeat1, 2), SHIFT_REPEAT(39),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seperator_repeat1, 2), SHIFT_REPEAT(82),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seperator_repeat1, 2), SHIFT_REPEAT(41),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_domain_repeat1, 2), SHIFT_REPEAT(40),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seperator, 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_routeaddr, 3),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailbox, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 3),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addrspec, 3),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local, 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_footer_repeat1, 2),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_footer_repeat1, 2), SHIFT_REPEAT(59),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local, 2),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_addresslist_repeat1, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_addresslist_repeat1, 3),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ia, 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailbox, 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fieldbody_repeat1, 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 1),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replyto, 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 4),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_to, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cc, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addrkind, 1),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bcc, 1),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sender, 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [340] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
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
