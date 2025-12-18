#include "address.ih"

    // by 

ostream &Address::insertInto(ostream &out)
{ 
    for (auto const &value: d_umap)             // d_umap is the map 
    { 
        out << value.first.first << "; "        // postal code 
            << value.first.second;              // address
        
        for (string const &str: value.second)   // the people (maybe 
            out << "; " << str;                 // define a function?)
        //JB: I would, yes.
        
        out << '\n';
    }
    return out;
} 
