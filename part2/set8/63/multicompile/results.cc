#include "multicompile.ih"

    // by 

namespace {
    
    void showError(Result &result)
    {
            cout << "Error when compiling: " << result.sourceFile << ":\n";
            
            ifstream error(result.errFile);
            if (not error.is_open())
                throw runtime_error{ "Results: Could not read error file" };
            
            cout << error.rdbuf() << '\n';
    }
    
}

void MultiCompile::results()
{
    Result result;
    
    while (newResult(result))
    {
        if (not result.success)
            showError(result);
        
        error_code ec;                      // easiest way to remove all the
        fs::remove(result.errFile, ec);     // temporary error files is here
    }                                       // but yes, MLR
}
