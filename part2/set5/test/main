#include "main.ih"

int main(int argc, char **argv)
{
    ifstream read("main.ih");
    string line;
    
    size_t count = 0;
    while (count != 10)
    {
        cout << read.rdbuf();               // useful
        //cout << line << " : " << read.tellg() << '\n';
        //read.seekg(5, ios::cur);
        ++count;
    }
}
