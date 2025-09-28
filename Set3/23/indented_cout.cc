#include "indent.ih"

ostream &indented_cout()
{
    return cout << indent_status::get_full_indentation();
}
