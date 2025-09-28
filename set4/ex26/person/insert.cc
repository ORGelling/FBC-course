#include "person.ih"

void Person::insert(ostream &output) const
{
    output << d_name << ','
           << d_address << ','
           << d_phone << ','
           << d_mass << '\n';
}

