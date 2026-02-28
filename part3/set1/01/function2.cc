#include "main.ih"

void function2()
{
    void (*fun2ptr)(size_t) = &address<size_t>;
    
    cout << "Address of function 2's constructed template: " 
         << reinterpret_cast<void *>(fun2ptr)
         << '\n';
}
