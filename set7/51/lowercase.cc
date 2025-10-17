#include "main.ih"

string lowercase(string &input)
{
    for (char &ch : input)
       ch = tolower(ch);
    
    return input;
}
