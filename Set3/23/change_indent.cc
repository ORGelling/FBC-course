#include "indent.ih"

void indent_status::change_indent(int const change)
{
    size_t &indentDepth = indent_status::indentation_depth();
    switch (change)
    {
        case indent_status::LESS:
            if (indentDepth == 0)           // Guard underflow and let
                break;                      // next case handle mutation
        [[fallthrough]];                    // So intentional fallthrough 
        case indent_status::MORE: 
            indentDepth += change;
        break;
        case indent_status::RESET:
            indentDepth = 0;                // Back to 0
        break;
    }
}
