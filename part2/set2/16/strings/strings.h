#ifndef INCLUDED_STRINGS_
#define INCLUDED_STRINGS_

#include <iosfwd>

class Strings
{
    size_t d_size = 0;
    size_t d_capacity = 1;
    std::string **d_str;            // now a double *

    public:
        Strings();
        Strings(size_t argc, char **argv);
        ~Strings();
        
        void show();
        
    private:
        std::string **rawPointers(size_t size);
        void fill(char **ntbs);
        
        void clearContents();
        
        void handleExceptions();
};
        
#endif
