#include "main.ih"

int main()
{
    string str;
    while (promptGet1(cin, str))
        process(str);
}
