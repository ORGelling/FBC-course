#include "address.ih"

    // by 

namespace 
{
    string trim(string const &str)
    {
        string const spaces = " \t\n\r\f\v";
        size_t const start = str.find_first_not_of(spaces);
        size_t const end = str.find_last_not_of(spaces);
                                                                
        return (start == string::npos) ? 
                        "" : str.substr(start, end - start + 1);
    }
    
    string extractPostal(istringstream &iss)
    {
        string tmp;
        getline(iss, tmp, ';');
        return trim(tmp);
    }
    
    Occupants extractOccupants(istringstream &iss)
    {
        Occupants tmpOcc;
        string tmpPrsn;
        while (getline(iss, tmpPrsn, ';'))
            tmpOcc.push_back(trim(tmpPrsn));
        
        return tmpOcc;
    }
}

istream &Address::extractFrom(istream &source)
{
    string line;
    while (getline(source, line))
    {                                           // using a stringstream for
        istringstream iss(line);                // ease of extraction
        
        PostCodeAndAddress postal;              // extracting info from file
        postal.first = extractPostal(iss);      // PostCode
        postal.second = extractPostal(iss);     // Address
        
        Occupants occs = extractOccupants(iss); // Occupants
        
        d_umap[postal] = occs;          // components are extracted and built, 
                                        // now we can safely commit:
    }
    return source;
}
