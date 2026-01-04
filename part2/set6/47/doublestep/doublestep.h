#ifndef INCLUDED_DOUBLESTEP_
#define INCLUDED_DOUBLESTEP_

struct DoubleStep
{
    unsigned d_value;
    DoubleStep(unsigned val = 0);
    
    DoubleStep &operator++();
    operator unsigned() const;
};

inline DoubleStep::DoubleStep(unsigned val)
:
    d_value(val)
{}

inline DoubleStep::operator unsigned() const
{
    return d_value;
}

#endif
