#include "indent.ih"

ostream &indented_cout()
{
    return cout << indent_status::get_indent_string();
}
