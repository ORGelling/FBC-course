#include "multicompile.ih"

    // by 

void MultiCompile::run()
{
    prep();                             // create necessary directories
    
    workforce();
    
    jobs();                             // finds all the work to do
    
    for (thread &thr : v_threads)
        thr.join();
    
    results();                          // show results and removes errfiles
    
    cleanup();                          // removes tmpDir if needed
}
