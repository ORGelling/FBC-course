#include "scanner.ih"

void Scanner::rsl()
{
    addToText();                        // add current match
    
    size_t dLen = d_delim.length();     // for ease of use
                                        
                                        // we check if the current tail
    if                                  // of d_text matches d_delim
    (
        d_text.length() >= dLen && 
        d_text.compare(d_text.length() - dLen , dLen, d_delim) == 0
        //d_text.find(d_delim) != std::string::npos   // nice and simple
    )                                                 // but inefficient
    {
        d_text.erase(d_text.length() - dLen, dLen);
        count();
        out() << stringAlt();
        begin(StartCondition_::INITIAL);
    }
}                                       // we have chosen not to allow RSL
                                        // concatenation. This would make the
                                        // mechanics here significantly more
                                        // complicated and might require the
                                        // string_gap mini scanner to work
