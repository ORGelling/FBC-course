#include "demo.ih"

    // by 

Demo Demo::factory()
{
    cerr << "calling factory.\n";
    Demo demo;
    return demo;
}
