#include "person.ih"

void Person::extract(istream &input)
{
    string name;
    getline(input, name, ',');
    setName(name);
    string address;
    getline(input, address, ',');
    setAddress(address);
    string phone;
    getline(input, phone, ',');
    setPhone(phone);
    string mass;
    getline(input, mass);
    setMass(stoul(mass));
}
