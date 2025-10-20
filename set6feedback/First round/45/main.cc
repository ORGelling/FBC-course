#include "main.ih"

int main(int argc, char *argv[])
{
    size_t argc_t = argc;
    Strings strings{ argc_t, argv };
    Strings strings2{ cin };
    strings.swap(strings2);
    
    for (size_t idx = 0, end = strings.size(); idx != end; ++idx)
        cout << "line " << idx + 1 << ": " << strings.at(idx) << '\n';

    cout << "current capacity: " << strings.capacity() << '\n';

    for (size_t idx = 0, end = strings2.size(); idx != end; ++idx)
        cout << "line " << idx + 1 << ": " << strings2.at(idx) << '\n';

    cout << "current capacity: " << strings2.capacity() << '\n';

}
