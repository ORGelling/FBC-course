#include "strings.ih"

    // by 

void Strings::fill(char **ntbs)
{
//  try
//  {
        for (size_t index = 0; index != d_size; ++index)
        {
    //      if (index == 2)
    //          throw bad_alloc{};
            
            d_str[index] = new string(ntbs[index]);
        }
//  }                                   // This will be taken care of by the 
//    catch (bad_alloc const &memFault) // destructor. We can do it here only
//  {                                   // if we also reset d_size to prevent
//      clearContents();                // double deletion. Dtor is tidier.
//      d_size = 0;
//      throw;
//  }
}
