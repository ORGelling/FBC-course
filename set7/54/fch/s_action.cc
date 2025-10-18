#include "fch.ih"

    // by searchreplace.cc

void (Fch::*Fch::s_action[])()
=
{
    &Fch::ask,
    &Fch::changeAll,
    &Fch::noChanges
};
