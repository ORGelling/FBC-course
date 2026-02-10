#include "handler.ih"

    // by 

void Handler::shift(ostream &out, string const &text)
{
    //JB: IMHO the name is a bit confusing. I expected a manipulator.
    string manip = text;
    size_t size = text.size();

    for (size_t idx = 0; idx != size; ++idx)     // maybe change != ?
    {
        out << manip << '\n';
        //manip = manip.substr(1, size - 1) + manip.front();
        rotate(manip.begin(), manip.begin() + 1, manip.end());
    }
}
