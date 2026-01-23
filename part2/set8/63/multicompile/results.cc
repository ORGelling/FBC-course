#include "multicompile.ih"

    // by 

void MultiCompile::results()
{
    Result result;
    
    while (newResult(result))
    {
        if (not result.success)
        {
            cout << "Error when compiling: " << result.sourceFile << ":\n";
            ifstream error(result.errFile);
            if (not error.is_open())
                throw runtime_error{ "Results: Could not read error file" };
            
            cout << error.rdbuf() << '\n';
            
        }
        error_code ec;
        fs::remove(result.errFile, ec);
    }
}
