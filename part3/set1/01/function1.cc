#include "main.ih"

void function1()
{
    void (*fun1ptr)(size_t) = &address<size_t>;
    
    cout << "Address of function 1's constructed template: " 
         << reinterpret_cast<void *>(fun1ptr)
         << '\n';
}
