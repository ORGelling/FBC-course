#include "scanner.ih"

void Scanner::rsl()
{
    addToText();

    std::string end = ")" + d_delim + "\"";

    if (d_text.length() >= end.length() &&
        d_text.substr(d_text.length() - end.length(), end.length()) == end)
    {
        d_text = d_text.substr(0, d_text.length() - end.length());
        begin(StartCondition_::INITIAL);
    }                                   // we have chosen not to allow RSL
                                        // concatenation. This would make the
    count();                            // mechanics here significantly more
                                        // complicated and might require the
                                        // string_gap mini scanner to work
    out() << stringAlt();
    //return STRING;
}
