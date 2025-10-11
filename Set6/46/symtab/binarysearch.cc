#include "symtab.ih"

    // by find.cc & findidx.cc

size_t Symtab::binarySearch(string const &ident) const
{
    size_t begin = 0;
    size_t end = d_size;
    while (begin < end)
    {
        size_t mid = begin + (end - begin) / 2;         // find midpoint
        switch (d_data[mid]->compare(ident))
        {                                   // Array of ptrs to functions
            case Symbol::LHS_FIRST:         // seems excessive here?
                begin = mid + 1;
            break;
            case Symbol::RHS_FIRST:
                end = mid;
            break;
            case Symbol::EQUAL:
                return mid;
            break;
        }
    }
    return end;
}
