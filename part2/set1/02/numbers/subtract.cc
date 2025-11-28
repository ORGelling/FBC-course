#include "numbers.ih"

    // by 

void Numbers::subtract(Numbers const &other)
{
    if (not compareSize(*this, other))
    {
        cerr << "unequal size\n";
        return;
    }
    
    subtractContents(other);
}
