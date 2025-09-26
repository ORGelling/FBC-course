#include "person.ih"

    // by 

void Person::setName(string const &name)
{
    if (!name.empty())
        d_name = name;            // Validation too complex
    else   
        cout << "A name must be entered\n";
} 
