#include "multicompile.ih"

    // by 

void MultiCompile::newTask(string const &file)
{
    CompileTask task{ file, PackagedTask(compile) };
    
    
}
