#include "interactive.ih"

    // by 

Interactive::Action Interactive::selectFilter(string const &input) const
{
    return (input.find('-') == string::npos) ? COUNT : DATE;
}                                               // further issues with input 
                                                // are  handled down the line
