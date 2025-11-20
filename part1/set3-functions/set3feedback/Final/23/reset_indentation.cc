#include "indent.ih"

void reset_indentation()
{
    indent_status::change_indent(indent_status::RESET);
}
