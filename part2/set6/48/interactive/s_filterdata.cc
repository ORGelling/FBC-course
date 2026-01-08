#include "interactive.ih"

    // by 

bool (Interactive::*Interactive::s_filterData[])(
                            MailData &tmpData, string const &input) const =
{
    &Interactive::filterByDate,
    &Interactive::filterByCount
};
