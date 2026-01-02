#ifndef INCLUDED_STUDENT_
#define INCLUDED_STUDENT_

#include <iosfwd>
#include <string>

class Student
{
    friend std::istream &operator>>(std::istream &in,  Student &student);
    friend std::ostream &operator<<(std::ostream &out, Student &student);
    
    std::string d_name;                 // full name
    std::string d_lastname;             // only last name
    size_t      d_number;
    float       d_score;
    
    public:
    //  Student() = default;
    //  Student(std::string const &name, size_t number, float score);
                                                    // not sure if needed
    
    //  std::string name() const;           // setters and getters are nice
    //  std::string lastname() const;       // but I think we can just set
    //  size_t      number() const;         // and get the members directly.
    //  float       score() const;          // Hence friend opex&ins.

    private:
    //  std::string lastName() const;
        std::istream &extractFrom(std::istream &source);
        std::ostream &insertInto(std::ostream &dest);
};


#endif
