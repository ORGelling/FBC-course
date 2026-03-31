%token VAR
%token NR
%left '+'
%left '*'
%right '-'

%%

expr:
    NR
|
    VAR index
|
    '-' expr
|
    expr '+' expr
|
    expr '*' expr
;

index:
    // empty
|
    '[' NR ']' index
;
