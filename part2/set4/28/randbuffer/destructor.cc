#include "randbuffer.ih"

    // by 

RandBuffer::~RandBuffer()                   // override, so not inline!
{
    delete[] d_buffer;
}
