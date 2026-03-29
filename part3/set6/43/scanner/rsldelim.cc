#include "scanner.ih"

void Scanner::delim()
{
    clearText();    // clear d_text
    clearDelim();   // clear RSL delimiter
    
    d_delim = ")" + matched().substr(2, matched().size() - 3) + "\"";
}
