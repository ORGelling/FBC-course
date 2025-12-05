#include "numbers.ih"

    // by 

Numbers::Numbers(initializer_list<int> iniList)
:
    Numbers(iniList.size())
{
    copyFrom(iniList.begin());
}
