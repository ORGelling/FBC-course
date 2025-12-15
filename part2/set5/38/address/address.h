#ifndef INCLUDED_ADDRESS_
#define INCLUDED_ADDRESS_
#include "../postalhash/postalhash.h"     // has PostalInfo and PostalHash
#include <unordered_map>
#include <vector>
#include <iosfwd>

using PostalInfo = std::pair<std::string, std::string>;
using Occupants = std::vector<std::string>;    

class Address
{
    friend std::istream &operator>>(std::istream &in, Address &address);
    friend std::ostream &operator<<(std::ostream &out, Address &address);
    
    std::unordered_map<PostalInfo, Occupants, PostalHash> d_umap;
    
    public:
        size_t remove(std::string const &postCode);
        // postal code, should work w/ initial part to remove multiple areas
        // returns remaining nr of elements

    private:
        std::ostream &insertInto(std::ostream &dest);
        std::istream &extractFrom(std::istream &source);
};
        
#endif
