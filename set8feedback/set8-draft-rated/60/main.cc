#include "main.ih"

int main()
{
    cerr << "We construct an object:\n"
        "Demo demo1;\n";
    Demo demo1;

    cerr << "\nWe then call the copy constructor:\n"
        "Demo demo2(demo1);\n";
    Demo demo2(demo1);

    cerr << "\nNow we will try to call the move constructor:\n"
        "Demo demo3(Demo::factory());\n";
    Demo demo3(Demo::factory());

    cerr << "\nIt was elided away! To do it correctly we call:\n"
        "Demo demo4(move(demo3));\n";
    Demo demo4(move(demo3));
    
    cerr << "\nNow we will show copy assignment in action:\n"
        "demo4 = demo3;\n";
    demo4 = demo3;
    
    cerr << "\nand move assignment:\n"
        "demo2 = Demo::factory();\n";
    demo2 = Demo::factory();
}
