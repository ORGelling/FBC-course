#include "indent.ih"

void indent_status::change_indent(int const change)
{
    size_t &indentDepth = indent_status::indentation_depth();
    switch (change)
    {
        case -1:
            if (indentDepth == 0)           // Guard underflow and let
                break;                      // next case handle mutation
        [[fallthrough]];                    // So intentional fallthrough 
        case 1: 
            indentDepth += change;
        break;
        case 0:
            indentDepth = 0;                // Back to 0
        break;
    }
}
