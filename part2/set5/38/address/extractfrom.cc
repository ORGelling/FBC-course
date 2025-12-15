#include "address.ih"

    // by 

istream &Address::extractFrom(istream &source)
{
    string line;
    while (getline(source, line))
    {
        istringstream iss(line);
        PostalInfo info;
        
        // bite first and second part off line
        getline(iss, info.first, ';');
        getline(iss, info.second, ';');
        
        // bite any following parts off and feed them into occup
        Occupants occupants;
        string person;
        while (getline(iss, person, ';'))
            occupants.push_back(trim(person));
    }
}
