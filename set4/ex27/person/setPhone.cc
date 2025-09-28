#include "person.ih"

void Person::setPhone(std::string const& phone)
{
    // allow digits, spaces, (), + and -
    if (hasOnly("0123456789+ -()", phone))
        d_phone = phone;
    else
        d_phone = "--invalid--";
}

