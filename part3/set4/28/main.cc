#include "main.ih"

int main()
{
    Traits<int>::PlainType plain = 5;               
    Traits<int>::PtrType     ptr = &plain;          
    Traits<int>::RefType     ref = plain;           
    Traits<int>::RRefType   rref = 9;               
    
    cout << Traits<decltype(plain)>::value << '\n'  // Honestly I'm still not
         << Traits<decltype(ptr)>::value << '\n'    // entirely sure what the
         << Traits<decltype(ref)>::value << '\n'    // purpose of this part
         << Traits<decltype(rref)>::value << "\n\n";// of the exercise is
   
    cout << Traits<int>::value << '\n'
         << Traits<int *>::value << '\n'
         << Traits<int &>::value << '\n'
         << Traits<int &&>::value << "\n\n";
    
    auto cptr1 = make_const_ptr(plain);
    auto cptr2 = make_const_ptr(ptr);
    auto cptr3 = make_const_ptr(ref);
    auto cptr4 = make_const_ptr(std::move(rref));
    
    cptr1 = &plain;
    cptr2 = &plain;
    cptr3 = &plain;
    cptr4 = &plain;
    
    cout << *cptr1 << '\n'
         << *cptr2 << '\n'
         << *cptr3 << '\n'
         << *cptr4 << "\n\n";
         
    cout << Traits<decltype(cptr1)>::value << '\n'
         << Traits<decltype(cptr2)>::value << '\n'
         << Traits<decltype(cptr3)>::value << '\n'
         << Traits<decltype(cptr4)>::value << '\n';
}
