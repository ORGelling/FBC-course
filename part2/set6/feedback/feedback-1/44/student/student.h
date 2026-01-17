// ES: 1
#ifndef INCLUDED_STUDENT_
#define INCLUDED_STUDENT_

#include <iosfwd>
#include <string>

class Student
{
    friend std::istream &operator>>(std::istream &in,  Student &student);
    
    std::string d_name;                 // full name
    std::string d_lastname;             // only last name
    size_t      d_number;
    float       d_score;
    
    public:    
        std::string const &name() const;        //
        std::string const &lastname() const;    // 
        size_t             number() const;      // 
        float              score() const;       // 

    private:
        std::istream &extractFrom(std::istream &source);
};

//:

inline std::string const &Student::name() const
{
    return d_name;
}

inline std::string const &Student::lastname() const
{
    return d_lastname;
}

inline size_t Student::number() const
{
    return d_number;
}

inline float Student::score() const
{
    return d_score;
}

#endif
