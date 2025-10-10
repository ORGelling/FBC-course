#include "strings.ih"

Strings::Strings(char **environLike)
:
    d_size(count(environLike)),
    d_data(rawStrings(d_size))
{
    fill(environLike);
}
