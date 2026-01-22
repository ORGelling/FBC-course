#include "multicompile.ih"

    // by 

void MultiCompile::run()
{
    // create necessary directories etc
    prep();
    
    // start workforce
    workforce();
    
    // get jobs and add them to the CompileQueue
    jobs();
    
    for (thread &thr : v_threads)
        thr.join;
    
    results();
    
    // cleanup (remove tmpdir)
    cleanup();
}
