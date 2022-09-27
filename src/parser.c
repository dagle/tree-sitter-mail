#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 138
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 89
#define ALIAS_COUNT 0
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
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
  sym_line = 23,
  aux_sym_quoted1_token1 = 24,
  anon_sym_DASH_DASH_LF = 25,
  anon_sym_diff_DASH_DASH = 26,
  anon_sym_git = 27,
  anon_sym_cc = 28,
  anon_sym_combined = 29,
  anon_sym_index = 30,
  aux_sym_index_token1 = 31,
  anon_sym_DOT_DOT = 32,
  aux_sym_index_token2 = 33,
  sym_dirname = 34,
  sym_file = 35,
  sym_filetype = 36,
  anon_sym_DASH_DASH_DASH = 37,
  anon_sym_PLUS_PLUS_PLUS = 38,
  aux_sym_diff_token1 = 39,
  sym__line_break = 40,
  sym__lwsp = 41,
  sym_message = 42,
  sym_headers = 43,
  sym_headerextra = 44,
  sym_addressheader = 45,
  sym_dateheader = 46,
  sym_subjectheader = 47,
  sym_midheader = 48,
  sym_addrkind = 49,
  sym_to = 50,
  sym_from = 51,
  sym_cc = 52,
  sym_bcc = 53,
  sym_sender = 54,
  sym_replyto = 55,
  sym_mid = 56,
  sym_subject = 57,
  sym_date = 58,
  sym_fieldbody = 59,
  sym_seperator = 60,
  sym_addresslist = 61,
  sym_ia = 62,
  sym_mailbox = 63,
  sym_routeaddr = 64,
  sym_addrspec = 65,
  sym_domain = 66,
  sym_local = 67,
  sym_phrase = 68,
  sym__word = 69,
  sym_quotedstring = 70,
  sym_emailbody = 71,
  sym_quoted1 = 72,
  sym_footer = 73,
  sym_footertext = 74,
  sym_git = 75,
  sym_index = 76,
  sym_patch = 77,
  sym_oldfile = 78,
  sym_newfile = 79,
  sym_diff = 80,
  aux_sym_headers_repeat1 = 81,
  aux_sym_fieldbody_repeat1 = 82,
  aux_sym_seperator_repeat1 = 83,
  aux_sym_addresslist_repeat1 = 84,
  aux_sym_domain_repeat1 = 85,
  aux_sym_phrase_repeat1 = 86,
  aux_sym_emailbody_repeat1 = 87,
  aux_sym_diff_repeat1 = 88,
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
  [sym_line] = "line",
  [aux_sym_quoted1_token1] = "quoted1_token1",
  [anon_sym_DASH_DASH_LF] = "-- \n",
  [anon_sym_diff_DASH_DASH] = "diff --",
  [anon_sym_git] = "git",
  [anon_sym_cc] = "cc",
  [anon_sym_combined] = "combined",
  [anon_sym_index] = "index",
  [aux_sym_index_token1] = "index_token1",
  [anon_sym_DOT_DOT] = "..",
  [aux_sym_index_token2] = "index_token2",
  [sym_dirname] = "dirname",
  [sym_file] = "file",
  [sym_filetype] = "filetype",
  [anon_sym_DASH_DASH_DASH] = "---",
  [anon_sym_PLUS_PLUS_PLUS] = "+++",
  [aux_sym_diff_token1] = "diff_token1",
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
  [sym_quoted1] = "quoted1",
  [sym_footer] = "footer",
  [sym_footertext] = "footertext",
  [sym_git] = "git",
  [sym_index] = "index",
  [sym_patch] = "patch",
  [sym_oldfile] = "oldfile",
  [sym_newfile] = "newfile",
  [sym_diff] = "diff",
  [aux_sym_headers_repeat1] = "headers_repeat1",
  [aux_sym_fieldbody_repeat1] = "fieldbody_repeat1",
  [aux_sym_seperator_repeat1] = "seperator_repeat1",
  [aux_sym_addresslist_repeat1] = "addresslist_repeat1",
  [aux_sym_domain_repeat1] = "domain_repeat1",
  [aux_sym_phrase_repeat1] = "phrase_repeat1",
  [aux_sym_emailbody_repeat1] = "emailbody_repeat1",
  [aux_sym_diff_repeat1] = "diff_repeat1",
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
  [sym_line] = sym_line,
  [aux_sym_quoted1_token1] = aux_sym_quoted1_token1,
  [anon_sym_DASH_DASH_LF] = anon_sym_DASH_DASH_LF,
  [anon_sym_diff_DASH_DASH] = anon_sym_diff_DASH_DASH,
  [anon_sym_git] = anon_sym_git,
  [anon_sym_cc] = anon_sym_cc,
  [anon_sym_combined] = anon_sym_combined,
  [anon_sym_index] = anon_sym_index,
  [aux_sym_index_token1] = aux_sym_index_token1,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [aux_sym_index_token2] = aux_sym_index_token2,
  [sym_dirname] = sym_dirname,
  [sym_file] = sym_file,
  [sym_filetype] = sym_filetype,
  [anon_sym_DASH_DASH_DASH] = anon_sym_DASH_DASH_DASH,
  [anon_sym_PLUS_PLUS_PLUS] = anon_sym_PLUS_PLUS_PLUS,
  [aux_sym_diff_token1] = aux_sym_diff_token1,
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
  [sym_quoted1] = sym_quoted1,
  [sym_footer] = sym_footer,
  [sym_footertext] = sym_footertext,
  [sym_git] = sym_git,
  [sym_index] = sym_index,
  [sym_patch] = sym_patch,
  [sym_oldfile] = sym_oldfile,
  [sym_newfile] = sym_newfile,
  [sym_diff] = sym_diff,
  [aux_sym_headers_repeat1] = aux_sym_headers_repeat1,
  [aux_sym_fieldbody_repeat1] = aux_sym_fieldbody_repeat1,
  [aux_sym_seperator_repeat1] = aux_sym_seperator_repeat1,
  [aux_sym_addresslist_repeat1] = aux_sym_addresslist_repeat1,
  [aux_sym_domain_repeat1] = aux_sym_domain_repeat1,
  [aux_sym_phrase_repeat1] = aux_sym_phrase_repeat1,
  [aux_sym_emailbody_repeat1] = aux_sym_emailbody_repeat1,
  [aux_sym_diff_repeat1] = aux_sym_diff_repeat1,
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
  [sym_line] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_quoted1_token1] = {
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
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_index_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_dirname] = {
    .visible = true,
    .named = true,
  },
  [sym_file] = {
    .visible = true,
    .named = true,
  },
  [sym_filetype] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_diff_token1] = {
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
  [sym_emailbody] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted1] = {
    .visible = true,
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
  [sym_git] = {
    .visible = true,
    .named = true,
  },
  [sym_index] = {
    .visible = true,
    .named = true,
  },
  [sym_patch] = {
    .visible = true,
    .named = true,
  },
  [sym_oldfile] = {
    .visible = true,
    .named = true,
  },
  [sym_newfile] = {
    .visible = true,
    .named = true,
  },
  [sym_diff] = {
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
  [aux_sym_diff_repeat1] = {
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
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 34,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 47,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 41,
  [53] = 53,
  [54] = 33,
  [55] = 51,
  [56] = 53,
  [57] = 49,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 35,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 64,
  [75] = 38,
  [76] = 76,
  [77] = 41,
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
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 107,
  [123] = 123,
  [124] = 124,
  [125] = 65,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 93,
  [132] = 132,
  [133] = 133,
  [134] = 93,
  [135] = 99,
  [136] = 98,
  [137] = 99,
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
      if (eof) ADVANCE(43);
      if (lookahead == '"') ADVANCE(115);
      if (lookahead == '+') ADVANCE(145);
      if (lookahead == ',') ADVANCE(107);
      if (lookahead == '-') ADVANCE(148);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == ':') ADVANCE(45);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == '>') ADVANCE(109);
      if (lookahead == '@') ADVANCE(110);
      if (lookahead == 'C') ADVANCE(166);
      if (lookahead == 'c') ADVANCE(150);
      if (lookahead == 'g') ADVANCE(156);
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(0)
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(168);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(163);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(190);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(172);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(173);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(174);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(185);
      if (lookahead == ';' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(197);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(118);
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') ADVANCE(56);
      if (lookahead == ' ') ADVANCE(56);
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == ':') ADVANCE(130);
      if (lookahead == '>') ADVANCE(58);
      if (lookahead == 'D') ADVANCE(70);
      if (lookahead == 'd') ADVANCE(68);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(75);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(73);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(97);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(80);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(81);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(82);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(92);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(133);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') ADVANCE(120);
      if (lookahead == '-') ADVANCE(124);
      if (lookahead == '>') ADVANCE(131);
      if (lookahead == 'd') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0) ADVANCE(130);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(105);
      if (lookahead != 0) ADVANCE(106);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(202);
      if (lookahead != 0) ADVANCE(213);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '\r') ADVANCE(203);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == '>') ADVANCE(132);
      if (lookahead == 'd') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(203);
      if (lookahead != 0) ADVANCE(213);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(204);
      if (lookahead != 0) ADVANCE(213);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(121);
      if (lookahead != 0) ADVANCE(130);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '-') ADVANCE(199);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(115);
      if (lookahead == '+') ADVANCE(145);
      if (lookahead == ',') ADVANCE(107);
      if (lookahead == '-') ADVANCE(148);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == ':') ADVANCE(45);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == '>') ADVANCE(109);
      if (lookahead == '@') ADVANCE(110);
      if (lookahead == 'C') ADVANCE(166);
      if (lookahead == 'c') ADVANCE(150);
      if (lookahead == 'g') ADVANCE(156);
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(11)
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(168);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(163);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(190);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(172);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(173);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(174);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(185);
      if (lookahead == ';' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(197);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(115);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == '@') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(113);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(12)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(114);
      END_STATE();
    case 13:
      if (lookahead == '+') ADVANCE(200);
      END_STATE();
    case 14:
      if (lookahead == '+') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(199);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(10);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(15);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(141);
      END_STATE();
    case 20:
      if (lookahead == '/') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == 'b') ADVANCE(28);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(137);
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(138);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 33:
      if (lookahead == 'x') ADVANCE(139);
      END_STATE();
    case 34:
      if (lookahead == '\r' ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(75);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(73);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(70);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(97);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(80);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(81);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(82);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(34)
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(104);
      END_STATE();
    case 35:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(197);
      END_STATE();
    case 36:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(20);
      END_STATE();
    case 37:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(140);
      END_STATE();
    case 38:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (lookahead != 0) ADVANCE(198);
      END_STATE();
    case 39:
      if (eof) ADVANCE(43);
      if (lookahead == '\t') ADVANCE(118);
      if (lookahead == '\n') SKIP(39)
      if (lookahead == '\r') ADVANCE(56);
      if (lookahead == ' ') ADVANCE(56);
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == ':') ADVANCE(130);
      if (lookahead == '>') ADVANCE(58);
      if (lookahead == 'D') ADVANCE(70);
      if (lookahead == 'd') ADVANCE(68);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(75);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(73);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(97);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(80);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(81);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(82);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(92);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 40:
      if (eof) ADVANCE(43);
      if (lookahead == '\n') SKIP(40)
      if (lookahead == '\r') ADVANCE(120);
      if (lookahead == '-') ADVANCE(124);
      if (lookahead == '>') ADVANCE(131);
      if (lookahead == 'd') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0) ADVANCE(130);
      END_STATE();
    case 41:
      if (eof) ADVANCE(43);
      if (lookahead == '\n') SKIP(41)
      if (lookahead == '\r') ADVANCE(203);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == '>') ADVANCE(132);
      if (lookahead == 'd') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(203);
      if (lookahead != 0) ADVANCE(213);
      END_STATE();
    case 42:
      if (eof) ADVANCE(43);
      if (lookahead == '"') ADVANCE(115);
      if (lookahead == '+') ADVANCE(14);
      if (lookahead == ',') ADVANCE(107);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == ':') ADVANCE(45);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == '>') ADVANCE(109);
      if (lookahead == '@') ADVANCE(110);
      if (lookahead == 'c') ADVANCE(22);
      if (lookahead == 'g') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_specialFrom_token1);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_dateheader_token1);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_subjectheader_token1);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_midheader_token1);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_to_token1);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_cc_token1);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_bcc_token1);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_sender_token1);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_replyto_token1);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_mid_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_mid_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == '\t') ADVANCE(118);
      if (lookahead == '\r') ADVANCE(56);
      if (lookahead == ' ') ADVANCE(56);
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '>') ADVANCE(58);
      if (lookahead == 'D') ADVANCE(70);
      if (lookahead == 'd') ADVANCE(68);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(75);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(73);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(97);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(80);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(81);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(82);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(104);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == '\n') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ':') ADVANCE(104);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(104);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == ' ') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(104);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == ' ') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(104);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(104);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == '-') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(104);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == '-') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(104);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(104);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(104);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'f') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(104);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'f') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(104);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'i') ADVANCE(66);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(104);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == '\r' ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(75);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(73);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(70);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(97);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(80);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(81);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(82);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(104);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(104);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(104);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(104);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(104);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(104);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(104);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(104);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(104);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(104);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(104);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(104);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(104);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(91);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(104);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(104);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(104);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(104);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(104);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(104);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(104);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(104);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(104);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(104);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(104);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(104);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(104);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(104);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(104);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(104);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(104);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(104);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(104);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(104);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(104);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__bodycontent);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__bodycontent);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__specails);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(113);
      if (!sym__atom_character_set_1(lookahead)) ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__atom);
      if (!sym__atom_character_set_1(lookahead)) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_quotedstring_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_quotedstring_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == '\t') ADVANCE(118);
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') ADVANCE(56);
      if (lookahead == ' ') ADVANCE(56);
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == ':') ADVANCE(130);
      if (lookahead == '>') ADVANCE(58);
      if (lookahead == 'D') ADVANCE(70);
      if (lookahead == 'd') ADVANCE(68);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(75);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(73);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(97);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(80);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(81);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(82);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(92);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == '\n') ADVANCE(133);
      if (lookahead != 0) ADVANCE(130);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') ADVANCE(120);
      if (lookahead == '-') ADVANCE(124);
      if (lookahead == '>') ADVANCE(131);
      if (lookahead == 'd') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0) ADVANCE(130);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(121);
      if (lookahead != 0) ADVANCE(130);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == ' ') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == ' ') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == '-') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == '-') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == 'f') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == 'f') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == 'i') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_quoted1_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_quoted1_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(213);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_LF);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_diff_DASH_DASH);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_diff_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(104);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_git);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_cc);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_combined);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_index);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_index_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_index_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_dirname);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(20);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == '+') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(197);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == '+') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(197);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == '-') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(197);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == '-') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(197);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == '-') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(197);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == '-') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(197);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'C') ADVANCE(50);
      if (lookahead == 'c') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(197);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'b') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(197);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'd') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(197);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'd') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(197);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'e') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(197);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(197);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'i') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(197);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'i') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(197);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'm') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(197);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'n') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(197);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'n') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(197);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 't') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(197);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'x') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(197);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(197);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(197);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(197);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(197);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(197);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(197);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(197);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(197);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(197);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(197);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(197);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(184);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(197);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(197);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(197);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(197);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(197);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(197);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(197);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(197);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(197);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(197);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(197);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(197);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(197);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(197);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(197);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(197);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(197);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(197);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(197);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(197);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(197);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(197);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(197);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_file);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_filetype);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == '\n') ADVANCE(133);
      if (lookahead != 0) ADVANCE(213);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(202);
      if (lookahead != 0) ADVANCE(213);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '\r') ADVANCE(203);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == '>') ADVANCE(132);
      if (lookahead == 'd') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(203);
      if (lookahead != 0) ADVANCE(213);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(204);
      if (lookahead != 0) ADVANCE(213);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == ' ') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(213);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == ' ') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(213);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == '-') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(213);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == '-') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(213);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == '-') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(213);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == 'f') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(213);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == 'f') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(213);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == 'i') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(213);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(213);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 34},
  [2] = {.lex_state = 39, .external_lex_state = 2},
  [3] = {.lex_state = 39, .external_lex_state = 2},
  [4] = {.lex_state = 39, .external_lex_state = 1},
  [5] = {.lex_state = 39, .external_lex_state = 1},
  [6] = {.lex_state = 39, .external_lex_state = 1},
  [7] = {.lex_state = 39, .external_lex_state = 1},
  [8] = {.lex_state = 39, .external_lex_state = 2},
  [9] = {.lex_state = 39, .external_lex_state = 2},
  [10] = {.lex_state = 39, .external_lex_state = 2},
  [11] = {.lex_state = 39, .external_lex_state = 2},
  [12] = {.lex_state = 39, .external_lex_state = 2},
  [13] = {.lex_state = 39, .external_lex_state = 2},
  [14] = {.lex_state = 39, .external_lex_state = 2},
  [15] = {.lex_state = 39, .external_lex_state = 2},
  [16] = {.lex_state = 12},
  [17] = {.lex_state = 40, .external_lex_state = 2},
  [18] = {.lex_state = 12},
  [19] = {.lex_state = 12},
  [20] = {.lex_state = 40},
  [21] = {.lex_state = 40},
  [22] = {.lex_state = 40},
  [23] = {.lex_state = 41},
  [24] = {.lex_state = 41},
  [25] = {.lex_state = 12},
  [26] = {.lex_state = 42, .external_lex_state = 1},
  [27] = {.lex_state = 42, .external_lex_state = 1},
  [28] = {.lex_state = 41},
  [29] = {.lex_state = 12},
  [30] = {.lex_state = 12},
  [31] = {.lex_state = 12},
  [32] = {.lex_state = 42, .external_lex_state = 1},
  [33] = {.lex_state = 42, .external_lex_state = 1},
  [34] = {.lex_state = 12},
  [35] = {.lex_state = 42, .external_lex_state = 1},
  [36] = {.lex_state = 0, .external_lex_state = 1},
  [37] = {.lex_state = 0, .external_lex_state = 1},
  [38] = {.lex_state = 42, .external_lex_state = 1},
  [39] = {.lex_state = 40},
  [40] = {.lex_state = 40},
  [41] = {.lex_state = 12},
  [42] = {.lex_state = 40},
  [43] = {.lex_state = 0, .external_lex_state = 1},
  [44] = {.lex_state = 12},
  [45] = {.lex_state = 40},
  [46] = {.lex_state = 40},
  [47] = {.lex_state = 42, .external_lex_state = 1},
  [48] = {.lex_state = 4, .external_lex_state = 1},
  [49] = {.lex_state = 42, .external_lex_state = 1},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 12},
  [52] = {.lex_state = 42, .external_lex_state = 1},
  [53] = {.lex_state = 42, .external_lex_state = 1},
  [54] = {.lex_state = 42},
  [55] = {.lex_state = 12},
  [56] = {.lex_state = 4, .external_lex_state = 1},
  [57] = {.lex_state = 42},
  [58] = {.lex_state = 42},
  [59] = {.lex_state = 17},
  [60] = {.lex_state = 42},
  [61] = {.lex_state = 42},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 42},
  [64] = {.lex_state = 42, .external_lex_state = 1},
  [65] = {.lex_state = 42, .external_lex_state = 1},
  [66] = {.lex_state = 42, .external_lex_state = 1},
  [67] = {.lex_state = 42, .external_lex_state = 1},
  [68] = {.lex_state = 42},
  [69] = {.lex_state = 42, .external_lex_state = 1},
  [70] = {.lex_state = 42, .external_lex_state = 1},
  [71] = {.lex_state = 42, .external_lex_state = 1},
  [72] = {.lex_state = 42},
  [73] = {.lex_state = 42, .external_lex_state = 1},
  [74] = {.lex_state = 4, .external_lex_state = 1},
  [75] = {.lex_state = 42},
  [76] = {.lex_state = 42},
  [77] = {.lex_state = 42},
  [78] = {.lex_state = 42},
  [79] = {.lex_state = 42},
  [80] = {.lex_state = 8},
  [81] = {.lex_state = 8},
  [82] = {.lex_state = 8},
  [83] = {.lex_state = 0, .external_lex_state = 1},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 8},
  [86] = {.lex_state = 42},
  [87] = {.lex_state = 42},
  [88] = {.lex_state = 42},
  [89] = {.lex_state = 35},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 42},
  [92] = {.lex_state = 42},
  [93] = {.lex_state = 42},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 36},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 42},
  [98] = {.lex_state = 42},
  [99] = {.lex_state = 116},
  [100] = {.lex_state = 37},
  [101] = {.lex_state = 42},
  [102] = {.lex_state = 35},
  [103] = {.lex_state = 36},
  [104] = {.lex_state = 8},
  [105] = {.lex_state = 37},
  [106] = {.lex_state = 42},
  [107] = {.lex_state = 0, .external_lex_state = 3},
  [108] = {.lex_state = 42},
  [109] = {.lex_state = 38},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 42},
  [112] = {.lex_state = 38},
  [113] = {.lex_state = 0, .external_lex_state = 2},
  [114] = {.lex_state = 42},
  [115] = {.lex_state = 42},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0, .external_lex_state = 2},
  [118] = {.lex_state = 42},
  [119] = {.lex_state = 0, .external_lex_state = 2},
  [120] = {.lex_state = 0, .external_lex_state = 2},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0, .external_lex_state = 3},
  [123] = {.lex_state = 42},
  [124] = {.lex_state = 9},
  [125] = {.lex_state = 42},
  [126] = {.lex_state = 42},
  [127] = {.lex_state = 42},
  [128] = {.lex_state = 42},
  [129] = {.lex_state = 42},
  [130] = {.lex_state = 42},
  [131] = {.lex_state = 42},
  [132] = {.lex_state = 42},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 42},
  [135] = {.lex_state = 116},
  [136] = {.lex_state = 42},
  [137] = {.lex_state = 116},
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
    [aux_sym_quoted1_token1] = ACTIONS(1),
    [anon_sym_git] = ACTIONS(1),
    [anon_sym_cc] = ACTIONS(1),
    [anon_sym_combined] = ACTIONS(1),
    [anon_sym_index] = ACTIONS(1),
    [aux_sym_index_token2] = ACTIONS(1),
    [sym_file] = ACTIONS(1),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(1),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(1),
    [sym__line_break] = ACTIONS(1),
    [sym__lwsp] = ACTIONS(1),
  },
  [1] = {
    [sym_message] = STATE(133),
    [sym_headers] = STATE(17),
    [sym_headerextra] = STATE(2),
    [sym_addressheader] = STATE(2),
    [sym_dateheader] = STATE(2),
    [sym_subjectheader] = STATE(2),
    [sym_midheader] = STATE(2),
    [sym_addrkind] = STATE(132),
    [sym_to] = STATE(130),
    [sym_from] = STATE(130),
    [sym_cc] = STATE(130),
    [sym_bcc] = STATE(130),
    [sym_sender] = STATE(130),
    [sym_replyto] = STATE(130),
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
    STATE(132), 1,
      sym_addrkind,
    ACTIONS(23), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(25), 4,
      sym_line,
      aux_sym_quoted1_token1,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
    STATE(3), 6,
      sym_headerextra,
      sym_addressheader,
      sym_dateheader,
      sym_subjectheader,
      sym_midheader,
      aux_sym_headers_repeat1,
    STATE(130), 6,
      sym_to,
      sym_from,
      sym_cc,
      sym_bcc,
      sym_sender,
      sym_replyto,
  [60] = 15,
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
    STATE(132), 1,
      sym_addrkind,
    ACTIONS(27), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(59), 4,
      sym_line,
      aux_sym_quoted1_token1,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
    STATE(3), 6,
      sym_headerextra,
      sym_addressheader,
      sym_dateheader,
      sym_subjectheader,
      sym_midheader,
      aux_sym_headers_repeat1,
    STATE(130), 6,
      sym_to,
      sym_from,
      sym_cc,
      sym_bcc,
      sym_sender,
      sym_replyto,
  [120] = 3,
    ACTIONS(65), 1,
      sym__lwsp,
    ACTIONS(61), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(63), 14,
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
      sym_line,
      aux_sym_quoted1_token1,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
  [144] = 3,
    ACTIONS(71), 1,
      sym__lwsp,
    ACTIONS(67), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(69), 14,
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
      sym_line,
      aux_sym_quoted1_token1,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
  [168] = 3,
    ACTIONS(65), 1,
      sym__lwsp,
    ACTIONS(73), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(75), 14,
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
      sym_line,
      aux_sym_quoted1_token1,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
  [192] = 3,
    ACTIONS(71), 1,
      sym__lwsp,
    ACTIONS(77), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(79), 14,
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
      sym_line,
      aux_sym_quoted1_token1,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
  [216] = 2,
    ACTIONS(81), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(83), 14,
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
      sym_line,
      aux_sym_quoted1_token1,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
  [237] = 2,
    ACTIONS(85), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(87), 14,
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
      sym_line,
      aux_sym_quoted1_token1,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
  [258] = 2,
    ACTIONS(89), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(91), 14,
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
      sym_line,
      aux_sym_quoted1_token1,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
  [279] = 2,
    ACTIONS(93), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(95), 14,
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
      sym_line,
      aux_sym_quoted1_token1,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
  [300] = 2,
    ACTIONS(97), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(99), 14,
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
      sym_line,
      aux_sym_quoted1_token1,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
  [321] = 2,
    ACTIONS(101), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(103), 14,
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
      sym_line,
      aux_sym_quoted1_token1,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
  [342] = 2,
    ACTIONS(105), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(107), 14,
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
      sym_line,
      aux_sym_quoted1_token1,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
  [363] = 2,
    ACTIONS(109), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(111), 14,
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
      sym_line,
      aux_sym_quoted1_token1,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
  [384] = 10,
    ACTIONS(113), 1,
      sym__atom,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    STATE(10), 1,
      sym_addresslist,
    STATE(27), 1,
      sym_ia,
    STATE(31), 1,
      aux_sym_phrase_repeat1,
    STATE(67), 1,
      sym_addrspec,
    STATE(71), 1,
      sym_mailbox,
    STATE(78), 1,
      sym_phrase,
    STATE(98), 1,
      sym_local,
    STATE(29), 2,
      sym__word,
      sym_quotedstring,
  [416] = 9,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    ACTIONS(119), 1,
      sym_line,
    ACTIONS(121), 1,
      aux_sym_quoted1_token1,
    ACTIONS(123), 1,
      anon_sym_DASH_DASH_LF,
    ACTIONS(125), 1,
      anon_sym_diff_DASH_DASH,
    ACTIONS(127), 1,
      sym__line_break,
    STATE(58), 1,
      sym_emailbody,
    STATE(121), 1,
      sym_footer,
    STATE(21), 3,
      sym_quoted1,
      sym_git,
      aux_sym_emailbody_repeat1,
  [446] = 9,
    ACTIONS(113), 1,
      sym__atom,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    STATE(31), 1,
      aux_sym_phrase_repeat1,
    STATE(67), 1,
      sym_addrspec,
    STATE(69), 1,
      sym_ia,
    STATE(71), 1,
      sym_mailbox,
    STATE(78), 1,
      sym_phrase,
    STATE(98), 1,
      sym_local,
    STATE(29), 2,
      sym__word,
      sym_quotedstring,
  [475] = 9,
    ACTIONS(113), 1,
      sym__atom,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    STATE(31), 1,
      aux_sym_phrase_repeat1,
    STATE(66), 1,
      sym_ia,
    STATE(67), 1,
      sym_addrspec,
    STATE(71), 1,
      sym_mailbox,
    STATE(78), 1,
      sym_phrase,
    STATE(98), 1,
      sym_local,
    STATE(29), 2,
      sym__word,
      sym_quotedstring,
  [504] = 8,
    ACTIONS(119), 1,
      sym_line,
    ACTIONS(121), 1,
      aux_sym_quoted1_token1,
    ACTIONS(123), 1,
      anon_sym_DASH_DASH_LF,
    ACTIONS(125), 1,
      anon_sym_diff_DASH_DASH,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
    STATE(61), 1,
      sym_emailbody,
    STATE(116), 1,
      sym_footer,
    STATE(21), 3,
      sym_quoted1,
      sym_git,
      aux_sym_emailbody_repeat1,
  [531] = 6,
    ACTIONS(121), 1,
      aux_sym_quoted1_token1,
    ACTIONS(125), 1,
      anon_sym_diff_DASH_DASH,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
    ACTIONS(133), 1,
      sym_line,
    ACTIONS(135), 1,
      anon_sym_DASH_DASH_LF,
    STATE(22), 3,
      sym_quoted1,
      sym_git,
      aux_sym_emailbody_repeat1,
  [552] = 6,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    ACTIONS(139), 1,
      sym_line,
    ACTIONS(142), 1,
      aux_sym_quoted1_token1,
    ACTIONS(145), 1,
      anon_sym_DASH_DASH_LF,
    ACTIONS(147), 1,
      anon_sym_diff_DASH_DASH,
    STATE(22), 3,
      sym_quoted1,
      sym_git,
      aux_sym_emailbody_repeat1,
  [573] = 4,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    ACTIONS(154), 1,
      aux_sym_diff_token1,
    STATE(23), 1,
      aux_sym_diff_repeat1,
    ACTIONS(152), 4,
      sym_line,
      aux_sym_quoted1_token1,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
  [589] = 4,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
    ACTIONS(161), 1,
      aux_sym_diff_token1,
    STATE(23), 1,
      aux_sym_diff_repeat1,
    ACTIONS(159), 4,
      sym_line,
      aux_sym_quoted1_token1,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
  [605] = 5,
    ACTIONS(163), 1,
      sym__atom,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    STATE(91), 1,
      sym_addrspec,
    STATE(136), 1,
      sym_local,
    STATE(63), 2,
      sym__word,
      sym_quotedstring,
  [622] = 6,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    ACTIONS(169), 1,
      sym__line_break,
    ACTIONS(171), 1,
      sym__lwsp,
    STATE(32), 1,
      aux_sym_addresslist_repeat1,
    STATE(47), 1,
      aux_sym_seperator_repeat1,
    STATE(106), 1,
      sym_seperator,
  [641] = 6,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    ACTIONS(171), 1,
      sym__lwsp,
    ACTIONS(173), 1,
      sym__line_break,
    STATE(26), 1,
      aux_sym_addresslist_repeat1,
    STATE(47), 1,
      aux_sym_seperator_repeat1,
    STATE(106), 1,
      sym_seperator,
  [660] = 2,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    ACTIONS(152), 5,
      sym_line,
      aux_sym_quoted1_token1,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
      aux_sym_diff_token1,
  [671] = 5,
    ACTIONS(177), 1,
      anon_sym_AT,
    ACTIONS(179), 1,
      anon_sym_DOT,
    ACTIONS(181), 1,
      sym__atom,
    STATE(72), 1,
      aux_sym_domain_repeat1,
    ACTIONS(175), 2,
      anon_sym_LT,
      anon_sym_DQUOTE,
  [688] = 4,
    ACTIONS(183), 1,
      anon_sym_LT,
    ACTIONS(185), 1,
      sym__atom,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    STATE(30), 3,
      sym__word,
      sym_quotedstring,
      aux_sym_phrase_repeat1,
  [703] = 4,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(191), 1,
      anon_sym_LT,
    ACTIONS(193), 1,
      sym__atom,
    STATE(30), 3,
      sym__word,
      sym_quotedstring,
      aux_sym_phrase_repeat1,
  [718] = 6,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    ACTIONS(198), 1,
      sym__line_break,
    ACTIONS(201), 1,
      sym__lwsp,
    STATE(32), 1,
      aux_sym_addresslist_repeat1,
    STATE(47), 1,
      aux_sym_seperator_repeat1,
    STATE(106), 1,
      sym_seperator,
  [737] = 3,
    ACTIONS(206), 1,
      anon_sym_DOT,
    STATE(33), 1,
      aux_sym_domain_repeat1,
    ACTIONS(204), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [749] = 4,
    ACTIONS(209), 1,
      sym__atom,
    ACTIONS(211), 1,
      anon_sym_DQUOTE,
    STATE(65), 1,
      sym_domain,
    STATE(35), 2,
      sym__word,
      sym_quotedstring,
  [763] = 3,
    ACTIONS(215), 1,
      anon_sym_DOT,
    STATE(38), 1,
      aux_sym_domain_repeat1,
    ACTIONS(213), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [775] = 5,
    ACTIONS(217), 1,
      sym__line_break,
    ACTIONS(219), 1,
      sym__lwsp,
    STATE(37), 1,
      aux_sym_fieldbody_repeat1,
    STATE(48), 1,
      aux_sym_seperator_repeat1,
    STATE(96), 1,
      sym_seperator,
  [791] = 5,
    ACTIONS(221), 1,
      sym__line_break,
    ACTIONS(224), 1,
      sym__lwsp,
    STATE(37), 1,
      aux_sym_fieldbody_repeat1,
    STATE(48), 1,
      aux_sym_seperator_repeat1,
    STATE(96), 1,
      sym_seperator,
  [807] = 3,
    ACTIONS(215), 1,
      anon_sym_DOT,
    STATE(33), 1,
      aux_sym_domain_repeat1,
    ACTIONS(227), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [819] = 2,
    ACTIONS(229), 1,
      ts_builtin_sym_end,
    ACTIONS(231), 4,
      sym_line,
      aux_sym_quoted1_token1,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
  [829] = 2,
    ACTIONS(233), 1,
      ts_builtin_sym_end,
    ACTIONS(235), 4,
      sym_line,
      aux_sym_quoted1_token1,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
  [839] = 2,
    ACTIONS(239), 1,
      sym__atom,
    ACTIONS(237), 4,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_DQUOTE,
  [849] = 2,
    ACTIONS(241), 1,
      ts_builtin_sym_end,
    ACTIONS(243), 4,
      sym_line,
      aux_sym_quoted1_token1,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
  [859] = 5,
    ACTIONS(219), 1,
      sym__lwsp,
    ACTIONS(245), 1,
      sym__line_break,
    STATE(36), 1,
      aux_sym_fieldbody_repeat1,
    STATE(48), 1,
      aux_sym_seperator_repeat1,
    STATE(96), 1,
      sym_seperator,
  [875] = 4,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    ACTIONS(247), 1,
      sym__atom,
    STATE(125), 1,
      sym_domain,
    STATE(68), 2,
      sym__word,
      sym_quotedstring,
  [889] = 2,
    ACTIONS(249), 1,
      ts_builtin_sym_end,
    ACTIONS(251), 4,
      sym_line,
      aux_sym_quoted1_token1,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
  [899] = 2,
    ACTIONS(253), 1,
      ts_builtin_sym_end,
    ACTIONS(255), 4,
      sym_line,
      aux_sym_quoted1_token1,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
  [909] = 4,
    ACTIONS(257), 1,
      anon_sym_COMMA,
    ACTIONS(259), 1,
      sym__line_break,
    ACTIONS(261), 1,
      sym__lwsp,
    STATE(53), 1,
      aux_sym_seperator_repeat1,
  [922] = 4,
    ACTIONS(257), 1,
      sym__bodycontent,
    ACTIONS(263), 1,
      sym__line_break,
    ACTIONS(265), 1,
      sym__lwsp,
    STATE(56), 1,
      aux_sym_seperator_repeat1,
  [935] = 1,
    ACTIONS(204), 4,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
      anon_sym_DOT,
  [942] = 4,
    ACTIONS(161), 1,
      aux_sym_diff_token1,
    ACTIONS(267), 1,
      anon_sym_DOT,
    STATE(24), 1,
      aux_sym_diff_repeat1,
    STATE(45), 1,
      sym_diff,
  [955] = 3,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      sym__atom,
    STATE(57), 2,
      sym__word,
      sym_quotedstring,
  [966] = 1,
    ACTIONS(239), 4,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
      anon_sym_DOT,
  [973] = 4,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    ACTIONS(273), 1,
      sym__line_break,
    ACTIONS(276), 1,
      sym__lwsp,
    STATE(53), 1,
      aux_sym_seperator_repeat1,
  [986] = 3,
    ACTIONS(279), 1,
      anon_sym_DOT,
    STATE(54), 1,
      aux_sym_domain_repeat1,
    ACTIONS(204), 2,
      anon_sym_GT,
      anon_sym_AT,
  [997] = 3,
    ACTIONS(211), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      sym__atom,
    STATE(49), 2,
      sym__word,
      sym_quotedstring,
  [1008] = 4,
    ACTIONS(271), 1,
      sym__bodycontent,
    ACTIONS(284), 1,
      sym__line_break,
    ACTIONS(287), 1,
      sym__lwsp,
    STATE(56), 1,
      aux_sym_seperator_repeat1,
  [1021] = 1,
    ACTIONS(204), 3,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_DOT,
  [1027] = 3,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
    ACTIONS(290), 1,
      anon_sym_DASH_DASH_LF,
    STATE(116), 1,
      sym_footer,
  [1037] = 3,
    ACTIONS(292), 1,
      anon_sym_DOT_DOT,
    ACTIONS(294), 1,
      aux_sym_index_token2,
    ACTIONS(296), 1,
      anon_sym_DASH_DASH_DASH,
  [1047] = 1,
    ACTIONS(298), 3,
      anon_sym_git,
      anon_sym_cc,
      anon_sym_combined,
  [1053] = 3,
    ACTIONS(290), 1,
      anon_sym_DASH_DASH_LF,
    ACTIONS(300), 1,
      ts_builtin_sym_end,
    STATE(94), 1,
      sym_footer,
  [1063] = 3,
    ACTIONS(302), 1,
      aux_sym_diff_token1,
    STATE(24), 1,
      aux_sym_diff_repeat1,
    STATE(40), 1,
      sym_diff,
  [1073] = 3,
    ACTIONS(304), 1,
      anon_sym_AT,
    ACTIONS(306), 1,
      anon_sym_DOT,
    STATE(72), 1,
      aux_sym_domain_repeat1,
  [1083] = 1,
    ACTIONS(271), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [1089] = 1,
    ACTIONS(308), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [1095] = 1,
    ACTIONS(310), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [1101] = 1,
    ACTIONS(312), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [1107] = 3,
    ACTIONS(213), 1,
      anon_sym_GT,
    ACTIONS(306), 1,
      anon_sym_DOT,
    STATE(75), 1,
      aux_sym_domain_repeat1,
  [1117] = 1,
    ACTIONS(314), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [1123] = 1,
    ACTIONS(316), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [1129] = 1,
    ACTIONS(318), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [1135] = 3,
    ACTIONS(306), 1,
      anon_sym_DOT,
    ACTIONS(320), 1,
      anon_sym_AT,
    STATE(54), 1,
      aux_sym_domain_repeat1,
  [1145] = 1,
    ACTIONS(322), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [1151] = 1,
    ACTIONS(271), 3,
      sym__line_break,
      sym__lwsp,
      sym__bodycontent,
  [1157] = 3,
    ACTIONS(227), 1,
      anon_sym_GT,
    ACTIONS(306), 1,
      anon_sym_DOT,
    STATE(54), 1,
      aux_sym_domain_repeat1,
  [1167] = 3,
    ACTIONS(324), 1,
      anon_sym_DASH_DASH_DASH,
    STATE(39), 1,
      sym_patch,
    STATE(79), 1,
      sym_oldfile,
  [1177] = 1,
    ACTIONS(239), 3,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_DOT,
  [1183] = 2,
    ACTIONS(326), 1,
      anon_sym_LT,
    STATE(70), 1,
      sym_routeaddr,
  [1190] = 2,
    ACTIONS(328), 1,
      anon_sym_PLUS_PLUS_PLUS,
    STATE(42), 1,
      sym_newfile,
  [1197] = 2,
    ACTIONS(330), 1,
      aux_sym_mid_token1,
    STATE(11), 1,
      sym_date,
  [1204] = 2,
    ACTIONS(332), 1,
      aux_sym_mid_token1,
    STATE(12), 1,
      sym_subject,
  [1211] = 2,
    ACTIONS(334), 1,
      aux_sym_mid_token1,
    STATE(14), 1,
      sym_mid,
  [1218] = 1,
    ACTIONS(336), 2,
      sym__line_break,
      sym__lwsp,
  [1223] = 2,
    ACTIONS(338), 1,
      sym__bodycontent,
    STATE(15), 1,
      sym_fieldbody,
  [1230] = 2,
    ACTIONS(340), 1,
      aux_sym_mid_token1,
    STATE(110), 1,
      sym_footertext,
  [1237] = 2,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(344), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [1244] = 2,
    ACTIONS(346), 1,
      aux_sym_index_token2,
    ACTIONS(348), 1,
      anon_sym_DASH_DASH_DASH,
  [1251] = 2,
    ACTIONS(350), 1,
      anon_sym_index,
    STATE(76), 1,
      sym_index,
  [1258] = 1,
    ACTIONS(352), 1,
      sym_file,
  [1262] = 1,
    ACTIONS(354), 1,
      ts_builtin_sym_end,
  [1266] = 1,
    ACTIONS(356), 1,
      anon_sym_GT,
  [1270] = 1,
    ACTIONS(358), 1,
      anon_sym_COLON,
  [1274] = 1,
    ACTIONS(360), 1,
      anon_sym_DQUOTE,
  [1278] = 1,
    ACTIONS(362), 1,
      ts_builtin_sym_end,
  [1282] = 1,
    ACTIONS(364), 1,
      sym_dirname,
  [1286] = 1,
    ACTIONS(366), 1,
      sym__bodycontent,
  [1290] = 1,
    ACTIONS(368), 1,
      anon_sym_COLON,
  [1294] = 1,
    ACTIONS(370), 1,
      anon_sym_AT,
  [1298] = 1,
    ACTIONS(372), 1,
      aux_sym_quotedstring_token1,
  [1302] = 1,
    ACTIONS(374), 1,
      aux_sym_index_token1,
  [1306] = 1,
    ACTIONS(376), 1,
      anon_sym_DASH_DASH_DASH,
  [1310] = 1,
    ACTIONS(378), 1,
      sym_file,
  [1314] = 1,
    ACTIONS(380), 1,
      sym_dirname,
  [1318] = 1,
    ACTIONS(382), 1,
      aux_sym_mid_token1,
  [1322] = 1,
    ACTIONS(384), 1,
      aux_sym_index_token1,
  [1326] = 1,
    ACTIONS(386), 1,
      anon_sym_COMMA,
  [1330] = 1,
    ACTIONS(71), 1,
      sym__lwsp,
  [1334] = 1,
    ACTIONS(388), 1,
      anon_sym_DASH_DASH_DASH,
  [1338] = 1,
    ACTIONS(390), 1,
      sym_filetype,
  [1342] = 1,
    ACTIONS(392), 1,
      ts_builtin_sym_end,
  [1346] = 1,
    ACTIONS(394), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [1350] = 1,
    ACTIONS(396), 1,
      sym_filetype,
  [1354] = 1,
    ACTIONS(398), 1,
      sym__line_break,
  [1358] = 1,
    ACTIONS(400), 1,
      anon_sym_COLON,
  [1362] = 1,
    ACTIONS(402), 1,
      anon_sym_COLON,
  [1366] = 1,
    ACTIONS(300), 1,
      ts_builtin_sym_end,
  [1370] = 1,
    ACTIONS(404), 1,
      sym__line_break,
  [1374] = 1,
    ACTIONS(406), 1,
      anon_sym_COLON,
  [1378] = 1,
    ACTIONS(408), 1,
      sym__line_break,
  [1382] = 1,
    ACTIONS(410), 1,
      sym__line_break,
  [1386] = 1,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
  [1390] = 1,
    ACTIONS(65), 1,
      sym__lwsp,
  [1394] = 1,
    ACTIONS(412), 1,
      anon_sym_COLON,
  [1398] = 1,
    ACTIONS(414), 1,
      sym_line,
  [1402] = 1,
    ACTIONS(308), 1,
      anon_sym_GT,
  [1406] = 1,
    ACTIONS(416), 1,
      anon_sym_COLON,
  [1410] = 1,
    ACTIONS(418), 1,
      anon_sym_COLON,
  [1414] = 1,
    ACTIONS(420), 1,
      anon_sym_COLON,
  [1418] = 1,
    ACTIONS(422), 1,
      anon_sym_COLON,
  [1422] = 1,
    ACTIONS(424), 1,
      anon_sym_COLON,
  [1426] = 1,
    ACTIONS(426), 1,
      anon_sym_DQUOTE,
  [1430] = 1,
    ACTIONS(428), 1,
      anon_sym_COLON,
  [1434] = 1,
    ACTIONS(430), 1,
      ts_builtin_sym_end,
  [1438] = 1,
    ACTIONS(432), 1,
      anon_sym_DQUOTE,
  [1442] = 1,
    ACTIONS(434), 1,
      aux_sym_quotedstring_token1,
  [1446] = 1,
    ACTIONS(436), 1,
      anon_sym_AT,
  [1450] = 1,
    ACTIONS(438), 1,
      aux_sym_quotedstring_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 60,
  [SMALL_STATE(4)] = 120,
  [SMALL_STATE(5)] = 144,
  [SMALL_STATE(6)] = 168,
  [SMALL_STATE(7)] = 192,
  [SMALL_STATE(8)] = 216,
  [SMALL_STATE(9)] = 237,
  [SMALL_STATE(10)] = 258,
  [SMALL_STATE(11)] = 279,
  [SMALL_STATE(12)] = 300,
  [SMALL_STATE(13)] = 321,
  [SMALL_STATE(14)] = 342,
  [SMALL_STATE(15)] = 363,
  [SMALL_STATE(16)] = 384,
  [SMALL_STATE(17)] = 416,
  [SMALL_STATE(18)] = 446,
  [SMALL_STATE(19)] = 475,
  [SMALL_STATE(20)] = 504,
  [SMALL_STATE(21)] = 531,
  [SMALL_STATE(22)] = 552,
  [SMALL_STATE(23)] = 573,
  [SMALL_STATE(24)] = 589,
  [SMALL_STATE(25)] = 605,
  [SMALL_STATE(26)] = 622,
  [SMALL_STATE(27)] = 641,
  [SMALL_STATE(28)] = 660,
  [SMALL_STATE(29)] = 671,
  [SMALL_STATE(30)] = 688,
  [SMALL_STATE(31)] = 703,
  [SMALL_STATE(32)] = 718,
  [SMALL_STATE(33)] = 737,
  [SMALL_STATE(34)] = 749,
  [SMALL_STATE(35)] = 763,
  [SMALL_STATE(36)] = 775,
  [SMALL_STATE(37)] = 791,
  [SMALL_STATE(38)] = 807,
  [SMALL_STATE(39)] = 819,
  [SMALL_STATE(40)] = 829,
  [SMALL_STATE(41)] = 839,
  [SMALL_STATE(42)] = 849,
  [SMALL_STATE(43)] = 859,
  [SMALL_STATE(44)] = 875,
  [SMALL_STATE(45)] = 889,
  [SMALL_STATE(46)] = 899,
  [SMALL_STATE(47)] = 909,
  [SMALL_STATE(48)] = 922,
  [SMALL_STATE(49)] = 935,
  [SMALL_STATE(50)] = 942,
  [SMALL_STATE(51)] = 955,
  [SMALL_STATE(52)] = 966,
  [SMALL_STATE(53)] = 973,
  [SMALL_STATE(54)] = 986,
  [SMALL_STATE(55)] = 997,
  [SMALL_STATE(56)] = 1008,
  [SMALL_STATE(57)] = 1021,
  [SMALL_STATE(58)] = 1027,
  [SMALL_STATE(59)] = 1037,
  [SMALL_STATE(60)] = 1047,
  [SMALL_STATE(61)] = 1053,
  [SMALL_STATE(62)] = 1063,
  [SMALL_STATE(63)] = 1073,
  [SMALL_STATE(64)] = 1083,
  [SMALL_STATE(65)] = 1089,
  [SMALL_STATE(66)] = 1095,
  [SMALL_STATE(67)] = 1101,
  [SMALL_STATE(68)] = 1107,
  [SMALL_STATE(69)] = 1117,
  [SMALL_STATE(70)] = 1123,
  [SMALL_STATE(71)] = 1129,
  [SMALL_STATE(72)] = 1135,
  [SMALL_STATE(73)] = 1145,
  [SMALL_STATE(74)] = 1151,
  [SMALL_STATE(75)] = 1157,
  [SMALL_STATE(76)] = 1167,
  [SMALL_STATE(77)] = 1177,
  [SMALL_STATE(78)] = 1183,
  [SMALL_STATE(79)] = 1190,
  [SMALL_STATE(80)] = 1197,
  [SMALL_STATE(81)] = 1204,
  [SMALL_STATE(82)] = 1211,
  [SMALL_STATE(83)] = 1218,
  [SMALL_STATE(84)] = 1223,
  [SMALL_STATE(85)] = 1230,
  [SMALL_STATE(86)] = 1237,
  [SMALL_STATE(87)] = 1244,
  [SMALL_STATE(88)] = 1251,
  [SMALL_STATE(89)] = 1258,
  [SMALL_STATE(90)] = 1262,
  [SMALL_STATE(91)] = 1266,
  [SMALL_STATE(92)] = 1270,
  [SMALL_STATE(93)] = 1274,
  [SMALL_STATE(94)] = 1278,
  [SMALL_STATE(95)] = 1282,
  [SMALL_STATE(96)] = 1286,
  [SMALL_STATE(97)] = 1290,
  [SMALL_STATE(98)] = 1294,
  [SMALL_STATE(99)] = 1298,
  [SMALL_STATE(100)] = 1302,
  [SMALL_STATE(101)] = 1306,
  [SMALL_STATE(102)] = 1310,
  [SMALL_STATE(103)] = 1314,
  [SMALL_STATE(104)] = 1318,
  [SMALL_STATE(105)] = 1322,
  [SMALL_STATE(106)] = 1326,
  [SMALL_STATE(107)] = 1330,
  [SMALL_STATE(108)] = 1334,
  [SMALL_STATE(109)] = 1338,
  [SMALL_STATE(110)] = 1342,
  [SMALL_STATE(111)] = 1346,
  [SMALL_STATE(112)] = 1350,
  [SMALL_STATE(113)] = 1354,
  [SMALL_STATE(114)] = 1358,
  [SMALL_STATE(115)] = 1362,
  [SMALL_STATE(116)] = 1366,
  [SMALL_STATE(117)] = 1370,
  [SMALL_STATE(118)] = 1374,
  [SMALL_STATE(119)] = 1378,
  [SMALL_STATE(120)] = 1382,
  [SMALL_STATE(121)] = 1386,
  [SMALL_STATE(122)] = 1390,
  [SMALL_STATE(123)] = 1394,
  [SMALL_STATE(124)] = 1398,
  [SMALL_STATE(125)] = 1402,
  [SMALL_STATE(126)] = 1406,
  [SMALL_STATE(127)] = 1410,
  [SMALL_STATE(128)] = 1414,
  [SMALL_STATE(129)] = 1418,
  [SMALL_STATE(130)] = 1422,
  [SMALL_STATE(131)] = 1426,
  [SMALL_STATE(132)] = 1430,
  [SMALL_STATE(133)] = 1434,
  [SMALL_STATE(134)] = 1438,
  [SMALL_STATE(135)] = 1442,
  [SMALL_STATE(136)] = 1446,
  [SMALL_STATE(137)] = 1450,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headers, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headers, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(92),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(118),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(115),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(126),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(127),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(128),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(123),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(114),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(97),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(129),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addresslist, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addresslist, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldbody, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fieldbody, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addresslist, 3),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addresslist, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldbody, 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fieldbody, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subject, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addressheader, 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addressheader, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dateheader, 3),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dateheader, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subjectheader, 3),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subjectheader, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mid, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mid, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_midheader, 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_midheader, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headerextra, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headerextra, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_emailbody, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_emailbody, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_emailbody_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_emailbody_repeat1, 2), SHIFT_REPEAT(22),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_emailbody_repeat1, 2), SHIFT_REPEAT(124),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_emailbody_repeat1, 2),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_emailbody_repeat1, 2), SHIFT_REPEAT(60),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diff_repeat1, 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_diff_repeat1, 2),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diff_repeat1, 2), SHIFT_REPEAT(113),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diff, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_diff, 1),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_phrase_repeat1, 1),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local, 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_phrase_repeat1, 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_phrase_repeat1, 2),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_phrase_repeat1, 2), SHIFT_REPEAT(30),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_phrase_repeat1, 2), SHIFT_REPEAT(99),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_phrase, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_addresslist_repeat1, 2), SHIFT_REPEAT(18),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_addresslist_repeat1, 2), SHIFT_REPEAT(122),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_addresslist_repeat1, 2), SHIFT_REPEAT(47),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_domain_repeat1, 2),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_domain_repeat1, 2), SHIFT_REPEAT(55),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fieldbody_repeat1, 2), SHIFT_REPEAT(107),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fieldbody_repeat1, 2), SHIFT_REPEAT(48),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_git, 5),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_git, 5),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newfile, 6),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_newfile, 6),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quotedstring, 3),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quotedstring, 3),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_patch, 2),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_patch, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newfile, 4),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_newfile, 4),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted1, 2),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted1, 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seperator, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_seperator_repeat1, 2),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seperator_repeat1, 2), SHIFT_REPEAT(122),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seperator_repeat1, 2), SHIFT_REPEAT(53),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_domain_repeat1, 2), SHIFT_REPEAT(51),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seperator_repeat1, 2), SHIFT_REPEAT(107),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seperator_repeat1, 2), SHIFT_REPEAT(56),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 2),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 3),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local, 1),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addrspec, 3),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_addresslist_repeat1, 3),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailbox, 1),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_addresslist_repeat1, 2),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailbox, 2),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ia, 1),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local, 2),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_routeaddr, 3),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fieldbody_repeat1, 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oldfile, 3),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 4),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footertext, 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 1),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 4),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replyto, 1),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 3),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 5),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 2),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oldfile, 5),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sender, 1),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bcc, 1),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_to, 1),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cc, 1),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addrkind, 1),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [430] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
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
