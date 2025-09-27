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
        
        enum Return
        {
            NO_NUMBER,
            NUMBER,
            EOLN
        };
        
        bool reset(); // fills d_line with next input 
        Return number(double *dest);
        bool isIntegral();
        std::string next();
        
    private:
        Return convert(double *dest, std::string const &str);
        bool pureDouble(double *dest, std::string const &str);
};
        
#endif
