#ifndef INCLUDED_PERSON_
#define INCLUDED_PERSON_
#include <iosfwd>
#include <string>

class Person
{
    std::string d_name;
    std::string d_address;
    std::string d_phone;
    size_t      d_mass;
    
    public:
        Person()
        {
            d_mass = 0;
        };
        Person
        (
            std::string const &name, 
            std::string const &address = "--unknown--", 
            std::string const &phone   = "--unknown--", 
            size_t mass = 0
        );
        
        void setName(std::string const &name);
        void setAddress(std::string const &address);
        void setPhone(std::string const &phone);
        void setMass(size_t mass)
        {
            d_mass = mass;
        };
        
        std::string const &name()       const
        {
            return d_name;
        };
        std::string const &address()    const
        {
            return d_address;
        };
        std::string const &phone()      const
        {
            return d_phone;
        };
        size_t mass()                   const
        {
            return d_mass;
        };
        
        void insert(std::ostream &output);
        void extract(std::istream &input);
        
    private:
        bool hasOnly(char const *characters, std::string const &object);
};
        
#endif
