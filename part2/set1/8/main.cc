#include "main.ih"

int main(int argc, char **argv)
{
    Strings one(argc, argv);
    Strings two(cin);
    
    two += "Last line";
    Strings thr(two);
    
    string newStr("New entry!");
    thr += newStr;
    
    thr[1] = "inserted line";
    
    for (size_t index = 0; index != thr.size(); ++index)
        cout << thr[index] << '\n';

}
