#include "person.ih"

void Person::extract(istream &input)
{
    string phone;
    string massStr;

    getline(input, d_name, ',');
    getline(input, d_address, ',');
    getline(input, phone, ',');
    getline(input, massStr);           // last field (no trailing comma)

    setPhone(phone);                   // run validation

    d_mass = massStr.empty() ? 0 : stoul(massStr);
}

