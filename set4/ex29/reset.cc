#include "parser.ih"

bool Parser::reset()
{
    // delegate to Line; returns true iff a non-empty line with a first token exists
    return d_line.getLine();
}

