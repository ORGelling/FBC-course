#include "strings.ih"

Strings::Strings(char **environLike)
:
    //JB: Don't redo, delegate!
    d_size(count(environLike)),
    d_data(rawPointers(d_size))
{
    fill(environLike);
}
