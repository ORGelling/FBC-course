#ifndef INCLUDED_PERSON_H_
#define INCLUDED_PERSON_H_

#include <iosfwd>
#include <string>
#include <cstddef>

class Person
{
    std::string d_name;
    std::string d_address;
    std::string d_phone;
    std::size_t d_mass = 0;

public:
    Person() = default;

    Person(std::string const& name,
           std::string const& address = "--unknown--",
           std::string const& phone   = "--unknown--",
           std::size_t        mass    = 0);

    void setName(std::string const& name);
    void setAddress(std::string const& address);
    void setPhone(std::string const& phone);
    void setMass(std::size_t mass) { d_mass = mass; }

    std::string const& name()    const { return d_name; }
    std::string const& address() const { return d_address; }
    std::string const& phone()   const { return d_phone; }
    std::size_t        mass()    const { return d_mass; }

    void insert(std::ostream& out) const; // write CSV
    void extract(std::istream& in);       // read CSV: name,address,phone,mass

private:
    bool hasOnly(char const* allowed, std::string const& s);
};

#endif

