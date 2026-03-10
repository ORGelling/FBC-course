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
         << Traits<decltype(rref)>::value << '\n';
    
    auto const_ptr = func(rref);
    cout << *const_ptr << '\n';
    const_ptr = &plain;
    cout << *const_ptr << '\n';
    
    auto const_ptr2 = func(ptr);
    cout << *const_ptr2 << '\n';
    const_ptr2 = &plain2;
    cout << *const_ptr2 << '\n';
    
    //
    
    auto const_ptr3 = make_const_ptr(plain);
    cout << *const_ptr3 << '\n';
    const_ptr3 = &plain2;
    cout << *const_ptr3 << '\n';

    auto const_ptr4 = make_const_ptr(ptr);
    cout << *const_ptr4 << '\n';
    const_ptr4 = &plain2;
    cout << *const_ptr4 << '\n';
}
