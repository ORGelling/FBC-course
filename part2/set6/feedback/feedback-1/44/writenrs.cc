#include "main.ih"

namespace {
                                                            // Indirect sort:
    void sortNrs(vector<size_t> &indices, vector<Student> const &studVec)
    {
        sort(indices.begin(), indices.end(), 
            [&](size_t lhs, size_t rhs)
            {
                return studVec[lhs].number() < studVec[rhs].number();
            }
        );
    }
                                                                // Printing:
    string nrsInfo(Student const &stud)
    {
        return to_string(stud.number()) + " " + to_string(stud.score());
    }
    
    void show(vector<size_t> &indices, vector<Student> &studVec, ostream &out)
    {
        transform(indices.begin(), indices.end(), 
                                    ostream_iterator<string>(out, "\n"), 
            [&](size_t idx)
            {
                return nrsInfo(studVec[idx]);
            }
        );
    }
}

void writeNrs(vector<Student> &studVec, ostream &out)
{
    vector<size_t> indices(studVec.size());         // index vector
    iota(indices.begin(), indices.end(), 0);        // fill with indices
    
    sortNrs(indices, studVec);
    
    show(indices, studVec, out);
}
