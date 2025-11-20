#include "strings.ih"

void Strings::iterate(char **environLike)
{
    delete[] d_str; // HB: I'd prefer a destroy()
    d_str = nullptr;
    d_size = 0;
    while(*environLike != nullptr) // HB: BAK
    {
        string envVariable = *environLike;
        add(envVariable);
        ++environLike;
        // HB: fun exercise: these three lines can be CTRed into only one,
        // HB: turing 5 lines into 1 because of PERL :)
    }
}
