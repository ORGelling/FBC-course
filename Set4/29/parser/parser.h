#ifndef INCLUDED_PARSER_
#define INCLUDED_PARSER_

#include "../../28/Line.h"

class Parser
{
    Line d_line;
    bool d_integral;

public:
    Parser();

    enum Return
    {
        NO_NUMBER,  // did not contain a number
        NUMBER,     // did contain a number
        EOLN        // no more substrings
    };

    bool reset();  // fills d_line with the next input line, returning true if
                   // such a line was read;

    Return number(double *dest);  // returns the value stored in the next
                                  // substring of the just read line.

    bool isIntegral() const;  //  returns the value d_integral

    std::string next();  // returns d_line's next substring

private:
    Return convert(double *dest, std::string const &str);

    bool pureDouble(double *dest, std::string const &str);
};

#endif
