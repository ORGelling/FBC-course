#include "main.ih"

int main(int argc, char **argv)
{
    if (argc != 2)
        return 1;
    
    ifstream file(argv[1]);
    vector<Student> studVec;
    
    Student student;
    while (file >> student)
        studVec.push_back(student);
    
    for(auto element : studVec)
        cout << element;
}
