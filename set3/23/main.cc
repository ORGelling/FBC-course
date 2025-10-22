#include "indent.ih"

int main()
{
    indented_cout() << "unindented\n";
    
    indent_less();
    indented_cout() << "still unindented\n";
    
    for (size_t depth = 1; depth <= 4; ++depth)
    {
        indent_more();
        indented_cout() << "indented deeper\n";
    }

    for (size_t depth = 4; depth-- > 2 ;)
    {
        indent_less();
        indented_cout() << "back a step\n";
    }

    reset_indentation();
    indented_cout() << "unindented again\n";
}
