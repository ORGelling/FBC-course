#include "indent.ih"

ostream &indented_cout()
{
    string indentString = "";
    for (
            size_t indentStep = 0; 
            indentStep != indent_status::get_step_size(); 
            ++indentStep
        )
        indentString += " ";

    string indentation = "";
    for (
            size_t steps = 0; 
            steps != indent_status::indentation_depth(); 
            ++steps
        )
        indentation += indentString;
    
    cout << indentation;
    
    return cout;
}
