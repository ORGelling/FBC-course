#include "indent.ih"

string indent_status::get_indent_string()
{
    size_t const stepSize = indent_status::get_step_size();
    size_t const indentDepth = indent_status::indentation_depth();
    
    string indentation(stepSize * indentDepth, ' ');
    
    return indentation;
}
