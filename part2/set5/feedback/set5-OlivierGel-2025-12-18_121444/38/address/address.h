//JB: ?
#ifndef INCLUDED_ADDRESS_
#define INCLUDED_ADDRESS_
#include "../postalhash/postalhash.h"     // PostalHash
#include <unordered_map>
#include <vector>
#include <iosfwd>

using PostalInfo = std::pair<std::string, std::string>; // this does pollute
using Occupants = std::vector<std::string>;             // global namespace
//JB: I can live with that. Or you could use a namespace.
//JB: It's not clear what the strings inside a PostalInfo are supposed to mean.
//JB: If you make that clear with another using-clause, it helps a bit IMHO,
//JB: although then it's not clear everywhere that a PostalCode is just a
//JB: string and so is an Address...

//JB: ... speaking of which, the decision to let Address contain the occupants
//JB: of that address is perhaps not ideal either.
//JB: Naming types and variables is hard.
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
