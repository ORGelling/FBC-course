#include "main.ih"

int main()
{
    // get work
    // wait workers
    // push work
    // notify job
}

// worker:
//      job wait
//      get work
//      notify workers
//      complete work
//      wait admin
//      push paperwork
//      notify done
//  
//  needs mutex and queue
//      
//  administrator:
//      wait done
//      get paperwork
//      notify admin
//      process paperwork
//  
//  needs queue
