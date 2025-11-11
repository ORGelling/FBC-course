#include <iostream>

using namespace std;

namespace {                         // anonymous namespace

char const wifiPattern[] =
R"special(^\s+Encryption key:(\w+)
^\s+Quality=(\d+)
^\s+E?SSID:"([[:print:]]+)"
^\s+ssid="([[:print:]]+)"
)special";                          // adding newline by placing this here
// We use R"special( and )special" to denote the start and end of the string
};                                  // end of namespace

int main()
{
    cout << wifiPattern;
}
