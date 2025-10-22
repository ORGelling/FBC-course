#ifndef INCLUDED_SYMTAB_
#define INCLUDED_SYMTAB_

#include "../symbol/symbol.h"

class Symtab
{
    size_t d_size = 0;
    size_t d_capacity = 8;
    Symbol **d_data;
    
    public:
        Symtab();
        ~Symtab();
        
        Symbol &find(std::string const &ident);
        size_t findIdx(std::string const &ident);
        size_t size() const;
        Symbol &at(size_t const index);
        Symbol const &at(size_t const index) const;
        
    private:
        size_t binarySearch(std::string const &ident) const;
        
        void add(std::string const &ident, size_t const position);
        void enlarge(size_t const newSize);
        Symbol **rawPointers(size_t const newCapacity);
        void copyDataInto(Symbol **newData);
        void setNull(size_t const from, size_t const to);
        void movePtrs(size_t const from);
        
        Symbol &safeAt(size_t const index) const; 
};
inline size_t Symtab::size() const
{
    return d_size;
}
inline Symbol &Symtab::at(size_t const index)
{
    return safeAt(index);
}
inline Symbol const &Symtab::at(size_t const index) const
{
    return safeAt(index);
}
#endif
