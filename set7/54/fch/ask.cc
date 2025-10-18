#include "fch.ih"

    // by process.cc via s_action.cc

void Fch::ask()
{
    showModification();
    switch (request())                          // requests change decision
    {
        case 'Y':
            d_action = CHANGE_ALL;
        [[fallthrough]];
        case 'y':
            modify();
        break;
        case 'N':
            d_action = NO_CHANGES;
        [[fallthrough]];
        case 'n':
        break;
        default:
            cerr << "incorrect command\n";
    }       
    d_location += d_target.size();
}   // could *not* advance location on wrong input?
