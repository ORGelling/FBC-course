#include "argoption.ih"

ArgOption::~ArgOption()
{
    for (size_t idx = 0; idx != d_size; ++idx)
        delete d_opt[idx];

    delete[] d_opt;
}
