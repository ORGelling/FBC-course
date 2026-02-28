#include "main.ih"

int main()
{
    int chVal = 'X';
    
    cout << chVal << '\n'
         << as<char>(ref(chVal)) << '\n'    // not sure if refs are needed
         << as<bool>(ref(chVal)) << '\n';   // but makes sense for fwding
}
