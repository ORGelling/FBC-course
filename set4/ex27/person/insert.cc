#include "person.ih"

void Person::insert(std::ostream& out) const
{
    out << d_name << ',' << d_address << ',' << d_phone << ',' << d_mass << '\n';
}

