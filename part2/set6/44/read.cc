#include "main.ih"

vector<Student> read(string const &fileName)
{
    ifstream file(fileName);
    
    vector<Student> studVec;
    Student student;

    while (file >> student)
        studVec.push_back(student);
    
    return studVec;
}
