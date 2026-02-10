#include "storage.ih"

    // by 
                                                // "Pass by value and move":
void Storage::push(string line)                 // compiler should optimise
{                                               // this when possible
    lock_guard<mutex> _{ d_qMutex };            // lvalue: copy and move
    d_queue.push(move(line));                   // rvalue: just move
}
/* JB:
 * This makes sense. A copy has to be made anyway, possibly (likely) involving
 * allocation. By moving that operation to the argument of Storage::push, it
 * doesn't have to be done under the lock, keeping the queue available to
 * other threads for more of the time. Plus you avoid exceptions in
 * sensitive spots. Good design.
 * You could even make it move-aware.
 */
