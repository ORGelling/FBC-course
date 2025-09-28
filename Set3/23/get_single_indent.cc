#include "indent.ih"

string indent_status::get_single_indent()
{
    static string singleIndent(indent_status::get_step_size(), ' ');
     
    return singleIndent;
}
