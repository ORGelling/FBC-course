#include <iostream>

using namespace std;

// We use R"special( and )special" to denote the start and end of string
string rawLiteral = R"special(^\s+Encryption key:(\w+)
^\s+Quality=(\d+)
^\s+E?SSID:"([[:print:]]+)"
^\s+ssid="([[:print:]]+)"
)special";                          // adding the newline by placing this here


int main()
{
    cout << rawLiteral;
}
