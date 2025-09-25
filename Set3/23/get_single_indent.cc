#include "indent.ih"

string indent_status::get_single_indent()
{
    size_t steps = indent_status::get_step_size();
    string singleIndent(steps, ' ');
    
    return singleIndent;
}
