#include "strings.ih"

extern char **environ;

Strings::Strings(size_t nIterate, bool copy)
:
    d_size(0),
    d_str(nullptr),
    d_enlarge(copy ? &Strings::enlargeByCopy : &Strings::enlargeByMove)
{
    for (size_t index = 0; index != nIterate; ++index)
        iterate(environ);
}
