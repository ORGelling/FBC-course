#include "multicompile.ih"

    // by 

bool MultiCompile::newResult(Result &result)
{
    if (d_qResults.empty())
        return false;
    
    result = d_qResults.popFront().value().get();
    return true;
}
