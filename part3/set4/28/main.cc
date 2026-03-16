#include "main.ih"

int main()
{
    int   plain = 5;
    int   plain2 = 42;
    int  *ptr = &plain;
    int  &ref = plain;
    int &&rref = 9;
    
    cout << Traits<decltype(plain)>::value << '\n'
         << Traits<decltype(ptr)>::value << '\n'
         << Traits<decltype(ref)>::value << '\n'
         << Traits<decltype(rref)>::value << "\n\n";
    
    
    auto cptr1 = make_const_ptr(plain);
    auto cptr2 = make_const_ptr(ptr);
    auto cptr3 = make_const_ptr(ref);
    auto cptr4 = make_const_ptr(std::move(rref));
    
    cptr1 = &plain2;
    cptr2 = &plain2;
    cptr3 = &plain2;
    cptr4 = &plain2;
    
    cout << *cptr1 << '\n'
         << *cptr2 << '\n'
         << *cptr3 << '\n'
         << *cptr4 << "\n\n";
         
    cout << Traits<decltype(cptr1)>::value << '\n'
         << Traits<decltype(cptr2)>::value << '\n'
         << Traits<decltype(cptr3)>::value << '\n'
         << Traits<decltype(cptr4)>::value << '\n';
}
