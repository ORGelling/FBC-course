#include "parser.ih"

Parser::Parser()
:
    d_display(true)
{
    setDebug(false);
    
    prompt();
}
