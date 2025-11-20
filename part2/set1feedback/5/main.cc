#include <iostream>

using namespace std;

namespace First {
    
    enum Enum {};
    
    void fun(Enum symbol){
        cout << "First::fun called\n";
    }
}

namespace Second {
    void fun(First::Enum symbol){
        cout << "Second::fun called\n";
    }
}

void fun(First::Enum symbol){
    cout << "global fun called\n";
}

int main()
{
    First::Enum empty{};

//  // code for 1:
//  fun(empty);
//  Second::fun(empty);    
    
    // testing for 2 and 3:
    ::fun(empty);
    
    First::fun(empty);
    
    Second::fun(empty);
}
