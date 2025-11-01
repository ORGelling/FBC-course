#include "strings.ih"

void Strings::iterate(char **environLike)
{
    destroy();
    
    while(*environLike != nullptr)
        add(string(*(environLike++)));  // These extra brackets do not seem
}                                       // needed but speed this up!
