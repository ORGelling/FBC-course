#ifndef INCLUDED_ADDRESS_
#define INCLUDED_ADDRESS_
#include "../postalhash/postalhash.h"     // PostalHash
#include <unordered_map>
#include <vector>
#include <iosfwd>

using PostalInfo = std::pair<std::string, std::string>; // this does pollute
using Occupants = std::vector<std::string>;             // global namespace

class Address
{
    friend std::istream &operator>>(std::istream &in, Address &address);
    friend std::ostream &operator<<(std::ostream &out, Address &address);
    
    // Can declare an extra public section up here to place the using decls?
    
    std::unordered_map<PostalInfo, Occupants, PostalHash> d_umap;
    
    public:
        size_t remove(std::string const &postCode);

    private:
        std::istream &extractFrom(std::istream &source);
        std::ostream &insertInto(std::ostream &dest);
};
        
#endif
