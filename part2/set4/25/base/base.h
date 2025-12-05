#ifndef INCLUDED_BASE_
#define INCLUDED_BASE_

#include <iostream>

class Base
{
    public:
        Base() = default;
        Base(Base const &other) = default;
        virtual ~Base() = default;
        
        void hello(std::ostream &out) const
        {
            vHello(out);
        }
    protected:
        virtual void vHello(std::ostream &out) const
        {
            out << "Hello from Base\n";
        }
};
        
#endif
