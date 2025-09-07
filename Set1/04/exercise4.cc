#include <iostream>

using namespace std;

namespace {                         // anonymous namespace

// We use R"special( and )special" to denote the start and end of string
const char wifiPattern[] = 
R"special(^\s+Encryption key:(\w+)
^\s+Quality=(\d+)
^\s+E?SSID:"([[:print:]]+)"
^\s+ssid="([[:print:]]+)"
)special";                          // adding the newline by placing this here

};                                  // end of namespace

int main()
{
    cout << wifiPattern;
}
