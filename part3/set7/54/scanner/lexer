%class-name Scanner
%filenames scanner

%token-path = "../tokens/tokens.h"

%%

[[:alpha:]_][[:alnum:]_]*      return Tokens::WORD;
[ \t\r\n]+                  ;
","                         return matched().front();
.                           ;

%%
