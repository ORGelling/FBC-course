#include "strings.ih"

    // by 

Strings &Strings::operator+=(string const &str)
{
    d_data.push_back(make_shared<string>(str));
    return *this;
}                                   // op+= doesn't need cow in this shape,
                                    // since new elements do not require the 
                                    // whole vector to be changed. Instead we
                                    // have shared ptrs in each vector elmnt
                                    // and cow only those elements.
