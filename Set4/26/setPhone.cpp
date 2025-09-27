#include "Person.ih"

void Person::setPhone(std::string const &phone)
{
    for (char const ch : phone)
        if (!isdigit(ch))
            throw std::invalid_argument("Phone number may only contain digits");

    d_phone = phone;
}
