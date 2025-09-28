#ifndef INCLUDED_PERSON_
#define INCLUDED_PERSON_

#include <iosfwd>
#include <string>

class Person
{
    std::string d_name;
    std::string d_address;
    std::string d_phone;
    size_t      d_mass = 0;   // ensure defined value with default ctor

  public:
    Person() = default;
    Person(std::string const &name,
           std::string const &address = "--unknown--",
           std::string const &phone   = "--unknown--",
           size_t mass = 0);

    void setName(std::string const &name);
    void setAddress(std::string const &address);
    void setPhone(std::string const &phone);
    void setMass(size_t mass);

    std::string const &name()    const;
    std::string const &address() const;
    std::string const &phone()   const;
    size_t              mass()   const;

    void insert(std::ostream &output) const;  // CSV on one line
    void extract(std::istream &input);        // read one CSV line

  private:
    static bool hasOnly(char const *characters, std::string const &object);
};

inline void Person::setName(std::string const &name)     { d_name = name; }
inline void Person::setAddress(std::string const &addr)  { d_address = addr; }
inline void Person::setMass(size_t mass)                 { d_mass = mass; }
inline std::string const &Person::name()    const        { return d_name; }
inline std::string const &Person::address() const        { return d_address; }
inline std::string const &Person::phone()   const        { return d_phone; }
inline size_t              Person::mass()   const        { return d_mass; }

#endif

