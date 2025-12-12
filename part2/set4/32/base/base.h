#ifndef INCLUDED_BASE_
#define INCLUDED_BASE_

// polymorphic base class performing the computation via its derived classes

struct Base
{
    Base();
    virtual ~Base();

    void run();

    protected:
        void prepare();
        
    private:
        virtual void v_run() = 0;       // must be implemented by derived 
        virtual void v_prepare() = 0;   // classes
                                        
};

#endif



