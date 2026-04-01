%class-name Parser
%filenames parser
%scanner ../scanner/scanner.h
%token-path ../tokens/tokens.h

%token WORD

%%

input:
    list
;

list:
    WORD
|
    plain
|
    separated
|
    // empty for optional WORD at start
;

plain:
    plain WORD
|
    WORD WORD
;

separated:
    separated ',' WORD
|
    WORD ',' WORD
;
