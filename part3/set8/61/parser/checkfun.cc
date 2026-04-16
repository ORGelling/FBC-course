#include "parser.ih"

void Parser::checkFun()
{
    if (d_symtab.find(d_scanner.matched()) == d_symtab.end()) 
        error("Function not declared: " + d_scanner.matched());
}
