#ifndef INCLUDED_BASE_
#define INCLUDED_BASE_

#include <iosfwd>

class Base
{
    public:
        void hello(std::ostream &out)
        {
            vHello(out);
        }
    private:
        virtual vHello(std::ostream &out)
        {
            out << "Hello from Base\n";
        }
};
        
#endif
