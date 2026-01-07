#include "interactive.ih"

    // by 

void Interactive::show() const
{
    cout << '\n';                   // formatting output for readability
    
    copy(d_data.begin(), d_data.end(), ostream_iterator<FullLine>(cout));
    
    cout << "\nNew size: " << d_data.size() << "\n\n";
}
