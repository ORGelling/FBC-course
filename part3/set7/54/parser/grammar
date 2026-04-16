%class-name Parser
%filenames parser
%scanner ../scanner/scanner.h
%token-path ../tokens/tokens.h

%token WORD

%%

list:
    // allows blank line
|
    WORD sequence
;

sequence:
    // empty
|
    plain
|
    separated
;

plain:
    WORD
|
    plain WORD
;

separated:
    ',' WORD
|
    separated ',' WORD
;
