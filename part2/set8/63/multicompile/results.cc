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
    
    void showSuccess(Result &result, bool foundError)
    {
        if (result.success and not foundError)
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
        
        showSuccess(result, foundError);    // This might not be necessary
                                            // but it isn't much of an issue
                                            // and some feedback is useful.
                                            // Can simply be removed to only
                                            // show output of error if found
        
                                            // easiest way to remove all the
        fs::remove(result.errFile, ec);     // temporary error files is here
    }                                       // but yes, MLR. Should be ok
}                                           // without a refactor I think
