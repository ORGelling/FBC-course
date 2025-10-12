#include "symtab.ih"

// by

size_t Symtab::findIdx(std::string const &str)
{
    size_t begin = 0;
    size_t end = d_size;

    while (begin != end)
    {
        size_t const mid = (begin + end) / 2;
        auto const cmp = d_symbols[mid]->compare(str);

        if (cmp == Symbol::EQUAL)
            return mid;  // found
        else if (cmp == Symbol::RHS_FIRST)
            // str is before mid, search in [begin, mid)
            end = mid;
        else
            begin = mid + 1;
    }

    Symtab::insert(str, begin);  // add new symbol
    return begin;                // not found
}
