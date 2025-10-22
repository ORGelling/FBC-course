#include "main.ih"

namespace {
char const info[] = R"_( args
Where args:
    i             - create a shared memory segment initialized with a Data
                    object having room for 100 size_t values;
    c <ID>        - connect shared segment <ID>;
    e <ID> <idx>  - show the value of element idx of the Data object;
    f <ID> <seed> - fill the elements of the Data object with random values %
                    100, seeding the random number generator with <seed> and
                    show the sum of the generated values
    k <ID>        - delete the shared memory segment;
    s <ID>        - show the current sum of the data elements of the Data
                    object; 

The <..> entries are non-negative integral numbers.
)_";

}

void usage(std::string const &progname)
{
    cout << "\n"
    "Usage: " << progname << info;
}
