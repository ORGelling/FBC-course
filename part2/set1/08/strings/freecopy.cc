#include "strings.ih"

void Strings::freeCopy()
{                                           // we copy current into a temp
    Strings tmp;                            // and then swap when complete
                                            // for commit or roll-back
    tmp.d_size = d_size;
    tmp.d_str = new string[d_size];
    
    for (size_t index = 0; index != d_size; ++index)
        tmp.d_str[index] = d_str[index];        // copy contents of original
                                                        // refactor?
//  for (size_t index = 0; index != d_size; ++index)
//      tmp += d_str[index];                    // heavy but clear and direct
    
    swap(tmp);                              // destructor decrements source's
}                                           // d_share when it destroys tmp
