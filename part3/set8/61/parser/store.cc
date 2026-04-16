#include "parser.ih"

void Parser::store()
{
    if (d_symtab.find(d_scanner.matched()) != d_symtab.end()) 
        error(d_scanner.matched() + " repeatedly declared");
    else                                        // this may be outside the
        d_symtab.insert(d_scanner.matched());   // scope of this exercise
}
