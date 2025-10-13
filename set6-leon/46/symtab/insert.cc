#include "symtab.ih"

// by

void Symtab::insert(std::string const &str, size_t const insertIdx)
{
    if (d_size == d_capacity)  // need more space?
    {
        d_capacity *= 2;
        Symbol **tmp = new Symbol *[d_capacity];

        for (size_t idx = 0; idx != d_size; ++idx)
            tmp[idx] = d_symbols[idx];  // copy old pointers

        delete[] d_symbols;
        d_symbols = tmp;
    }

    std::cout << "DEBUG" << '\n';
    // Shift all symbols to the right.
    for (size_t idx = d_size; idx > insertIdx; --idx)
    {
        d_symbols[idx] = d_symbols[idx - 1];
        d_symbols[idx]->assign(static_cast<int>(idx));  // update idx
    }

    // Insert new symbol at the right position.
    d_symbols[insertIdx] = new Symbol{str, static_cast<int>(insertIdx)};
    ++d_size;

    // for (size_t idx = 0; idx != d_size; ++idx)
    //     std::cout << d_symbols[idx]->ident() << ' ' << idx << '\n';
    std::cout << d_size << '\n';
    std::cout << d_capacity << '\n';
}
