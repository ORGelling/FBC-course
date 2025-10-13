#ifndef INCLUDED_SYMBOL_
#define INCLUDED_SYMBOL_
#include "../value/value.h"
#include <string>

class Symbol
{
    // Symbol objects store the symbols name, and the symbol's type and value in
    // a Value data member.
    std::string d_name;
    Value d_value;

public:
    // Objects of the class Symbol can be constructed from a string and either a
    // double value or an int value.
    Symbol(std::string const str, double const value);
    Symbol(std::string const str, int const value);

    // Its accessors allow users to retrieve this information. Instead of
    // retrieving the union by itself it offers accessors to retrieve the
    // symbol's doubleValue, intValue, type and its (immutable) Value.
    std::string const &ident() const;
    double doubleValue() const;
    int intValue() const;
    Token type() const;
    Value const &value() const;

    // The class also provides a member compare, comparing the symbol's
    // identifier to the identifier passed to compare as argument. It returns
    // LHS_FIRST if the Symbol's identifier is lexicographically ordered before
    // its argument, RHS_FIRST if the argument is ordered before the Symbol's
    // identifier, and EQUAL if both are equal. Again, these capitalized names
    // are enum values.
    enum Comparison
    {
        LHS_FIRST,
        RHS_FIRST,
        EQUAL
    };

    Comparison compare(std::string const &str) const;

    // To assign a new Value to a Symbol it has a member void assign(Value const
    // &value).
    void assign(Value const &value);
};

inline Symbol::Symbol(std::string const str, double const value)
    : d_name(str), d_value(value) {};
inline Symbol::Symbol(std::string const str, int const value)
    : d_name(str), d_value(value) {};

inline std::string const &Symbol::ident() const { return d_name; }
inline double Symbol::doubleValue() const { return d_value.doubleValue(); }
inline int Symbol::intValue() const { return d_value.intValue(); }
inline Token Symbol::type() const { return d_value.token(); }
inline Value const &Symbol::value() const { return d_value; }

inline void Symbol::assign(Value const &value) { d_value = value; }

#endif
