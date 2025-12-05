#include "main.ih"

    // by 

void derivedDeleter(Base **basePtr, size_t const size)
{
    for (size_t index = 0; index != size; ++index)
        delete basePtr[index];

    delete[] basePtr;
}
