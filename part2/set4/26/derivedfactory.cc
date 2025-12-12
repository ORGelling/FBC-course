#include "main.ih"

    // by 

namespace                                   // local function to fill array
{
    void fillObjects(Base **ptr, size_t size)
    {
        size_t index = 0;
        try
        {
            for (; index != size; ++index)
                ptr[index] = new Derived();
        }
        catch (...)                         // accounting for exceptions
        {
            for (size_t cidx = 0; cidx != index; ++cidx)
                delete ptr[cidx];
            delete[] ptr;                   // wouldn't want to leak!
            
            throw;
        }
    }
}

Base **derivedFactory(size_t const size)
{
    Base **tmpPtr = new Base *[size];

    fillObjects(tmpPtr, size);
    
    return tmpPtr;
}
