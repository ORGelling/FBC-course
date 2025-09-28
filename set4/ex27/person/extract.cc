#include "person.ih"
#include <stdexcept>

void Person::extract(std::istream& in)
{
    std::string massStr;

    if (!std::getline(in, d_name, ','))       return;   // empty line -> keep as is
    std::getline(in, d_address, ',');
    std::getline(in, d_phone,   ',');
    std::getline(in, massStr);

    try {
        d_mass = static_cast<std::size_t>(std::stoul(massStr));
    } catch (...) {
        d_mass = 0;
    }
}

