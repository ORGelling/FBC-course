#include "main.ih"

int main(int argc, char **argv)
{
    if (argc != 2)
        return 1;
    
    vector<Student> studVec = read(argv[1]);
    cout << "Sorting by last name:\n";
    writeNames(studVec, cout);
    cout << "\nSorting by student number:\n";
    writeNrs(studVec, cout);
}
