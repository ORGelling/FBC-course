//JB: 1
//JB: NAE ?! See below. Oh, sry. We just don't 
//JB: have precedence. That's ok for now.

#include "calculator.ih"

void Calculator::run()
{
    while (true)
    {
        prompt();                       // show a prompt, prepare for the
                                        // next expression evaluation
        
        if (d_tokenizer.token() == QUIT)
            break;

        if (atEoln())                   // no content, just an empty line
            continue;

        Value value = evaluate();       // evaluate an expression

        if (not ok())
            cout << "error(s) in expression\n";
        else 
            show(value);

        d_tokenizer.reset();
    }
}

/* JB: Seems some calculations do not happen:
  ? a = 2
  2 (int)
  ? b = 3
  3 (int)
  ? a + b
  2 (int)
  ? c = a + b
  2 (int)
  ? c
  2 (int)
 */
