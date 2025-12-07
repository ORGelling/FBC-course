#include "randbuffer.ih"

    // by streambuf, overriding virtual underflow

streambuf::int_type RandBuffer::underflow()
{   
    string digits = to_string(randomNumber());
                                            // refactoring more is hard w.o. 
                                            // having to include <string> in 
                                            // the header. I'd like to keep
                                            // it lean and clean.
    
    delete[] d_buffer;                      // clear and reallocate memory
    d_buffer = new char[digits.size() + 1];         // is a bit slow

    d_buffer[ digits.copy(d_buffer, digits.size())] = ' ';
                                            // using ' ' as delim to simplify
                                            // extracting to an int variable
    
    setg(d_buffer, d_buffer, d_buffer + digits.size() + 1);
                                            // aim strmbuf ptrs to new memory
    
    return traits_type::to_int_type(*gptr());
}
