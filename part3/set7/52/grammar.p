%token NR
%left NEQ
%left '+'
%left '*'
%right '^'
%right '-'

%%

expr:
    NR
|
    '-' expr
|
    expr '+' expr
|
    expr '*' expr
|
    expr '^' expr
|
    expr NEQ expr
;
