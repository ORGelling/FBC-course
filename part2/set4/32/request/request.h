#ifndef INCLUDED_REQUEST_
#define INCLUDED_REQUEST_

class Base;

class Request
{
    Base *d_base;

    public:
        Request();
        ~Request();
        Base &base();
};
        
#endif
