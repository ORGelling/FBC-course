#include "main.ih"

void process(string str)
{
    for (char &ch : str)
    {
        switch (ch)
        {
        /*  case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                cout << ch << '\n';
            break; */
            case ' ':
                cout << '\n';
            break;
            default:
                cout << ch;
            break;
        }
    }
    cout << '\n';
}
