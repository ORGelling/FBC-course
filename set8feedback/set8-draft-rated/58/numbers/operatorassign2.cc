#include "numbers.ih"

    // by 

Numbers &Numbers::operator=(Numbers &&tmp)
{
    swap(tmp);
    //delete[] tmp.d_data;            // Manually clearing to prevent tmp
    //tmp.d_size = 0;                 // holding "this" object's contents
    //tmp.d_data = nullptr;           // after swap possible but not needed
    // HB: this doesn't cause problems only because 
    // HB: you put the ptr to null after deleting
    // HB: otherwise this would be a double free
    return *this;                           
}
