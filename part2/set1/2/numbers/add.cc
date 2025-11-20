#include "numbers.ih"

    // by 

void Numbers::add(Numbers const &other)
{
    if (not compareSize(*this, other))
    {
        cerr << "unequal size\n";
        return;
    }
    
    addContents(other);
}
