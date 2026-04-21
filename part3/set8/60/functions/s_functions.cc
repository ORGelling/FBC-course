#include "functions.ih"

std::unordered_map<std::string, Functions::MemFn> const
    Functions::s_functions =
{
    {"sin", &Functions::sin},
    {"cos", &Functions::cos},
    {"tan", &Functions::tan},
    {"asin", &Functions::asin},
    {"acos", &Functions::acos},
    {"atan", &Functions::atan},
    {"abs", &Functions::abs},
    {"exp", &Functions::exp},
    {"ln", &Functions::ln},
    {"sqrt", &Functions::sqrt}
};
                                    // any new functions should be added to
                                    // this class and then connected to their
                                    // fn call name in this unordered map
