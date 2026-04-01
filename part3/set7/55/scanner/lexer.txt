%class-name Scanner
%filenames scanner

%token-path = "../tokens/tokens.h"

ws              [ \t]+
double          -?(([0-9]+(\.[0-9]*)?)|\.[0-9]+)
posint          [[:digit:]]+

%%

{ws}            // ignore

{double}        return Tokens::DOUBLE;

.|\n            return matched().front();
