#include "parser.ih"

void Parser::checkVar()
{
    if (d_symtab.find(d_scanner.matched()) == d_symtab.end()) 
        error("Variable not declared: " + d_scanner.matched());
}
