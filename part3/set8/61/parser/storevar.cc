#include "parser.ih"

void Parser::storeVar()
{
    d_symtab.insert(d_scanner.matched());
}
