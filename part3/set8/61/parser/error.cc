#include "parser.ih"

void Parser::error(std::string const &msg)
{
    d_error = msg;
}
