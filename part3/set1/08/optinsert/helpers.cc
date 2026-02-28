#include "optinsert.ih"

namespace
{
    OptInsert optInsert;
}

void setVerbose(ostream &out)
{
    optInsert.rdbuf(out.rdbuf());
}

OptInsert &verbose()
{
    return optInsert;
} 
