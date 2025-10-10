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
        
        Symbol &find(std::string &identifier);
        size_t findIdx();
        size_t size();
        Symbol &at(size_t const index);
        Symbol const &at(size_t const index) const;
        
    private:
        void add();
        void enlarge(size_t const newSize);
        Symbol **rawPointers(size_t const newCapacity);
        void copyDataInto(Symbol **newData);
        void setNull(size_t const from, size_t const to);
        
        Symbol &safeAt(size_t const index) const; 
};
inline size_t Symtab::size()
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
