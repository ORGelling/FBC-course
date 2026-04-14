#include "parser.ih"

void Parser::showError() const
{
    if (d_validLine)
    {
        cout << "At line " << d_scanner.lineNr() - 1 << ": " 
                                                    << d_error << '\n';
    }
}
