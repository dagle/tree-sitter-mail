#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 103
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 63
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_COLON = 1,
  aux_sym_dateheader_token1 = 2,
  aux_sym_subjectheader_token1 = 3,
  aux_sym_midheader_token1 = 4,
  aux_sym_to_token1 = 5,
  aux_sym_from_token1 = 6,
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
  sym__line_break = 23,
  sym__lwsp = 24,
  sym_message = 25,
  sym_headers = 26,
  sym_headerextra = 27,
  sym_addressheader = 28,
  sym_dateheader = 29,
  sym_subjectheader = 30,
  sym_midheader = 31,
  sym_addrkind = 32,
  sym_to = 33,
  sym_from = 34,
  sym_cc = 35,
  sym_bcc = 36,
  sym_sender = 37,
  sym_replyto = 38,
  sym_mid = 39,
  sym_subject = 40,
  sym_date = 41,
  sym_fieldbody = 42,
  sym_seperator = 43,
  sym_addresslist = 44,
  sym_ia = 45,
  sym_mailbox = 46,
  sym_routeaddr = 47,
  sym_addrspec = 48,
  sym_domain = 49,
  sym_local = 50,
  sym_phrase = 51,
  sym__word = 52,
  sym_quotedstring = 53,
  sym_mime = 54,
  sym_mimeline = 55,
  aux_sym_headers_repeat1 = 56,
  aux_sym_fieldbody_repeat1 = 57,
  aux_sym_seperator_repeat1 = 58,
  aux_sym_addresslist_repeat1 = 59,
  aux_sym_domain_repeat1 = 60,
  aux_sym_phrase_repeat1 = 61,
  aux_sym_mime_repeat1 = 62,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON] = ":",
  [aux_sym_dateheader_token1] = "date",
  [aux_sym_subjectheader_token1] = "subject",
  [aux_sym_midheader_token1] = "message-id",
  [aux_sym_to_token1] = "to",
  [aux_sym_from_token1] = "from",
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
  [sym_mime] = "mime",
  [sym_mimeline] = "mimeline",
  [aux_sym_headers_repeat1] = "headers_repeat1",
  [aux_sym_fieldbody_repeat1] = "fieldbody_repeat1",
  [aux_sym_seperator_repeat1] = "seperator_repeat1",
  [aux_sym_addresslist_repeat1] = "addresslist_repeat1",
  [aux_sym_domain_repeat1] = "domain_repeat1",
  [aux_sym_phrase_repeat1] = "phrase_repeat1",
  [aux_sym_mime_repeat1] = "mime_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_dateheader_token1] = aux_sym_dateheader_token1,
  [aux_sym_subjectheader_token1] = aux_sym_subjectheader_token1,
  [aux_sym_midheader_token1] = aux_sym_midheader_token1,
  [aux_sym_to_token1] = aux_sym_to_token1,
  [aux_sym_from_token1] = aux_sym_from_token1,
  [aux_sym_cc_token1] = aux_sym_cc_token1,
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
  [sym_mime] = sym_mime,
  [sym_mimeline] = sym_mimeline,
  [aux_sym_headers_repeat1] = aux_sym_headers_repeat1,
  [aux_sym_fieldbody_repeat1] = aux_sym_fieldbody_repeat1,
  [aux_sym_seperator_repeat1] = aux_sym_seperator_repeat1,
  [aux_sym_addresslist_repeat1] = aux_sym_addresslist_repeat1,
  [aux_sym_domain_repeat1] = aux_sym_domain_repeat1,
  [aux_sym_phrase_repeat1] = aux_sym_phrase_repeat1,
  [aux_sym_mime_repeat1] = aux_sym_mime_repeat1,
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
  [sym_mime] = {
    .visible = true,
    .named = true,
  },
  [sym_mimeline] = {
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
  [aux_sym_mime_repeat1] = {
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
  [31] = 30,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 35,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 34,
  [42] = 27,
  [43] = 43,
  [44] = 38,
  [45] = 45,
  [46] = 37,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 29,
  [53] = 28,
  [54] = 40,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 27,
  [59] = 59,
  [60] = 47,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
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
  [87] = 86,
  [88] = 88,
  [89] = 89,
  [90] = 56,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 81,
  [97] = 97,
  [98] = 98,
  [99] = 81,
  [100] = 89,
  [101] = 88,
  [102] = 89,
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
      if (eof) ADVANCE(42);
      if (lookahead == '"') ADVANCE(103);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == '<') ADVANCE(96);
      if (lookahead == '>') ADVANCE(97);
      if (lookahead == '@') ADVANCE(98);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(12);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(10);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(7);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(34);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(16);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(17);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(18);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(29);
      if (lookahead == ';' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '^') ADVANCE(94);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(103);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == '<') ADVANCE(96);
      if (lookahead == '>') ADVANCE(97);
      if (lookahead == '@') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(103);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '<') ADVANCE(96);
      if (lookahead == '@') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(101);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(102);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(24);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(39);
      END_STATE();
    case 6:
      if (lookahead == '\r' ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(63);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(61);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(58);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(85);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(68);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(69);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(70);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(6)
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 7:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 8:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 9:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(25);
      END_STATE();
    case 10:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 11:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 12:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 14:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(46);
      END_STATE();
    case 15:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 16:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 17:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 18:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(28);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 19:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 20:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 21:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 22:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 23:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(21);
      END_STATE();
    case 24:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(14);
      END_STATE();
    case 25:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(22);
      END_STATE();
    case 26:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 27:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(48);
      END_STATE();
    case 28:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 29:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 30:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 31:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 32:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(26);
      END_STATE();
    case 33:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 34:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 35:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(8);
      END_STATE();
    case 36:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(35);
      END_STATE();
    case 37:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(45);
      END_STATE();
    case 38:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(19);
      END_STATE();
    case 39:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(31);
      END_STATE();
    case 40:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(5);
      END_STATE();
    case 41:
      if (eof) ADVANCE(42);
      if (lookahead == '\n') SKIP(41)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_dateheader_token1);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_subjectheader_token1);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_midheader_token1);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_to_token1);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_from_token1);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_cc_token1);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_bcc_token1);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_sender_token1);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_replyto_token1);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_mid_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_mid_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == '\r' ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(63);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(61);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(58);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(85);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(68);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(69);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(70);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(79);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__bodycontent);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != '^') ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__bodycontent);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != '^') ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__specails);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(101);
      if (!sym__atom_character_set_1(lookahead)) ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__atom);
      if (!sym__atom_character_set_1(lookahead)) ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_quotedstring_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_quotedstring_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(105);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 6},
  [2] = {.lex_state = 6, .external_lex_state = 2},
  [3] = {.lex_state = 6, .external_lex_state = 2},
  [4] = {.lex_state = 6, .external_lex_state = 1},
  [5] = {.lex_state = 6, .external_lex_state = 1},
  [6] = {.lex_state = 6, .external_lex_state = 1},
  [7] = {.lex_state = 6, .external_lex_state = 1},
  [8] = {.lex_state = 6, .external_lex_state = 2},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 6, .external_lex_state = 2},
  [11] = {.lex_state = 6, .external_lex_state = 2},
  [12] = {.lex_state = 6, .external_lex_state = 2},
  [13] = {.lex_state = 6, .external_lex_state = 2},
  [14] = {.lex_state = 6, .external_lex_state = 2},
  [15] = {.lex_state = 6, .external_lex_state = 2},
  [16] = {.lex_state = 6, .external_lex_state = 2},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 2, .external_lex_state = 1},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 2, .external_lex_state = 1},
  [23] = {.lex_state = 2, .external_lex_state = 1},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 0, .external_lex_state = 1},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 2, .external_lex_state = 1},
  [29] = {.lex_state = 2, .external_lex_state = 1},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 0, .external_lex_state = 1},
  [33] = {.lex_state = 0, .external_lex_state = 1},
  [34] = {.lex_state = 2, .external_lex_state = 1},
  [35] = {.lex_state = 1, .external_lex_state = 1},
  [36] = {.lex_state = 2, .external_lex_state = 1},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 1, .external_lex_state = 1},
  [39] = {.lex_state = 41},
  [40] = {.lex_state = 2, .external_lex_state = 1},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2, .external_lex_state = 1},
  [43] = {.lex_state = 41},
  [44] = {.lex_state = 2, .external_lex_state = 1},
  [45] = {.lex_state = 41},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 2, .external_lex_state = 1},
  [48] = {.lex_state = 2, .external_lex_state = 1},
  [49] = {.lex_state = 2, .external_lex_state = 1},
  [50] = {.lex_state = 2, .external_lex_state = 1},
  [51] = {.lex_state = 2, .external_lex_state = 1},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2, .external_lex_state = 1},
  [57] = {.lex_state = 2, .external_lex_state = 1},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 1, .external_lex_state = 1},
  [61] = {.lex_state = 2, .external_lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 41},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 41},
  [66] = {.lex_state = 0, .external_lex_state = 1},
  [67] = {.lex_state = 41},
  [68] = {.lex_state = 41},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 0, .external_lex_state = 2},
  [71] = {.lex_state = 0, .external_lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 0, .external_lex_state = 3},
  [87] = {.lex_state = 0, .external_lex_state = 3},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 104},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 0, .external_lex_state = 2},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 0, .external_lex_state = 2},
  [95] = {.lex_state = 0, .external_lex_state = 2},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 0, .external_lex_state = 2},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 104},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 104},
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
    [aux_sym_dateheader_token1] = ACTIONS(1),
    [aux_sym_subjectheader_token1] = ACTIONS(1),
    [aux_sym_midheader_token1] = ACTIONS(1),
    [aux_sym_to_token1] = ACTIONS(1),
    [aux_sym_from_token1] = ACTIONS(1),
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
    [sym__line_break] = ACTIONS(1),
    [sym__lwsp] = ACTIONS(1),
  },
  [1] = {
    [sym_message] = STATE(82),
    [sym_headers] = STATE(70),
    [sym_headerextra] = STATE(2),
    [sym_addressheader] = STATE(2),
    [sym_dateheader] = STATE(2),
    [sym_subjectheader] = STATE(2),
    [sym_midheader] = STATE(2),
    [sym_addrkind] = STATE(79),
    [sym_to] = STATE(83),
    [sym_from] = STATE(83),
    [sym_cc] = STATE(83),
    [sym_bcc] = STATE(83),
    [sym_sender] = STATE(83),
    [sym_replyto] = STATE(83),
    [aux_sym_headers_repeat1] = STATE(2),
    [aux_sym_dateheader_token1] = ACTIONS(3),
    [aux_sym_subjectheader_token1] = ACTIONS(5),
    [aux_sym_midheader_token1] = ACTIONS(7),
    [aux_sym_to_token1] = ACTIONS(9),
    [aux_sym_from_token1] = ACTIONS(11),
    [aux_sym_cc_token1] = ACTIONS(13),
    [aux_sym_bcc_token1] = ACTIONS(15),
    [aux_sym_sender_token1] = ACTIONS(17),
    [aux_sym_replyto_token1] = ACTIONS(19),
    [sym_fieldname] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(3), 1,
      aux_sym_dateheader_token1,
    ACTIONS(5), 1,
      aux_sym_subjectheader_token1,
    ACTIONS(7), 1,
      aux_sym_midheader_token1,
    ACTIONS(9), 1,
      aux_sym_to_token1,
    ACTIONS(11), 1,
      aux_sym_from_token1,
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
    ACTIONS(23), 1,
      sym__line_break,
    STATE(79), 1,
      sym_addrkind,
    STATE(3), 6,
      sym_headerextra,
      sym_addressheader,
      sym_dateheader,
      sym_subjectheader,
      sym_midheader,
      aux_sym_headers_repeat1,
    STATE(83), 6,
      sym_to,
      sym_from,
      sym_cc,
      sym_bcc,
      sym_sender,
      sym_replyto,
  [53] = 14,
    ACTIONS(25), 1,
      aux_sym_dateheader_token1,
    ACTIONS(28), 1,
      aux_sym_subjectheader_token1,
    ACTIONS(31), 1,
      aux_sym_midheader_token1,
    ACTIONS(34), 1,
      aux_sym_to_token1,
    ACTIONS(37), 1,
      aux_sym_from_token1,
    ACTIONS(40), 1,
      aux_sym_cc_token1,
    ACTIONS(43), 1,
      aux_sym_bcc_token1,
    ACTIONS(46), 1,
      aux_sym_sender_token1,
    ACTIONS(49), 1,
      aux_sym_replyto_token1,
    ACTIONS(52), 1,
      sym_fieldname,
    ACTIONS(55), 1,
      sym__line_break,
    STATE(79), 1,
      sym_addrkind,
    STATE(3), 6,
      sym_headerextra,
      sym_addressheader,
      sym_dateheader,
      sym_subjectheader,
      sym_midheader,
      aux_sym_headers_repeat1,
    STATE(83), 6,
      sym_to,
      sym_from,
      sym_cc,
      sym_bcc,
      sym_sender,
      sym_replyto,
  [106] = 3,
    ACTIONS(59), 1,
      sym__line_break,
    ACTIONS(61), 1,
      sym__lwsp,
    ACTIONS(57), 10,
      aux_sym_dateheader_token1,
      aux_sym_subjectheader_token1,
      aux_sym_midheader_token1,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      sym_fieldname,
  [125] = 3,
    ACTIONS(65), 1,
      sym__line_break,
    ACTIONS(67), 1,
      sym__lwsp,
    ACTIONS(63), 10,
      aux_sym_dateheader_token1,
      aux_sym_subjectheader_token1,
      aux_sym_midheader_token1,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      sym_fieldname,
  [144] = 3,
    ACTIONS(61), 1,
      sym__lwsp,
    ACTIONS(71), 1,
      sym__line_break,
    ACTIONS(69), 10,
      aux_sym_dateheader_token1,
      aux_sym_subjectheader_token1,
      aux_sym_midheader_token1,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      sym_fieldname,
  [163] = 3,
    ACTIONS(67), 1,
      sym__lwsp,
    ACTIONS(75), 1,
      sym__line_break,
    ACTIONS(73), 10,
      aux_sym_dateheader_token1,
      aux_sym_subjectheader_token1,
      aux_sym_midheader_token1,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      sym_fieldname,
  [182] = 2,
    ACTIONS(79), 1,
      sym__line_break,
    ACTIONS(77), 10,
      aux_sym_dateheader_token1,
      aux_sym_subjectheader_token1,
      aux_sym_midheader_token1,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      sym_fieldname,
  [198] = 10,
    ACTIONS(81), 1,
      sym__atom,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    STATE(8), 1,
      sym_addresslist,
    STATE(19), 1,
      aux_sym_phrase_repeat1,
    STATE(22), 1,
      sym_ia,
    STATE(48), 1,
      sym_addrspec,
    STATE(51), 1,
      sym_mailbox,
    STATE(64), 1,
      sym_phrase,
    STATE(88), 1,
      sym_local,
    STATE(21), 2,
      sym__word,
      sym_quotedstring,
  [230] = 2,
    ACTIONS(87), 1,
      sym__line_break,
    ACTIONS(85), 10,
      aux_sym_dateheader_token1,
      aux_sym_subjectheader_token1,
      aux_sym_midheader_token1,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      sym_fieldname,
  [246] = 2,
    ACTIONS(91), 1,
      sym__line_break,
    ACTIONS(89), 10,
      aux_sym_dateheader_token1,
      aux_sym_subjectheader_token1,
      aux_sym_midheader_token1,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      sym_fieldname,
  [262] = 2,
    ACTIONS(95), 1,
      sym__line_break,
    ACTIONS(93), 10,
      aux_sym_dateheader_token1,
      aux_sym_subjectheader_token1,
      aux_sym_midheader_token1,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      sym_fieldname,
  [278] = 2,
    ACTIONS(99), 1,
      sym__line_break,
    ACTIONS(97), 10,
      aux_sym_dateheader_token1,
      aux_sym_subjectheader_token1,
      aux_sym_midheader_token1,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      sym_fieldname,
  [294] = 2,
    ACTIONS(103), 1,
      sym__line_break,
    ACTIONS(101), 10,
      aux_sym_dateheader_token1,
      aux_sym_subjectheader_token1,
      aux_sym_midheader_token1,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      sym_fieldname,
  [310] = 2,
    ACTIONS(107), 1,
      sym__line_break,
    ACTIONS(105), 10,
      aux_sym_dateheader_token1,
      aux_sym_subjectheader_token1,
      aux_sym_midheader_token1,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      sym_fieldname,
  [326] = 2,
    ACTIONS(111), 1,
      sym__line_break,
    ACTIONS(109), 10,
      aux_sym_dateheader_token1,
      aux_sym_subjectheader_token1,
      aux_sym_midheader_token1,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      sym_fieldname,
  [342] = 9,
    ACTIONS(81), 1,
      sym__atom,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    STATE(19), 1,
      aux_sym_phrase_repeat1,
    STATE(48), 1,
      sym_addrspec,
    STATE(50), 1,
      sym_ia,
    STATE(51), 1,
      sym_mailbox,
    STATE(64), 1,
      sym_phrase,
    STATE(88), 1,
      sym_local,
    STATE(21), 2,
      sym__word,
      sym_quotedstring,
  [371] = 9,
    ACTIONS(81), 1,
      sym__atom,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    STATE(19), 1,
      aux_sym_phrase_repeat1,
    STATE(48), 1,
      sym_addrspec,
    STATE(51), 1,
      sym_mailbox,
    STATE(57), 1,
      sym_ia,
    STATE(64), 1,
      sym_phrase,
    STATE(88), 1,
      sym_local,
    STATE(21), 2,
      sym__word,
      sym_quotedstring,
  [400] = 4,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(113), 1,
      anon_sym_LT,
    ACTIONS(115), 1,
      sym__atom,
    STATE(25), 3,
      sym__word,
      sym_quotedstring,
      aux_sym_phrase_repeat1,
  [415] = 6,
    ACTIONS(117), 1,
      anon_sym_COMMA,
    ACTIONS(120), 1,
      sym__line_break,
    ACTIONS(123), 1,
      sym__lwsp,
    STATE(20), 1,
      aux_sym_addresslist_repeat1,
    STATE(36), 1,
      aux_sym_seperator_repeat1,
    STATE(76), 1,
      sym_seperator,
  [434] = 5,
    ACTIONS(128), 1,
      anon_sym_AT,
    ACTIONS(130), 1,
      anon_sym_DOT,
    ACTIONS(132), 1,
      sym__atom,
    STATE(59), 1,
      aux_sym_domain_repeat1,
    ACTIONS(126), 2,
      anon_sym_LT,
      anon_sym_DQUOTE,
  [451] = 6,
    ACTIONS(134), 1,
      anon_sym_COMMA,
    ACTIONS(136), 1,
      sym__line_break,
    ACTIONS(138), 1,
      sym__lwsp,
    STATE(23), 1,
      aux_sym_addresslist_repeat1,
    STATE(36), 1,
      aux_sym_seperator_repeat1,
    STATE(76), 1,
      sym_seperator,
  [470] = 6,
    ACTIONS(134), 1,
      anon_sym_COMMA,
    ACTIONS(138), 1,
      sym__lwsp,
    ACTIONS(140), 1,
      sym__line_break,
    STATE(20), 1,
      aux_sym_addresslist_repeat1,
    STATE(36), 1,
      aux_sym_seperator_repeat1,
    STATE(76), 1,
      sym_seperator,
  [489] = 5,
    ACTIONS(142), 1,
      sym__atom,
    ACTIONS(144), 1,
      anon_sym_DQUOTE,
    STATE(78), 1,
      sym_addrspec,
    STATE(101), 1,
      sym_local,
    STATE(55), 2,
      sym__word,
      sym_quotedstring,
  [506] = 4,
    ACTIONS(146), 1,
      anon_sym_LT,
    ACTIONS(148), 1,
      sym__atom,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    STATE(25), 3,
      sym__word,
      sym_quotedstring,
      aux_sym_phrase_repeat1,
  [521] = 5,
    ACTIONS(154), 1,
      sym__line_break,
    ACTIONS(156), 1,
      sym__lwsp,
    STATE(33), 1,
      aux_sym_fieldbody_repeat1,
    STATE(35), 1,
      aux_sym_seperator_repeat1,
    STATE(85), 1,
      sym_seperator,
  [537] = 2,
    ACTIONS(160), 1,
      sym__atom,
    ACTIONS(158), 4,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_DQUOTE,
  [547] = 3,
    ACTIONS(164), 1,
      anon_sym_DOT,
    STATE(34), 1,
      aux_sym_domain_repeat1,
    ACTIONS(162), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [559] = 3,
    ACTIONS(164), 1,
      anon_sym_DOT,
    STATE(28), 1,
      aux_sym_domain_repeat1,
    ACTIONS(166), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [571] = 4,
    ACTIONS(144), 1,
      anon_sym_DQUOTE,
    ACTIONS(168), 1,
      sym__atom,
    STATE(90), 1,
      sym_domain,
    STATE(52), 2,
      sym__word,
      sym_quotedstring,
  [585] = 4,
    ACTIONS(170), 1,
      sym__atom,
    ACTIONS(172), 1,
      anon_sym_DQUOTE,
    STATE(56), 1,
      sym_domain,
    STATE(29), 2,
      sym__word,
      sym_quotedstring,
  [599] = 5,
    ACTIONS(156), 1,
      sym__lwsp,
    ACTIONS(174), 1,
      sym__line_break,
    STATE(26), 1,
      aux_sym_fieldbody_repeat1,
    STATE(35), 1,
      aux_sym_seperator_repeat1,
    STATE(85), 1,
      sym_seperator,
  [615] = 5,
    ACTIONS(176), 1,
      sym__line_break,
    ACTIONS(179), 1,
      sym__lwsp,
    STATE(33), 1,
      aux_sym_fieldbody_repeat1,
    STATE(35), 1,
      aux_sym_seperator_repeat1,
    STATE(85), 1,
      sym_seperator,
  [631] = 3,
    ACTIONS(184), 1,
      anon_sym_DOT,
    STATE(34), 1,
      aux_sym_domain_repeat1,
    ACTIONS(182), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [643] = 4,
    ACTIONS(187), 1,
      sym__bodycontent,
    ACTIONS(189), 1,
      sym__line_break,
    ACTIONS(191), 1,
      sym__lwsp,
    STATE(38), 1,
      aux_sym_seperator_repeat1,
  [656] = 4,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(193), 1,
      sym__line_break,
    ACTIONS(195), 1,
      sym__lwsp,
    STATE(44), 1,
      aux_sym_seperator_repeat1,
  [669] = 3,
    ACTIONS(172), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      sym__atom,
    STATE(40), 2,
      sym__word,
      sym_quotedstring,
  [680] = 4,
    ACTIONS(199), 1,
      sym__bodycontent,
    ACTIONS(201), 1,
      sym__line_break,
    ACTIONS(204), 1,
      sym__lwsp,
    STATE(38), 1,
      aux_sym_seperator_repeat1,
  [693] = 4,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
    ACTIONS(209), 1,
      aux_sym_mid_token1,
    STATE(39), 1,
      aux_sym_mime_repeat1,
    STATE(91), 1,
      sym_mimeline,
  [706] = 1,
    ACTIONS(182), 4,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
      anon_sym_DOT,
  [713] = 3,
    ACTIONS(212), 1,
      anon_sym_DOT,
    STATE(41), 1,
      aux_sym_domain_repeat1,
    ACTIONS(182), 2,
      anon_sym_GT,
      anon_sym_AT,
  [724] = 1,
    ACTIONS(160), 4,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
      anon_sym_DOT,
  [731] = 4,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
    ACTIONS(217), 1,
      aux_sym_mid_token1,
    STATE(39), 1,
      aux_sym_mime_repeat1,
    STATE(91), 1,
      sym_mimeline,
  [744] = 4,
    ACTIONS(199), 1,
      anon_sym_COMMA,
    ACTIONS(219), 1,
      sym__line_break,
    ACTIONS(222), 1,
      sym__lwsp,
    STATE(44), 1,
      aux_sym_seperator_repeat1,
  [757] = 4,
    ACTIONS(217), 1,
      aux_sym_mid_token1,
    STATE(43), 1,
      aux_sym_mime_repeat1,
    STATE(91), 1,
      sym_mimeline,
    STATE(92), 1,
      sym_mime,
  [770] = 3,
    ACTIONS(144), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      sym__atom,
    STATE(54), 2,
      sym__word,
      sym_quotedstring,
  [781] = 1,
    ACTIONS(199), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [787] = 1,
    ACTIONS(227), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [793] = 1,
    ACTIONS(229), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [799] = 1,
    ACTIONS(231), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [805] = 1,
    ACTIONS(233), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [811] = 3,
    ACTIONS(166), 1,
      anon_sym_GT,
    ACTIONS(235), 1,
      anon_sym_DOT,
    STATE(53), 1,
      aux_sym_domain_repeat1,
  [821] = 3,
    ACTIONS(162), 1,
      anon_sym_GT,
    ACTIONS(235), 1,
      anon_sym_DOT,
    STATE(41), 1,
      aux_sym_domain_repeat1,
  [831] = 1,
    ACTIONS(182), 3,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_DOT,
  [837] = 3,
    ACTIONS(235), 1,
      anon_sym_DOT,
    ACTIONS(237), 1,
      anon_sym_AT,
    STATE(59), 1,
      aux_sym_domain_repeat1,
  [847] = 1,
    ACTIONS(239), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [853] = 1,
    ACTIONS(241), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [859] = 1,
    ACTIONS(160), 3,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_DOT,
  [865] = 3,
    ACTIONS(235), 1,
      anon_sym_DOT,
    ACTIONS(243), 1,
      anon_sym_AT,
    STATE(41), 1,
      aux_sym_domain_repeat1,
  [875] = 1,
    ACTIONS(199), 3,
      sym__line_break,
      sym__lwsp,
      sym__bodycontent,
  [881] = 1,
    ACTIONS(245), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [887] = 2,
    ACTIONS(247), 1,
      sym__bodycontent,
    STATE(12), 1,
      sym_fieldbody,
  [894] = 2,
    ACTIONS(249), 1,
      aux_sym_mid_token1,
    STATE(16), 1,
      sym_date,
  [901] = 2,
    ACTIONS(251), 1,
      anon_sym_LT,
    STATE(61), 1,
      sym_routeaddr,
  [908] = 1,
    ACTIONS(207), 2,
      ts_builtin_sym_end,
      aux_sym_mid_token1,
  [913] = 1,
    ACTIONS(253), 2,
      sym__line_break,
      sym__lwsp,
  [918] = 2,
    ACTIONS(255), 1,
      aux_sym_mid_token1,
    STATE(13), 1,
      sym_mid,
  [925] = 2,
    ACTIONS(257), 1,
      aux_sym_mid_token1,
    STATE(15), 1,
      sym_subject,
  [932] = 1,
    ACTIONS(259), 1,
      anon_sym_COLON,
  [936] = 1,
    ACTIONS(261), 1,
      sym__line_break,
  [940] = 1,
    ACTIONS(263), 1,
      sym__line_break,
  [944] = 1,
    ACTIONS(265), 1,
      anon_sym_COLON,
  [948] = 1,
    ACTIONS(267), 1,
      anon_sym_COLON,
  [952] = 1,
    ACTIONS(269), 1,
      anon_sym_COLON,
  [956] = 1,
    ACTIONS(271), 1,
      anon_sym_COLON,
  [960] = 1,
    ACTIONS(273), 1,
      anon_sym_COMMA,
  [964] = 1,
    ACTIONS(275), 1,
      anon_sym_COLON,
  [968] = 1,
    ACTIONS(277), 1,
      anon_sym_GT,
  [972] = 1,
    ACTIONS(279), 1,
      anon_sym_COLON,
  [976] = 1,
    ACTIONS(281), 1,
      anon_sym_COLON,
  [980] = 1,
    ACTIONS(283), 1,
      anon_sym_DQUOTE,
  [984] = 1,
    ACTIONS(285), 1,
      ts_builtin_sym_end,
  [988] = 1,
    ACTIONS(287), 1,
      anon_sym_COLON,
  [992] = 1,
    ACTIONS(289), 1,
      anon_sym_COLON,
  [996] = 1,
    ACTIONS(291), 1,
      sym__bodycontent,
  [1000] = 1,
    ACTIONS(61), 1,
      sym__lwsp,
  [1004] = 1,
    ACTIONS(67), 1,
      sym__lwsp,
  [1008] = 1,
    ACTIONS(293), 1,
      anon_sym_AT,
  [1012] = 1,
    ACTIONS(295), 1,
      aux_sym_quotedstring_token1,
  [1016] = 1,
    ACTIONS(239), 1,
      anon_sym_GT,
  [1020] = 1,
    ACTIONS(297), 1,
      sym__line_break,
  [1024] = 1,
    ACTIONS(299), 1,
      ts_builtin_sym_end,
  [1028] = 1,
    ACTIONS(301), 1,
      anon_sym_COLON,
  [1032] = 1,
    ACTIONS(303), 1,
      sym__line_break,
  [1036] = 1,
    ACTIONS(305), 1,
      sym__line_break,
  [1040] = 1,
    ACTIONS(307), 1,
      anon_sym_DQUOTE,
  [1044] = 1,
    ACTIONS(309), 1,
      anon_sym_COLON,
  [1048] = 1,
    ACTIONS(311), 1,
      sym__line_break,
  [1052] = 1,
    ACTIONS(313), 1,
      anon_sym_DQUOTE,
  [1056] = 1,
    ACTIONS(315), 1,
      aux_sym_quotedstring_token1,
  [1060] = 1,
    ACTIONS(317), 1,
      anon_sym_AT,
  [1064] = 1,
    ACTIONS(319), 1,
      aux_sym_quotedstring_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 53,
  [SMALL_STATE(4)] = 106,
  [SMALL_STATE(5)] = 125,
  [SMALL_STATE(6)] = 144,
  [SMALL_STATE(7)] = 163,
  [SMALL_STATE(8)] = 182,
  [SMALL_STATE(9)] = 198,
  [SMALL_STATE(10)] = 230,
  [SMALL_STATE(11)] = 246,
  [SMALL_STATE(12)] = 262,
  [SMALL_STATE(13)] = 278,
  [SMALL_STATE(14)] = 294,
  [SMALL_STATE(15)] = 310,
  [SMALL_STATE(16)] = 326,
  [SMALL_STATE(17)] = 342,
  [SMALL_STATE(18)] = 371,
  [SMALL_STATE(19)] = 400,
  [SMALL_STATE(20)] = 415,
  [SMALL_STATE(21)] = 434,
  [SMALL_STATE(22)] = 451,
  [SMALL_STATE(23)] = 470,
  [SMALL_STATE(24)] = 489,
  [SMALL_STATE(25)] = 506,
  [SMALL_STATE(26)] = 521,
  [SMALL_STATE(27)] = 537,
  [SMALL_STATE(28)] = 547,
  [SMALL_STATE(29)] = 559,
  [SMALL_STATE(30)] = 571,
  [SMALL_STATE(31)] = 585,
  [SMALL_STATE(32)] = 599,
  [SMALL_STATE(33)] = 615,
  [SMALL_STATE(34)] = 631,
  [SMALL_STATE(35)] = 643,
  [SMALL_STATE(36)] = 656,
  [SMALL_STATE(37)] = 669,
  [SMALL_STATE(38)] = 680,
  [SMALL_STATE(39)] = 693,
  [SMALL_STATE(40)] = 706,
  [SMALL_STATE(41)] = 713,
  [SMALL_STATE(42)] = 724,
  [SMALL_STATE(43)] = 731,
  [SMALL_STATE(44)] = 744,
  [SMALL_STATE(45)] = 757,
  [SMALL_STATE(46)] = 770,
  [SMALL_STATE(47)] = 781,
  [SMALL_STATE(48)] = 787,
  [SMALL_STATE(49)] = 793,
  [SMALL_STATE(50)] = 799,
  [SMALL_STATE(51)] = 805,
  [SMALL_STATE(52)] = 811,
  [SMALL_STATE(53)] = 821,
  [SMALL_STATE(54)] = 831,
  [SMALL_STATE(55)] = 837,
  [SMALL_STATE(56)] = 847,
  [SMALL_STATE(57)] = 853,
  [SMALL_STATE(58)] = 859,
  [SMALL_STATE(59)] = 865,
  [SMALL_STATE(60)] = 875,
  [SMALL_STATE(61)] = 881,
  [SMALL_STATE(62)] = 887,
  [SMALL_STATE(63)] = 894,
  [SMALL_STATE(64)] = 901,
  [SMALL_STATE(65)] = 908,
  [SMALL_STATE(66)] = 913,
  [SMALL_STATE(67)] = 918,
  [SMALL_STATE(68)] = 925,
  [SMALL_STATE(69)] = 932,
  [SMALL_STATE(70)] = 936,
  [SMALL_STATE(71)] = 940,
  [SMALL_STATE(72)] = 944,
  [SMALL_STATE(73)] = 948,
  [SMALL_STATE(74)] = 952,
  [SMALL_STATE(75)] = 956,
  [SMALL_STATE(76)] = 960,
  [SMALL_STATE(77)] = 964,
  [SMALL_STATE(78)] = 968,
  [SMALL_STATE(79)] = 972,
  [SMALL_STATE(80)] = 976,
  [SMALL_STATE(81)] = 980,
  [SMALL_STATE(82)] = 984,
  [SMALL_STATE(83)] = 988,
  [SMALL_STATE(84)] = 992,
  [SMALL_STATE(85)] = 996,
  [SMALL_STATE(86)] = 1000,
  [SMALL_STATE(87)] = 1004,
  [SMALL_STATE(88)] = 1008,
  [SMALL_STATE(89)] = 1012,
  [SMALL_STATE(90)] = 1016,
  [SMALL_STATE(91)] = 1020,
  [SMALL_STATE(92)] = 1024,
  [SMALL_STATE(93)] = 1028,
  [SMALL_STATE(94)] = 1032,
  [SMALL_STATE(95)] = 1036,
  [SMALL_STATE(96)] = 1040,
  [SMALL_STATE(97)] = 1044,
  [SMALL_STATE(98)] = 1048,
  [SMALL_STATE(99)] = 1052,
  [SMALL_STATE(100)] = 1056,
  [SMALL_STATE(101)] = 1060,
  [SMALL_STATE(102)] = 1064,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headers, 1),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(84),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(97),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(93),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(69),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(77),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(75),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(74),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(73),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(72),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(80),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fieldbody, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldbody, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addresslist, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addresslist, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fieldbody, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldbody, 3),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addresslist, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addresslist, 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addressheader, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addressheader, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mid, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mid, 2),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subject, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 2),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headerextra, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headerextra, 3),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_midheader, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_midheader, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subjectheader, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subjectheader, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dateheader, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dateheader, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_phrase, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_addresslist_repeat1, 2), SHIFT_REPEAT(18),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_addresslist_repeat1, 2), SHIFT_REPEAT(87),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_addresslist_repeat1, 2), SHIFT_REPEAT(36),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_phrase_repeat1, 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local, 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_phrase_repeat1, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_phrase_repeat1, 2),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_phrase_repeat1, 2), SHIFT_REPEAT(25),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_phrase_repeat1, 2), SHIFT_REPEAT(89),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quotedstring, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quotedstring, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fieldbody_repeat1, 2), SHIFT_REPEAT(86),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fieldbody_repeat1, 2), SHIFT_REPEAT(35),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_domain_repeat1, 2),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_domain_repeat1, 2), SHIFT_REPEAT(37),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seperator, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_seperator_repeat1, 2),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seperator_repeat1, 2), SHIFT_REPEAT(86),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seperator_repeat1, 2), SHIFT_REPEAT(38),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mime_repeat1, 2),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mime_repeat1, 2), SHIFT_REPEAT(94),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_domain_repeat1, 2), SHIFT_REPEAT(46),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mime, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seperator_repeat1, 2), SHIFT_REPEAT(87),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seperator_repeat1, 2), SHIFT_REPEAT(44),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailbox, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_routeaddr, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_addresslist_repeat1, 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ia, 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addrspec, 3),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_addresslist_repeat1, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailbox, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fieldbody_repeat1, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_to, 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replyto, 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sender, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bcc, 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cc, 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [285] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addrkind, 1),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 3),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mimeline, 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
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
