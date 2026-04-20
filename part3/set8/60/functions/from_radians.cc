#include "functions.ih"

double Functions::from_radians(double value) const
{
    switch (d_angleMode)
    {
        case AngleMode::DEG:
        return value * 180.0 / std::acos(-1.0);
        case AngleMode::GRAD:
        return value * 200.0 / std::acos(-1.0);
        default:
        return value;
    }
}
