#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 37
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 36
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
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
  sym_identifier = 12,
  sym_source_file = 13,
  sym_headers = 14,
  sym_headerextra = 15,
  sym_addressheader = 16,
  sym_dateheader = 17,
  sym_subjectheader = 18,
  sym_midheader = 19,
  sym_addrkind = 20,
  sym_to = 21,
  sym_from = 22,
  sym_cc = 23,
  sym_bcc = 24,
  sym_sender = 25,
  sym_replyto = 26,
  sym_mid = 27,
  sym_subject = 28,
  sym_date = 29,
  sym_headervalue = 30,
  sym_address = 31,
  sym_mime = 32,
  sym_mimeline = 33,
  aux_sym_headers_repeat1 = 34,
  aux_sym_mime_repeat1 = 35,
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
  [sym_headervalue] = "headervalue",
  [sym_address] = "address",
  [sym_mime] = "mime",
  [sym_mimeline] = "mimeline",
  [aux_sym_headers_repeat1] = "headers_repeat1",
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
  [sym_identifier] = sym_identifier,
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
  [sym_headervalue] = sym_headervalue,
  [sym_address] = sym_address,
  [sym_mime] = sym_mime,
  [sym_mimeline] = sym_mimeline,
  [aux_sym_headers_repeat1] = aux_sym_headers_repeat1,
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
  [sym_identifier] = {
    .visible = true,
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
  [sym_headervalue] = {
    .visible = true,
    .named = true,
  },
  [sym_address] = {
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
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(61);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(59);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(56);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(83);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(65);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(66);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(67);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(22);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(20);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(16);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(44);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(27);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(28);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(29);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 2:
      if (eof) ADVANCE(3);
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(aux_sym_dateheader_token1);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(aux_sym_subjectheader_token1);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym_midheader_token1);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_to_token1);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_from_token1);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_cc_token1);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_bcc_token1);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_sender_token1);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_replyto_token1);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_mid_token1);
      if (lookahead == '-') ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_mid_token1);
      if (lookahead == '-') ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_mid_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(48);
      if (lookahead == '-' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_mid_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(33);
      if (lookahead == '-' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_mid_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(22);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(20);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(16);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(44);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(27);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(28);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(29);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_mid_token1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(35);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_mid_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(10);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_mid_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(11);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_mid_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(21);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_mid_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(47);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_mid_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(7);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_mid_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(30);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_mid_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_mid_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(46);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_mid_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(42);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_mid_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(38);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(19);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_mid_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(43);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_mid_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_mid_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(23);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_mid_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(31);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_mid_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(24);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_mid_token1);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(32);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_mid_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(50);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_mid_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(9);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_mid_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(25);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_mid_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(8);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_mid_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(13);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_mid_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(37);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_mid_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(36);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_mid_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(12);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_mid_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(41);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_mid_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(17);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_mid_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(45);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_mid_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(6);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_mid_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(26);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_mid_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(40);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_mid_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(15);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_mid_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_mid_token1);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_mid_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(87);
      if (lookahead == '-' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(72);
      if (lookahead == '-' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(74);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(10);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(11);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(60);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(86);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(7);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(69);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(85);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(81);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(77);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(58);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(82);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(54);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(62);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(70);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(63);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(71);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(89);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(9);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(64);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(8);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(76);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(13);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(75);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(12);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(79);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(57);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(84);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(6);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(68);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(80);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(55);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
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
    [sym_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(27),
    [sym_headers] = STATE(15),
    [sym_headerextra] = STATE(3),
    [sym_addressheader] = STATE(3),
    [sym_dateheader] = STATE(3),
    [sym_subjectheader] = STATE(3),
    [sym_midheader] = STATE(3),
    [sym_addrkind] = STATE(26),
    [sym_to] = STATE(25),
    [sym_from] = STATE(25),
    [sym_cc] = STATE(25),
    [sym_bcc] = STATE(25),
    [sym_sender] = STATE(25),
    [sym_replyto] = STATE(25),
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
    [sym_addrkind] = STATE(26),
    [sym_to] = STATE(25),
    [sym_from] = STATE(25),
    [sym_cc] = STATE(25),
    [sym_bcc] = STATE(25),
    [sym_sender] = STATE(25),
    [sym_replyto] = STATE(25),
    [aux_sym_headers_repeat1] = STATE(2),
    [aux_sym_dateheader_token1] = ACTIONS(23),
    [aux_sym_subjectheader_token1] = ACTIONS(26),
    [aux_sym_midheader_token1] = ACTIONS(29),
    [aux_sym_to_token1] = ACTIONS(32),
    [aux_sym_from_token1] = ACTIONS(35),
    [aux_sym_cc_token1] = ACTIONS(38),
    [aux_sym_bcc_token1] = ACTIONS(41),
    [aux_sym_sender_token1] = ACTIONS(44),
    [aux_sym_replyto_token1] = ACTIONS(47),
    [aux_sym_mid_token1] = ACTIONS(50),
    [sym_identifier] = ACTIONS(52),
  },
  [3] = {
    [sym_headerextra] = STATE(2),
    [sym_addressheader] = STATE(2),
    [sym_dateheader] = STATE(2),
    [sym_subjectheader] = STATE(2),
    [sym_midheader] = STATE(2),
    [sym_addrkind] = STATE(26),
    [sym_to] = STATE(25),
    [sym_from] = STATE(25),
    [sym_cc] = STATE(25),
    [sym_bcc] = STATE(25),
    [sym_sender] = STATE(25),
    [sym_replyto] = STATE(25),
    [aux_sym_headers_repeat1] = STATE(2),
    [aux_sym_dateheader_token1] = ACTIONS(55),
    [aux_sym_subjectheader_token1] = ACTIONS(57),
    [aux_sym_midheader_token1] = ACTIONS(59),
    [aux_sym_to_token1] = ACTIONS(61),
    [aux_sym_from_token1] = ACTIONS(63),
    [aux_sym_cc_token1] = ACTIONS(65),
    [aux_sym_bcc_token1] = ACTIONS(67),
    [aux_sym_sender_token1] = ACTIONS(69),
    [aux_sym_replyto_token1] = ACTIONS(71),
    [aux_sym_mid_token1] = ACTIONS(73),
    [sym_identifier] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(75), 11,
      aux_sym_dateheader_token1,
      aux_sym_subjectheader_token1,
      aux_sym_midheader_token1,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      aux_sym_mid_token1,
      sym_identifier,
  [14] = 1,
    ACTIONS(77), 11,
      aux_sym_dateheader_token1,
      aux_sym_subjectheader_token1,
      aux_sym_midheader_token1,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      aux_sym_mid_token1,
      sym_identifier,
  [28] = 1,
    ACTIONS(79), 11,
      aux_sym_dateheader_token1,
      aux_sym_subjectheader_token1,
      aux_sym_midheader_token1,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      aux_sym_mid_token1,
      sym_identifier,
  [42] = 1,
    ACTIONS(81), 11,
      aux_sym_dateheader_token1,
      aux_sym_subjectheader_token1,
      aux_sym_midheader_token1,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      aux_sym_mid_token1,
      sym_identifier,
  [56] = 1,
    ACTIONS(83), 11,
      aux_sym_dateheader_token1,
      aux_sym_subjectheader_token1,
      aux_sym_midheader_token1,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      aux_sym_mid_token1,
      sym_identifier,
  [70] = 1,
    ACTIONS(85), 11,
      aux_sym_dateheader_token1,
      aux_sym_subjectheader_token1,
      aux_sym_midheader_token1,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      aux_sym_mid_token1,
      sym_identifier,
  [84] = 1,
    ACTIONS(87), 11,
      aux_sym_dateheader_token1,
      aux_sym_subjectheader_token1,
      aux_sym_midheader_token1,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      aux_sym_mid_token1,
      sym_identifier,
  [98] = 1,
    ACTIONS(89), 11,
      aux_sym_dateheader_token1,
      aux_sym_subjectheader_token1,
      aux_sym_midheader_token1,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      aux_sym_mid_token1,
      sym_identifier,
  [112] = 1,
    ACTIONS(91), 11,
      aux_sym_dateheader_token1,
      aux_sym_subjectheader_token1,
      aux_sym_midheader_token1,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      aux_sym_mid_token1,
      sym_identifier,
  [126] = 1,
    ACTIONS(93), 11,
      aux_sym_dateheader_token1,
      aux_sym_subjectheader_token1,
      aux_sym_midheader_token1,
      aux_sym_to_token1,
      aux_sym_from_token1,
      aux_sym_cc_token1,
      aux_sym_bcc_token1,
      aux_sym_sender_token1,
      aux_sym_replyto_token1,
      aux_sym_mid_token1,
      sym_identifier,
  [140] = 3,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(97), 1,
      aux_sym_mid_token1,
    STATE(14), 2,
      sym_mimeline,
      aux_sym_mime_repeat1,
  [151] = 3,
    ACTIONS(100), 1,
      aux_sym_mid_token1,
    STATE(23), 1,
      sym_mime,
    STATE(16), 2,
      sym_mimeline,
      aux_sym_mime_repeat1,
  [162] = 3,
    ACTIONS(100), 1,
      aux_sym_mid_token1,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
    STATE(14), 2,
      sym_mimeline,
      aux_sym_mime_repeat1,
  [173] = 2,
    ACTIONS(104), 1,
      aux_sym_mid_token1,
    STATE(10), 1,
      sym_subject,
  [180] = 2,
    ACTIONS(106), 1,
      aux_sym_mid_token1,
    STATE(12), 1,
      sym_date,
  [187] = 2,
    ACTIONS(108), 1,
      aux_sym_mid_token1,
    STATE(8), 1,
      sym_mid,
  [194] = 2,
    ACTIONS(110), 1,
      aux_sym_mid_token1,
    STATE(6), 1,
      sym_headervalue,
  [201] = 1,
    ACTIONS(112), 2,
      ts_builtin_sym_end,
      aux_sym_mid_token1,
  [206] = 2,
    ACTIONS(114), 1,
      aux_sym_mid_token1,
    STATE(4), 1,
      sym_address,
  [213] = 1,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
  [217] = 1,
    ACTIONS(118), 1,
      anon_sym_COLON,
  [221] = 1,
    ACTIONS(120), 1,
      anon_sym_COLON,
  [225] = 1,
    ACTIONS(122), 1,
      anon_sym_COLON,
  [229] = 1,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
  [233] = 1,
    ACTIONS(126), 1,
      anon_sym_COLON,
  [237] = 1,
    ACTIONS(128), 1,
      anon_sym_COLON,
  [241] = 1,
    ACTIONS(130), 1,
      anon_sym_COLON,
  [245] = 1,
    ACTIONS(132), 1,
      anon_sym_COLON,
  [249] = 1,
    ACTIONS(134), 1,
      anon_sym_COLON,
  [253] = 1,
    ACTIONS(136), 1,
      anon_sym_COLON,
  [257] = 1,
    ACTIONS(138), 1,
      anon_sym_COLON,
  [261] = 1,
    ACTIONS(140), 1,
      anon_sym_COLON,
  [265] = 1,
    ACTIONS(142), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 14,
  [SMALL_STATE(6)] = 28,
  [SMALL_STATE(7)] = 42,
  [SMALL_STATE(8)] = 56,
  [SMALL_STATE(9)] = 70,
  [SMALL_STATE(10)] = 84,
  [SMALL_STATE(11)] = 98,
  [SMALL_STATE(12)] = 112,
  [SMALL_STATE(13)] = 126,
  [SMALL_STATE(14)] = 140,
  [SMALL_STATE(15)] = 151,
  [SMALL_STATE(16)] = 162,
  [SMALL_STATE(17)] = 173,
  [SMALL_STATE(18)] = 180,
  [SMALL_STATE(19)] = 187,
  [SMALL_STATE(20)] = 194,
  [SMALL_STATE(21)] = 201,
  [SMALL_STATE(22)] = 206,
  [SMALL_STATE(23)] = 213,
  [SMALL_STATE(24)] = 217,
  [SMALL_STATE(25)] = 221,
  [SMALL_STATE(26)] = 225,
  [SMALL_STATE(27)] = 229,
  [SMALL_STATE(28)] = 233,
  [SMALL_STATE(29)] = 237,
  [SMALL_STATE(30)] = 241,
  [SMALL_STATE(31)] = 245,
  [SMALL_STATE(32)] = 249,
  [SMALL_STATE(33)] = 253,
  [SMALL_STATE(34)] = 257,
  [SMALL_STATE(35)] = 261,
  [SMALL_STATE(36)] = 265,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(24),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(36),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(35),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(34),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(33),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(32),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(31),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(30),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(29),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(28),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headers, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addressheader, 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headerextra, 3),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headervalue, 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_midheader, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mid, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subjectheader, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subject, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dateheader, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mime_repeat1, 2),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mime_repeat1, 2), SHIFT_REPEAT(21),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mime, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mimeline, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addrkind, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [124] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replyto, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sender, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bcc, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cc, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_to, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_email(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
