#include <iostream>
#include <string>
#include <iterator>
#include <functional>
#include <algorithm>

using namespace std;

int main(int argc, char **argv)
{
    sort(argv, argv + argc, less<string>());
    copy(argv, argv + argc, ostream_iterator<char *>{ cout, " " });
    cout << '\n';
    
    sort(argv, argv + argc, greater<string>());
    copy(argv, argv + argc, ostream_iterator<char *>{ cout, " " });
    cout << '\n';
}
