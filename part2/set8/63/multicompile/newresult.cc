#include "multicompile.ih"

    // by 

bool MultiCompile::newResult(Result &result)
{
    if (q_results.empty())
        return false;
    
    result = q_results.popFront().value().get();
    return true;
}
