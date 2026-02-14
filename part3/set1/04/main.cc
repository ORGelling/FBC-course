#include "main.ih"

int main()
{
                                    // without overload this works fine:
    //forwarder(fun, 1, 3);         // should show 'fun(1, 3)' to cout
                                  
                                    
                                    // when we overload we need to clarify:
    forwarder(static_cast<void (*)(int, int)>(fun), 1, 3);
    forwarder(static_cast<void (*)(Demo &&, Demo &&)>(fun), Demo{}, Demo{});
                                    // We might also bind fun to an explicit 
                                    // function pointer and pass that
                                
                                
                                    // fun2 expects two rvalue references 
    forwarder(funTwo, Demo{}, Demo{});
                                    
                                    // testing the other functions here:
    string concat;
    forwarder(
        [&](string lhs, string rhs)
        {
            concat = plus<string>()(lhs, rhs);
        }, 
        "hello ", 
        "world"
    );
    cout << concat << '\n';         // making sure I can see output

                                    // filling in the lambda:
    vector<int> first{ 1, 2, 3, 4, 5 };
    forwarder(                      // receives a lambda function
        [](vector<int> &first, vector<int> const &second, 
                                vector<int> const &third)
        {
            for (size_t idx = 0; idx != 5; ++idx)
                first[idx] += second[idx] + third[idx];
        }, 
        first, 
        vector<int>{ 1, 2, 3, 4, 5 }, 
        vector<int>{ 1, 2, 3, 4, 5 }
    );
                                    // showing its actions:
    for (size_t value : first)
        cout << value << ' ';
    cout << '\n';

    int var = 0;
    forwarder(incrementer, var, var, var);
    cout << var << '\n';            // should show '3'
}
