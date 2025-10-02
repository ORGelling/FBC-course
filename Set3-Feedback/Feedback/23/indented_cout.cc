#include "indent.ih"

ostream &indented_cout()
{
    //JB: IRE
    string indentString = ""; //JB: SF initialization.
    //JB: MLR
    for (
            size_t indentStep = 0; 
            indentStep != indent_status::get_step_size(); 
            ++indentStep
        )
        //JB: WHEEL
        indentString += " ";                // Create indents

    string indentation = "";
    //JB: MLR
    for (
            size_t steps = 0; 
            steps != indent_status::indentation_depth(); 
            ++steps
        )
        //JB: WHEEL
        indentation += indentString;        // Apply them
    
    cout << indentation;
    //JB: CTR
    return cout;
}
