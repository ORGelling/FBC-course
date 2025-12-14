#include "strings.ih"

    // by 

Strings::Strings(size_t count, string const &str)
//:                     // explicitly constructing empty string unnecessary
//    string()          // empty string is default constructed
{
    repeatString(count, str);
}

//JB: Since repeatString is only used here, you could've but it in a nameless
//JB: namespace right here.
