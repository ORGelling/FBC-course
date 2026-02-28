#include "optinsert.ih"

void OptInsert::rdbuf(streambuf *buffer)
{
    d_out.rdbuf(buffer);
    d_insert = (buffer != 0);
}
