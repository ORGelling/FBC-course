#ifndef INCLUDED_OPINSERT_
#define INCLUDED_OPINSERT_
#include <iostream>
#include <set>

template <typename Tp>
std::ostream &operator<<(std::ostream &out, std::set<Tp> const &insert)
{
    bool first = true;
    
    out << '{';
    
    for (auto const &value : insert)
    {
        if (first)
            first = false;
        else
            out << ", ";
        
        out << value;
    }
    
    return out << '}';
}

#endif
