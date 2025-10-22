#ifndef INCLUDED_PARSER_
#define INCLUDED_PARSER_
#include "../line/line.h"
#include <iosfwd>
#include <string>

class Parser
{
    Line d_line;
    bool d_integral;
    
    public:
        Parser();
        
        enum Return                     // To keep track of data type
        {
            NO_NUMBER,
            NUMBER,
            EOLN
        };
        
        bool reset();                   // Fills d_line with next input 
        Return number(double *dest);    // Puts d_line's next phrase in dest
        bool isIntegral() const;        // Checks if value is integral/integer
        std::string next();             // Moves d_line to next spot
        
    private:                            // Stores double converted str in dest
        Return convert(double *dest, std::string const &str);   
        bool pureDouble(double *dest, std::string const &str);
};                                      // runs inside convert
        
#endif
