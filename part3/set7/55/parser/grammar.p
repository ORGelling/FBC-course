%class-name Parser
%filenames parser
%scanner ../scanner/scanner.h
%token-path ../tokens/tokens.h

%stype double

%token DOUBLE

%%

input:
    prompt '\n'
    {
        ACCEPT();
    }
|
    prompt command '\n' input
;

command:
    'm' DOUBLE
|
    's' DOUBLE
|
    DOUBLE score
;

score:
    // empty
|
    DOUBLE
;

prompt:
    {
        std::cout << "? ";      // or 'cout', when using namespace std
    }
;
