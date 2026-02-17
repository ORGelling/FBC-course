#ifndef INCLUDED_EXCEPTION_
#define INCLUDED_EXCEPTION_

#include <string>
#include <sstream>
#include <exception>

class Exception: public std::exception
{
    std::string d_what;

    public:
        Exception() = default;

        char const *what() const noexcept(true) override;
        
        template <typename Tp>
        friend Exception &&operator<<(Exception &&in, Tp const &value);
};

template <typename Tp>
inline Exception &&operator<<(Exception &&in, Tp const &value)
{
    std::ostringstream oss{};
    oss << value;
    in.d_what += oss.str();
    return std::move(in);
}
        
#endif
