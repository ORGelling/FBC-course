#ifndef INCLUDED_OPINSERT_
#define INCLUDED_OPINSERT_
#include <iostream>
#include <set>

template <typename Tp>
std::ostream &operator<<(std::ostream &out, std::set<Tp> const &insert)
{
    if (insert.empty())                 // return directly if empty
        return out;
    
    auto it = insert.begin();           // get iterator 
                                        // auto: std::set<Tp>::const_iterator
    out << '{' << *it++;                // show first
    
    for (; it != insert.end(); ++it)    // show rest
        out << ", " << *it;
    
    return out << '}';                  // close and return
}

#endif
