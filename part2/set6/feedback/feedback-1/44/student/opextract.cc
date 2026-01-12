#include "student.ih"

    // by 

istream &operator>>(istream &in, Student &student)
{
    return student.extractFrom(in);
}
