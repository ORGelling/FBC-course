#ifndef INCLUDED_HANDLER_
#define INCLUDED_HANDLER_

#include "../shared/shared.h"
#include <cstddef>
#include <iosfwd>

class Handler
{
    size_t d_argc;
    char **d_argv;                // skip the program name

    Data *d_data;                   // points to the shared memory info

    // static data members

    public:
        Handler(size_t argc, char **argv);
        ~Handler();                 // disconnects the shared memory

        int run();

    private:
        int initialize();           // create/initialize a shared mem. block
        int confirmConnect();       // connect the shared block d_argv[1]
        int element();              // show shared data element d_argv[2]
        int fill();                 // fill the data with seed d_argv[2]
        int kill();                 // delete shared segment ID
        int sum();                  // show the current sum

        bool available(size_t nRequired);
        bool connect();
        bool specified(size_t nRequired);

};

#endif

