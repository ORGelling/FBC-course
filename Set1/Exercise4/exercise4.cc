#include <iostream>

using namespace std;

string rawLiteral = R"special(^\s+Encryption key:(\w+)
^\s+Quality=(\d+)
^\s+E?SSID:"([[:print:]]+)"
^\s+ssid="([[:print:]]+)"
)special";


int main()
{
    cout << rawLiteral;
}
