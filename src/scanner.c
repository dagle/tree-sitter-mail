#include <stdbool.h>
#include <tree_sitter/parser.h>

enum TokenType {
  LINE_BREAK,
  LWSP,
  // INDENT,
  // DEDENT,
  // NEWLINE
};

// We don't really need a
void * tree_sitter_mail_external_scanner_create() {
  return NULL;
}

void tree_sitter_mail_external_scanner_destroy(void *payload) {
  // we don't have state
}

unsigned tree_sitter_mail_external_scanner_serialize(
  void *payload,
  char *buffer
) {
  return 0;
}

void tree_sitter_mail_external_scanner_deserialize(
  void *payload,
  const char *buffer,
  unsigned length
) {
}

bool tree_sitter_mail_external_scanner_scan(
  void *payload,
  TSLexer *lexer,
  const bool *valid_symbols
) {
  if (lexer->lookahead == '\n') {
	  lexer->advance(lexer, true);
	  lexer->result_symbol = LINE_BREAK;
	  return true;
  }
  if (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
	  lexer->advance(lexer, true);
	  lexer->result_symbol = LWSP;
	  return true;
  }
  return false;
}

