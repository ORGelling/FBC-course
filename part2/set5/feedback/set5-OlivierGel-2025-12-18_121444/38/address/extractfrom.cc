#include "address.ih"

    // by 

namespace  //JB: :-)
{
    string trim(string const &str)
    {
        //JB: COCO
        size_t start = str.find_first_not_of(" \t\n\r\f\v");  // too much?
        //JB: No, not too much. But               FACTOR
        size_t end = str.find_last_not_of(" \t\n\r\f\v");     // just " \t"?
                                                                
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
    {
        //JB: Works, but no rollback available.
        istringstream iss(line);
        
        PostalInfo info;
        info.first = extractPostal(iss);
        info.second = extractPostal(iss);
        
        //d_umap.emplace(info, extractOccupants(iss));  // forces 'elision'
        d_umap[info] = extractOccupants(iss);   // probably happens already
    }
    return source;
}
