#include "rules.h"
#include <iostream>

std::ostream &operator<<(std::ostream &out, const Rules &rules)
{
    for (Rule const &rule : rules)
    {
        out << rule.lhs << " = ";
        for (size_t i = 0; i < rule.rhs.size(); ++i)
        {
            if (i > 0)
                out << " ";
            out << rule.rhs[i];
        }
        out << "\n";
    }
    return out;
}
