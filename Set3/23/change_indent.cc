#include "indent.ih"

void indent_status::change_indent(int const change)
{
    size_t &indentDepth = indent_status::indentation_depth();
    switch (change)
    {
        case -1:
            if (indentDepth == 0)
                break;
        case 1:
            indentDepth = indentDepth + change;
        break;
        case 0:
            indentDepth = 0;
        break;
    }
}
