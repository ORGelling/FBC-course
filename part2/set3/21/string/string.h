#ifndef INCLUDED_STRING_
#define INCLUDED_STRING_

#include <string>
#include <compare>
#include <iostream>     // To show String vs std::string comp op with output

class String: public std::string
{
    public:
        using std::string::string;
        using std::string::operator=;
        
        String() = default;
        String(String const &other) = default;
        String(String &&tmp) = default;
        ~String() = default;

        String &operator=(String const &other) = default;
        String &operator=(String &&other) = default;
        
        String &insert(std::string const &txt);
        
//      std::strong_ordering operator<=>(String const &rhs) const = default;
//      bool operator==(String const &rhs) const = default;
                                            // Doesn't work for last part
    private:
        
};

inline bool operator==(String const &lhs, String const &rhs)
{
    std::cerr << "String comparison: ";
    return static_cast<std::string>(lhs) == static_cast<std::string>(rhs);
}

inline bool operator!=(String const &lhs, String const &rhs)
{
    return not (lhs == rhs);
}

inline bool operator<(String const &lhs, String const &rhs)
{
    std::cerr << "String comparison: ";
    return static_cast<std::string>(lhs) < static_cast<std::string>(rhs);
}

inline bool operator>=(String const &lhs, String const &rhs)
{
    return not (lhs < rhs);
}

inline bool operator>(String const &lhs, String const &rhs)
{
    return rhs < lhs;
}

inline bool operator<=(String const &lhs, String const &rhs)
{
    return not (lhs > rhs);
}


#endif
