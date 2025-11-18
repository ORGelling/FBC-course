#include "main.ih"

int main(int argc, char **argv)
{
    Strings one(argc, argv);
    Strings two(cin);
    
    Strings thr(two);
    
    string newStr("New entry!");
    thr += newStr;
    
    for (size_t index = 0; index != thr.size(); ++index)
        cout << thr[index] << '\n';
}
