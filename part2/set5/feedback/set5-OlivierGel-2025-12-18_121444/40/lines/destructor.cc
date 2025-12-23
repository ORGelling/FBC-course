#include "lines.ih"

    // by 

Lines::~Lines()
{
    LinesData &container = dataContainer();
    
    container.erase(this);
}
