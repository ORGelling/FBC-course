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
        Person();
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
        void setMass(size_t mass);
        std::string const &name() const;
        std::string const &address() const;
        std::string const &phone() const;
        size_t mass() const;
        void insert(std::ostream &output) const;
        void extract(std::istream &input);
        
    private:
        bool hasOnly(char const *characters, std::string const &object);
};

// Inline definition of single line members
inline Person::Person()
:
    d_mass(0)
{}
inline void Person::setName(std::string const &name) 
{ 
    d_name = name; 
}
inline void Person::setAddress(std::string const &address) 
{
    d_address = address;
}
inline void Person::setMass(size_t mass) 
{ 
    d_mass = mass; 
}
inline std::string const &Person::name() const 
{ 
    return d_name; 
}
inline std::string const &Person::address() const 
{ 
    return d_address; 
}
inline std::string const &Person::phone() const 
{ 
    return d_phone; 
}
inline size_t Person::mass() const 
{ 
    return d_mass; 
}

#endif
