#include <iostream>
#include <iomanip>
#include <chrono>

using namespace std;

ostream &now(ostream &os)                   // free function, no ns needed
{
    time_t time = chrono::system_clock::to_time_t( 
                                            chrono::system_clock{}.now() );
    
    char const *asctimeformat = "%a %b %e %H:%M:%S %Y";
    // char const *format = "%c"; // the easy way
    
    return os << put_time(localtime(&time), asctimeformat);
}

int main()
{
    cout << now << '\n';
}
