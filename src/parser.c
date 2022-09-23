#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 55
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 47
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
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
  sym_identifier = 12,
  sym__bodycontent = 13,
  anon_sym_LT = 14,
  anon_sym_GT = 15,
  anon_sym_AT = 16,
  anon_sym_DOT = 17,
  sym_word = 18,
  sym__line_break = 19,
  sym__lwsp = 20,
  sym_source_file = 21,
  sym_headers = 22,
  sym_headerextra = 23,
  sym_addressheader = 24,
  sym_dateheader = 25,
  sym_subjectheader = 26,
  sym_midheader = 27,
  sym_addrkind = 28,
  sym_to = 29,
  sym_from = 30,
  sym_cc = 31,
  sym_bcc = 32,
  sym_sender = 33,
  sym_replyto = 34,
  sym_mid = 35,
  sym_subject = 36,
  sym_date = 37,
  sym_headerbody = 38,
  sym_addresslist = 39,
  sym_mailbox = 40,
  sym_addrspec = 41,
  sym_domain = 42,
  sym_local = 43,
  aux_sym_headers_repeat1 = 44,
  aux_sym_headerbody_repeat1 = 45,
  aux_sym_domain_repeat1 = 46,
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
  [sym_identifier] = "identifier",
  [sym__bodycontent] = "_bodycontent",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_AT] = "@",
  [anon_sym_DOT] = ".",
  [sym_word] = "word",
  [sym__line_break] = "_line_break",
  [sym__lwsp] = "_lwsp",
  [sym_source_file] = "source_file",
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
  [sym_headerbody] = "headerbody",
  [sym_addresslist] = "addresslist",
  [sym_mailbox] = "mailbox",
  [sym_addrspec] = "addrspec",
  [sym_domain] = "domain",
  [sym_local] = "local",
  [aux_sym_headers_repeat1] = "headers_repeat1",
  [aux_sym_headerbody_repeat1] = "headerbody_repeat1",
  [aux_sym_domain_repeat1] = "domain_repeat1",
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
  [sym_identifier] = sym_identifier,
  [sym__bodycontent] = sym__bodycontent,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_word] = sym_word,
  [sym__line_break] = sym__line_break,
  [sym__lwsp] = sym__lwsp,
  [sym_source_file] = sym_source_file,
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
  [sym_headerbody] = sym_headerbody,
  [sym_addresslist] = sym_addresslist,
  [sym_mailbox] = sym_mailbox,
  [sym_addrspec] = sym_addrspec,
  [sym_domain] = sym_domain,
  [sym_local] = sym_local,
  [aux_sym_headers_repeat1] = aux_sym_headers_repeat1,
  [aux_sym_headerbody_repeat1] = aux_sym_headerbody_repeat1,
  [aux_sym_domain_repeat1] = aux_sym_domain_repeat1,
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__bodycontent] = {
    .visible = false,
    .named = true,
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
  [sym_word] = {
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
  [sym_source_file] = {
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
  [sym_headerbody] = {
    .visible = true,
    .named = true,
  },
  [sym_addresslist] = {
    .visible = true,
    .named = true,
  },
  [sym_mailbox] = {
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
  [aux_sym_headers_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_headerbody_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_domain_repeat1] = {
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
  [23] = 20,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 28,
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
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 39,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(5);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == '>') ADVANCE(59);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(69);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(67);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(64);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(91);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(73);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(74);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(75);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '^') ADVANCE(57);
      END_STATE();
    case 3:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 4:
      if (eof) ADVANCE(5);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(26);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(24);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(21);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(48);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(31);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(32);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(33);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '^') ADVANCE(55);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym_dateheader_token1);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_subjectheader_token1);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_midheader_token1);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_to_token1);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_from_token1);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_cc_token1);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_bcc_token1);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_sender_token1);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_replyto_token1);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_mid_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_mid_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(26);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(24);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(21);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(48);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(31);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(32);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(33);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '^') ADVANCE(55);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '^') ADVANCE(55);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '^') ADVANCE(55);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '^') ADVANCE(55);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '^') ADVANCE(55);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '^') ADVANCE(55);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '^') ADVANCE(55);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '^') ADVANCE(55);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '^') ADVANCE(55);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '^') ADVANCE(55);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '^') ADVANCE(55);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '^') ADVANCE(55);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '^') ADVANCE(55);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '^') ADVANCE(55);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '^') ADVANCE(55);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(42);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '^') ADVANCE(55);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '^') ADVANCE(55);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '^') ADVANCE(55);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '^') ADVANCE(55);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '^') ADVANCE(55);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '^') ADVANCE(55);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '^') ADVANCE(55);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '^') ADVANCE(55);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '^') ADVANCE(55);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '^') ADVANCE(55);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '^') ADVANCE(55);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '^') ADVANCE(55);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '^') ADVANCE(55);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '^') ADVANCE(55);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '^') ADVANCE(55);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '^') ADVANCE(55);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '^') ADVANCE(55);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '^') ADVANCE(55);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '^') ADVANCE(55);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '^') ADVANCE(55);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '^') ADVANCE(55);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '^') ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '^') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__bodycontent);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != '^') ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__bodycontent);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':' &&
          lookahead != '^') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(95);
      if (lookahead == '-' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(80);
      if (lookahead == '-' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(82);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(12);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(13);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(68);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(94);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(9);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(77);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(93);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(89);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(85);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(66);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(7);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(90);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(62);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(70);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(78);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(71);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(79);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(97);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(11);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(72);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(10);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(84);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(15);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(83);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(14);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(87);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(65);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(92);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(8);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(76);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(88);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(63);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 4},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4, .external_lex_state = 2},
  [5] = {.lex_state = 4, .external_lex_state = 2},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 0, .external_lex_state = 3},
  [19] = {.lex_state = 0, .external_lex_state = 3},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0, .external_lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 0, .external_lex_state = 3},
  [29] = {.lex_state = 0, .external_lex_state = 3},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0, .external_lex_state = 3},
  [33] = {.lex_state = 0, .external_lex_state = 3},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0, .external_lex_state = 3},
  [48] = {.lex_state = 0, .external_lex_state = 3},
  [49] = {.lex_state = 0, .external_lex_state = 2},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 3},
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
    [ts_external_token__lwsp] = true,
  },
  [3] = {
    [ts_external_token__line_break] = true,
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
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
    [sym__line_break] = ACTIONS(1),
    [sym__lwsp] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(36),
    [sym_headers] = STATE(35),
    [sym_headerextra] = STATE(3),
    [sym_addressheader] = STATE(3),
    [sym_dateheader] = STATE(3),
    [sym_subjectheader] = STATE(3),
    [sym_midheader] = STATE(3),
    [sym_addrkind] = STATE(44),
    [sym_to] = STATE(52),
    [sym_from] = STATE(52),
    [sym_cc] = STATE(52),
    [sym_bcc] = STATE(52),
    [sym_sender] = STATE(52),
    [sym_replyto] = STATE(52),
    [aux_sym_headers_repeat1] = STATE(3),
    [aux_sym_dateheader_token1] = ACTIONS(3),
    [aux_sym_subjectheader_token1] = ACTIONS(5),
    [aux_sym_midheader_token1] = ACTIONS(7),
    [aux_sym_to_token1] = ACTIONS(9),
    [aux_sym_from_token1] = ACTIONS(11),
    [aux_sym_cc_token1] = ACTIONS(13),
    [aux_sym_bcc_token1] = ACTIONS(15),
    [aux_sym_sender_token1] = ACTIONS(17),
    [aux_sym_replyto_token1] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
  },
  [2] = {
    [sym_headerextra] = STATE(2),
    [sym_addressheader] = STATE(2),
    [sym_dateheader] = STATE(2),
    [sym_subjectheader] = STATE(2),
    [sym_midheader] = STATE(2),
    [sym_addrkind] = STATE(44),
    [sym_to] = STATE(52),
    [sym_from] = STATE(52),
    [sym_cc] = STATE(52),
    [sym_bcc] = STATE(52),
    [sym_sender] = STATE(52),
    [sym_replyto] = STATE(52),
    [aux_sym_headers_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(23),
    [aux_sym_dateheader_token1] = ACTIONS(25),
    [aux_sym_subjectheader_token1] = ACTIONS(28),
    [aux_sym_midheader_token1] = ACTIONS(31),
    [aux_sym_to_token1] = ACTIONS(34),
    [aux_sym_from_token1] = ACTIONS(37),
    [aux_sym_cc_token1] = ACTIONS(40),
    [aux_sym_bcc_token1] = ACTIONS(43),
    [aux_sym_sender_token1] = ACTIONS(46),
    [aux_sym_replyto_token1] = ACTIONS(49),
    [sym_identifier] = ACTIONS(52),
  },
  [3] = {
    [sym_headerextra] = STATE(2),
    [sym_addressheader] = STATE(2),
    [sym_dateheader] = STATE(2),
    [sym_subjectheader] = STATE(2),
    [sym_midheader] = STATE(2),
    [sym_addrkind] = STATE(44),
    [sym_to] = STATE(52),
    [sym_from] = STATE(52),
    [sym_cc] = STATE(52),
    [sym_bcc] = STATE(52),
    [sym_sender] = STATE(52),
    [sym_replyto] = STATE(52),
    [aux_sym_headers_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(55),
    [aux_sym_dateheader_token1] = ACTIONS(3),
    [aux_sym_subjectheader_token1] = ACTIONS(5),
    [aux_sym_midheader_token1] = ACTIONS(7),
    [aux_sym_to_token1] = ACTIONS(9),
    [aux_sym_from_token1] = ACTIONS(11),
    [aux_sym_cc_token1] = ACTIONS(13),
    [aux_sym_bcc_token1] = ACTIONS(15),
    [aux_sym_sender_token1] = ACTIONS(17),
    [aux_sym_replyto_token1] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 1,
      sym__lwsp,
    ACTIONS(59), 10,
      aux_sym_dateheader_token1,
      aux_sym_subjectheader_token1,
      aux_sym_midheader_token1,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      sym_identifier,
  [19] = 3,
    ACTIONS(61), 1,
      sym__lwsp,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 10,
      aux_sym_dateheader_token1,
      aux_sym_subjectheader_token1,
      aux_sym_midheader_token1,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      sym_identifier,
  [38] = 2,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
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
      sym_identifier,
  [54] = 2,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
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
      sym_identifier,
  [70] = 2,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
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
      sym_identifier,
  [86] = 2,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(81), 10,
      aux_sym_dateheader_token1,
      aux_sym_subjectheader_token1,
      aux_sym_midheader_token1,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      sym_identifier,
  [102] = 2,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
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
      sym_identifier,
  [118] = 2,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
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
      sym_identifier,
  [134] = 2,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
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
      sym_identifier,
  [150] = 2,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
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
      sym_identifier,
  [166] = 2,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
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
      sym_identifier,
  [182] = 2,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
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
      sym_identifier,
  [198] = 2,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
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
      sym_identifier,
  [214] = 5,
    ACTIONS(111), 1,
      sym_word,
    STATE(7), 1,
      sym_addrspec,
    STATE(8), 1,
      sym_mailbox,
    STATE(9), 1,
      sym_addresslist,
    STATE(37), 1,
      sym_local,
  [230] = 3,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(115), 1,
      sym__line_break,
    STATE(23), 1,
      aux_sym_domain_repeat1,
  [240] = 3,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(117), 1,
      sym__line_break,
    STATE(18), 1,
      aux_sym_domain_repeat1,
  [250] = 3,
    ACTIONS(119), 1,
      anon_sym_AT,
    ACTIONS(121), 1,
      anon_sym_DOT,
    STATE(20), 1,
      aux_sym_domain_repeat1,
  [260] = 3,
    ACTIONS(124), 1,
      anon_sym_AT,
    ACTIONS(126), 1,
      anon_sym_DOT,
    STATE(20), 1,
      aux_sym_domain_repeat1,
  [270] = 3,
    ACTIONS(126), 1,
      anon_sym_DOT,
    ACTIONS(128), 1,
      anon_sym_AT,
    STATE(21), 1,
      aux_sym_domain_repeat1,
  [280] = 3,
    ACTIONS(119), 1,
      sym__line_break,
    ACTIONS(130), 1,
      anon_sym_DOT,
    STATE(23), 1,
      aux_sym_domain_repeat1,
  [290] = 2,
    ACTIONS(133), 1,
      sym_word,
    STATE(47), 1,
      sym_domain,
  [297] = 2,
    ACTIONS(135), 1,
      aux_sym_mid_token1,
    STATE(13), 1,
      sym_subject,
  [304] = 2,
    ACTIONS(137), 1,
      aux_sym_mid_token1,
    STATE(11), 1,
      sym_mid,
  [311] = 2,
    ACTIONS(139), 1,
      sym__bodycontent,
    STATE(10), 1,
      sym_headerbody,
  [318] = 1,
    ACTIONS(119), 2,
      sym__line_break,
      anon_sym_DOT,
  [323] = 2,
    ACTIONS(141), 1,
      sym__line_break,
    STATE(33), 1,
      aux_sym_headerbody_repeat1,
  [330] = 2,
    ACTIONS(143), 1,
      aux_sym_mid_token1,
    STATE(12), 1,
      sym_date,
  [337] = 1,
    ACTIONS(119), 2,
      anon_sym_AT,
      anon_sym_DOT,
  [342] = 2,
    ACTIONS(145), 1,
      sym__line_break,
    STATE(32), 1,
      aux_sym_headerbody_repeat1,
  [349] = 2,
    ACTIONS(148), 1,
      sym__line_break,
    STATE(32), 1,
      aux_sym_headerbody_repeat1,
  [356] = 1,
    ACTIONS(150), 1,
      anon_sym_COLON,
  [360] = 1,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
  [364] = 1,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
  [368] = 1,
    ACTIONS(156), 1,
      anon_sym_AT,
  [372] = 1,
    ACTIONS(158), 1,
      anon_sym_COLON,
  [376] = 1,
    ACTIONS(160), 1,
      sym_word,
  [380] = 1,
    ACTIONS(162), 1,
      anon_sym_COLON,
  [384] = 1,
    ACTIONS(164), 1,
      sym__bodycontent,
  [388] = 1,
    ACTIONS(166), 1,
      anon_sym_COLON,
  [392] = 1,
    ACTIONS(168), 1,
      anon_sym_COLON,
  [396] = 1,
    ACTIONS(170), 1,
      anon_sym_COLON,
  [400] = 1,
    ACTIONS(172), 1,
      anon_sym_COLON,
  [404] = 1,
    ACTIONS(174), 1,
      anon_sym_COLON,
  [408] = 1,
    ACTIONS(176), 1,
      sym__line_break,
  [412] = 1,
    ACTIONS(178), 1,
      sym__line_break,
  [416] = 1,
    ACTIONS(61), 1,
      sym__lwsp,
  [420] = 1,
    ACTIONS(180), 1,
      anon_sym_COLON,
  [424] = 1,
    ACTIONS(182), 1,
      anon_sym_COLON,
  [428] = 1,
    ACTIONS(184), 1,
      anon_sym_COLON,
  [432] = 1,
    ACTIONS(186), 1,
      anon_sym_COLON,
  [436] = 1,
    ACTIONS(188), 1,
      sym_word,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 19,
  [SMALL_STATE(6)] = 38,
  [SMALL_STATE(7)] = 54,
  [SMALL_STATE(8)] = 70,
  [SMALL_STATE(9)] = 86,
  [SMALL_STATE(10)] = 102,
  [SMALL_STATE(11)] = 118,
  [SMALL_STATE(12)] = 134,
  [SMALL_STATE(13)] = 150,
  [SMALL_STATE(14)] = 166,
  [SMALL_STATE(15)] = 182,
  [SMALL_STATE(16)] = 198,
  [SMALL_STATE(17)] = 214,
  [SMALL_STATE(18)] = 230,
  [SMALL_STATE(19)] = 240,
  [SMALL_STATE(20)] = 250,
  [SMALL_STATE(21)] = 260,
  [SMALL_STATE(22)] = 270,
  [SMALL_STATE(23)] = 280,
  [SMALL_STATE(24)] = 290,
  [SMALL_STATE(25)] = 297,
  [SMALL_STATE(26)] = 304,
  [SMALL_STATE(27)] = 311,
  [SMALL_STATE(28)] = 318,
  [SMALL_STATE(29)] = 323,
  [SMALL_STATE(30)] = 330,
  [SMALL_STATE(31)] = 337,
  [SMALL_STATE(32)] = 342,
  [SMALL_STATE(33)] = 349,
  [SMALL_STATE(34)] = 356,
  [SMALL_STATE(35)] = 360,
  [SMALL_STATE(36)] = 364,
  [SMALL_STATE(37)] = 368,
  [SMALL_STATE(38)] = 372,
  [SMALL_STATE(39)] = 376,
  [SMALL_STATE(40)] = 380,
  [SMALL_STATE(41)] = 384,
  [SMALL_STATE(42)] = 388,
  [SMALL_STATE(43)] = 392,
  [SMALL_STATE(44)] = 396,
  [SMALL_STATE(45)] = 400,
  [SMALL_STATE(46)] = 404,
  [SMALL_STATE(47)] = 408,
  [SMALL_STATE(48)] = 412,
  [SMALL_STATE(49)] = 416,
  [SMALL_STATE(50)] = 420,
  [SMALL_STATE(51)] = 424,
  [SMALL_STATE(52)] = 428,
  [SMALL_STATE(53)] = 432,
  [SMALL_STATE(54)] = 436,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(43),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(53),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(51),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(50),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(46),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(45),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(42),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(40),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(34),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(38),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headers, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headerbody, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headerbody, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headerbody, 3),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headerbody, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subject, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailbox, 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mailbox, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addresslist, 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addresslist, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addressheader, 3),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addressheader, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headerextra, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headerextra, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_midheader, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_midheader, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dateheader, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dateheader, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subjectheader, 3),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subjectheader, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mid, 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mid, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addrspec, 4),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addrspec, 4),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_domain_repeat1, 2),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_domain_repeat1, 2), SHIFT_REPEAT(39),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local, 1),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_domain_repeat1, 2), SHIFT_REPEAT(54),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_headerbody_repeat1, 2), SHIFT_REPEAT(49),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replyto, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [154] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sender, 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bcc, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cc, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_headerbody_repeat1, 3),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_to, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addrkind, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
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
