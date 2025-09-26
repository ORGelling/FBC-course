#include "person.ih"

    // by 

void Person::setAddress(string const &address)
{
    if (!address.empty())
        d_address = address;        // Validation not really necessary
    else
        d_address = " - not available -";
}
