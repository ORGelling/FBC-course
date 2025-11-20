#include "numbers.ih"

    // by 

Numbers::~Numbers()
{
    delete[] d_data;
}                               // d_data is just raw space for ints
