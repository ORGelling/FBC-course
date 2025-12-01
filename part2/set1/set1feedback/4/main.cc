#include "main.ih"

int main()
{
    string str;
    while (promptGet2(cin, str))
        process(str);
}
