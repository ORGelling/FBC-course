#include "strings.ih"

void Strings::deleteEnvs(char **environLike)
{
    for (size_t i = 0; environLike[i]; ++i)
        delete[] environLike[i];
    delete[] environLike;
}
