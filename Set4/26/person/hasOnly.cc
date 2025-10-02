#include "person.ih"

    // by setPhone.cc

bool Person::hasOnly(char const *characters, string const &object)
{   
    return object.find_first_not_of(characters) == string::npos;
}                               // object only contains characters  
