#include "functions.ih"

void Functions::math_error(char const *msg) const
{
    throw std::runtime_error{ "math error: "s + msg };
}
