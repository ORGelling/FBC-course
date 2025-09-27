#include <iostream>

using namespace std;

int main()
{
    int value = 8;
    
    //if (true) if (false) value = 5; else value = 6;
    
    //if (true) 
    //    if (false)                        // We can test which if gets us
    //        value = 5;
    //else                                  // to the else here
    //    value = 6;

    //if (true)                             // This one has no else now
    //    if (false)                        // This leads to the else
    //        value = 5; 
    //    else 
    //        value = 6;
    
    //if (false)                            // Now this one does
    //{
    //    if (false)                        // This one does not 
    //        value = 5; 
    //}
    //else 
    //    value = 6;
    
    if (true)
    {
        if (false)                          // Now this one leads to the else 
            value = 5;
        else                                // without warnings
            value = 6;
    }
    
    cout << value << '\n';
}
