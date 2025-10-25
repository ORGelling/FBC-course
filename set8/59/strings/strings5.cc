#include "strings.ih"

//extern char **environ;

Strings::Strings(size_t nIterate, bool copy)
:
    d_size(0),
    d_str(nullptr)
{
    char **environLike = copyEnvs();
    for (size_t index = 0; index != nIterate; ++index)
        iterate(environLike, copy);

    deleteEnvs(environLike);
}
