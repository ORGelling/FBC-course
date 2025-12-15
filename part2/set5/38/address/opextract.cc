#include "address.ih"

    // by 

istream &operator>>(istream &in, Address &address)
{
    return address.extractFrom(in);
}
