#include "storage.ih"

    // by 
                                                // "Pass by value and move":
void Storage::push(string line)                 // compiler should optimise
{                                               // this when possible
    lock_guard<mutex> _{ d_qMutex };            // lvalue: copy and move
    d_queue.push(move(line));                   // rvalue: just move
}
