#include "strings.ih"

Strings::Strings(char **environLike)
:
    Strings(count(environLike), environLike)
{}
