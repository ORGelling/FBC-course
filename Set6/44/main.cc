#include "main.ih"

int main()
{
    Strings strings{ cin };
    
    strings.resize(1);
    
    for (size_t idx = 0, end = strings.size(); idx != end; ++idx)
        cout << "line " << idx + 1 << ": " << strings.at(idx) << '\n';

    cout << "current capacity: " << strings.capacity() << '\n';
}
