#include "indent.ih"

string indent_status::get_indent_string()
{
    string singleIndent = indent_status::get_single_indent();
    size_t depth = indent_status::indentation_depth();
    
    string indentation;
    for (size_t index = 0; index != depth; ++index)
        indentation.append(singleIndent);
    
    return indentation;
}
