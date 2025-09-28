#include "parser.ih"

// Function-try-block style, as hinted in the exercise text
Parser::Return Parser::convert(double *dest, std::string const &str)
try
{
    return pureDouble(dest, str) ? NUMBER : NO_NUMBER;
}
catch (...)           // stod may throw invalid_argument or out_of_range
{
    return NO_NUMBER;
}

