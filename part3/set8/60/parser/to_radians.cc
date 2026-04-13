#include "parser.ih"

double Parser::to_radians(double value) const
{
    switch (d_angleMode)
    {
        case AngleMode::DEG:
        return value * std::acos(-1.0) / 180.0;
        case AngleMode::GRAD:
        return value * std::acos(-1.0) / 200.0;
        default:
        return value;
    }
}
