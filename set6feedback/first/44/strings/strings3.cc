#include "strings.ih"

Strings::Strings(char **environLike)
:
    d_size(count(environLike)),
    d_data(rawPointers(d_size))
{
    fill(environLike);
}

//JB: Don't redo, delegate!
