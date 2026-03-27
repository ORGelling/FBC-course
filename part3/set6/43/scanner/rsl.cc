#include "scanner.ih"

void Scanner::rsl()
{
    addText();

    std::string end = ")" + d_delim + "\"";

    if (d_text.length() >= end.length() &&
        d_text.substr(d_text.length() - end.length(), end.length()) == end)
    {
        d_text = d_text.substr(0, d_text.length() - end.length());
        begin(StartCondition_::string_gap);
    }
}
