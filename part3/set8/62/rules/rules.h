#ifndef INCLUDED_RULES_H_
#define INCLUDED_RULES_H_

#include <iosfwd>
#include <string>
#include <vector>

struct Rule
{
    std::string lhs;
    std::vector<std::string> rhs;
};

using Rules = std::vector<Rule>;

std::ostream &operator<<(std::ostream &out, Rules const &rules);

#endif
