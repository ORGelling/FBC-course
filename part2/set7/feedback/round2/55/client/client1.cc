#include "client.ih"

    // by 

Client::Client(string const &fileName)
:
    d_fileName(fileName),
    d_out(fileName),
    d_count(0)
{
    if (not d_out.is_open())
        //JB: Good.
        throw runtime_error("Could not open output file: " + fileName);
}
