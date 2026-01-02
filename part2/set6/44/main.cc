#include "main.ih"

int main(int argc, char **argv)
{
    if (argc != 2)
        return 1;
    
    vector<Student> studVec = read(argv[1]);
    
    for(auto element : studVec)
        cout << element;
}
