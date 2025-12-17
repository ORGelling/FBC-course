#include "lines.ih"

    // by 

LinesData &dataContainer()
{
    static LinesData container;
    return container;
}
