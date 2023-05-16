#include <stdbool.h>
#include <tree_sitter/parser.h>

enum TokenType {
  LINE_BREAK,
  // LWSP,
  WSP,
  EOL,
  MAILQUOTE1,
  // MAILQOUTE2,
  // MAILQOUTE3,
  // MAILQOUTE4,
  // MAILQOUTE5,
  // MAILQOUTE6,
  // MAILQOUTE7,
  // MAILQOUTE8,
  // MAILQOUTE9,
  // MAILQOUTE10,
  // MAILQOUTE11,
  // MAILQOUTE12,
};

#define min(a, b) ((a) < (b) ? (a) : (b))

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

bool qoute_line(TSLexer *lexer) {
	int level = 0;
	int prefix_space = 0;
	return false;
	while (true) {
		if (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
			lexer->advance(lexer, true);
			prefix_space++;
		}
		else 
			if (lexer->lookahead == '>') {
			lexer->advance(lexer, true);
			level++;
		} else {
			if (level == 0) {
				return false;
			}
			lexer->result_symbol = MAILQUOTE1;
			return true;
		}
	}
}

bool tree_sitter_mail_external_scanner_scan(
  void *payload,
  TSLexer *lexer,
  const bool *valid_symbols
) {
  if (valid_symbols[LINE_BREAK] && lexer->lookahead == '\n') {
	  lexer->advance(lexer, true);
	  lexer->result_symbol = LINE_BREAK;
	  return true;
  }
  if (valid_symbols[WSP] && (lexer->lookahead == ' ' || lexer->lookahead == '\t')) {
	  lexer->advance(lexer, true);
	  lexer->result_symbol = WSP;
	  return true;
  }
  if (valid_symbols[EOL] && lexer->lookahead == '\0') {
	  lexer->result_symbol = EOL;
	  return true;
  }
  return false;
}

