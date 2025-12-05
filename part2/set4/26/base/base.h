#ifndef INCLUDED_BASE_
#define INCLUDED_BASE_

#include <iosfwd>

class Base
{
    public:
        Base() = default;
        Base(Base const &other) = default;
        
        virtual ~Base() = default;
        
        void hello(std::ostream &out) const;
        
    protected:
        
        virtual void vHello(std::ostream &out) const;
};

inline void Base::hello(std::ostream &out) const
{
    vHello(out);
}
        
#endif
