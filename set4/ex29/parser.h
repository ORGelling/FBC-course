#ifndef INCLUDED_PARSER_
#define INCLUDED_PARSER_

#include <iosfwd>
#include <string>
#include "line.h"

class Parser
{
  public:
    enum Return
    {
        NO_NUMBER,
        NUMBER,
        EOLN
    };

  private:
    Line  d_line;       // composed Line instance
    bool  d_integral;   // true if last parsed number was integral-like

    Return convert(double *dest, std::string const &str); // wraps pureDouble with try/catch
    bool   pureDouble(double *dest, std::string const &str);

  public:
    Parser();

    bool   reset();                // read next input line into d_line
    Return number(double *dest);   // parse next substring as double
    bool   isIntegral() const;     // true if last successful number had no . e E
    std::string next();            // expose d_line.next() (raw substring)
};

#endif

