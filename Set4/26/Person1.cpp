#include "Person.ih"

Person::Person(std::string const &d_name, std::string const &d_address,
               std::string const &d_phone, size_t const d_mass)
    : d_name(d_name), d_address(d_address), d_phone(d_phone), d_mass(d_mass) {
    for (char const ch : d_phone)
        if (!isdigit(ch))
            throw std::invalid_argument("Phone number may only contain digits");
}
