#include "bistreambuffer.ih"

    // by 

streambuf::int_type BiStreamBuffer::sync()
{
    int syncOne = d_bufOne->pubsync();
    int syncTwo = d_bufTwo->pubsync();
    
    return (syncOne == 0 && syncTwo == 0) ? 0 : -1;
}
