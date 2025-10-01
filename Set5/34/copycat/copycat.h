#ifndef INCLUDED_COPYCAT_
#define INCLUDED_COPYCAT_

class CopyCat
{
    size_t d_size;
    char **d_data;

    public:
        CopyCat();                          // copies environ
        CopyCat(size_t argc, char **argv);
        CopyCat(char **data);               // cp. any environ-like variable

    private:
};

#endif
