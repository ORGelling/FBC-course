#ifndef INCLUDED_SYMTAB_
#define INCLUDED_SYMTAB_
#include "../symbol/symbol.h"

class Symtab
{
    //     to avoid continuously having to reallocate storage for each new
    //     element let Symtab prepare a memory capacity for storing symbols
    //     (initially 8 symbols), doubling the capacity after all the capacity's
    //     elements have been used.
    //     The Symbols are not storred in array-form: use a double pointer for
    //     accessing stored symbols;
    Symbol **d_symbols = new Symbol *[1];  // array of pointers to Symbols
    size_t d_size = 0;                     // number of Symbols currently stored
    size_t d_capacity = 1;  // number of Symbols that can be stored

public:
    ~Symtab();

    //     find, returning a reference to the symbol's information whose
    //     identifier is passed to find as argument. In our program find always
    //     succeeds. If the searched for identifier isn't yet available then
    //     find stores a new Symbol using its default value and type.
    Symbol const &find(std::string const &str);

    //     findIdx, comparable to find, but returns the index in the storage
    //     area of the specified identifier. Like find, findIdx always succeeds.
    size_t findIdx(std::string const &str);

    //     size, returning the number of currently stored Symbols
    size_t size() const;

    //     at: two members, each expecting an index (not checked by at),
    //     returning a reference to, respectively the modifiable and an
    //     immutable Symbol at offset `index'.
    Symbol &at(size_t index);
    Symbol const &at(size_t index) const;

private:
    Symbol &safeAt(size_t const idx) const;
    void insert(std::string const &str, size_t const idx);
};

inline size_t Symtab::size() const { return d_size; }
inline Symbol &Symtab::at(size_t const idx) { return safeAt(idx); }
inline Symbol const &Symtab::at(size_t const idx) const { return safeAt(idx); }

#endif
