#include "strings.ih"

Strings::Strings(char **environLike)
:
    //JB: Delegate, don't write the same code again.
    d_size(count(environLike)),
    d_data(rawStrings(d_size))
{
    fill(environLike);
}
