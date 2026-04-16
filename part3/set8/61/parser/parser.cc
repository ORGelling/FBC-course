#include "parser.ih"

Parser::Parser(std::string const &fileName)
:
    d_scanner(fileName, "/dev/null")
{
    setDebug(false);
}
