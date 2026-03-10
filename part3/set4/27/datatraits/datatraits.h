#ifndef INCLUDED_DATATRAITS_
#define INCLUDED_DATATRAITS_

#include <string>
#include <cstddef>

struct StringTag
{};

struct IntegerTag
{};

struct DecimalTag
{};

template <typename Type>
struct Traits;

template <>
struct Traits<std::string>
{
    using Tag = StringTag;
};

// Using macros to define all other specialisations of this struct

#define INTEGER_TYPE(Type)      \
    template <>                 \
    struct Traits<Type>         \
    {                           \
        using Tag = IntegerTag; \
    };

INTEGER_TYPE(bool);
INTEGER_TYPE(short);
INTEGER_TYPE(unsigned short);
INTEGER_TYPE(int);
INTEGER_TYPE(unsigned int);
INTEGER_TYPE(long);
INTEGER_TYPE(unsigned long);
INTEGER_TYPE(long long);
INTEGER_TYPE(unsigned long long);
INTEGER_TYPE(char);
INTEGER_TYPE(signed char);
INTEGER_TYPE(unsigned char);

#undef INTEGER_TYPE

#define DECIMAL_TYPE(Type)      \
    template <>                 \
    struct Traits<Type>         \
    {                           \
        using Tag = DecimalTag; \
    };

DECIMAL_TYPE(float);
DECIMAL_TYPE(double);
DECIMAL_TYPE(long double);

#undef DECIMAL_TYPE

template <typename Type, typename Tag>
struct Convert;


template <typename Type>
struct Convert<Type, StringTag>
{
    static std::string const &convert(std::string const &text)
    {
        return text;
    }
};

template <typename Type>
struct Convert<Type, IntegerTag>
{
    static Type convert(std::string const &text)
    {
        try
        {                           
            return static_cast<Type>(std::stoll(text)); // might cause errors
        }                                               // at signed/unsigned
        catch (...)                                     // boundary
        {
            return Type{};
        }
    }
};

template <typename Type>
struct Convert<Type, DecimalTag>
{
    static Type convert(std::string const &text)
    {
        try
        {
            return static_cast<Type>(std::stold(text));
        }
        catch (...)
        {
            return Type{};
        }
    }
};


#endif
