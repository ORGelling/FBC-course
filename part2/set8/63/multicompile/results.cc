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
    
    void showSuccess(Result &result)
    {
        if (result.success)
            cout << "Compiled " << result.sourceFile << '\n';
    }
    
}

void MultiCompile::results()
{
    Result result;
    
    bool foundError = false;
    error_code ec;                      // placing here to avoid repeat init
    
    while (newResult(result))
    {
        if (not result.success and not foundError)
        {                               // this makes sure only the first 
            foundError = true;          // error encountered is shown.
            showError(result);          // Chance is small, but if concurrent
        }                               // threads have an error compiling we
                                        // only want to show the first one
        showSuccess(result);
                                            // easiest way to remove all the
        fs::remove(result.errFile, ec);     // temporary error files is here
    }                                       // but yes, MLR. Should be ok
}                                           // without a refactor I think
