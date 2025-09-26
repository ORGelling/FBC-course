#include "person.ih"

void Person::extract(istream &input)
{
    getline(input, d_name, ',');
    getline(input, d_address, ',');
    getline(input, d_phone, ',');
    string mass;
    getline(input, mass);
    d_mass = stoul(mass);
}
