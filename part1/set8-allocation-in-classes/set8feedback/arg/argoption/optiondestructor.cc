#include "argoption.ih"

ArgOption::Option::~Option()
{
    for (size_t idx = 0; idx != size; ++idx)
        delete optVal[idx];

    delete[] optVal;
}
