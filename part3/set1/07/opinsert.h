#ifndef INCLUDED_OPINSERT_
#define INCLUDED_OPINSERT_
#include <iostream>
#include <set>

template <typename Tp>
std::ostream &operator<<(std::ostream &out, std::set<Tp> const &insert)
{
    if (insert.begin() != insert.end())
        out << '{' << *insert.begin();
    
    for (auto it = ++insert.begin(); it != insert.end(); ++it)
        out << ", " << *it;
    
    return out << '}';
}

#endif
