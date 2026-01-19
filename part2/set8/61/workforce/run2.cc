#include "workforce.ih"

    // by 

void WorkForce::run(istream &in, ostream &out)
{
    thread administrator{ &WorkForce::admin, this, ref(out) };
    thread worker1{ &WorkForce::worker, this };     // wakin up workforce for
    thread worker2{ &WorkForce::worker, this };     // a hard day-a-workin!
    
    getWork(in);

    for (size_t idx = 0; idx != 2; ++idx)   // final notice to workers. They
        s_workToDo.notify_all();            // check pending work to do, see
                                            // that queue is empty, and exit
    worker1.join();
    worker2.join();                         // the boys can go home!

    s_paperworkToDo.notify();               // admin told to check and see
    administrator.join();                   // the empty queue too
}
