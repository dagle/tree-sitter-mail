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
#define STATE_COUNT 183
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 120
#define ALIAS_COUNT 3
#define TOKEN_COUNT 54
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 4

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
  sym_fieldname = 11,
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
  sym_line = 22,
  sym__quote = 23,
  anon_sym_DASH_DASH_LF = 24,
  aux_sym_footertext_token1 = 25,
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
  sym__fieldbody = 72,
  sym_seperator = 73,
  sym_addresslist = 74,
  sym_ia = 75,
  sym_mailbox = 76,
  sym_routeaddr = 77,
  sym_addrspec = 78,
  sym_domain = 79,
  sym_local = 80,
  sym_phrase = 81,
  sym__word = 82,
  sym_quotedstring = 83,
  sym_emailbody = 84,
  sym_quote1 = 85,
  sym_quote2 = 86,
  sym_quote3 = 87,
  sym_quote4 = 88,
  sym_quote5 = 89,
  sym_quote6 = 90,
  sym__quoted = 91,
  sym_footer = 92,
  sym_footertext = 93,
  sym_git = 94,
  sym_actions = 95,
  sym__mode = 96,
  sym_old = 97,
  sym_newmode = 98,
  sym_deleted = 99,
  sym_newfile = 100,
  sym_copyfrom = 101,
  sym_copyto = 102,
  sym_renamefrom = 103,
  sym_renameto = 104,
  sym_similarity = 105,
  sym_dissimilarity = 106,
  sym_index = 107,
  sym_patch = 108,
  sym_oldfile = 109,
  sym_diff = 110,
  aux_sym_headers_repeat1 = 111,
  aux_sym__fieldbody_repeat1 = 112,
  aux_sym_seperator_repeat1 = 113,
  aux_sym_addresslist_repeat1 = 114,
  aux_sym_domain_repeat1 = 115,
  aux_sym_phrase_repeat1 = 116,
  aux_sym_emailbody_repeat1 = 117,
  aux_sym_git_repeat1 = 118,
  aux_sym_diff_repeat1 = 119,
  alias_sym_datefield = 120,
  alias_sym_midfield = 121,
  alias_sym_subjectfield = 122,
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
  [aux_sym_footertext_token1] = "footertext_token1",
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
  [sym__fieldbody] = "_fieldbody",
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
  [aux_sym__fieldbody_repeat1] = "_fieldbody_repeat1",
  [aux_sym_seperator_repeat1] = "seperator_repeat1",
  [aux_sym_addresslist_repeat1] = "addresslist_repeat1",
  [aux_sym_domain_repeat1] = "domain_repeat1",
  [aux_sym_phrase_repeat1] = "phrase_repeat1",
  [aux_sym_emailbody_repeat1] = "emailbody_repeat1",
  [aux_sym_git_repeat1] = "git_repeat1",
  [aux_sym_diff_repeat1] = "diff_repeat1",
  [alias_sym_datefield] = "datefield",
  [alias_sym_midfield] = "midfield",
  [alias_sym_subjectfield] = "subjectfield",
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
  [aux_sym_footertext_token1] = aux_sym_footertext_token1,
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
  [sym__fieldbody] = sym__fieldbody,
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
  [aux_sym__fieldbody_repeat1] = aux_sym__fieldbody_repeat1,
  [aux_sym_seperator_repeat1] = aux_sym_seperator_repeat1,
  [aux_sym_addresslist_repeat1] = aux_sym_addresslist_repeat1,
  [aux_sym_domain_repeat1] = aux_sym_domain_repeat1,
  [aux_sym_phrase_repeat1] = aux_sym_phrase_repeat1,
  [aux_sym_emailbody_repeat1] = aux_sym_emailbody_repeat1,
  [aux_sym_git_repeat1] = aux_sym_git_repeat1,
  [aux_sym_diff_repeat1] = aux_sym_diff_repeat1,
  [alias_sym_datefield] = alias_sym_datefield,
  [alias_sym_midfield] = alias_sym_midfield,
  [alias_sym_subjectfield] = alias_sym_subjectfield,
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
  [aux_sym_footertext_token1] = {
    .visible = false,
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
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 24,
  [45] = 25,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 27,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 43,
  [63] = 63,
  [64] = 32,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 58,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 73,
  [77] = 71,
  [78] = 74,
  [79] = 79,
  [80] = 72,
  [81] = 75,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 55,
  [89] = 59,
  [90] = 90,
  [91] = 91,
  [92] = 91,
  [93] = 93,
  [94] = 63,
  [95] = 95,
  [96] = 74,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 101,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 82,
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
  [157] = 156,
  [158] = 158,
  [159] = 97,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 161,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 142,
  [175] = 175,
  [176] = 161,
  [177] = 172,
  [178] = 171,
  [179] = 129,
  [180] = 141,
  [181] = 172,
  [182] = 138,
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
      if (lookahead == '"') ADVANCE(158);
      if (lookahead == '+') ADVANCE(212);
      if (lookahead == ',') ADVANCE(150);
      if (lookahead == '-') ADVANCE(215);
      if (lookahead == '.') ADVANCE(154);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == '<') ADVANCE(151);
      if (lookahead == '>') ADVANCE(152);
      if (lookahead == '@') ADVANCE(153);
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
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(251);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(161);
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') ADVANCE(100);
      if (lookahead == ' ') ADVANCE(100);
      if (lookahead == '-') ADVANCE(105);
      if (lookahead == ':') ADVANCE(174);
      if (lookahead == '>') ADVANCE(147);
      if (lookahead == 'D') ADVANCE(113);
      if (lookahead == 'd') ADVANCE(111);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(118);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(116);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(140);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(123);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(124);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(125);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(136);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(177);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') ADVANCE(163);
      if (lookahead == '-') ADVANCE(168);
      if (lookahead == '>') ADVANCE(175);
      if (lookahead == 'd') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(163);
      if (lookahead != 0) ADVANCE(174);
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
          lookahead == ' ') ADVANCE(148);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '.') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(256);
      if (lookahead != 0) ADVANCE(313);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '\r') ADVANCE(164);
      if (lookahead == '>') ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(164);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '\r') ADVANCE(257);
      if (lookahead == '-') ADVANCE(265);
      if (lookahead == '>') ADVANCE(176);
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
          lookahead == ' ') ADVANCE(178);
      if (lookahead != 0) ADVANCE(179);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(165);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '-') ADVANCE(253);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(158);
      if (lookahead == '+') ADVANCE(212);
      if (lookahead == ',') ADVANCE(150);
      if (lookahead == '-') ADVANCE(215);
      if (lookahead == '.') ADVANCE(154);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == '<') ADVANCE(151);
      if (lookahead == '>') ADVANCE(152);
      if (lookahead == '@') ADVANCE(153);
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
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(251);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(158);
      if (lookahead == '<') ADVANCE(151);
      if (lookahead == '@') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(156);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(14)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '.' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '>' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(157);
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
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(251);
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
          lookahead == ' ') ADVANCE(112);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(118);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(116);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(113);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(140);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(123);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(124);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(125);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(80)
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(147);
      END_STATE();
    case 81:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(81)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(185);
      END_STATE();
    case 82:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(82)
      if (lookahead != 0) ADVANCE(252);
      END_STATE();
    case 83:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(83)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
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
      if (lookahead == '\t') ADVANCE(161);
      if (lookahead == '\n') SKIP(85)
      if (lookahead == '\r') ADVANCE(100);
      if (lookahead == ' ') ADVANCE(100);
      if (lookahead == '-') ADVANCE(105);
      if (lookahead == ':') ADVANCE(174);
      if (lookahead == '>') ADVANCE(147);
      if (lookahead == 'D') ADVANCE(113);
      if (lookahead == 'd') ADVANCE(111);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(118);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(116);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(140);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(123);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(124);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(125);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(136);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 86:
      if (eof) ADVANCE(89);
      if (lookahead == '\n') SKIP(86)
      if (lookahead == '\r') ADVANCE(163);
      if (lookahead == '-') ADVANCE(168);
      if (lookahead == '>') ADVANCE(175);
      if (lookahead == 'd') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(163);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 87:
      if (eof) ADVANCE(89);
      if (lookahead == '\n') SKIP(87)
      if (lookahead == '\r') ADVANCE(257);
      if (lookahead == '-') ADVANCE(265);
      if (lookahead == '>') ADVANCE(176);
      if (lookahead == 'd') ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(257);
      if (lookahead != 0) ADVANCE(313);
      END_STATE();
    case 88:
      if (eof) ADVANCE(89);
      if (lookahead == '"') ADVANCE(158);
      if (lookahead == '+') ADVANCE(16);
      if (lookahead == ',') ADVANCE(150);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '.') ADVANCE(154);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == '<') ADVANCE(151);
      if (lookahead == '>') ADVANCE(152);
      if (lookahead == '@') ADVANCE(153);
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
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == '\t') ADVANCE(161);
      if (lookahead == '\r') ADVANCE(100);
      if (lookahead == ' ') ADVANCE(100);
      if (lookahead == '-') ADVANCE(105);
      if (lookahead == '>') ADVANCE(147);
      if (lookahead == 'D') ADVANCE(113);
      if (lookahead == 'd') ADVANCE(111);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(118);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(116);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(140);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(123);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(124);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(125);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(147);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == '\n') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ':') ADVANCE(147);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == ' ') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(147);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == ' ') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(147);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(147);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == '-') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(147);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == '-') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(147);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == '-') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(147);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == '-') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(147);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'f') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(147);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'f') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(147);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'i') ADVANCE(110);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(147);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == '\r' ||
          lookahead == ' ') ADVANCE(112);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(118);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(116);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(113);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(140);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(123);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(124);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(125);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(147);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(147);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(147);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(147);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(147);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(147);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(147);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(147);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(147);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(147);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(147);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(147);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(147);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(134);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(147);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(147);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(147);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(147);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(147);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(147);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(147);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(147);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(147);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(147);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(147);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(147);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(147);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(147);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(147);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(147);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(147);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(147);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(147);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(147);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(147);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_fieldname);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__bodycontent);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(149);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__bodycontent);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__specails);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__atom);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(156);
      if (!sym__atom_character_set_1(lookahead)) ADVANCE(157);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__atom);
      if (!sym__atom_character_set_1(lookahead)) ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_quotedstring_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_quotedstring_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == '\t') ADVANCE(161);
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') ADVANCE(100);
      if (lookahead == ' ') ADVANCE(100);
      if (lookahead == '-') ADVANCE(105);
      if (lookahead == ':') ADVANCE(174);
      if (lookahead == '>') ADVANCE(147);
      if (lookahead == 'D') ADVANCE(113);
      if (lookahead == 'd') ADVANCE(111);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(118);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(116);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(140);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(123);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(124);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(125);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(136);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == '\n') ADVANCE(177);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') ADVANCE(163);
      if (lookahead == '-') ADVANCE(168);
      if (lookahead == '>') ADVANCE(175);
      if (lookahead == 'd') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(163);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '\r') ADVANCE(164);
      if (lookahead == '>') ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(164);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(165);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == ' ') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(174);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == ' ') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(174);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == '-') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(174);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == '-') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(174);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == '-') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(174);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == 'f') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(174);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == 'f') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(174);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == 'i') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(174);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__quote);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__quote);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(313);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_LF);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_footertext_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(179);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_footertext_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_diff_DASH_DASH);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_diff_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(147);
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
      if (lookahead == '\n') ADVANCE(177);
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
      if (lookahead == '.') ADVANCE(154);
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
      if (lookahead == '>') ADVANCE(176);
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
  [7] = {.lex_state = 85, .external_lex_state = 1},
  [8] = {.lex_state = 85, .external_lex_state = 1},
  [9] = {.lex_state = 85, .external_lex_state = 1},
  [10] = {.lex_state = 85, .external_lex_state = 1},
  [11] = {.lex_state = 86, .external_lex_state = 2},
  [12] = {.lex_state = 85, .external_lex_state = 2},
  [13] = {.lex_state = 85, .external_lex_state = 2},
  [14] = {.lex_state = 85, .external_lex_state = 2},
  [15] = {.lex_state = 85, .external_lex_state = 2},
  [16] = {.lex_state = 85, .external_lex_state = 2},
  [17] = {.lex_state = 85, .external_lex_state = 2},
  [18] = {.lex_state = 85, .external_lex_state = 2},
  [19] = {.lex_state = 86},
  [20] = {.lex_state = 85, .external_lex_state = 2},
  [21] = {.lex_state = 85, .external_lex_state = 2},
  [22] = {.lex_state = 86},
  [23] = {.lex_state = 86},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 88},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 14},
  [29] = {.lex_state = 88},
  [30] = {.lex_state = 88},
  [31] = {.lex_state = 14},
  [32] = {.lex_state = 88},
  [33] = {.lex_state = 88},
  [34] = {.lex_state = 88},
  [35] = {.lex_state = 88},
  [36] = {.lex_state = 88},
  [37] = {.lex_state = 88},
  [38] = {.lex_state = 88},
  [39] = {.lex_state = 14},
  [40] = {.lex_state = 88},
  [41] = {.lex_state = 88},
  [42] = {.lex_state = 88},
  [43] = {.lex_state = 88},
  [44] = {.lex_state = 87},
  [45] = {.lex_state = 87},
  [46] = {.lex_state = 14},
  [47] = {.lex_state = 14},
  [48] = {.lex_state = 88, .external_lex_state = 1},
  [49] = {.lex_state = 14},
  [50] = {.lex_state = 88, .external_lex_state = 1},
  [51] = {.lex_state = 87},
  [52] = {.lex_state = 88, .external_lex_state = 1},
  [53] = {.lex_state = 86},
  [54] = {.lex_state = 0, .external_lex_state = 1},
  [55] = {.lex_state = 88, .external_lex_state = 1},
  [56] = {.lex_state = 86},
  [57] = {.lex_state = 86},
  [58] = {.lex_state = 14},
  [59] = {.lex_state = 88, .external_lex_state = 1},
  [60] = {.lex_state = 0, .external_lex_state = 1},
  [61] = {.lex_state = 86},
  [62] = {.lex_state = 86},
  [63] = {.lex_state = 88, .external_lex_state = 1},
  [64] = {.lex_state = 86},
  [65] = {.lex_state = 0, .external_lex_state = 1},
  [66] = {.lex_state = 86},
  [67] = {.lex_state = 86},
  [68] = {.lex_state = 86},
  [69] = {.lex_state = 14},
  [70] = {.lex_state = 86},
  [71] = {.lex_state = 5, .external_lex_state = 1},
  [72] = {.lex_state = 5, .external_lex_state = 1},
  [73] = {.lex_state = 14},
  [74] = {.lex_state = 88, .external_lex_state = 1},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 14},
  [77] = {.lex_state = 88, .external_lex_state = 1},
  [78] = {.lex_state = 14},
  [79] = {.lex_state = 14},
  [80] = {.lex_state = 88, .external_lex_state = 1},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 88, .external_lex_state = 1},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 88},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 88},
  [89] = {.lex_state = 88},
  [90] = {.lex_state = 88},
  [91] = {.lex_state = 9},
  [92] = {.lex_state = 9},
  [93] = {.lex_state = 88, .external_lex_state = 1},
  [94] = {.lex_state = 88},
  [95] = {.lex_state = 88},
  [96] = {.lex_state = 88},
  [97] = {.lex_state = 88, .external_lex_state = 1},
  [98] = {.lex_state = 88, .external_lex_state = 1},
  [99] = {.lex_state = 88, .external_lex_state = 1},
  [100] = {.lex_state = 88, .external_lex_state = 1},
  [101] = {.lex_state = 88, .external_lex_state = 1},
  [102] = {.lex_state = 5, .external_lex_state = 1},
  [103] = {.lex_state = 88, .external_lex_state = 1},
  [104] = {.lex_state = 88, .external_lex_state = 1},
  [105] = {.lex_state = 88},
  [106] = {.lex_state = 7},
  [107] = {.lex_state = 88},
  [108] = {.lex_state = 7},
  [109] = {.lex_state = 88},
  [110] = {.lex_state = 0, .external_lex_state = 1},
  [111] = {.lex_state = 7},
  [112] = {.lex_state = 88},
  [113] = {.lex_state = 88},
  [114] = {.lex_state = 10},
  [115] = {.lex_state = 7},
  [116] = {.lex_state = 88},
  [117] = {.lex_state = 7},
  [118] = {.lex_state = 88},
  [119] = {.lex_state = 88},
  [120] = {.lex_state = 88},
  [121] = {.lex_state = 88},
  [122] = {.lex_state = 88},
  [123] = {.lex_state = 20},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 88},
  [127] = {.lex_state = 88},
  [128] = {.lex_state = 11},
  [129] = {.lex_state = 18},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 88},
  [132] = {.lex_state = 88},
  [133] = {.lex_state = 81},
  [134] = {.lex_state = 88},
  [135] = {.lex_state = 81},
  [136] = {.lex_state = 18},
  [137] = {.lex_state = 88},
  [138] = {.lex_state = 20},
  [139] = {.lex_state = 88},
  [140] = {.lex_state = 88},
  [141] = {.lex_state = 82},
  [142] = {.lex_state = 0, .external_lex_state = 2},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 88},
  [145] = {.lex_state = 88},
  [146] = {.lex_state = 83},
  [147] = {.lex_state = 88},
  [148] = {.lex_state = 88},
  [149] = {.lex_state = 88},
  [150] = {.lex_state = 88},
  [151] = {.lex_state = 82},
  [152] = {.lex_state = 88},
  [153] = {.lex_state = 88},
  [154] = {.lex_state = 88},
  [155] = {.lex_state = 18},
  [156] = {.lex_state = 0, .external_lex_state = 3},
  [157] = {.lex_state = 0, .external_lex_state = 3},
  [158] = {.lex_state = 88},
  [159] = {.lex_state = 88},
  [160] = {.lex_state = 88},
  [161] = {.lex_state = 88},
  [162] = {.lex_state = 83},
  [163] = {.lex_state = 83},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 88},
  [166] = {.lex_state = 88},
  [167] = {.lex_state = 88},
  [168] = {.lex_state = 5},
  [169] = {.lex_state = 83},
  [170] = {.lex_state = 88},
  [171] = {.lex_state = 88},
  [172] = {.lex_state = 159},
  [173] = {.lex_state = 10},
  [174] = {.lex_state = 0, .external_lex_state = 2},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 88},
  [177] = {.lex_state = 159},
  [178] = {.lex_state = 88},
  [179] = {.lex_state = 18},
  [180] = {.lex_state = 82},
  [181] = {.lex_state = 159},
  [182] = {.lex_state = 20},
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
    [sym_message] = STATE(143),
    [sym_headers] = STATE(11),
    [sym_headerextra] = STATE(2),
    [sym_addressheader] = STATE(2),
    [sym_dateheader] = STATE(2),
    [sym_subjectheader] = STATE(2),
    [sym_midheader] = STATE(2),
    [sym_addrkind] = STATE(140),
    [sym_to] = STATE(137),
    [sym_from] = STATE(137),
    [sym_cc] = STATE(137),
    [sym_bcc] = STATE(137),
    [sym_sender] = STATE(137),
    [sym_replyto] = STATE(137),
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
    STATE(140), 1,
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
    STATE(137), 6,
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
    STATE(140), 1,
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
    STATE(137), 6,
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
    STATE(70), 1,
      sym_patch,
    STATE(116), 1,
      sym_oldfile,
    STATE(5), 2,
      sym_actions,
      aux_sym_git_repeat1,
    STATE(41), 11,
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
    STATE(41), 11,
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
    STATE(41), 11,
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
  [267] = 3,
    ACTIONS(114), 1,
      sym__lwsp,
    ACTIONS(110), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(112), 14,
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
  [291] = 3,
    ACTIONS(120), 1,
      sym__lwsp,
    ACTIONS(116), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(118), 14,
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
  [315] = 3,
    ACTIONS(114), 1,
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
  [339] = 3,
    ACTIONS(120), 1,
      sym__lwsp,
    ACTIONS(126), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(128), 14,
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
  [363] = 9,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
    ACTIONS(132), 1,
      sym_line,
    ACTIONS(134), 1,
      sym__quote,
    ACTIONS(136), 1,
      anon_sym_DASH_DASH_LF,
    ACTIONS(138), 1,
      anon_sym_diff_DASH_DASH,
    ACTIONS(140), 1,
      sym__line_break,
    STATE(84), 1,
      sym_emailbody,
    STATE(125), 1,
      sym_footer,
    STATE(23), 9,
      sym_quote1,
      sym_quote2,
      sym_quote3,
      sym_quote4,
      sym_quote5,
      sym_quote6,
      sym__quoted,
      sym_git,
      aux_sym_emailbody_repeat1,
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
  [504] = 2,
    ACTIONS(162), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(164), 14,
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
  [525] = 2,
    ACTIONS(166), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(168), 14,
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
  [546] = 8,
    ACTIONS(132), 1,
      sym_line,
    ACTIONS(134), 1,
      sym__quote,
    ACTIONS(136), 1,
      anon_sym_DASH_DASH_LF,
    ACTIONS(138), 1,
      anon_sym_diff_DASH_DASH,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
    STATE(95), 1,
      sym_emailbody,
    STATE(130), 1,
      sym_footer,
    STATE(23), 9,
      sym_quote1,
      sym_quote2,
      sym_quote3,
      sym_quote4,
      sym_quote5,
      sym_quote6,
      sym__quoted,
      sym_git,
      aux_sym_emailbody_repeat1,
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
  [600] = 2,
    ACTIONS(176), 2,
      sym__line_break,
      ts_builtin_sym_end,
    ACTIONS(178), 14,
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
  [621] = 6,
    ACTIONS(180), 1,
      ts_builtin_sym_end,
    ACTIONS(182), 1,
      sym_line,
    ACTIONS(185), 1,
      sym__quote,
    ACTIONS(188), 1,
      anon_sym_DASH_DASH_LF,
    ACTIONS(190), 1,
      anon_sym_diff_DASH_DASH,
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
  [648] = 6,
    ACTIONS(134), 1,
      sym__quote,
    ACTIONS(138), 1,
      anon_sym_diff_DASH_DASH,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    ACTIONS(195), 1,
      sym_line,
    ACTIONS(197), 1,
      anon_sym_DASH_DASH_LF,
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
  [675] = 3,
    ACTIONS(201), 1,
      aux_sym_diff_token1,
    STATE(25), 1,
      aux_sym_diff_repeat1,
    ACTIONS(199), 10,
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
  [694] = 3,
    ACTIONS(205), 1,
      aux_sym_diff_token1,
    STATE(25), 1,
      aux_sym_diff_repeat1,
    ACTIONS(203), 10,
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
  [713] = 3,
    ACTIONS(208), 1,
      aux_sym__mode_token1,
    STATE(42), 1,
      sym__mode,
    ACTIONS(210), 10,
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
  [732] = 1,
    ACTIONS(203), 11,
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
  [746] = 10,
    ACTIONS(212), 1,
      sym__atom,
    ACTIONS(214), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      sym_addresslist,
    STATE(46), 1,
      aux_sym_phrase_repeat1,
    STATE(50), 1,
      sym_ia,
    STATE(98), 1,
      sym_addrspec,
    STATE(99), 1,
      sym_mailbox,
    STATE(107), 1,
      sym_phrase,
    STATE(171), 1,
      sym_local,
    STATE(79), 2,
      sym__word,
      sym_quotedstring,
  [778] = 1,
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
  [791] = 1,
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
  [804] = 9,
    ACTIONS(212), 1,
      sym__atom,
    ACTIONS(214), 1,
      anon_sym_DQUOTE,
    STATE(46), 1,
      aux_sym_phrase_repeat1,
    STATE(93), 1,
      sym_ia,
    STATE(98), 1,
      sym_addrspec,
    STATE(99), 1,
      sym_mailbox,
    STATE(107), 1,
      sym_phrase,
    STATE(171), 1,
      sym_local,
    STATE(79), 2,
      sym__word,
      sym_quotedstring,
  [833] = 1,
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
  [846] = 1,
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
  [859] = 1,
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
  [872] = 1,
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
  [885] = 1,
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
  [898] = 1,
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
  [911] = 1,
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
  [924] = 9,
    ACTIONS(212), 1,
      sym__atom,
    ACTIONS(214), 1,
      anon_sym_DQUOTE,
    STATE(46), 1,
      aux_sym_phrase_repeat1,
    STATE(98), 1,
      sym_addrspec,
    STATE(99), 1,
      sym_mailbox,
    STATE(104), 1,
      sym_ia,
    STATE(107), 1,
      sym_phrase,
    STATE(171), 1,
      sym_local,
    STATE(79), 2,
      sym__word,
      sym_quotedstring,
  [953] = 1,
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
  [966] = 1,
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
  [979] = 1,
    ACTIONS(238), 10,
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
  [992] = 1,
    ACTIONS(240), 10,
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
  [1005] = 4,
    ACTIONS(242), 1,
      ts_builtin_sym_end,
    ACTIONS(244), 1,
      aux_sym_diff_token1,
    STATE(45), 1,
      aux_sym_diff_repeat1,
    ACTIONS(199), 4,
      sym_line,
      sym__quote,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
  [1021] = 4,
    ACTIONS(246), 1,
      ts_builtin_sym_end,
    ACTIONS(248), 1,
      aux_sym_diff_token1,
    STATE(45), 1,
      aux_sym_diff_repeat1,
    ACTIONS(203), 4,
      sym_line,
      sym__quote,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
  [1037] = 4,
    ACTIONS(214), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      anon_sym_LT,
    ACTIONS(253), 1,
      sym__atom,
    STATE(49), 3,
      sym__word,
      sym_quotedstring,
      aux_sym_phrase_repeat1,
  [1052] = 5,
    ACTIONS(255), 1,
      sym__atom,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    STATE(121), 1,
      sym_addrspec,
    STATE(178), 1,
      sym_local,
    STATE(127), 2,
      sym__word,
      sym_quotedstring,
  [1069] = 6,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    ACTIONS(262), 1,
      sym__line_break,
    ACTIONS(265), 1,
      sym__lwsp,
    STATE(48), 1,
      aux_sym_addresslist_repeat1,
    STATE(80), 1,
      aux_sym_seperator_repeat1,
    STATE(160), 1,
      sym_seperator,
  [1088] = 4,
    ACTIONS(268), 1,
      anon_sym_LT,
    ACTIONS(270), 1,
      sym__atom,
    ACTIONS(273), 1,
      anon_sym_DQUOTE,
    STATE(49), 3,
      sym__word,
      sym_quotedstring,
      aux_sym_phrase_repeat1,
  [1103] = 6,
    ACTIONS(276), 1,
      anon_sym_COMMA,
    ACTIONS(278), 1,
      sym__line_break,
    ACTIONS(280), 1,
      sym__lwsp,
    STATE(52), 1,
      aux_sym_addresslist_repeat1,
    STATE(80), 1,
      aux_sym_seperator_repeat1,
    STATE(160), 1,
      sym_seperator,
  [1122] = 2,
    ACTIONS(246), 1,
      ts_builtin_sym_end,
    ACTIONS(203), 5,
      sym_line,
      sym__quote,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
      aux_sym_diff_token1,
  [1133] = 6,
    ACTIONS(276), 1,
      anon_sym_COMMA,
    ACTIONS(280), 1,
      sym__lwsp,
    ACTIONS(282), 1,
      sym__line_break,
    STATE(48), 1,
      aux_sym_addresslist_repeat1,
    STATE(80), 1,
      aux_sym_seperator_repeat1,
    STATE(160), 1,
      sym_seperator,
  [1152] = 2,
    ACTIONS(284), 1,
      ts_builtin_sym_end,
    ACTIONS(286), 4,
      sym_line,
      sym__quote,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
  [1162] = 5,
    ACTIONS(288), 1,
      sym__line_break,
    ACTIONS(291), 1,
      sym__lwsp,
    STATE(54), 1,
      aux_sym__fieldbody_repeat1,
    STATE(72), 1,
      aux_sym_seperator_repeat1,
    STATE(168), 1,
      sym_seperator,
  [1178] = 3,
    ACTIONS(296), 1,
      anon_sym_DOT,
    STATE(63), 1,
      aux_sym_domain_repeat1,
    ACTIONS(294), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [1190] = 2,
    ACTIONS(298), 1,
      ts_builtin_sym_end,
    ACTIONS(300), 4,
      sym_line,
      sym__quote,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
  [1200] = 2,
    ACTIONS(302), 1,
      ts_builtin_sym_end,
    ACTIONS(304), 4,
      sym_line,
      sym__quote,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
  [1210] = 4,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      sym__atom,
    STATE(159), 1,
      sym_domain,
    STATE(89), 2,
      sym__word,
      sym_quotedstring,
  [1224] = 3,
    ACTIONS(296), 1,
      anon_sym_DOT,
    STATE(55), 1,
      aux_sym_domain_repeat1,
    ACTIONS(308), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [1236] = 5,
    ACTIONS(310), 1,
      sym__line_break,
    ACTIONS(312), 1,
      sym__lwsp,
    STATE(65), 1,
      aux_sym__fieldbody_repeat1,
    STATE(72), 1,
      aux_sym_seperator_repeat1,
    STATE(168), 1,
      sym_seperator,
  [1252] = 2,
    ACTIONS(314), 1,
      ts_builtin_sym_end,
    ACTIONS(316), 4,
      sym_line,
      sym__quote,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
  [1262] = 2,
    ACTIONS(240), 1,
      ts_builtin_sym_end,
    ACTIONS(318), 4,
      sym_line,
      sym__quote,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
  [1272] = 3,
    ACTIONS(322), 1,
      anon_sym_DOT,
    STATE(63), 1,
      aux_sym_domain_repeat1,
    ACTIONS(320), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [1284] = 2,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
    ACTIONS(325), 4,
      sym_line,
      sym__quote,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
  [1294] = 5,
    ACTIONS(312), 1,
      sym__lwsp,
    ACTIONS(327), 1,
      sym__line_break,
    STATE(54), 1,
      aux_sym__fieldbody_repeat1,
    STATE(72), 1,
      aux_sym_seperator_repeat1,
    STATE(168), 1,
      sym_seperator,
  [1310] = 2,
    ACTIONS(329), 1,
      ts_builtin_sym_end,
    ACTIONS(331), 4,
      sym_line,
      sym__quote,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
  [1320] = 2,
    ACTIONS(333), 1,
      ts_builtin_sym_end,
    ACTIONS(335), 4,
      sym_line,
      sym__quote,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
  [1330] = 2,
    ACTIONS(337), 1,
      ts_builtin_sym_end,
    ACTIONS(339), 4,
      sym_line,
      sym__quote,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
  [1340] = 4,
    ACTIONS(341), 1,
      sym__atom,
    ACTIONS(343), 1,
      anon_sym_DQUOTE,
    STATE(97), 1,
      sym_domain,
    STATE(59), 2,
      sym__word,
      sym_quotedstring,
  [1354] = 2,
    ACTIONS(345), 1,
      ts_builtin_sym_end,
    ACTIONS(347), 4,
      sym_line,
      sym__quote,
      anon_sym_DASH_DASH_LF,
      anon_sym_diff_DASH_DASH,
  [1364] = 4,
    ACTIONS(349), 1,
      sym__bodycontent,
    ACTIONS(351), 1,
      sym__line_break,
    ACTIONS(354), 1,
      sym__lwsp,
    STATE(71), 1,
      aux_sym_seperator_repeat1,
  [1377] = 4,
    ACTIONS(357), 1,
      sym__bodycontent,
    ACTIONS(359), 1,
      sym__line_break,
    ACTIONS(361), 1,
      sym__lwsp,
    STATE(71), 1,
      aux_sym_seperator_repeat1,
  [1390] = 3,
    ACTIONS(343), 1,
      anon_sym_DQUOTE,
    ACTIONS(363), 1,
      sym__atom,
    STATE(82), 2,
      sym__word,
      sym_quotedstring,
  [1401] = 1,
    ACTIONS(365), 4,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
      anon_sym_DOT,
  [1408] = 4,
    ACTIONS(244), 1,
      aux_sym_diff_token1,
    ACTIONS(367), 1,
      anon_sym_DOT,
    STATE(44), 1,
      aux_sym_diff_repeat1,
    STATE(64), 1,
      sym_diff,
  [1421] = 3,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(369), 1,
      sym__atom,
    STATE(109), 2,
      sym__word,
      sym_quotedstring,
  [1432] = 4,
    ACTIONS(349), 1,
      anon_sym_COMMA,
    ACTIONS(371), 1,
      sym__line_break,
    ACTIONS(374), 1,
      sym__lwsp,
    STATE(77), 1,
      aux_sym_seperator_repeat1,
  [1445] = 2,
    ACTIONS(365), 1,
      sym__atom,
    ACTIONS(377), 3,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DQUOTE,
  [1454] = 3,
    ACTIONS(381), 1,
      anon_sym_AT,
    ACTIONS(383), 1,
      sym__atom,
    ACTIONS(379), 2,
      anon_sym_LT,
      anon_sym_DQUOTE,
  [1465] = 4,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    ACTIONS(385), 1,
      sym__line_break,
    ACTIONS(387), 1,
      sym__lwsp,
    STATE(77), 1,
      aux_sym_seperator_repeat1,
  [1478] = 4,
    ACTIONS(201), 1,
      aux_sym_diff_token1,
    ACTIONS(389), 1,
      anon_sym_DOT,
    STATE(24), 1,
      aux_sym_diff_repeat1,
    STATE(32), 1,
      sym_diff,
  [1491] = 1,
    ACTIONS(320), 4,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
      anon_sym_DOT,
  [1498] = 3,
    ACTIONS(391), 1,
      sym__bodycontent,
    STATE(12), 1,
      sym__fieldbody,
    STATE(15), 1,
      sym_fieldbody,
  [1508] = 3,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
    ACTIONS(393), 1,
      anon_sym_DASH_DASH_LF,
    STATE(130), 1,
      sym_footer,
  [1518] = 3,
    ACTIONS(391), 1,
      sym__bodycontent,
    STATE(13), 1,
      sym_date,
    STATE(21), 1,
      sym__fieldbody,
  [1528] = 3,
    ACTIONS(391), 1,
      sym__bodycontent,
    STATE(18), 1,
      sym__fieldbody,
    STATE(20), 1,
      sym_subject,
  [1538] = 3,
    ACTIONS(391), 1,
      sym__bodycontent,
    STATE(16), 1,
      sym__fieldbody,
    STATE(17), 1,
      sym_mid,
  [1548] = 3,
    ACTIONS(294), 1,
      anon_sym_GT,
    ACTIONS(395), 1,
      anon_sym_DOT,
    STATE(94), 1,
      aux_sym_domain_repeat1,
  [1558] = 3,
    ACTIONS(308), 1,
      anon_sym_GT,
    ACTIONS(395), 1,
      anon_sym_DOT,
    STATE(88), 1,
      aux_sym_domain_repeat1,
  [1568] = 1,
    ACTIONS(397), 3,
      anon_sym_git,
      anon_sym_cc,
      anon_sym_combined,
  [1574] = 3,
    ACTIONS(399), 1,
      aux_sym_diff_token1,
    STATE(24), 1,
      aux_sym_diff_repeat1,
    STATE(43), 1,
      sym_diff,
  [1584] = 3,
    ACTIONS(401), 1,
      aux_sym_diff_token1,
    STATE(44), 1,
      aux_sym_diff_repeat1,
    STATE(62), 1,
      sym_diff,
  [1594] = 1,
    ACTIONS(403), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [1600] = 3,
    ACTIONS(320), 1,
      anon_sym_GT,
    ACTIONS(405), 1,
      anon_sym_DOT,
    STATE(94), 1,
      aux_sym_domain_repeat1,
  [1610] = 3,
    ACTIONS(393), 1,
      anon_sym_DASH_DASH_LF,
    ACTIONS(408), 1,
      ts_builtin_sym_end,
    STATE(164), 1,
      sym_footer,
  [1620] = 1,
    ACTIONS(365), 3,
      anon_sym_GT,
      anon_sym_AT,
      anon_sym_DOT,
  [1626] = 1,
    ACTIONS(410), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [1632] = 1,
    ACTIONS(412), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [1638] = 1,
    ACTIONS(414), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [1644] = 1,
    ACTIONS(416), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [1650] = 1,
    ACTIONS(349), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [1656] = 1,
    ACTIONS(349), 3,
      sym__line_break,
      sym__lwsp,
      sym__bodycontent,
  [1662] = 1,
    ACTIONS(418), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [1668] = 1,
    ACTIONS(420), 3,
      sym__line_break,
      sym__lwsp,
      anon_sym_COMMA,
  [1674] = 2,
    ACTIONS(422), 1,
      anon_sym_from,
    ACTIONS(424), 1,
      anon_sym_to,
  [1681] = 2,
    ACTIONS(426), 1,
      sym_line,
    ACTIONS(428), 1,
      sym__quote,
  [1688] = 2,
    ACTIONS(430), 1,
      anon_sym_LT,
    STATE(103), 1,
      sym_routeaddr,
  [1695] = 2,
    ACTIONS(432), 1,
      sym_line,
    ACTIONS(434), 1,
      sym__quote,
  [1702] = 1,
    ACTIONS(320), 2,
      anon_sym_GT,
      anon_sym_DOT,
  [1707] = 1,
    ACTIONS(436), 2,
      sym__line_break,
      sym__lwsp,
  [1712] = 2,
    ACTIONS(438), 1,
      sym_line,
    ACTIONS(440), 1,
      sym__quote,
  [1719] = 2,
    ACTIONS(442), 1,
      anon_sym_DOT,
    ACTIONS(444), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [1726] = 2,
    ACTIONS(446), 1,
      anon_sym_from,
    ACTIONS(448), 1,
      anon_sym_to,
  [1733] = 2,
    ACTIONS(450), 1,
      aux_sym_footertext_token1,
    STATE(175), 1,
      sym_footertext,
  [1740] = 2,
    ACTIONS(452), 1,
      sym_line,
    ACTIONS(454), 1,
      sym__quote,
  [1747] = 2,
    ACTIONS(456), 1,
      anon_sym_PLUS_PLUS_PLUS,
    STATE(53), 1,
      sym_newfile,
  [1754] = 2,
    ACTIONS(458), 1,
      sym_line,
    ACTIONS(460), 1,
      sym__quote,
  [1761] = 2,
    ACTIONS(462), 1,
      aux_sym__mode_token1,
    STATE(38), 1,
      sym__mode,
  [1768] = 2,
    ACTIONS(464), 1,
      aux_sym__mode_token1,
    STATE(34), 1,
      sym__mode,
  [1775] = 2,
    ACTIONS(466), 1,
      aux_sym__mode_token1,
    STATE(33), 1,
      sym__mode,
  [1782] = 1,
    ACTIONS(468), 1,
      anon_sym_GT,
  [1786] = 1,
    ACTIONS(470), 1,
      anon_sym_COLON,
  [1790] = 1,
    ACTIONS(472), 1,
      sym_dirname,
  [1794] = 1,
    ACTIONS(474), 1,
      ts_builtin_sym_end,
  [1798] = 1,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
  [1802] = 1,
    ACTIONS(476), 1,
      anon_sym_mode,
  [1806] = 1,
    ACTIONS(478), 1,
      anon_sym_AT,
  [1810] = 1,
    ACTIONS(480), 1,
      sym_line,
  [1814] = 1,
    ACTIONS(482), 1,
      sym_file,
  [1818] = 1,
    ACTIONS(408), 1,
      ts_builtin_sym_end,
  [1822] = 1,
    ACTIONS(484), 1,
      anon_sym_COLON,
  [1826] = 1,
    ACTIONS(486), 1,
      anon_sym_index,
  [1830] = 1,
    ACTIONS(488), 1,
      sym__hash,
  [1834] = 1,
    ACTIONS(490), 1,
      anon_sym_index,
  [1838] = 1,
    ACTIONS(492), 1,
      sym__hash,
  [1842] = 1,
    ACTIONS(494), 1,
      sym_file,
  [1846] = 1,
    ACTIONS(496), 1,
      anon_sym_COLON,
  [1850] = 1,
    ACTIONS(498), 1,
      sym_dirname,
  [1854] = 1,
    ACTIONS(500), 1,
      anon_sym_file,
  [1858] = 1,
    ACTIONS(502), 1,
      anon_sym_COLON,
  [1862] = 1,
    ACTIONS(504), 1,
      sym_filetype,
  [1866] = 1,
    ACTIONS(506), 1,
      sym__line_break,
  [1870] = 1,
    ACTIONS(508), 1,
      ts_builtin_sym_end,
  [1874] = 1,
    ACTIONS(510), 1,
      anon_sym_COLON,
  [1878] = 1,
    ACTIONS(512), 1,
      anon_sym_COLON,
  [1882] = 1,
    ACTIONS(514), 1,
      sym__path,
  [1886] = 1,
    ACTIONS(516), 1,
      anon_sym_mode,
  [1890] = 1,
    ACTIONS(518), 1,
      anon_sym_COLON,
  [1894] = 1,
    ACTIONS(520), 1,
      anon_sym_COLON,
  [1898] = 1,
    ACTIONS(522), 1,
      anon_sym_COLON,
  [1902] = 1,
    ACTIONS(524), 1,
      sym_filetype,
  [1906] = 1,
    ACTIONS(526), 1,
      aux_sym__mode_token1,
  [1910] = 1,
    ACTIONS(528), 1,
      anon_sym_PLUS_PLUS_PLUS,
  [1914] = 1,
    ACTIONS(530), 1,
      anon_sym_mode,
  [1918] = 1,
    ACTIONS(532), 1,
      anon_sym_DOT_DOT,
  [1922] = 1,
    ACTIONS(120), 1,
      sym__lwsp,
  [1926] = 1,
    ACTIONS(114), 1,
      sym__lwsp,
  [1930] = 1,
    ACTIONS(534), 1,
      aux_sym__mode_token1,
  [1934] = 1,
    ACTIONS(410), 1,
      anon_sym_GT,
  [1938] = 1,
    ACTIONS(536), 1,
      anon_sym_COMMA,
  [1942] = 1,
    ACTIONS(538), 1,
      anon_sym_DQUOTE,
  [1946] = 1,
    ACTIONS(540), 1,
      sym__path,
  [1950] = 1,
    ACTIONS(542), 1,
      sym__path,
  [1954] = 1,
    ACTIONS(544), 1,
      ts_builtin_sym_end,
  [1958] = 1,
    ACTIONS(546), 1,
      anon_sym_COLON,
  [1962] = 1,
    ACTIONS(548), 1,
      anon_sym_COLON,
  [1966] = 1,
    ACTIONS(550), 1,
      anon_sym_COLON,
  [1970] = 1,
    ACTIONS(552), 1,
      sym__bodycontent,
  [1974] = 1,
    ACTIONS(554), 1,
      sym__path,
  [1978] = 1,
    ACTIONS(556), 1,
      anon_sym_DQUOTE,
  [1982] = 1,
    ACTIONS(558), 1,
      anon_sym_AT,
  [1986] = 1,
    ACTIONS(560), 1,
      aux_sym_quotedstring_token1,
  [1990] = 1,
    ACTIONS(562), 1,
      aux_sym_footertext_token1,
  [1994] = 1,
    ACTIONS(564), 1,
      sym__line_break,
  [1998] = 1,
    ACTIONS(566), 1,
      ts_builtin_sym_end,
  [2002] = 1,
    ACTIONS(568), 1,
      anon_sym_DQUOTE,
  [2006] = 1,
    ACTIONS(570), 1,
      aux_sym_quotedstring_token1,
  [2010] = 1,
    ACTIONS(572), 1,
      anon_sym_AT,
  [2014] = 1,
    ACTIONS(574), 1,
      sym_file,
  [2018] = 1,
    ACTIONS(576), 1,
      sym_filetype,
  [2022] = 1,
    ACTIONS(578), 1,
      aux_sym_quotedstring_token1,
  [2026] = 1,
    ACTIONS(580), 1,
      sym_dirname,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 60,
  [SMALL_STATE(4)] = 120,
  [SMALL_STATE(5)] = 174,
  [SMALL_STATE(6)] = 222,
  [SMALL_STATE(7)] = 267,
  [SMALL_STATE(8)] = 291,
  [SMALL_STATE(9)] = 315,
  [SMALL_STATE(10)] = 339,
  [SMALL_STATE(11)] = 363,
  [SMALL_STATE(12)] = 399,
  [SMALL_STATE(13)] = 420,
  [SMALL_STATE(14)] = 441,
  [SMALL_STATE(15)] = 462,
  [SMALL_STATE(16)] = 483,
  [SMALL_STATE(17)] = 504,
  [SMALL_STATE(18)] = 525,
  [SMALL_STATE(19)] = 546,
  [SMALL_STATE(20)] = 579,
  [SMALL_STATE(21)] = 600,
  [SMALL_STATE(22)] = 621,
  [SMALL_STATE(23)] = 648,
  [SMALL_STATE(24)] = 675,
  [SMALL_STATE(25)] = 694,
  [SMALL_STATE(26)] = 713,
  [SMALL_STATE(27)] = 732,
  [SMALL_STATE(28)] = 746,
  [SMALL_STATE(29)] = 778,
  [SMALL_STATE(30)] = 791,
  [SMALL_STATE(31)] = 804,
  [SMALL_STATE(32)] = 833,
  [SMALL_STATE(33)] = 846,
  [SMALL_STATE(34)] = 859,
  [SMALL_STATE(35)] = 872,
  [SMALL_STATE(36)] = 885,
  [SMALL_STATE(37)] = 898,
  [SMALL_STATE(38)] = 911,
  [SMALL_STATE(39)] = 924,
  [SMALL_STATE(40)] = 953,
  [SMALL_STATE(41)] = 966,
  [SMALL_STATE(42)] = 979,
  [SMALL_STATE(43)] = 992,
  [SMALL_STATE(44)] = 1005,
  [SMALL_STATE(45)] = 1021,
  [SMALL_STATE(46)] = 1037,
  [SMALL_STATE(47)] = 1052,
  [SMALL_STATE(48)] = 1069,
  [SMALL_STATE(49)] = 1088,
  [SMALL_STATE(50)] = 1103,
  [SMALL_STATE(51)] = 1122,
  [SMALL_STATE(52)] = 1133,
  [SMALL_STATE(53)] = 1152,
  [SMALL_STATE(54)] = 1162,
  [SMALL_STATE(55)] = 1178,
  [SMALL_STATE(56)] = 1190,
  [SMALL_STATE(57)] = 1200,
  [SMALL_STATE(58)] = 1210,
  [SMALL_STATE(59)] = 1224,
  [SMALL_STATE(60)] = 1236,
  [SMALL_STATE(61)] = 1252,
  [SMALL_STATE(62)] = 1262,
  [SMALL_STATE(63)] = 1272,
  [SMALL_STATE(64)] = 1284,
  [SMALL_STATE(65)] = 1294,
  [SMALL_STATE(66)] = 1310,
  [SMALL_STATE(67)] = 1320,
  [SMALL_STATE(68)] = 1330,
  [SMALL_STATE(69)] = 1340,
  [SMALL_STATE(70)] = 1354,
  [SMALL_STATE(71)] = 1364,
  [SMALL_STATE(72)] = 1377,
  [SMALL_STATE(73)] = 1390,
  [SMALL_STATE(74)] = 1401,
  [SMALL_STATE(75)] = 1408,
  [SMALL_STATE(76)] = 1421,
  [SMALL_STATE(77)] = 1432,
  [SMALL_STATE(78)] = 1445,
  [SMALL_STATE(79)] = 1454,
  [SMALL_STATE(80)] = 1465,
  [SMALL_STATE(81)] = 1478,
  [SMALL_STATE(82)] = 1491,
  [SMALL_STATE(83)] = 1498,
  [SMALL_STATE(84)] = 1508,
  [SMALL_STATE(85)] = 1518,
  [SMALL_STATE(86)] = 1528,
  [SMALL_STATE(87)] = 1538,
  [SMALL_STATE(88)] = 1548,
  [SMALL_STATE(89)] = 1558,
  [SMALL_STATE(90)] = 1568,
  [SMALL_STATE(91)] = 1574,
  [SMALL_STATE(92)] = 1584,
  [SMALL_STATE(93)] = 1594,
  [SMALL_STATE(94)] = 1600,
  [SMALL_STATE(95)] = 1610,
  [SMALL_STATE(96)] = 1620,
  [SMALL_STATE(97)] = 1626,
  [SMALL_STATE(98)] = 1632,
  [SMALL_STATE(99)] = 1638,
  [SMALL_STATE(100)] = 1644,
  [SMALL_STATE(101)] = 1650,
  [SMALL_STATE(102)] = 1656,
  [SMALL_STATE(103)] = 1662,
  [SMALL_STATE(104)] = 1668,
  [SMALL_STATE(105)] = 1674,
  [SMALL_STATE(106)] = 1681,
  [SMALL_STATE(107)] = 1688,
  [SMALL_STATE(108)] = 1695,
  [SMALL_STATE(109)] = 1702,
  [SMALL_STATE(110)] = 1707,
  [SMALL_STATE(111)] = 1712,
  [SMALL_STATE(112)] = 1719,
  [SMALL_STATE(113)] = 1726,
  [SMALL_STATE(114)] = 1733,
  [SMALL_STATE(115)] = 1740,
  [SMALL_STATE(116)] = 1747,
  [SMALL_STATE(117)] = 1754,
  [SMALL_STATE(118)] = 1761,
  [SMALL_STATE(119)] = 1768,
  [SMALL_STATE(120)] = 1775,
  [SMALL_STATE(121)] = 1782,
  [SMALL_STATE(122)] = 1786,
  [SMALL_STATE(123)] = 1790,
  [SMALL_STATE(124)] = 1794,
  [SMALL_STATE(125)] = 1798,
  [SMALL_STATE(126)] = 1802,
  [SMALL_STATE(127)] = 1806,
  [SMALL_STATE(128)] = 1810,
  [SMALL_STATE(129)] = 1814,
  [SMALL_STATE(130)] = 1818,
  [SMALL_STATE(131)] = 1822,
  [SMALL_STATE(132)] = 1826,
  [SMALL_STATE(133)] = 1830,
  [SMALL_STATE(134)] = 1834,
  [SMALL_STATE(135)] = 1838,
  [SMALL_STATE(136)] = 1842,
  [SMALL_STATE(137)] = 1846,
  [SMALL_STATE(138)] = 1850,
  [SMALL_STATE(139)] = 1854,
  [SMALL_STATE(140)] = 1858,
  [SMALL_STATE(141)] = 1862,
  [SMALL_STATE(142)] = 1866,
  [SMALL_STATE(143)] = 1870,
  [SMALL_STATE(144)] = 1874,
  [SMALL_STATE(145)] = 1878,
  [SMALL_STATE(146)] = 1882,
  [SMALL_STATE(147)] = 1886,
  [SMALL_STATE(148)] = 1890,
  [SMALL_STATE(149)] = 1894,
  [SMALL_STATE(150)] = 1898,
  [SMALL_STATE(151)] = 1902,
  [SMALL_STATE(152)] = 1906,
  [SMALL_STATE(153)] = 1910,
  [SMALL_STATE(154)] = 1914,
  [SMALL_STATE(155)] = 1918,
  [SMALL_STATE(156)] = 1922,
  [SMALL_STATE(157)] = 1926,
  [SMALL_STATE(158)] = 1930,
  [SMALL_STATE(159)] = 1934,
  [SMALL_STATE(160)] = 1938,
  [SMALL_STATE(161)] = 1942,
  [SMALL_STATE(162)] = 1946,
  [SMALL_STATE(163)] = 1950,
  [SMALL_STATE(164)] = 1954,
  [SMALL_STATE(165)] = 1958,
  [SMALL_STATE(166)] = 1962,
  [SMALL_STATE(167)] = 1966,
  [SMALL_STATE(168)] = 1970,
  [SMALL_STATE(169)] = 1974,
  [SMALL_STATE(170)] = 1978,
  [SMALL_STATE(171)] = 1982,
  [SMALL_STATE(172)] = 1986,
  [SMALL_STATE(173)] = 1990,
  [SMALL_STATE(174)] = 1994,
  [SMALL_STATE(175)] = 1998,
  [SMALL_STATE(176)] = 2002,
  [SMALL_STATE(177)] = 2006,
  [SMALL_STATE(178)] = 2010,
  [SMALL_STATE(179)] = 2014,
  [SMALL_STATE(180)] = 2018,
  [SMALL_STATE(181)] = 2022,
  [SMALL_STATE(182)] = 2026,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headers, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headers, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_headers_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(131),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(167),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(166),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(165),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(122),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(150),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(149),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(148),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(145),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2), SHIFT_REPEAT(144),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_headers_repeat1, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_git_repeat1, 2), SHIFT_REPEAT(154),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_git_repeat1, 2), SHIFT_REPEAT(147),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_git_repeat1, 2), SHIFT_REPEAT(139),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_git_repeat1, 2), SHIFT_REPEAT(138),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_git_repeat1, 2), SHIFT_REPEAT(113),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_git_repeat1, 2), SHIFT_REPEAT(105),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_git_repeat1, 2), SHIFT_REPEAT(134),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_git_repeat1, 2), SHIFT_REPEAT(133),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_git_repeat1, 2), SHIFT_REPEAT(132),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_git_repeat1, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fieldbody, 3),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fieldbody, 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addresslist, 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addresslist, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fieldbody, 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fieldbody, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addresslist, 3),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addresslist, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldbody, 1),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fieldbody, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dateheader, 3),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dateheader, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addressheader, 3),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addressheader, 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headerextra, 3),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headerextra, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mid, 1, .production_id = 3),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mid, 1, .production_id = 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_midheader, 3),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_midheader, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 1, .production_id = 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subject, 1, .production_id = 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subjectheader, 3),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subjectheader, 3),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1, .production_id = 1),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 1, .production_id = 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_emailbody_repeat1, 2),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_emailbody_repeat1, 2), SHIFT_REPEAT(22),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_emailbody_repeat1, 2), SHIFT_REPEAT(115),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_emailbody_repeat1, 2),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_emailbody_repeat1, 2), SHIFT_REPEAT(90),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_emailbody, 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_emailbody, 1),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_diff, 1),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_diff_repeat1, 2),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diff_repeat1, 2), SHIFT_REPEAT(142),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 4),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copyfrom, 3),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_similarity, 3),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newfile, 4),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_old, 3),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newmode, 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copyto, 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_renamefrom, 3),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_renameto, 3),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deleted, 4),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dissimilarity, 3),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_actions, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 5),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newfile, 6),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diff, 1),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diff_repeat1, 2),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_diff_repeat1, 2), SHIFT_REPEAT(174),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_phrase, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_addresslist_repeat1, 2), SHIFT_REPEAT(31),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_addresslist_repeat1, 2), SHIFT_REPEAT(156),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_addresslist_repeat1, 2), SHIFT_REPEAT(80),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_phrase_repeat1, 2),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_phrase_repeat1, 2), SHIFT_REPEAT(49),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_phrase_repeat1, 2), SHIFT_REPEAT(172),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_patch, 2),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_patch, 2),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__fieldbody_repeat1, 2), SHIFT_REPEAT(157),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__fieldbody_repeat1, 2), SHIFT_REPEAT(72),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote4, 5),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote4, 5),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote5, 6),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote5, 6),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_domain, 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote1, 2),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote1, 2),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_newfile, 6),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_domain_repeat1, 2),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_domain_repeat1, 2), SHIFT_REPEAT(73),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_newfile, 4),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote6, 7),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote6, 7),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote3, 4),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote3, 4),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote2, 3),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote2, 3),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_git, 5),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_git, 5),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_seperator_repeat1, 2),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seperator_repeat1, 2), SHIFT_REPEAT(157),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seperator_repeat1, 2), SHIFT_REPEAT(71),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seperator, 1),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quotedstring, 3),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seperator_repeat1, 2), SHIFT_REPEAT(156),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seperator_repeat1, 2), SHIFT_REPEAT(77),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quotedstring, 3),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_phrase_repeat1, 1),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local, 1),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_phrase_repeat1, 1),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_addresslist_repeat1, 2),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_domain_repeat1, 2), SHIFT_REPEAT(76),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 3),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addrspec, 3),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailbox, 1),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ia, 1),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_routeaddr, 3),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mailbox, 2),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_addresslist_repeat1, 3),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__fieldbody_repeat1, 2),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oldfile, 3),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_to, 1),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footertext, 1),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local, 1),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 1),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addrkind, 1),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [508] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_replyto, 1),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sender, 1),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bcc, 1),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cc, 1),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oldfile, 5),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 4),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 2),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
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
