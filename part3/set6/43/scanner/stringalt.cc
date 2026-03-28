#include "scanner.ih"

string Scanner::stringAlt()
{
    string grabbed = "grabbed("s + to_string(d_stringCount) 
                                + ", \"" + filename() + "\")";
    return grabbed;
}
