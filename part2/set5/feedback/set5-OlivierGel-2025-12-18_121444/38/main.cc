#include "main.ih"

int main()
{
    Address book;
    ifstream read("data.txt");
    ofstream write("target.txt");
    read >> book;
    //write << book << 
    cout << book.remove("42") << '\n';
    write << book;
}
