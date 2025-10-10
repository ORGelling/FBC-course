#ifndef INCLUDED_SYMTAB_
#define INCLUDED_SYMTAB_


class Symtab
{
    Symbol **d_data;
    size_t d_size = 0;
    size_t d_capacity = 8;
    
    struct Symbol
    {
        std::string name;
        Value type;
    };
    
    public:
        Symtab();
        
        find();
        size_t findIdx();
        size_t const &size();
        Symbol &at(size_t const index);
        Symbol const &at(size_t const index) const;
        
    private:
        Symbol **rawPointers(size_t const newSize);
        void copyDataInto(Symbol **newData);
};
        
#endif
