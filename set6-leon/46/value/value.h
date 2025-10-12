#ifndef INCLUDED_VALUE_
#define INCLUDED_VALUE_

#include "../enum/enum.h"

class Value
{
    // The class Value simply stores the value's type and a union containing
    // fields for its double, int and char variants. Begin the union's fields
    // with u_ to distinguish them from ordinary data members.
    union Type
    {
        double u_double;
        int u_int;
        char u_char;
    };

    Token d_token;
    Type d_value;

public:
    // Value has constructors initializing it as an int (Value val; defines an
    // INT type having value 0); as a double;
    Value();
    Value(int const value);
    Value(double const value);
    Value(char const value);

    // or as a value referring to a symbol in the symbol table. In
    // the latter case the passed value refers to the symbol's index in the
    // symbol table, and it also receives a second argument, specifying the
    // symbols type as `IDENT'.
    Value(int const value, Token const tokenType);

    // In addition the class offers accessors and modifiers for all its data
    // elements (e.g., a member intValue() returning the int-field of the
    // value union, and a corresponding intValue(int value) member to modify
    // the int-field).
    int intValue() const;
    void intValue(int const value);

    double doubleValue() const;
    void doubleValue(double const value);

    char charValue() const;
    void charValue(char const value);

    // It also has an accessor Token token() const, returning the type of the
    // stored value. These types are called tokens (cf. next section).
    Token token() const;

    // Finally it has a member void Value::requireSpecial(Token token), checking
    // that token is QUIT, ERROR, or IDENT, and if not issues an error message
    void requireSpecial(Token const token) const;
};

inline Value::Value() : d_token(Token::INT), d_value({.u_int = 0}) {};
inline Value::Value(int const value)
    : d_token(Token::INT), d_value{.u_int = value} {};
inline Value::Value(double const value)
    : d_token(Token::DOUBLE), d_value{.u_double = value} {};
inline Value::Value(char const value)
    : d_token(Token::CHAR), d_value{.u_char = value} {};
inline Value::Value(int const value, Token const tokenType)
    : d_token(tokenType), d_value{.u_int = value} {};

inline int Value::intValue() const { return d_value.u_int; }
inline void Value::intValue(int const value) { d_value.u_int = value; }

inline double Value::doubleValue() const { return d_value.u_double; }
inline void Value::doubleValue(double const value) { d_value.u_double = value; }

inline char Value::charValue() const { return d_value.u_char; }
inline void Value::charValue(char const value) { d_value.u_char = value; }

inline Token Value::token() const { return d_token; }

#endif
