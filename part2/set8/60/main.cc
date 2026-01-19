#include <future>
#include <chrono>
#include <iostream>
#include <string>

using namespace std;
using namespace chrono;

namespace {
    
    string threadFun()
    {
        cerr << "entry\n";
    
        this_thread::sleep_for(seconds(5));
        cerr << "first cerr\n";
    
        this_thread::sleep_for(seconds(5));
        cerr << "second cerr\n";
    
        return "end the program";
    }
    
}   // namespace

int main()
{
    future<string> futureString = async(launch::async, threadFun);
    
    size_t count = 0;               // we can either inspect the future here
    while (futureString.wait_for(seconds(0)) == future_status::timeout)
    {
        this_thread::sleep_for(seconds(1));
        cerr << "inspecting: " << ++count << '\n';
        
    //  if (futureString.wait_for(seconds(0)) == future_status::ready)
    //      break;                  // or do so in a dedicated breaking clause
    }
    cerr << "done\n";
}
