#include "person.ih"

void Person::insert(ostream &output)
{
    output << "Name    : " << d_name    << "\n"
              "Address : " << d_address << "\n"
              "Phone   : " << d_phone   << "\n"
              "Mass    : " << d_mass    << '\n';
}
