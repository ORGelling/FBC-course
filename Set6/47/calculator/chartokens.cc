#include "calculator.ih"

    // by s_term.cc s_factor.cc s_unit.cc 

size_t Calculator::charTokens(string const &chars)
{
    size_t index = chars.find(d_tokenizer.charValue());
    return index == string::npos ? chars.length() : index;
}
