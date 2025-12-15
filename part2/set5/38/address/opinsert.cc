#include "address.ih"

    // by 

ostream &operator<<(ostream &out, Address &address)
{
    return address.insertInto(out);
}
