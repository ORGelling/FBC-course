#ifndef INCLUDED_WRAP_
#define INCLUDED_WRAP_

#include "../../62/data/data.h"

class Wrap
{
    Type d_type;
    Data d_data;
    
    public:
        Wrap(double *doubles);
        Wrap(std::string const &word);
        Wrap(size_t const value);
        
        Wrap(Wrap const &other);
        Wrap(Wrap &&other);
        
        ~Wrap();
        
        Wrap &operator=(Wrap const &other);
        Wrap &operator=(Wrap &&other);
        
        void swap(Wrap &other);
        
        // accessors. Only getters, no setters.
        double const *array() const;
        double doubles(size_t const index) const;
        std::string const &word() const;
        size_t value() const;
        Type type() const;
};

inline double const *Wrap::array() const
{
    return d_data.array();
}

inline double Wrap::doubles(size_t const index) const
{
    return d_data.doubles(index);
}

inline std::string const &Wrap::word() const
{
    return d_data.word();
}

inline size_t Wrap::value() const
{
    return d_data.value();
}

inline Type Wrap::type() const
{
    return d_type;
}

#endif
