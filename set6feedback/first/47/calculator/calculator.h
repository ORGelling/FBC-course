#ifndef INCLUDED_CALCULATOR_
#define INCLUDED_CALCULATOR_

#include <iosfwd>

#include "../tokenizer/tokenizer.h"
#include "../../46/symtab/symtab.h"

class Calculator
{
    static double constexpr s_zeroDouble = 1e-10;
    //JB: See below

    Symtab d_symtab;
    Tokenizer d_tokenizer;
    bool d_ok = true;                           // true: no (syntax) errors 

    //JB: COCO (Don't want these to be modified/swapped, I presume.)
    static bool (Calculator::*s_term[])(Value &ret);    // ptrs to handling
    static bool (Calculator::*s_factor[])(Value &ret);  // functions (cf.
    static Value (Calculator::*s_unit[])();             // data.cc)

    public:
       void run();

    private:
       void prompt();              // show the initial prompt
       bool atEoln();

       bool ok();                  // true: expr. correctly completed

       Value evaluate();
       Value expr();
       Value term();
       Value factor();

       bool add(Value &lhs);       // with s_term, in expr()
       bool sub(Value &lhs);

       bool mul(Value &lhs);       // with s_factor, in term()
       bool div(Value &lhs);
       bool mod(Value &lhs);

       bool divisionOK(bool zeroRhs);      // true: no division by 0

       bool done(Value &ret);

       Value notOK();              // with s_unit, in factor()
       Value charUnit();
       Value intDouble();
       Value ident();

       Value parenthesized();          // handle parenthesized expressions
       Value unaryMinus();             // handle unary minues

       Token show(Value const &value);

       bool charToken(int ch) const;      // true if 'ch' is the next token
       size_t charTokens(std::string const &chars);    // the index of the
                                       // token in chars, or chars.length() 

       Value rvalue(Value const &value) const; // value or its symbol's val.

       void assign(Value &lhs, Value const &rhs);  // lhs = rhs

       void nextToken();                       // if d_ok get the next token 

       static Token equalize(Value &lhs, Value &rhs);  // equalizes lhs/rhs 
                                               // (Token) values: to DOUBLE
                                               // unless both are INT

       static void toDouble(Value &rvalue);    // converts INT to DOUBLE
};

        
#endif
/* JB:
 *     
 *     constexpr char * foo = &ch, bar = &ch;
 *     
 * is equivalent to:
 * 
 *     constexpr char * foo = &ch;
 *     constexpr char * bar = &ch;
 *     
 * I.e. it distributes across the comma, making both foo and bar compile-time
 * evaluatable. That implies that they become const, so it is also equivalent
 * to:
 * 
 *      constexpr char * const foo = &ch;
 *      constexpr char * const bar = &ch;
 *      
 * So 'constexpr', like 'static', pertains to the variable(s), whereas 'const'
 * pertains to the basic type (everything before the first '*').
 * Therefore, I prefer to put 'constexpr' with static at the start:
 * 
 *     static constexpr double s_zeroDouble = 1E-10;
 *     
 */
