#include "parser.ih"

void Parser::storeFun()
{
    if (d_symtab.find(d_scanner.matched()) != d_symtab.end()) 
        error("Function declared twice: " + d_scanner.matched());
    else                                        // this may be outside the
        d_symtab.insert(d_scanner.matched());   // scope of this exercise
}
