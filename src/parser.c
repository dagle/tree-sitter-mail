#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 186
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 119
#define ALIAS_COUNT 0
#define TOKEN_COUNT 54
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
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
  sym__quote = 24,
  anon_sym_DASH_DASH_LF = 25,
  anon_sym_diff_DASH_DASH = 26,
  anon_sym_git = 27,
  anon_sym_cc = 28,
  anon_sym_combined = 29,
  sym__hash = 30,
  aux_sym__mode_token1 = 31,
  sym__path = 32,
  anon_sym_old = 33,
  anon_sym_mode = 34,
  anon_sym_new = 35,
  anon_sym_deleted = 36,
  anon_sym_file = 37,
  anon_sym_PLUS_PLUS_PLUS = 38,
  anon_sym_copy = 39,
  anon_sym_from = 40,
  anon_sym_to = 41,
  anon_sym_rename = 42,
  anon_sym_similarity = 43,
  anon_sym_index = 44,
  anon_sym_dissimilarity = 45,
  anon_sym_DOT_DOT = 46,
  sym_dirname = 47,
  sym_file = 48,
  sym_filetype = 49,
  anon_sym_DASH_DASH_DASH = 50,
  aux_sym_diff_token1 = 51,
  sym__line_break = 52,
  sym__lwsp = 53,
  sym_message = 54,
  sym_headers = 55,
  sym_headerextra = 56,
  sym_addressheader = 57,
  sym_dateheader = 58,
  sym_subjectheader = 59,
  sym_midheader = 60,
  sym_addrkind = 61,
  sym_to = 62,
  sym_from = 63,
  sym_cc = 64,
  sym_bcc = 65,
  sym_sender = 66,
  sym_replyto = 67,
  sym_mid = 68,
  sym_subject = 69,
  sym_date = 70,
  sym_fieldbody = 71,
  sym_seperator = 72,
  sym_addresslist = 73,
  sym_ia = 74,
  sym_mailbox = 75,
  sym_routeaddr = 76,
  sym_addrspec = 77,
  sym_domain = 78,
  sym_local = 79,
  sym_phrase = 80,
  sym__word = 81,
  sym_quotedstring = 82,
  sym_emailbody = 83,
  sym_quote1 = 84,
  sym_quote2 = 85,
  sym_quote3 = 86,
  sym_quote4 = 87,
  sym_quote5 = 88,
  sym_quote6 = 89,
  sym__quoted = 90,
  sym_footer = 91,
  sym_footertext = 92,
  sym_git = 93,
  sym_actions = 94,
  sym__mode = 95,
  sym_old = 96,
  sym_newmode = 97,
  sym_deleted = 98,
  sym_newfile = 99,
  sym_copyfrom = 100,
  sym_copyto = 101,
  sym_renamefrom = 102,
  sym_renameto = 103,
  sym_similarity = 104,
  sym_dissimilarity = 105,
  sym_index = 106,
  sym_patch = 107,
  sym_oldfile = 108,
  sym_diff = 109,
  aux_sym_headers_repeat1 = 110,
  aux_sym_fieldbody_repeat1 = 111,
  aux_sym_seperator_repeat1 = 112,
  aux_sym_addresslist_repeat1 = 113,
  aux_sym_domain_repeat1 = 114,
  aux_sym_phrase_repeat1 = 115,
  aux_sym_emailbody_repeat1 = 116,
  aux_sym_git_repeat1 = 117,
  aux_sym_diff_repeat1 = 118,
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
  [sym__quote] = "_quote",
  [anon_sym_DASH_DASH_LF] = "-- \n",
  [anon_sym_diff_DASH_DASH] = "diff --",
  [anon_sym_git] = "git",
  [anon_sym_cc] = "cc",
  [anon_sym_combined] = "combined",
  [sym__hash] = "_hash",
  [aux_sym__mode_token1] = "_mode_token1",
  [sym__path] = "_path",
  [anon_sym_old] = "old",
  [anon_sym_mode] = "mode",
  [anon_sym_new] = "new",
  [anon_sym_deleted] = "deleted",
  [anon_sym_file] = "file",
  [anon_sym_PLUS_PLUS_PLUS] = "+++",
  [anon_sym_copy] = "copy",
  [anon_sym_from] = "from",
  [anon_sym_to] = "to",
  [anon_sym_rename] = "rename",
  [anon_sym_similarity] = "similarity",
  [anon_sym_index] = "index",
  [anon_sym_dissimilarity] = "dissimilarity",
  [anon_sym_DOT_DOT] = "..",
  [sym_dirname] = "dirname",
  [sym_file] = "file",
  [sym_filetype] = "filetype",
  [anon_sym_DASH_DASH_DASH] = "---",
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
  [sym_quote1] = "quote1",
  [sym_quote2] = "quote2",
  [sym_quote3] = "quote3",
  [sym_quote4] = "quote4",
  [sym_quote5] = "quote5",
  [sym_quote6] = "quote6",
  [sym__quoted] = "_quoted",
  [sym_footer] = "footer",
  [sym_footertext] = "footertext",
  [sym_git] = "git",
  [sym_actions] = "actions",
  [sym__mode] = "_mode",
  [sym_old] = "old",
  [sym_newmode] = "newmode",
  [sym_deleted] = "deleted",
  [sym_newfile] = "newfile",
  [sym_copyfrom] = "copyfrom",
  [sym_copyto] = "copyto",
  [sym_renamefrom] = "renamefrom",
  [sym_renameto] = "renameto",
  [sym_similarity] = "similarity",
  [sym_dissimilarity] = "dissimilarity",
  [sym_index] = "index",
  [sym_patch] = "patch",
  [sym_oldfile] = "oldfile",
  [sym_diff] = "diff",
  [aux_sym_headers_repeat1] = "headers_repeat1",
  [aux_sym_fieldbody_repeat1] = "fieldbody_repeat1",
  [aux_sym_seperator_repeat1] = "seperator_repeat1",
  [aux_sym_addresslist_repeat1] = "addresslist_repeat1",
  [aux_sym_domain_repeat1] = "domain_repeat1",
  [aux_sym_phrase_repeat1] = "phrase_repeat1",
  [aux_sym_emailbody_repeat1] = "emailbody_repeat1",
  [aux_sym_git_repeat1] = "git_repeat1",
  [aux_sym_diff_repeat1] = "diff_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_specialFrom_token1] = anon_sym_from,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_dateheader_token1] = aux_sym_dateheader_token1,
  [aux_sym_subjectheader_token1] = aux_sym_subjectheader_token1,
  [aux_sym_midheader_token1] = aux_sym_midheader_token1,
  [aux_sym_to_token1] = anon_sym_to,
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
  [sym__quote] = sym__quote,
  [anon_sym_DASH_DASH_LF] = anon_sym_DASH_DASH_LF,
  [anon_sym_diff_DASH_DASH] = anon_sym_diff_DASH_DASH,
  [anon_sym_git] = anon_sym_git,
  [anon_sym_cc] = anon_sym_cc,
  [anon_sym_combined] = anon_sym_combined,
  [sym__hash] = sym__hash,
  [aux_sym__mode_token1] = aux_sym__mode_token1,
  [sym__path] = sym__path,
  [anon_sym_old] = anon_sym_old,
  [anon_sym_mode] = anon_sym_mode,
  [anon_sym_new] = anon_sym_new,
  [anon_sym_deleted] = anon_sym_deleted,
  [anon_sym_file] = anon_sym_file,
  [anon_sym_PLUS_PLUS_PLUS] = anon_sym_PLUS_PLUS_PLUS,
  [anon_sym_copy] = anon_sym_copy,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_to] = anon_sym_to,
  [anon_sym_rename] = anon_sym_rename,
  [anon_sym_similarity] = anon_sym_similarity,
  [anon_sym_index] = anon_sym_index,
  [anon_sym_dissimilarity] = anon_sym_dissimilarity,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [sym_dirname] = sym_dirname,
  [sym_file] = sym_file,
  [sym_filetype] = sym_filetype,
  [anon_sym_DASH_DASH_DASH] = anon_sym_DASH_DASH_DASH,
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
  [sym_quote1] = sym_quote1,
  [sym_quote2] = sym_quote2,
  [sym_quote3] = sym_quote3,
  [sym_quote4] = sym_quote4,
  [sym_quote5] = sym_quote5,
  [sym_quote6] = sym_quote6,
  [sym__quoted] = sym__quoted,
  [sym_footer] = sym_footer,
  [sym_footertext] = sym_footertext,
  [sym_git] = sym_git,
  [sym_actions] = sym_actions,
  [sym__mode] = sym__mode,
  [sym_old] = sym_old,
  [sym_newmode] = sym_newmode,
  [sym_deleted] = sym_deleted,
  [sym_newfile] = sym_newfile,
  [sym_copyfrom] = sym_copyfrom,
  [sym_copyto] = sym_copyto,
  [sym_renamefrom] = sym_renamefrom,
  [sym_renameto] = sym_renameto,
  [sym_similarity] = sym_similarity,
  [sym_dissimilarity] = sym_dissimilarity,
  [sym_index] = sym_index,
  [sym_patch] = sym_patch,
  [sym_oldfile] = sym_oldfile,
  [sym_diff] = sym_diff,
  [aux_sym_headers_repeat1] = aux_sym_headers_repeat1,
  [aux_sym_fieldbody_repeat1] = aux_sym_fieldbody_repeat1,
  [aux_sym_seperator_repeat1] = aux_sym_seperator_repeat1,
  [aux_sym_addresslist_repeat1] = aux_sym_addresslist_repeat1,
  [aux_sym_domain_repeat1] = aux_sym_domain_repeat1,
  [aux_sym_phrase_repeat1] = aux_sym_phrase_repeat1,
  [aux_sym_emailbody_repeat1] = aux_sym_emailbody_repeat1,
  [aux_sym_git_repeat1] = aux_sym_git_repeat1,
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
  [sym__quote] = {
    .visible = false,
    .named = true,
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
  [sym__hash] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__mode_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__path] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_old] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_new] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deleted] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_file] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_copy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rename] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_similarity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_index] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dissimilarity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
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
  [sym_git] = {
    .visible = true,
    .named = true,
  },
  [sym_actions] = {
    .visible = true,
    .named = true,
  },
  [sym__mode] = {
    .visible = false,
    .named = true,
  },
  [sym_old] = {
    .visible = true,
    .named = true,
  },
  [sym_newmode] = {
    .visible = true,
    .named = true,
  },
  [sym_deleted] = {
    .visible = true,
    .named = true,
  },
  [sym_newfile] = {
    .visible = true,
    .named = true,
  },
  [sym_copyfrom] = {
    .visible = true,
    .named = true,
  },
  [sym_copyto] = {
    .visible = true,
    .named = true,
  },
  [sym_renamefrom] = {
    .visible = true,
    .named = true,
  },
  [sym_renameto] = {
    .visible = true,
    .named = true,
  },
  [sym_similarity] = {
    .visible = true,
    .named = true,
  },
  [sym_dissimilarity] = {
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
  [aux_sym_git_repeat1] = {
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
  [43] = 23,
  [44] = 24,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 27,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 42,
  [56] = 56,
  [57] = 57,
  [58] = 40,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 59,
  [71] = 71,
  [72] = 72,
  [73] = 53,
  [74] = 74,
  [75] = 67,
  [76] = 76,
  [77] = 77,
  [78] = 74,
  [79] = 76,
  [80] = 80,
  [81] = 80,
  [82] = 72,
  [83] = 83,
  [84] = 84,
  [85] = 67,
  [86] = 86,
  [87] = 61,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 86,
  [97] = 97,
  [98] = 69,
  [99] = 93,
  [100] = 77,
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
  [122] = 122,
  [123] = 123,
  [124] = 124,
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
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 157,
  [160] = 160,
  [161] = 161,
  [162] = 101,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 122,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 145,
  [178] = 178,
  [179] = 122,
  [180] = 166,
  [181] = 165,
  [182] = 134,
  [183] = 144,
  [184] = 166,
  [185] = 149,
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
      if (eof) ADVANCE(89);
      if (lookahead == '"') ADVANCE(160);
      if (lookahead == '+') ADVANCE(212);
      if (lookahead == ',') ADVANCE(152);
      if (lookahead == '-') ADVANCE(215);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == '<') ADVANCE(153);
      if (lookahead == '>') ADVANCE(154);
      if (lookahead == '@') ADVANCE(155);
      if (lookahead == 'D') ADVANCE(192);
      if (lookahead == 'R') ADVANCE(193);
      if (lookahead == 'd') ADVANCE(189);
      if (lookahead == 'n') ADVANCE(190);
      if (lookahead == 'o') ADVANCE(191);
      if (lookahead == 'r') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(0)
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(194);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(195);
      if (lookahead == ';' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(251);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(163);
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') ADVANCE(102);
      if (lookahead == ' ') ADVANCE(102);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == ':') ADVANCE(176);
      if (lookahead == '>') ADVANCE(149);
      if (lookahead == 'D') ADVANCE(115);
      if (lookahead == 'd') ADVANCE(113);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(120);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(118);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(142);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(125);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(126);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(127);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(138);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(179);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') ADVANCE(165);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '>') ADVANCE(177);
      if (lookahead == 'd') ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(165);
      if (lookahead != 0) ADVANCE(176);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '+') ADVANCE(262);
      if (lookahead == '-') ADVANCE(266);
      if (lookahead == 'c') ADVANCE(299);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'i') ADVANCE(297);
      if (lookahead == 'n') ADVANCE(275);
      if (lookahead == 'o') ADVANCE(290);
      if (lookahead == 'r') ADVANCE(278);
      if (lookahead == 's') ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(255);
      if (lookahead != 0) ADVANCE(313);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(150);
      if (lookahead != 0) ADVANCE(151);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(256);
      if (lookahead != 0) ADVANCE(313);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '\r') ADVANCE(166);
      if (lookahead == '>') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(166);
      if (lookahead != 0) ADVANCE(176);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '\r') ADVANCE(257);
      if (lookahead == '-') ADVANCE(265);
      if (lookahead == '>') ADVANCE(178);
      if (lookahead == 'd') ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(257);
      if (lookahead != 0) ADVANCE(313);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(258);
      if (lookahead != 0) ADVANCE(313);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(100);
      if (lookahead != 0) ADVANCE(101);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(167);
      if (lookahead != 0) ADVANCE(176);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '-') ADVANCE(253);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(160);
      if (lookahead == '+') ADVANCE(212);
      if (lookahead == ',') ADVANCE(152);
      if (lookahead == '-') ADVANCE(215);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == '<') ADVANCE(153);
      if (lookahead == '>') ADVANCE(154);
      if (lookahead == '@') ADVANCE(155);
      if (lookahead == 'D') ADVANCE(192);
      if (lookahead == 'R') ADVANCE(193);
      if (lookahead == 'd') ADVANCE(189);
      if (lookahead == 'n') ADVANCE(190);
      if (lookahead == 'o') ADVANCE(191);
      if (lookahead == 'r') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(13)
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(194);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(195);
      if (lookahead == ';' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(251);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(160);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == '<') ADVANCE(153);
      if (lookahead == '@') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(158);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(14)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(159);
      END_STATE();
    case 15:
      if (lookahead == '+') ADVANCE(201);
      END_STATE();
    case 16:
      if (lookahead == '+') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(12);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(209);
      END_STATE();
    case 20:
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == '/') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 25:
      if (lookahead == 'b') ADVANCE(44);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(183);
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(196);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(199);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(184);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(35);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(36);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(54);
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 56:
      if (lookahead == 'm') ADVANCE(25);
      if (lookahead == 'p') ADVANCE(77);
      END_STATE();
    case 57:
      if (lookahead == 'm') ADVANCE(203);
      END_STATE();
    case 58:
      if (lookahead == 'm') ADVANCE(45);
      END_STATE();
    case 59:
      if (lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 60:
      if (lookahead == 'm') ADVANCE(49);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(204);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 68:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 69:
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 70:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(182);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 75:
      if (lookahead == 'w') ADVANCE(198);
      END_STATE();
    case 76:
      if (lookahead == 'x') ADVANCE(207);
      END_STATE();
    case 77:
      if (lookahead == 'y') ADVANCE(202);
      END_STATE();
    case 78:
      if (lookahead == 'y') ADVANCE(206);
      END_STATE();
    case 79:
      if (lookahead == 'y') ADVANCE(208);
      END_STATE();
    case 80:
      if (lookahead == '\r' ||
          lookahead == ' ') ADVANCE(114);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(120);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(118);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(115);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(142);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(125);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(126);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(127);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(80)
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 81:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(81)
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(251);
      END_STATE();
    case 82:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(82)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(185);
      END_STATE();
    case 83:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(83)
      if (lookahead != 0) ADVANCE(252);
      END_STATE();
    case 84:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(21);
      END_STATE();
    case 85:
      if (eof) ADVANCE(89);
      if (lookahead == '\t') ADVANCE(163);
      if (lookahead == '\n') SKIP(85)
      if (lookahead == '\r') ADVANCE(102);
      if (lookahead == ' ') ADVANCE(102);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == ':') ADVANCE(176);
      if (lookahead == '>') ADVANCE(149);
      if (lookahead == 'D') ADVANCE(115);
      if (lookahead == 'd') ADVANCE(113);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(120);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(118);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(142);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(125);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(126);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(127);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(138);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 86:
      if (eof) ADVANCE(89);
      if (lookahead == '\n') SKIP(86)
      if (lookahead == '\r') ADVANCE(165);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '>') ADVANCE(177);
      if (lookahead == 'd') ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(165);
      if (lookahead != 0) ADVANCE(176);
      END_STATE();
    case 87:
      if (eof) ADVANCE(89);
      if (lookahead == '\n') SKIP(87)
      if (lookahead == '\r') ADVANCE(257);
      if (lookahead == '-') ADVANCE(265);
      if (lookahead == '>') ADVANCE(178);
      if (lookahead == 'd') ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(257);
      if (lookahead != 0) ADVANCE(313);
      END_STATE();
    case 88:
      if (eof) ADVANCE(89);
      if (lookahead == '"') ADVANCE(160);
      if (lookahead == '+') ADVANCE(16);
      if (lookahead == ',') ADVANCE(152);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == '<') ADVANCE(153);
      if (lookahead == '>') ADVANCE(154);
      if (lookahead == '@') ADVANCE(155);
      if (lookahead == 'c') ADVANCE(26);
      if (lookahead == 'd') ADVANCE(38);
      if (lookahead == 'f') ADVANCE(48);
      if (lookahead == 'g') ADVANCE(42);
      if (lookahead == 'i') ADVANCE(61);
      if (lookahead == 'm') ADVANCE(66);
      if (lookahead == 'n') ADVANCE(33);
      if (lookahead == 'o') ADVANCE(51);
      if (lookahead == 'r') ADVANCE(37);
      if (lookahead == 's') ADVANCE(43);
      if (lookahead == 't') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(88)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_specialFrom_token1);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_dateheader_token1);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_subjectheader_token1);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_midheader_token1);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_to_token1);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_cc_token1);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_bcc_token1);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_sender_token1);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_replyto_token1);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_mid_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_mid_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == '\t') ADVANCE(163);
      if (lookahead == '\r') ADVANCE(102);
      if (lookahead == ' ') ADVANCE(102);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == '>') ADVANCE(149);
      if (lookahead == 'D') ADVANCE(115);
      if (lookahead == 'd') ADVANCE(113);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(120);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(118);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(142);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(125);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(126);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(127);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == ' ') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == ' ') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == '-') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == '-') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == '-') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == '-') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == '-') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'f') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'f') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'i') ADVANCE(112);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == '\r' ||
          lookahead == ' ') ADVANCE(114);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(120);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(118);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(115);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(142);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(125);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(126);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(127);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(136);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__bodycontent);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(151);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__bodycontent);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__specails);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(158);
      if (!sym__atom_character_set_1(lookahead)) ADVANCE(159);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__atom);
      if (!sym__atom_character_set_1(lookahead)) ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_quotedstring_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(162);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_quotedstring_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == '\t') ADVANCE(163);
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') ADVANCE(102);
      if (lookahead == ' ') ADVANCE(102);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == ':') ADVANCE(176);
      if (lookahead == '>') ADVANCE(149);
      if (lookahead == 'D') ADVANCE(115);
      if (lookahead == 'd') ADVANCE(113);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(120);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(118);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(142);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(125);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(126);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(127);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(138);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead != 0) ADVANCE(176);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') ADVANCE(165);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '>') ADVANCE(177);
      if (lookahead == 'd') ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(165);
      if (lookahead != 0) ADVANCE(176);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '\r') ADVANCE(166);
      if (lookahead == '>') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(166);
      if (lookahead != 0) ADVANCE(176);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(167);
      if (lookahead != 0) ADVANCE(176);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == ' ') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == ' ') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == '-') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == '-') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == '-') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == 'f') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == 'f') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == 'i') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__quote);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__quote);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_LF);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_diff_DASH_DASH);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_diff_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_git);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_cc);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_combined);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__hash);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__mode_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__path);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__path);
      if (lookahead == 'E') ADVANCE(243);
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__path);
      if (lookahead == 'e') ADVANCE(223);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(247);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__path);
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__path);
      if (lookahead == 'l') ADVANCE(218);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__path);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(247);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__path);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__path);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__path);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(241);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(229);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_old);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_mode);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_deleted);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_copy);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_rename);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_similarity);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_index);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_dissimilarity);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_dirname);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '/') ADVANCE(21);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == '+') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(251);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == '+') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(251);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == '-') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(251);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == '-') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(251);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == '-') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(251);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == '-') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(251);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'a') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(251);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'd') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(251);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'd') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(251);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'e') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(251);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'e') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(251);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'e') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(251);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'l') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(251);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'm') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(251);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'n') ADVANCE(217);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(251);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 't') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(251);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'w') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(251);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(251);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(251);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(251);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(251);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(251);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(251);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(251);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(251);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(251);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(251);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(251);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(251);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(251);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(251);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(251);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(251);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(251);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(251);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(251);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(251);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(251);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(251);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_file);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(251);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_file);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '.' &&
          lookahead != '/') ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_filetype);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead != 0) ADVANCE(313);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '+') ADVANCE(262);
      if (lookahead == '-') ADVANCE(266);
      if (lookahead == 'c') ADVANCE(299);
      if (lookahead == 'd') ADVANCE(279);
      if (lookahead == 'i') ADVANCE(297);
      if (lookahead == 'n') ADVANCE(275);
      if (lookahead == 'o') ADVANCE(290);
      if (lookahead == 'r') ADVANCE(278);
      if (lookahead == 's') ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(255);
      if (lookahead != 0) ADVANCE(313);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(256);
      if (lookahead != 0) ADVANCE(313);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '\r') ADVANCE(257);
      if (lookahead == '-') ADVANCE(265);
      if (lookahead == '>') ADVANCE(178);
      if (lookahead == 'd') ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(257);
      if (lookahead != 0) ADVANCE(313);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(258);
      if (lookahead != 0) ADVANCE(313);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == ' ') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == ' ') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == '+') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == '+') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == '-') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == '-') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == '-') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == '-') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == 'a') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == 'a') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == 'a') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == 'd') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == 'd') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == 'd') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == 'e') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == 'e') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == 'e') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == 'e') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == 'e') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == 'e') ADVANCE(292);
      if (lookahead == 'i') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == 'e') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == 'f') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == 'f') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == 'i') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == 'i') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == 'i') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == 'i') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == 'i') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == 'i') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == 'i') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == 'l') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == 'l') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == 'l') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == 'l') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == 'm') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == 'm') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == 'm') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == 'n') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == 'n') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == 'o') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == 'p') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == 'r') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == 'r') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == 's') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == 's') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == 't') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == 't') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == 't') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == 'w') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == 'x') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == 'y') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == 'y') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead == 'y') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_diff_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 80},
  [2] = {.lex_state = 85, .external_lex_state = 2},
  [3] = {.lex_state = 85, .external_lex_state = 2},
  [4] = {.lex_state = 88},
  [5] = {.lex_state = 88},
  [6] = {.lex_state = 88},
  [7] = {.lex_state = 86, .external_lex_state = 2},
  [8] = {.lex_state = 85, .external_lex_state = 1},
  [9] = {.lex_state = 85, .external_lex_state = 1},
  [10] = {.lex_state = 85, .external_lex_state = 1},
  [11] = {.lex_state = 85, .external_lex_state = 1},
  [12] = {.lex_state = 85, .external_lex_state = 2},
  [13] = {.lex_state = 85, .external_lex_state = 2},
  [14] = {.lex_state = 85, .external_lex_state = 2},
  [15] = {.lex_state = 85, .external_lex_state = 2},
  [16] = {.lex_state = 85, .external_lex_state = 2},
  [17] = {.lex_state = 86},
  [18] = {.lex_state = 85, .external_lex_state = 2},
  [19] = {.lex_state = 85, .external_lex_state = 2},
  [20] = {.lex_state = 85, .external_lex_state = 2},
  [21] = {.lex_state = 86},
  [22] = {.lex_state = 86},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 88},
  [26] = {.lex_state = 14},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 88},
  [29] = {.lex_state = 88},
  [30] = {.lex_state = 88},
  [31] = {.lex_state = 88},
  [32] = {.lex_state = 88},
  [33] = {.lex_state = 88},
  [34] = {.lex_state = 14},
  [35] = {.lex_state = 88},
  [36] = {.lex_state = 14},
  [37] = {.lex_state = 88},
  [38] = {.lex_state = 88},
  [39] = {.lex_state = 88},
  [40] = {.lex_state = 88},
  [41] = {.lex_state = 88},
  [42] = {.lex_state = 88},
  [43] = {.lex_state = 87},
  [44] = {.lex_state = 87},
  [45] = {.lex_state = 14},
  [46] = {.lex_state = 88, .external_lex_state = 1},
  [47] = {.lex_state = 14},
  [48] = {.lex_state = 87},
  [49] = {.lex_state = 88, .external_lex_state = 1},
  [50] = {.lex_state = 88, .external_lex_state = 1},
  [51] = {.lex_state = 14},
  [52] = {.lex_state = 14},
  [53] = {.lex_state = 88, .external_lex_state = 1},
  [54] = {.lex_state = 86},
  [55] = {.lex_state = 86},
  [56] = {.lex_state = 86},
  [57] = {.lex_state = 0, .external_lex_state = 1},
  [58] = {.lex_state = 86},
  [59] = {.lex_state = 14},
  [60] = {.lex_state = 86},
  [61] = {.lex_state = 88, .external_lex_state = 1},
  [62] = {.lex_state = 86},
  [63] = {.lex_state = 86},
  [64] = {.lex_state = 86},
  [65] = {.lex_state = 0, .external_lex_state = 1},
  [66] = {.lex_state = 86},
  [67] = {.lex_state = 14},
  [68] = {.lex_state = 86},
  [69] = {.lex_state = 88, .external_lex_state = 1},
  [70] = {.lex_state = 14},
  [71] = {.lex_state = 0, .external_lex_state = 1},
  [72] = {.lex_state = 88, .external_lex_state = 1},
  [73] = {.lex_state = 88},
  [74] = {.lex_state = 14},
  [75] = {.lex_state = 88, .external_lex_state = 1},
  [76] = {.lex_state = 5, .external_lex_state = 1},
  [77] = {.lex_state = 88, .external_lex_state = 1},
  [78] = {.lex_state = 14},
  [79] = {.lex_state = 88, .external_lex_state = 1},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 5, .external_lex_state = 1},
  [83] = {.lex_state = 88},
  [84] = {.lex_state = 88},
  [85] = {.lex_state = 88},
  [86] = {.lex_state = 9},
  [87] = {.lex_state = 88},
  [88] = {.lex_state = 88},
  [89] = {.lex_state = 88, .external_lex_state = 1},
  [90] = {.lex_state = 88, .external_lex_state = 1},
  [91] = {.lex_state = 88},
  [92] = {.lex_state = 88, .external_lex_state = 1},
  [93] = {.lex_state = 5, .external_lex_state = 1},
  [94] = {.lex_state = 88},
  [95] = {.lex_state = 88, .external_lex_state = 1},
  [96] = {.lex_state = 9},
  [97] = {.lex_state = 88, .external_lex_state = 1},
  [98] = {.lex_state = 88},
  [99] = {.lex_state = 88, .external_lex_state = 1},
  [100] = {.lex_state = 88},
  [101] = {.lex_state = 88, .external_lex_state = 1},
  [102] = {.lex_state = 88, .external_lex_state = 1},
  [103] = {.lex_state = 10},
  [104] = {.lex_state = 7},
  [105] = {.lex_state = 10},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 7},
  [108] = {.lex_state = 7},
  [109] = {.lex_state = 88},
  [110] = {.lex_state = 88},
  [111] = {.lex_state = 7},
  [112] = {.lex_state = 88},
  [113] = {.lex_state = 10},
  [114] = {.lex_state = 88},
  [115] = {.lex_state = 0, .external_lex_state = 1},
  [116] = {.lex_state = 88},
  [117] = {.lex_state = 10},
  [118] = {.lex_state = 88},
  [119] = {.lex_state = 88},
  [120] = {.lex_state = 88},
  [121] = {.lex_state = 7},
  [122] = {.lex_state = 88},
  [123] = {.lex_state = 88},
  [124] = {.lex_state = 18},
  [125] = {.lex_state = 18},
  [126] = {.lex_state = 18},
  [127] = {.lex_state = 18},
  [128] = {.lex_state = 11},
  [129] = {.lex_state = 88},
  [130] = {.lex_state = 18},
  [131] = {.lex_state = 88},
  [132] = {.lex_state = 20},
  [133] = {.lex_state = 88},
  [134] = {.lex_state = 81},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 88},
  [137] = {.lex_state = 88},
  [138] = {.lex_state = 82},
  [139] = {.lex_state = 88},
  [140] = {.lex_state = 81},
  [141] = {.lex_state = 88},
  [142] = {.lex_state = 88},
  [143] = {.lex_state = 82},
  [144] = {.lex_state = 83},
  [145] = {.lex_state = 0, .external_lex_state = 2},
  [146] = {.lex_state = 88},
  [147] = {.lex_state = 88},
  [148] = {.lex_state = 88},
  [149] = {.lex_state = 20},
  [150] = {.lex_state = 88},
  [151] = {.lex_state = 88},
  [152] = {.lex_state = 88},
  [153] = {.lex_state = 88},
  [154] = {.lex_state = 83},
  [155] = {.lex_state = 88},
  [156] = {.lex_state = 88},
  [157] = {.lex_state = 0, .external_lex_state = 3},
  [158] = {.lex_state = 88},
  [159] = {.lex_state = 0, .external_lex_state = 3},
  [160] = {.lex_state = 88},
  [161] = {.lex_state = 88},
  [162] = {.lex_state = 88},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 5},
  [165] = {.lex_state = 88},
  [166] = {.lex_state = 161},
  [167] = {.lex_state = 10},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0, .external_lex_state = 2},
  [172] = {.lex_state = 0, .external_lex_state = 2},
  [173] = {.lex_state = 88},
  [174] = {.lex_state = 0, .external_lex_state = 2},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 88},
  [177] = {.lex_state = 0, .external_lex_state = 2},
  [178] = {.lex_state = 88},
  [179] = {.lex_state = 88},
  [180] = {.lex_state = 161},
  [181] = {.lex_state = 88},
  [182] = {.lex_state = 81},
  [183] = {.lex_state = 83},
  [184] = {.lex_state = 161},
  [185] = {.lex_state = 20},
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
    [aux_sym_sender_token1] = ACTIONS(1),
    [aux_sym_replyto_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym__specails] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym__quote] = ACTIONS(1),
    [aux_sym__mode_token1] = ACTIONS(1),
    [sym__path] = ACTIONS(1),
    [anon_sym_old] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_deleted] = ACTIONS(1),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_rename] = ACTIONS(1),
    [sym_file] = ACTIONS(1),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(1),
    [sym__line_break] = ACTIONS(1),
    [sym__lwsp] = ACTIONS(1),
  },
  [1] = {
    [sym_message] = STATE(135),
    [sym_headers] = STATE(7),
    [sym_headerextra] = STATE(2),
    [sym_addressheader] = STATE(2),
    [sym_dateheader] = STATE(2),
    [sym_subjectheader] = STATE(2),
    [sym_midheader] = STATE(2),
    [sym_addrkind] = STATE(178),
    [sym_to] = STATE(176),
    [sym_from] = STATE(176),
    [sym_cc] = STATE(176),
    [sym_bcc] = STATE(176),
    [sym_sender] = STATE(176),
    [sym_replyto] = STATE(176),
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
    STATE(178), 1,
      sym_addrkind,
    ACTIONS(23), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(25), 4,
      sym_line,
      sym__quote,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
    STATE(3), 6,
      sym_headerextra,
      sym_addressheader,
      sym_dateheader,
      sym_subjectheader,
      sym_midheader,
      aux_sym_headers_repeat1,
    STATE(176), 6,
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
    STATE(178), 1,
      sym_addrkind,
    ACTIONS(27), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(59), 4,
      sym_line,
      sym__quote,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
    STATE(3), 6,
      sym_headerextra,
      sym_addressheader,
      sym_dateheader,
      sym_subjectheader,
      sym_midheader,
      aux_sym_headers_repeat1,
    STATE(176), 6,
      sym_to,
      sym_from,
      sym_cc,
      sym_bcc,
      sym_sender,
      sym_replyto,
  [120] = 14,
    ACTIONS(61), 1,
      anon_sym_old,
    ACTIONS(63), 1,
      anon_sym_new,
    ACTIONS(65), 1,
      anon_sym_deleted,
    ACTIONS(67), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(69), 1,
      anon_sym_copy,
    ACTIONS(71), 1,
      anon_sym_rename,
    ACTIONS(73), 1,
      anon_sym_similarity,
    ACTIONS(75), 1,
      anon_sym_index,
    ACTIONS(77), 1,
      anon_sym_dissimilarity,
    ACTIONS(79), 1,
      anon_sym_DASH_DASH_DASH,
    STATE(63), 1,
      sym_patch,
    STATE(112), 1,
      sym_oldfile,
    STATE(5), 2,
      sym_actions,
      aux_sym_git_repeat1,
    STATE(38), 11,
      sym_old,
      sym_newmode,
      sym_deleted,
      sym_newfile,
      sym_copyfrom,
      sym_copyto,
      sym_renamefrom,
      sym_renameto,
      sym_similarity,
      sym_dissimilarity,
      sym_index,
  [174] = 12,
    ACTIONS(81), 1,
      anon_sym_old,
    ACTIONS(84), 1,
      anon_sym_new,
    ACTIONS(87), 1,
      anon_sym_deleted,
    ACTIONS(90), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(93), 1,
      anon_sym_copy,
    ACTIONS(96), 1,
      anon_sym_rename,
    ACTIONS(99), 1,
      anon_sym_similarity,
    ACTIONS(102), 1,
      anon_sym_index,
    ACTIONS(105), 1,
      anon_sym_dissimilarity,
    ACTIONS(108), 1,
      anon_sym_DASH_DASH_DASH,
    STATE(5), 2,
      sym_actions,
      aux_sym_git_repeat1,
    STATE(38), 11,
      sym_old,
      sym_newmode,
      sym_deleted,
      sym_newfile,
      sym_copyfrom,
      sym_copyto,
      sym_renamefrom,
      sym_renameto,
      sym_similarity,
      sym_dissimilarity,
      sym_index,
  [222] = 11,
    ACTIONS(61), 1,
      anon_sym_old,
    ACTIONS(63), 1,
      anon_sym_new,
    ACTIONS(65), 1,
      anon_sym_deleted,
    ACTIONS(67), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(69), 1,
      anon_sym_copy,
    ACTIONS(71), 1,
      anon_sym_rename,
    ACTIONS(73), 1,
      anon_sym_similarity,
    ACTIONS(75), 1,
      anon_sym_index,
    ACTIONS(77), 1,
      anon_sym_dissimilarity,
    STATE(4), 2,
      sym_actions,
      aux_sym_git_repeat1,
    STATE(38), 11,
      sym_old,
      sym_newmode,
      sym_deleted,
      sym_newfile,
      sym_copyfrom,
      sym_copyto,
      sym_renamefrom,
      sym_renameto,
      sym_similarity,
      sym_dissimilarity,
      sym_index,
  [267] = 9,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
    ACTIONS(112), 1,
      sym_line,
    ACTIONS(114), 1,
      sym__quote,
    ACTIONS(116), 1,
      anon_sym_DASH_DASH_LF,
    ACTIONS(118), 1,
      anon_sym_diff_DASH_DASH,
    ACTIONS(120), 1,
      sym__line_break,
    STATE(91), 1,
      sym_emailbody,
    STATE(175), 1,
      sym_footer,
    STATE(22), 9,
      sym_quote1,
      sym_quote2,
      sym_quote3,
      sym_quote4,
      sym_quote5,
      sym_quote6,
      sym__quoted,
      sym_git,
      aux_sym_emailbody_repeat1,
  [303] = 3,
    ACTIONS(126), 1,
      sym__lwsp,
    ACTIONS(122), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(124), 14,
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
      sym__quote,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
  [327] = 3,
    ACTIONS(132), 1,
      sym__lwsp,
    ACTIONS(128), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(130), 14,
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
      sym__quote,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
  [351] = 3,
    ACTIONS(126), 1,
      sym__lwsp,
    ACTIONS(134), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(136), 14,
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
      sym__quote,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
  [375] = 3,
    ACTIONS(132), 1,
      sym__lwsp,
    ACTIONS(138), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(140), 14,
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
      sym__quote,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
  [399] = 2,
    ACTIONS(142), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(144), 14,
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
      sym__quote,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
  [420] = 2,
    ACTIONS(146), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(148), 14,
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
      sym__quote,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
  [441] = 2,
    ACTIONS(150), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(152), 14,
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
      sym__quote,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
  [462] = 2,
    ACTIONS(154), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(156), 14,
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
      sym__quote,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
  [483] = 2,
    ACTIONS(158), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(160), 14,
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
      sym__quote,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
  [504] = 8,
    ACTIONS(112), 1,
      sym_line,
    ACTIONS(114), 1,
      sym__quote,
    ACTIONS(116), 1,
      anon_sym_DASH_DASH_LF,
    ACTIONS(118), 1,
      anon_sym_diff_DASH_DASH,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
    STATE(88), 1,
      sym_emailbody,
    STATE(170), 1,
      sym_footer,
    STATE(22), 9,
      sym_quote1,
      sym_quote2,
      sym_quote3,
      sym_quote4,
      sym_quote5,
      sym_quote6,
      sym__quoted,
      sym_git,
      aux_sym_emailbody_repeat1,
  [537] = 2,
    ACTIONS(164), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(166), 14,
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
      sym__quote,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
  [558] = 2,
    ACTIONS(168), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(170), 14,
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
      sym__quote,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
  [579] = 2,
    ACTIONS(172), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(174), 14,
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
      sym__quote,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
  [600] = 6,
    ACTIONS(176), 1,
      ts_builtin_sym_end,
    ACTIONS(178), 1,
      sym_line,
    ACTIONS(181), 1,
      sym__quote,
    ACTIONS(184), 1,
      anon_sym_DASH_DASH_LF,
    ACTIONS(186), 1,
      anon_sym_diff_DASH_DASH,
    STATE(21), 9,
      sym_quote1,
      sym_quote2,
      sym_quote3,
      sym_quote4,
      sym_quote5,
      sym_quote6,
      sym__quoted,
      sym_git,
      aux_sym_emailbody_repeat1,
  [627] = 6,
    ACTIONS(114), 1,
      sym__quote,
    ACTIONS(118), 1,
      anon_sym_diff_DASH_DASH,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    ACTIONS(191), 1,
      sym_line,
    ACTIONS(193), 1,
      anon_sym_DASH_DASH_LF,
    STATE(21), 9,
      sym_quote1,
      sym_quote2,
      sym_quote3,
      sym_quote4,
      sym_quote5,
      sym_quote6,
      sym__quoted,
      sym_git,
      aux_sym_emailbody_repeat1,
  [654] = 3,
    ACTIONS(197), 1,
      aux_sym_diff_token1,
    STATE(23), 1,
      aux_sym_diff_repeat1,
    ACTIONS(195), 10,
      anon_sym_old,
      anon_sym_new,
      anon_sym_deleted,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_copy,
      anon_sym_rename,
      anon_sym_similarity,
      anon_sym_index,
      anon_sym_dissimilarity,
      anon_sym_DASH_DASH_DASH,
  [673] = 3,
    ACTIONS(202), 1,
      aux_sym_diff_token1,
    STATE(23), 1,
      aux_sym_diff_repeat1,
    ACTIONS(200), 10,
      anon_sym_old,
      anon_sym_new,
      anon_sym_deleted,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_copy,
      anon_sym_rename,
      anon_sym_similarity,
      anon_sym_index,
      anon_sym_dissimilarity,
      anon_sym_DASH_DASH_DASH,
  [692] = 3,
    ACTIONS(204), 1,
      aux_sym__mode_token1,
    STATE(29), 1,
      sym__mode,
    ACTIONS(206), 10,
      anon_sym_old,
      anon_sym_new,
      anon_sym_deleted,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_copy,
      anon_sym_rename,
      anon_sym_similarity,
      anon_sym_index,
      anon_sym_dissimilarity,
      anon_sym_DASH_DASH_DASH,
  [711] = 10,
    ACTIONS(208), 1,
      sym__atom,
    ACTIONS(210), 1,
      anon_sym_DQUOTE,
    STATE(19), 1,
      sym_addresslist,
    STATE(46), 1,
      sym_ia,
    STATE(47), 1,
      aux_sym_phrase_repeat1,
    STATE(89), 1,
      sym_mailbox,
    STATE(90), 1,
      sym_addrspec,
    STATE(114), 1,
      sym_phrase,
    STATE(165), 1,
      sym_local,
    STATE(52), 2,
      sym__word,
      sym_quotedstring,
  [743] = 1,
    ACTIONS(195), 11,
      anon_sym_old,
      anon_sym_new,
      anon_sym_deleted,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_copy,
      anon_sym_rename,
      anon_sym_similarity,
      anon_sym_index,
      anon_sym_dissimilarity,
      anon_sym_DASH_DASH_DASH,
      aux_sym_diff_token1,
  [757] = 1,
    ACTIONS(212), 10,
      anon_sym_old,
      anon_sym_new,
      anon_sym_deleted,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_copy,
      anon_sym_rename,
      anon_sym_similarity,
      anon_sym_index,
      anon_sym_dissimilarity,
      anon_sym_DASH_DASH_DASH,
  [770] = 1,
    ACTIONS(214), 10,
      anon_sym_old,
      anon_sym_new,
      anon_sym_deleted,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_copy,
      anon_sym_rename,
      anon_sym_similarity,
      anon_sym_index,
      anon_sym_dissimilarity,
      anon_sym_DASH_DASH_DASH,
  [783] = 1,
    ACTIONS(216), 10,
      anon_sym_old,
      anon_sym_new,
      anon_sym_deleted,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_copy,
      anon_sym_rename,
      anon_sym_similarity,
      anon_sym_index,
      anon_sym_dissimilarity,
      anon_sym_DASH_DASH_DASH,
  [796] = 1,
    ACTIONS(218), 10,
      anon_sym_old,
      anon_sym_new,
      anon_sym_deleted,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_copy,
      anon_sym_rename,
      anon_sym_similarity,
      anon_sym_index,
      anon_sym_dissimilarity,
      anon_sym_DASH_DASH_DASH,
  [809] = 1,
    ACTIONS(220), 10,
      anon_sym_old,
      anon_sym_new,
      anon_sym_deleted,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_copy,
      anon_sym_rename,
      anon_sym_similarity,
      anon_sym_index,
      anon_sym_dissimilarity,
      anon_sym_DASH_DASH_DASH,
  [822] = 1,
    ACTIONS(222), 10,
      anon_sym_old,
      anon_sym_new,
      anon_sym_deleted,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_copy,
      anon_sym_rename,
      anon_sym_similarity,
      anon_sym_index,
      anon_sym_dissimilarity,
      anon_sym_DASH_DASH_DASH,
  [835] = 9,
    ACTIONS(208), 1,
      sym__atom,
    ACTIONS(210), 1,
      anon_sym_DQUOTE,
    STATE(47), 1,
      aux_sym_phrase_repeat1,
    STATE(89), 1,
      sym_mailbox,
    STATE(90), 1,
      sym_addrspec,
    STATE(97), 1,
      sym_ia,
    STATE(114), 1,
      sym_phrase,
    STATE(165), 1,
      sym_local,
    STATE(52), 2,
      sym__word,
      sym_quotedstring,
  [864] = 1,
    ACTIONS(224), 10,
      anon_sym_old,
      anon_sym_new,
      anon_sym_deleted,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_copy,
      anon_sym_rename,
      anon_sym_similarity,
      anon_sym_index,
      anon_sym_dissimilarity,
      anon_sym_DASH_DASH_DASH,
  [877] = 9,
    ACTIONS(208), 1,
      sym__atom,
    ACTIONS(210), 1,
      anon_sym_DQUOTE,
    STATE(47), 1,
      aux_sym_phrase_repeat1,
    STATE(89), 1,
      sym_mailbox,
    STATE(90), 1,
      sym_addrspec,
    STATE(95), 1,
      sym_ia,
    STATE(114), 1,
      sym_phrase,
    STATE(165), 1,
      sym_local,
    STATE(52), 2,
      sym__word,
      sym_quotedstring,
  [906] = 1,
    ACTIONS(226), 10,
      anon_sym_old,
      anon_sym_new,
      anon_sym_deleted,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_copy,
      anon_sym_rename,
      anon_sym_similarity,
      anon_sym_index,
      anon_sym_dissimilarity,
      anon_sym_DASH_DASH_DASH,
  [919] = 1,
    ACTIONS(228), 10,
      anon_sym_old,
      anon_sym_new,
      anon_sym_deleted,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_copy,
      anon_sym_rename,
      anon_sym_similarity,
      anon_sym_index,
      anon_sym_dissimilarity,
      anon_sym_DASH_DASH_DASH,
  [932] = 1,
    ACTIONS(230), 10,
      anon_sym_old,
      anon_sym_new,
      anon_sym_deleted,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_copy,
      anon_sym_rename,
      anon_sym_similarity,
      anon_sym_index,
      anon_sym_dissimilarity,
      anon_sym_DASH_DASH_DASH,
  [945] = 1,
    ACTIONS(232), 10,
      anon_sym_old,
      anon_sym_new,
      anon_sym_deleted,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_copy,
      anon_sym_rename,
      anon_sym_similarity,
      anon_sym_index,
      anon_sym_dissimilarity,
      anon_sym_DASH_DASH_DASH,
  [958] = 1,
    ACTIONS(234), 10,
      anon_sym_old,
      anon_sym_new,
      anon_sym_deleted,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_copy,
      anon_sym_rename,
      anon_sym_similarity,
      anon_sym_index,
      anon_sym_dissimilarity,
      anon_sym_DASH_DASH_DASH,
  [971] = 1,
    ACTIONS(236), 10,
      anon_sym_old,
      anon_sym_new,
      anon_sym_deleted,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_copy,
      anon_sym_rename,
      anon_sym_similarity,
      anon_sym_index,
      anon_sym_dissimilarity,
      anon_sym_DASH_DASH_DASH,
  [984] = 4,
    ACTIONS(238), 1,
      ts_builtin_sym_end,
    ACTIONS(240), 1,
      aux_sym_diff_token1,
    STATE(43), 1,
      aux_sym_diff_repeat1,
    ACTIONS(195), 4,
      sym_line,
      sym__quote,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
  [1000] = 4,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
    ACTIONS(245), 1,
      aux_sym_diff_token1,
    STATE(43), 1,
      aux_sym_diff_repeat1,
    ACTIONS(200), 4,
      sym_line,
      sym__quote,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
  [1016] = 4,
    ACTIONS(247), 1,
      anon_sym_LT,
    ACTIONS(249), 1,
      sym__atom,
    ACTIONS(252), 1,
      anon_sym_DQUOTE,
    STATE(45), 3,
      sym__word,
      sym_quotedstring,
      aux_sym_phrase_repeat1,
  [1031] = 6,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    ACTIONS(257), 1,
      sym__line_break,
    ACTIONS(259), 1,
      sym__lwsp,
    STATE(49), 1,
      aux_sym_addresslist_repeat1,
    STATE(79), 1,
      aux_sym_seperator_repeat1,
    STATE(160), 1,
      sym_seperator,
  [1050] = 4,
    ACTIONS(210), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      anon_sym_LT,
    ACTIONS(263), 1,
      sym__atom,
    STATE(45), 3,
      sym__word,
      sym_quotedstring,
      aux_sym_phrase_repeat1,
  [1065] = 2,
    ACTIONS(238), 1,
      ts_builtin_sym_end,
    ACTIONS(195), 5,
      sym_line,
      sym__quote,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
      aux_sym_diff_token1,
  [1076] = 6,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    ACTIONS(259), 1,
      sym__lwsp,
    ACTIONS(265), 1,
      sym__line_break,
    STATE(50), 1,
      aux_sym_addresslist_repeat1,
    STATE(79), 1,
      aux_sym_seperator_repeat1,
    STATE(160), 1,
      sym_seperator,
  [1095] = 6,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(270), 1,
      sym__line_break,
    ACTIONS(273), 1,
      sym__lwsp,
    STATE(50), 1,
      aux_sym_addresslist_repeat1,
    STATE(79), 1,
      aux_sym_seperator_repeat1,
    STATE(160), 1,
      sym_seperator,
  [1114] = 5,
    ACTIONS(276), 1,
      sym__atom,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    STATE(136), 1,
      sym_addrspec,
    STATE(181), 1,
      sym_local,
    STATE(83), 2,
      sym__word,
      sym_quotedstring,
  [1131] = 5,
    ACTIONS(282), 1,
      anon_sym_AT,
    ACTIONS(284), 1,
      anon_sym_DOT,
    ACTIONS(286), 1,
      sym__atom,
    STATE(84), 1,
      aux_sym_domain_repeat1,
    ACTIONS(280), 2,
      anon_sym_LT,
      anon_sym_DQUOTE,
  [1148] = 3,
    ACTIONS(290), 1,
      anon_sym_DOT,
    STATE(53), 1,
      aux_sym_domain_repeat1,
    ACTIONS(288), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [1160] = 2,
    ACTIONS(293), 1,
      ts_builtin_sym_end,
    ACTIONS(295), 4,
      sym_line,
      sym__quote,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
  [1170] = 2,
    ACTIONS(236), 1,
      ts_builtin_sym_end,
    ACTIONS(297), 4,
      sym_line,
      sym__quote,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
  [1180] = 2,
    ACTIONS(299), 1,
      ts_builtin_sym_end,
    ACTIONS(301), 4,
      sym_line,
      sym__quote,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
  [1190] = 5,
    ACTIONS(303), 1,
      sym__line_break,
    ACTIONS(306), 1,
      sym__lwsp,
    STATE(57), 1,
      aux_sym_fieldbody_repeat1,
    STATE(76), 1,
      aux_sym_seperator_repeat1,
    STATE(164), 1,
      sym_seperator,
  [1206] = 2,
    ACTIONS(232), 1,
      ts_builtin_sym_end,
    ACTIONS(309), 4,
      sym_line,
      sym__quote,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
  [1216] = 4,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(311), 1,
      sym__atom,
    STATE(162), 1,
      sym_domain,
    STATE(98), 2,
      sym__word,
      sym_quotedstring,
  [1230] = 2,
    ACTIONS(313), 1,
      ts_builtin_sym_end,
    ACTIONS(315), 4,
      sym_line,
      sym__quote,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
  [1240] = 3,
    ACTIONS(319), 1,
      anon_sym_DOT,
    STATE(53), 1,
      aux_sym_domain_repeat1,
    ACTIONS(317), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [1252] = 2,
    ACTIONS(321), 1,
      ts_builtin_sym_end,
    ACTIONS(323), 4,
      sym_line,
      sym__quote,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
  [1262] = 2,
    ACTIONS(325), 1,
      ts_builtin_sym_end,
    ACTIONS(327), 4,
      sym_line,
      sym__quote,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
  [1272] = 2,
    ACTIONS(329), 1,
      ts_builtin_sym_end,
    ACTIONS(331), 4,
      sym_line,
      sym__quote,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
  [1282] = 5,
    ACTIONS(333), 1,
      sym__line_break,
    ACTIONS(335), 1,
      sym__lwsp,
    STATE(57), 1,
      aux_sym_fieldbody_repeat1,
    STATE(76), 1,
      aux_sym_seperator_repeat1,
    STATE(164), 1,
      sym_seperator,
  [1298] = 2,
    ACTIONS(337), 1,
      ts_builtin_sym_end,
    ACTIONS(339), 4,
      sym_line,
      sym__quote,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
  [1308] = 2,
    ACTIONS(343), 1,
      sym__atom,
    ACTIONS(341), 4,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOT,
      anon_sym_DQUOTE,
  [1318] = 2,
    ACTIONS(345), 1,
      ts_builtin_sym_end,
    ACTIONS(347), 4,
      sym_line,
      sym__quote,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
  [1328] = 3,
    ACTIONS(319), 1,
      anon_sym_DOT,
    STATE(61), 1,
      aux_sym_domain_repeat1,
    ACTIONS(349), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [1340] = 4,
    ACTIONS(351), 1,
      sym__atom,
    ACTIONS(353), 1,
      anon_sym_DQUOTE,
    STATE(101), 1,
      sym_domain,
    STATE(69), 2,
      sym__word,
      sym_quotedstring,
  [1354] = 5,
    ACTIONS(335), 1,
      sym__lwsp,
    ACTIONS(355), 1,
      sym__line_break,
    STATE(65), 1,
      aux_sym_fieldbody_repeat1,
    STATE(76), 1,
      aux_sym_seperator_repeat1,
    STATE(164), 1,
      sym_seperator,
  [1370] = 4,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    ACTIONS(359), 1,
      sym__line_break,
    ACTIONS(362), 1,
      sym__lwsp,
    STATE(72), 1,
      aux_sym_seperator_repeat1,
  [1383] = 3,
    ACTIONS(365), 1,
      anon_sym_DOT,
    STATE(73), 1,
      aux_sym_domain_repeat1,
    ACTIONS(288), 2,
      anon_sym_GT,
      anon_sym_AT,
  [1394] = 3,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(368), 1,
      sym__atom,
    STATE(100), 2,
      sym__word,
      sym_quotedstring,
  [1405] = 1,
    ACTIONS(343), 4,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
      anon_sym_DOT,
  [1412] = 4,
    ACTIONS(370), 1,
      sym__bodycontent,
    ACTIONS(372), 1,
      sym__line_break,
    ACTIONS(374), 1,
      sym__lwsp,
    STATE(82), 1,
      aux_sym_seperator_repeat1,
  [1425] = 1,
    ACTIONS(288), 4,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
      anon_sym_DOT,
  [1432] = 3,
    ACTIONS(353), 1,
      anon_sym_DQUOTE,
    ACTIONS(376), 1,
      sym__atom,
    STATE(77), 2,
      sym__word,
      sym_quotedstring,
  [1443] = 4,
    ACTIONS(370), 1,
      anon_sym_COMMA,
    ACTIONS(378), 1,
      sym__line_break,
    ACTIONS(380), 1,
      sym__lwsp,
    STATE(72), 1,
      aux_sym_seperator_repeat1,
  [1456] = 4,
    ACTIONS(202), 1,
      aux_sym_diff_token1,
    ACTIONS(382), 1,
      anon_sym_DOT,
    STATE(24), 1,
      aux_sym_diff_repeat1,
    STATE(40), 1,
      sym_diff,
  [1469] = 4,
    ACTIONS(245), 1,
      aux_sym_diff_token1,
    ACTIONS(384), 1,
      anon_sym_DOT,
    STATE(44), 1,
      aux_sym_diff_repeat1,
    STATE(58), 1,
      sym_diff,
  [1482] = 4,
    ACTIONS(357), 1,
      sym__bodycontent,
    ACTIONS(386), 1,
      sym__line_break,
    ACTIONS(389), 1,
      sym__lwsp,
    STATE(82), 1,
      aux_sym_seperator_repeat1,
  [1495] = 3,
    ACTIONS(392), 1,
      anon_sym_AT,
    ACTIONS(394), 1,
      anon_sym_DOT,
    STATE(84), 1,
      aux_sym_domain_repeat1,
  [1505] = 3,
    ACTIONS(394), 1,
      anon_sym_DOT,
    ACTIONS(396), 1,
      anon_sym_AT,
    STATE(73), 1,
      aux_sym_domain_repeat1,
  [1515] = 1,
    ACTIONS(343), 3,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_DOT,
  [1521] = 3,
    ACTIONS(398), 1,
      aux_sym_diff_token1,
    STATE(24), 1,
      aux_sym_diff_repeat1,
    STATE(42), 1,
      sym_diff,
  [1531] = 3,
    ACTIONS(317), 1,
      anon_sym_GT,
    ACTIONS(394), 1,
      anon_sym_DOT,
    STATE(73), 1,
      aux_sym_domain_repeat1,
  [1541] = 3,
    ACTIONS(400), 1,
      ts_builtin_sym_end,
    ACTIONS(402), 1,
      anon_sym_DASH_DASH_LF,
    STATE(163), 1,
      sym_footer,
  [1551] = 1,
    ACTIONS(404), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [1557] = 1,
    ACTIONS(406), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [1563] = 3,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
    ACTIONS(402), 1,
      anon_sym_DASH_DASH_LF,
    STATE(170), 1,
      sym_footer,
  [1573] = 1,
    ACTIONS(408), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [1579] = 1,
    ACTIONS(357), 3,
      sym__line_break,
      sym__lwsp,
      sym__bodycontent,
  [1585] = 1,
    ACTIONS(410), 3,
      anon_sym_git,
      anon_sym_cc,
      anon_sym_combined,
  [1591] = 1,
    ACTIONS(412), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [1597] = 3,
    ACTIONS(414), 1,
      aux_sym_diff_token1,
    STATE(44), 1,
      aux_sym_diff_repeat1,
    STATE(55), 1,
      sym_diff,
  [1607] = 1,
    ACTIONS(416), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [1613] = 3,
    ACTIONS(349), 1,
      anon_sym_GT,
    ACTIONS(394), 1,
      anon_sym_DOT,
    STATE(87), 1,
      aux_sym_domain_repeat1,
  [1623] = 1,
    ACTIONS(357), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [1629] = 1,
    ACTIONS(288), 3,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_DOT,
  [1635] = 1,
    ACTIONS(418), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [1641] = 1,
    ACTIONS(420), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [1647] = 2,
    ACTIONS(422), 1,
      aux_sym_mid_token1,
    STATE(15), 1,
      sym_subject,
  [1654] = 2,
    ACTIONS(424), 1,
      sym_line,
    ACTIONS(426), 1,
      sym__quote,
  [1661] = 2,
    ACTIONS(428), 1,
      aux_sym_mid_token1,
    STATE(16), 1,
      sym_mid,
  [1668] = 2,
    ACTIONS(430), 1,
      sym__bodycontent,
    STATE(18), 1,
      sym_fieldbody,
  [1675] = 2,
    ACTIONS(432), 1,
      sym_line,
    ACTIONS(434), 1,
      sym__quote,
  [1682] = 2,
    ACTIONS(436), 1,
      sym_line,
    ACTIONS(438), 1,
      sym__quote,
  [1689] = 2,
    ACTIONS(440), 1,
      aux_sym__mode_token1,
    STATE(32), 1,
      sym__mode,
  [1696] = 2,
    ACTIONS(442), 1,
      aux_sym__mode_token1,
    STATE(31), 1,
      sym__mode,
  [1703] = 2,
    ACTIONS(444), 1,
      sym_line,
    ACTIONS(446), 1,
      sym__quote,
  [1710] = 2,
    ACTIONS(448), 1,
      anon_sym_PLUS_PLUS_PLUS,
    STATE(66), 1,
      sym_newfile,
  [1717] = 2,
    ACTIONS(450), 1,
      aux_sym_mid_token1,
    STATE(168), 1,
      sym_footertext,
  [1724] = 2,
    ACTIONS(452), 1,
      anon_sym_LT,
    STATE(102), 1,
      sym_routeaddr,
  [1731] = 1,
    ACTIONS(454), 2,
      sym__line_break,
      sym__lwsp,
  [1736] = 2,
    ACTIONS(456), 1,
      anon_sym_from,
    ACTIONS(458), 1,
      anon_sym_to,
  [1743] = 2,
    ACTIONS(460), 1,
      aux_sym_mid_token1,
    STATE(12), 1,
      sym_date,
  [1750] = 2,
    ACTIONS(462), 1,
      anon_sym_from,
    ACTIONS(464), 1,
      anon_sym_to,
  [1757] = 2,
    ACTIONS(466), 1,
      aux_sym__mode_token1,
    STATE(39), 1,
      sym__mode,
  [1764] = 2,
    ACTIONS(468), 1,
      anon_sym_DOT,
    ACTIONS(470), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [1771] = 2,
    ACTIONS(472), 1,
      sym_line,
    ACTIONS(474), 1,
      sym__quote,
  [1778] = 1,
    ACTIONS(476), 1,
      anon_sym_DQUOTE,
  [1782] = 1,
    ACTIONS(478), 1,
      anon_sym_COLON,
  [1786] = 1,
    ACTIONS(480), 1,
      sym__path,
  [1790] = 1,
    ACTIONS(482), 1,
      sym__path,
  [1794] = 1,
    ACTIONS(484), 1,
      sym__path,
  [1798] = 1,
    ACTIONS(486), 1,
      sym__path,
  [1802] = 1,
    ACTIONS(488), 1,
      sym_line,
  [1806] = 1,
    ACTIONS(490), 1,
      aux_sym__mode_token1,
  [1810] = 1,
    ACTIONS(492), 1,
      anon_sym_DOT_DOT,
  [1814] = 1,
    ACTIONS(494), 1,
      aux_sym__mode_token1,
  [1818] = 1,
    ACTIONS(496), 1,
      sym_dirname,
  [1822] = 1,
    ACTIONS(498), 1,
      anon_sym_mode,
  [1826] = 1,
    ACTIONS(500), 1,
      sym_file,
  [1830] = 1,
    ACTIONS(502), 1,
      ts_builtin_sym_end,
  [1834] = 1,
    ACTIONS(504), 1,
      anon_sym_GT,
  [1838] = 1,
    ACTIONS(506), 1,
      anon_sym_COLON,
  [1842] = 1,
    ACTIONS(508), 1,
      sym__hash,
  [1846] = 1,
    ACTIONS(510), 1,
      anon_sym_COLON,
  [1850] = 1,
    ACTIONS(512), 1,
      sym_file,
  [1854] = 1,
    ACTIONS(514), 1,
      anon_sym_COLON,
  [1858] = 1,
    ACTIONS(516), 1,
      anon_sym_index,
  [1862] = 1,
    ACTIONS(518), 1,
      sym__hash,
  [1866] = 1,
    ACTIONS(520), 1,
      sym_filetype,
  [1870] = 1,
    ACTIONS(522), 1,
      sym__line_break,
  [1874] = 1,
    ACTIONS(524), 1,
      anon_sym_index,
  [1878] = 1,
    ACTIONS(526), 1,
      anon_sym_COLON,
  [1882] = 1,
    ACTIONS(528), 1,
      anon_sym_COLON,
  [1886] = 1,
    ACTIONS(530), 1,
      sym_dirname,
  [1890] = 1,
    ACTIONS(532), 1,
      anon_sym_file,
  [1894] = 1,
    ACTIONS(534), 1,
      anon_sym_COLON,
  [1898] = 1,
    ACTIONS(536), 1,
      anon_sym_COLON,
  [1902] = 1,
    ACTIONS(538), 1,
      anon_sym_mode,
  [1906] = 1,
    ACTIONS(540), 1,
      sym_filetype,
  [1910] = 1,
    ACTIONS(542), 1,
      anon_sym_mode,
  [1914] = 1,
    ACTIONS(544), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [1918] = 1,
    ACTIONS(132), 1,
      sym__lwsp,
  [1922] = 1,
    ACTIONS(546), 1,
      anon_sym_COLON,
  [1926] = 1,
    ACTIONS(126), 1,
      sym__lwsp,
  [1930] = 1,
    ACTIONS(548), 1,
      anon_sym_COMMA,
  [1934] = 1,
    ACTIONS(550), 1,
      anon_sym_COLON,
  [1938] = 1,
    ACTIONS(418), 1,
      anon_sym_GT,
  [1942] = 1,
    ACTIONS(552), 1,
      ts_builtin_sym_end,
  [1946] = 1,
    ACTIONS(554), 1,
      sym__bodycontent,
  [1950] = 1,
    ACTIONS(556), 1,
      anon_sym_AT,
  [1954] = 1,
    ACTIONS(558), 1,
      aux_sym_quotedstring_token1,
  [1958] = 1,
    ACTIONS(560), 1,
      aux_sym_mid_token1,
  [1962] = 1,
    ACTIONS(562), 1,
      ts_builtin_sym_end,
  [1966] = 1,
    ACTIONS(564), 1,
      ts_builtin_sym_end,
  [1970] = 1,
    ACTIONS(400), 1,
      ts_builtin_sym_end,
  [1974] = 1,
    ACTIONS(566), 1,
      sym__line_break,
  [1978] = 1,
    ACTIONS(568), 1,
      sym__line_break,
  [1982] = 1,
    ACTIONS(570), 1,
      anon_sym_DQUOTE,
  [1986] = 1,
    ACTIONS(572), 1,
      sym__line_break,
  [1990] = 1,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
  [1994] = 1,
    ACTIONS(574), 1,
      anon_sym_COLON,
  [1998] = 1,
    ACTIONS(576), 1,
      sym__line_break,
  [2002] = 1,
    ACTIONS(578), 1,
      anon_sym_COLON,
  [2006] = 1,
    ACTIONS(580), 1,
      anon_sym_DQUOTE,
  [2010] = 1,
    ACTIONS(582), 1,
      aux_sym_quotedstring_token1,
  [2014] = 1,
    ACTIONS(584), 1,
      anon_sym_AT,
  [2018] = 1,
    ACTIONS(586), 1,
      sym_file,
  [2022] = 1,
    ACTIONS(588), 1,
      sym_filetype,
  [2026] = 1,
    ACTIONS(590), 1,
      aux_sym_quotedstring_token1,
  [2030] = 1,
    ACTIONS(592), 1,
      sym_dirname,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 60,
  [SMALL_STATE(4)] = 120,
  [SMALL_STATE(5)] = 174,
  [SMALL_STATE(6)] = 222,
  [SMALL_STATE(7)] = 267,
  [SMALL_STATE(8)] = 303,
  [SMALL_STATE(9)] = 327,
  [SMALL_STATE(10)] = 351,
  [SMALL_STATE(11)] = 375,
  [SMALL_STATE(12)] = 399,
  [SMALL_STATE(13)] = 420,
  [SMALL_STATE(14)] = 441,
  [SMALL_STATE(15)] = 462,
  [SMALL_STATE(16)] = 483,
  [SMALL_STATE(17)] = 504,
  [SMALL_STATE(18)] = 537,
  [SMALL_STATE(19)] = 558,
  [SMALL_STATE(20)] = 579,
  [SMALL_STATE(21)] = 600,
  [SMALL_STATE(22)] = 627,
  [SMALL_STATE(23)] = 654,
  [SMALL_STATE(24)] = 673,
  [SMALL_STATE(25)] = 692,
  [SMALL_STATE(26)] = 711,
  [SMALL_STATE(27)] = 743,
  [SMALL_STATE(28)] = 757,
  [SMALL_STATE(29)] = 770,
  [SMALL_STATE(30)] = 783,
  [SMALL_STATE(31)] = 796,
  [SMALL_STATE(32)] = 809,
  [SMALL_STATE(33)] = 822,
  [SMALL_STATE(34)] = 835,
  [SMALL_STATE(35)] = 864,
  [SMALL_STATE(36)] = 877,
  [SMALL_STATE(37)] = 906,
  [SMALL_STATE(38)] = 919,
  [SMALL_STATE(39)] = 932,
  [SMALL_STATE(40)] = 945,
  [SMALL_STATE(41)] = 958,
  [SMALL_STATE(42)] = 971,
  [SMALL_STATE(43)] = 984,
  [SMALL_STATE(44)] = 1000,
  [SMALL_STATE(45)] = 1016,
  [SMALL_STATE(46)] = 1031,
  [SMALL_STATE(47)] = 1050,
  [SMALL_STATE(48)] = 1065,
  [SMALL_STATE(49)] = 1076,
  [SMALL_STATE(50)] = 1095,
  [SMALL_STATE(51)] = 1114,
  [SMALL_STATE(52)] = 1131,
  [SMALL_STATE(53)] = 1148,
  [SMALL_STATE(54)] = 1160,
  [SMALL_STATE(55)] = 1170,
  [SMALL_STATE(56)] = 1180,
  [SMALL_STATE(57)] = 1190,
  [SMALL_STATE(58)] = 1206,
  [SMALL_STATE(59)] = 1216,
  [SMALL_STATE(60)] = 1230,
  [SMALL_STATE(61)] = 1240,
  [SMALL_STATE(62)] = 1252,
  [SMALL_STATE(63)] = 1262,
  [SMALL_STATE(64)] = 1272,
  [SMALL_STATE(65)] = 1282,
  [SMALL_STATE(66)] = 1298,
  [SMALL_STATE(67)] = 1308,
  [SMALL_STATE(68)] = 1318,
  [SMALL_STATE(69)] = 1328,
  [SMALL_STATE(70)] = 1340,
  [SMALL_STATE(71)] = 1354,
  [SMALL_STATE(72)] = 1370,
  [SMALL_STATE(73)] = 1383,
  [SMALL_STATE(74)] = 1394,
  [SMALL_STATE(75)] = 1405,
  [SMALL_STATE(76)] = 1412,
  [SMALL_STATE(77)] = 1425,
  [SMALL_STATE(78)] = 1432,
  [SMALL_STATE(79)] = 1443,
  [SMALL_STATE(80)] = 1456,
  [SMALL_STATE(81)] = 1469,
  [SMALL_STATE(82)] = 1482,
  [SMALL_STATE(83)] = 1495,
  [SMALL_STATE(84)] = 1505,
  [SMALL_STATE(85)] = 1515,
  [SMALL_STATE(86)] = 1521,
  [SMALL_STATE(87)] = 1531,
  [SMALL_STATE(88)] = 1541,
  [SMALL_STATE(89)] = 1551,
  [SMALL_STATE(90)] = 1557,
  [SMALL_STATE(91)] = 1563,
  [SMALL_STATE(92)] = 1573,
  [SMALL_STATE(93)] = 1579,
  [SMALL_STATE(94)] = 1585,
  [SMALL_STATE(95)] = 1591,
  [SMALL_STATE(96)] = 1597,
  [SMALL_STATE(97)] = 1607,
  [SMALL_STATE(98)] = 1613,
  [SMALL_STATE(99)] = 1623,
  [SMALL_STATE(100)] = 1629,
  [SMALL_STATE(101)] = 1635,
  [SMALL_STATE(102)] = 1641,
  [SMALL_STATE(103)] = 1647,
  [SMALL_STATE(104)] = 1654,
  [SMALL_STATE(105)] = 1661,
  [SMALL_STATE(106)] = 1668,
  [SMALL_STATE(107)] = 1675,
  [SMALL_STATE(108)] = 1682,
  [SMALL_STATE(109)] = 1689,
  [SMALL_STATE(110)] = 1696,
  [SMALL_STATE(111)] = 1703,
  [SMALL_STATE(112)] = 1710,
  [SMALL_STATE(113)] = 1717,
  [SMALL_STATE(114)] = 1724,
  [SMALL_STATE(115)] = 1731,
  [SMALL_STATE(116)] = 1736,
  [SMALL_STATE(117)] = 1743,
  [SMALL_STATE(118)] = 1750,
  [SMALL_STATE(119)] = 1757,
  [SMALL_STATE(120)] = 1764,
  [SMALL_STATE(121)] = 1771,
  [SMALL_STATE(122)] = 1778,
  [SMALL_STATE(123)] = 1782,
  [SMALL_STATE(124)] = 1786,
  [SMALL_STATE(125)] = 1790,
  [SMALL_STATE(126)] = 1794,
  [SMALL_STATE(127)] = 1798,
  [SMALL_STATE(128)] = 1802,
  [SMALL_STATE(129)] = 1806,
  [SMALL_STATE(130)] = 1810,
  [SMALL_STATE(131)] = 1814,
  [SMALL_STATE(132)] = 1818,
  [SMALL_STATE(133)] = 1822,
  [SMALL_STATE(134)] = 1826,
  [SMALL_STATE(135)] = 1830,
  [SMALL_STATE(136)] = 1834,
  [SMALL_STATE(137)] = 1838,
  [SMALL_STATE(138)] = 1842,
  [SMALL_STATE(139)] = 1846,
  [SMALL_STATE(140)] = 1850,
  [SMALL_STATE(141)] = 1854,
  [SMALL_STATE(142)] = 1858,
  [SMALL_STATE(143)] = 1862,
  [SMALL_STATE(144)] = 1866,
  [SMALL_STATE(145)] = 1870,
  [SMALL_STATE(146)] = 1874,
  [SMALL_STATE(147)] = 1878,
  [SMALL_STATE(148)] = 1882,
  [SMALL_STATE(149)] = 1886,
  [SMALL_STATE(150)] = 1890,
  [SMALL_STATE(151)] = 1894,
  [SMALL_STATE(152)] = 1898,
  [SMALL_STATE(153)] = 1902,
  [SMALL_STATE(154)] = 1906,
  [SMALL_STATE(155)] = 1910,
  [SMALL_STATE(156)] = 1914,
  [SMALL_STATE(157)] = 1918,
  [SMALL_STATE(158)] = 1922,
  [SMALL_STATE(159)] = 1926,
  [SMALL_STATE(160)] = 1930,
  [SMALL_STATE(161)] = 1934,
  [SMALL_STATE(162)] = 1938,
  [SMALL_STATE(163)] = 1942,
  [SMALL_STATE(164)] = 1946,
  [SMALL_STATE(165)] = 1950,
  [SMALL_STATE(166)] = 1954,
  [SMALL_STATE(167)] = 1958,
  [SMALL_STATE(168)] = 1962,
  [SMALL_STATE(169)] = 1966,
  [SMALL_STATE(170)] = 1970,
  [SMALL_STATE(171)] = 1974,
  [SMALL_STATE(172)] = 1978,
  [SMALL_STATE(173)] = 1982,
  [SMALL_STATE(174)] = 1986,
  [SMALL_STATE(175)] = 1990,
  [SMALL_STATE(176)] = 1994,
  [SMALL_STATE(177)] = 1998,
  [SMALL_STATE(178)] = 2002,
  [SMALL_STATE(179)] = 2006,
  [SMALL_STATE(180)] = 2010,
  [SMALL_STATE(181)] = 2014,
  [SMALL_STATE(182)] = 2018,
  [SMALL_STATE(183)] = 2022,
  [SMALL_STATE(184)] = 2026,
  [SMALL_STATE(185)] = 2030,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headers, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headers, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(158),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(152),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(151),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(148),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(147),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(139),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(123),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(137),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(141),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(161),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_git_repeat1, 2), SHIFT_REPEAT(155),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_git_repeat1, 2), SHIFT_REPEAT(153),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_git_repeat1, 2), SHIFT_REPEAT(150),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_git_repeat1, 2), SHIFT_REPEAT(149),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_git_repeat1, 2), SHIFT_REPEAT(118),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_git_repeat1, 2), SHIFT_REPEAT(116),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_git_repeat1, 2), SHIFT_REPEAT(146),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_git_repeat1, 2), SHIFT_REPEAT(143),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_git_repeat1, 2), SHIFT_REPEAT(142),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_git_repeat1, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addresslist, 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addresslist, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldbody, 2),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fieldbody, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addresslist, 3),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addresslist, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldbody, 3),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fieldbody, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dateheader, 3),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dateheader, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 2),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subject, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mid, 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mid, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subjectheader, 3),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subjectheader, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_midheader, 3),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_midheader, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headerextra, 3),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headerextra, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addressheader, 3),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addressheader, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 2),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_emailbody_repeat1, 2),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_emailbody_repeat1, 2), SHIFT_REPEAT(21),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_emailbody_repeat1, 2), SHIFT_REPEAT(111),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_emailbody_repeat1, 2),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_emailbody_repeat1, 2), SHIFT_REPEAT(94),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_emailbody, 1),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_emailbody, 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_diff_repeat1, 2),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diff_repeat1, 2), SHIFT_REPEAT(145),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_diff, 1),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 4),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dissimilarity, 3),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 5),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copyfrom, 3),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newmode, 3),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_old, 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_renamefrom, 3),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_renameto, 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_similarity, 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_actions, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deleted, 4),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newfile, 4),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copyto, 3),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newfile, 6),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diff_repeat1, 2),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diff_repeat1, 2), SHIFT_REPEAT(177),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diff, 1),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_phrase_repeat1, 2),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_phrase_repeat1, 2), SHIFT_REPEAT(45),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_phrase_repeat1, 2), SHIFT_REPEAT(166),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_phrase, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_addresslist_repeat1, 2), SHIFT_REPEAT(34),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_addresslist_repeat1, 2), SHIFT_REPEAT(159),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_addresslist_repeat1, 2), SHIFT_REPEAT(79),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_phrase_repeat1, 1),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local, 1),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_phrase_repeat1, 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_domain_repeat1, 2),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_domain_repeat1, 2), SHIFT_REPEAT(78),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote2, 3),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote2, 3),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_newfile, 6),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote1, 2),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote1, 2),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fieldbody_repeat1, 2), SHIFT_REPEAT(157),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fieldbody_repeat1, 2), SHIFT_REPEAT(76),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_newfile, 4),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote5, 6),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote5, 6),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain, 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote6, 7),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote6, 7),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_git, 5),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_git, 5),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote4, 5),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote4, 5),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_patch, 2),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_patch, 2),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quotedstring, 3),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quotedstring, 3),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote3, 4),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote3, 4),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain, 1),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_seperator_repeat1, 2),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seperator_repeat1, 2), SHIFT_REPEAT(159),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seperator_repeat1, 2), SHIFT_REPEAT(72),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_domain_repeat1, 2), SHIFT_REPEAT(74),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seperator, 1),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seperator_repeat1, 2), SHIFT_REPEAT(157),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seperator_repeat1, 2), SHIFT_REPEAT(82),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local, 1),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local, 2),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 3),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ia, 1),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailbox, 1),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_routeaddr, 3),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_addresslist_repeat1, 3),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_addresslist_repeat1, 2),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addrspec, 3),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailbox, 2),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fieldbody_repeat1, 2),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oldfile, 3),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bcc, 1),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [502] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sender, 1),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cc, 1),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replyto, 1),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_to, 1),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oldfile, 5),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 1),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 4),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 2),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footertext, 1),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addrkind, 1),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
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
