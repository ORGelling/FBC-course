#include <iostream>

using namespace std;

struct Demo
{
    Demo();
    ~Demo();
    void hello() const;
};

Demo::~Demo()
{
    cerr << "destructor\n";
}

Demo::Demo()
{
    cerr << "constructor\n";
}

void Demo::hello() const
{
    cerr << "hello from Demo at " << this << '\n';
}

Demo *fun(bool def)
{
    cerr << "fun\n";

    if (not def)                // in the Arg class s_arg is inspected
        return 0;

    static Demo demo;
    return &demo;

    return 0;
}

int main(int argc, char **argv)
{
    fun(false);
    fun(true)->hello();
    fun(true)->hello();
    fun(false);   
}
