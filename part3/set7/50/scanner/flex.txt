%class-name Scanner
%filenames scanner

%token-path = "../tokens/tokens.h"

ws                  [ \t]+
number              [+-]?[[:digit:]]+(\.[[:digit:]]*)?([Ee][+-]?[[:digit:]]+)?
operator            "("|")"|"+"|"-"|"*"|"/"|"^"|"$"

%%

{ws}                // ignore

{number}            return Tokens::NUMBER;

{operator}|.|\n     return matched().front();
