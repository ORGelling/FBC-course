#include "indent.ih"

void indent_status::change_indent(int const change)
{
    size_t &indentDepth = indent_status::indentation_depth();
    switch (change)
    {
        case -1:
            if (indentDepth == 0)           // Guard underflow
                break;
        [[fallthrough]];                    // Subtraction and addition
        case 1:                             // both handled by this case 
            indentDepth = indentDepth + change;
        break;
        case 0:
            indentDepth = 0;
        break;
    }
}
