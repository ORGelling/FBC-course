#include "multicompile.ih"

    // by 

MultiCompile::~MultiCompile()
{
    Result result;                      // in case of exceptions we remove
    error_code ec;                      // any error files left in the queue 
    while (newResult(result))
        fs::remove(result.errFile, ec);
    
    cleanup();                          // this is called twice for normal
}                                       // runs. Shouldn't be an issue
