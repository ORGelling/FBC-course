#include "bistreambuffer.ih"

    // by 

namespace 
{
    bool isEOF(int_type toCheck)
    {
        return traits::eq_int_type(toCheck, traits::eof());
    }
}                           // This one small refactor saves a lot of clutter

int_type BiStreamBuffer::overflow(int_type ch)
{
    if (isEOF(ch))                          // if EOF a flush is required
        return sync() == 0 ? traits::not_eof(ch) : traits::eof();
    
    char_type next = traits::to_char_type(ch);  // convert to char safely
                                    
    return (isEOF(d_bufOne->sputc(next)) | isEOF(d_bufTwo->sputc(next)) ?
                                    traits::eof() : traits::not_eof(ch));
}                                       // writes next char to both streams
                                        // checks if either returns an EOF
                                        // returns ch or EOF appropriately
//
//                                  // above ternary return does all this:
// 
//  int_type checkOne = d_bufOne->sputc(next);  // insert into both streams
//  int_type checkTwo = d_bufTwo->sputc(next);
//  
//  return (isEOF(checkOne) || isEOF(checkTwo)) ?   // return ch type safe
//                              traits::eof() : traits::not_eof(ch);
//                                  
//                          // using bitor '|' to always evaluate both sides
