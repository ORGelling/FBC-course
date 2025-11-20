// ES: 1
#ifndef INCLUDED_COPYCAT_
#define INCLUDED_COPYCAT_
#include <iosfwd>

class CopyCat
{
    size_t d_size;
    char **d_data;

    public:
        CopyCat();                              // copies environ
        CopyCat(size_t const argc, char const *const *argv);
        CopyCat(char const *const *data); // cp. any environ-like
    
    private:
        static char *ntbsCopy(char const *data);
        static size_t nElements(char const *const *data);
        static char **duplicate(char const *const *data, size_t arraySize);
};

extern char **environ;
inline CopyCat::CopyCat()
:
    CopyCat(environ)
{}

#endif
