#include "parser.ih"

void Parser::error(std::string const &msg)
{
    cout << "At line " << d_scanner.lineNr() << ": " << msg << '\n';
}
