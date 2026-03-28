#include "scanner.ih"

void Scanner::delim()
{
    clearText();    // prep and then start reading
    clearDelim();   // the RSL delimiter
    
    begin(StartCondition_::string_lit_delim);
}
