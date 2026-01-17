#include "main.ih"

namespace {
                                                                // Sorting:
    bool compareLastNames(Student const &lhs, Student const &rhs)
    {
        return strcasecmp(lhs.lastname().c_str(), rhs.lastname().c_str()) < 0;
    }
    
    void sortLastNames(vector<Student> &studVec)
    {
        sort(studVec.begin(), studVec.end(), 
            [&](Student const &lhs, Student const &rhs)
            {
                return compareLastNames(lhs, rhs);
            }
        );
    }
                                                                // Printing:
    string studentInfo(Student const &stud)
    {
        return stud.name() + " " + to_string(stud.number()) 
                                        + " " + to_string(stud.score());
    }
    
    void writeInfo(vector<Student> &studVec, ostream &out)
    {
        transform(studVec.begin(), studVec.end(), 
                                    ostream_iterator<string>(out, "\n"), 
            [&](Student const &stud)
            {
                return studentInfo(stud);
            }
        );
    }
}

void writeNames(vector<Student> &studVec, ostream &out)
{
    sortLastNames(studVec);
    
    writeInfo(studVec, out);
}
