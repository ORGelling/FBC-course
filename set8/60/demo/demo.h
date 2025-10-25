#ifndef INCLUDED_DEMO_
#define INCLUDED_DEMO_


class Demo
{
    public:
        Demo();
        Demo(Demo const &other);
        Demo(Demo &&tmp);
        ~Demo();
        Demo &operator=(Demo const &other);
        Demo &operator=(Demo &&tmp);
        
        static Demo factory();
        
    private:
};
        
#endif
