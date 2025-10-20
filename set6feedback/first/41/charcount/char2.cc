#include "charcount.ih"

CharCount::Char::Char(Char const &copyChar)
:
    ch(copyChar.ch),
    count(copyChar.count)
{}
//JB: This is the default: member-wise copy.
