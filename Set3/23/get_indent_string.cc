#include "indent.ih"

string indent_status::get_indent_string()
{
    string indentation(indent_status::get_step_size() 
                * indent_status::indentation_depth(), ' ');
    
    return indentation;
}
