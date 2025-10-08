#include "charcount.ih"

CharCount::Char::Char(Char const &copyChar)
:
    ch(copyChar.ch),
    count(copyChar.count)
{}
