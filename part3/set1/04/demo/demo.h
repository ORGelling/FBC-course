#ifndef INCLUDED_DEMO_
#define INCLUDED_DEMO_
#include <string>

class Demo
{
    std::string d_name;
    
    public:
        Demo();
        Demo(std::string const &name);
        
        std::string const &name();
};

inline std::string const &Demo::name()
{
    return d_name;
}

#endif
