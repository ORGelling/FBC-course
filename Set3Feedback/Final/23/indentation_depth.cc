#include "indent.ih"

size_t &indent_status::indentation_depth()
{
    static size_t indentDepth = 0;
    
    return indentDepth;
}
