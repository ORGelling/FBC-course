#include "line.ih"

std::string Line::next()
{
    if (d_pos == std::string::npos)               // nothing left
        return {};

    auto const start = d_pos;
    auto const end   = d_line.find_first_of(" \t", start);

    std::string token =
        (end == std::string::npos)
            ? d_line.substr(start)
            : d_line.substr(start, end - start);

    d_pos = (end == std::string::npos)
          ? std::string::npos
          : d_line.find_first_not_of(" \t", end);

    return token;
}

