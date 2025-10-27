#include "fch.ih"

    // by process.cc via s_action.cc

void Fch::ask()
{
    showModification();                 // show line and target of change
    switch (request())                  // requests desired action
    {
        case 'Y':
            d_action = CHANGE_ALL;      // bypass verification and ->
        [[fallthrough]];
        case 'y':
            modify();                   // change target
        break;
        case 'N':
            d_action = NO_CHANGES;      // bypass further changes
        [[fallthrough]];
        case 'n':
        break;
        default:
            cerr << "incorrect command\n";
    }       
    d_location += d_target.size();      // set stream position
}   // could *not* advance location on wrong input?
