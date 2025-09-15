#include <iostream>

using namespace std;

int main()
{
    int value = 8;
    
    //if (true) if (false) value = 5; else value = 6;
    
    //if (true) 
    //    if (false) value = 5;             // We can test which if gets us
    //else value = 6;                       // to the else here
    
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
        if (false) value = 5;               // Now this one leads to the else 
        else value = 6;                     // without warnings
    }
    
    cout << value << '\n';
}
