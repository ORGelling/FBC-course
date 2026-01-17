#include "storage.ih"

    // by 

optional<string> Storage::popFront()
{
    lock_guard<mutex> _{ d_qMutex };
    
    optional<string> opt;                       // starts empty
    
    if (not d_queue.empty())
    {
        opt = move(d_queue.front());
        d_queue.pop();
    }
    
    return opt;
}

/*
bool Storage::popFront(string &front)
{
    lock_guard<mutex> _{ d_qMutex };
    
    if (d_queue.empty())
        return false;
                                
    front = move(d_queue.front());              // We move to optimise a tad
    d_queue.pop();                              // since no RVO happens now
                                  
    return true;
}


//  For the sake of exercise 55 we need this action to also be atomic with
//  empty(), lest there be a gap between empty and popfront when processing
//  lines in processLine(). As such we have paired them all together.
//  
//  It seems optional values are an option (ha) here, but I do not think those
//  are part of the materials yet. They can be found in chapter 18.11, but I
//  think the GA and Container topics skipped that one.

*/
