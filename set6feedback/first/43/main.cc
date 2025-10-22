#include "main.ih"

int main()
{
    Strings const strings{ cin };
    
    for (size_t idx = 0, end = strings.size(); idx != end; ++idx)
        cout << "line " << idx + 1 << ": " << strings.at(idx) << '\n';
}
