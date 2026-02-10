//JB: 1
//JB: Some comments anyway.
#include "main.ih"

namespace {

    //JB: Could be constexpr?
    bool isPrime(size_t check, vector<size_t> const &primes)
    {
        //JB: A GA, good.
        //JB: I think I'd even name a function 'divisible'...
        //JB: ... and make it both inline (remember the app discussion) and
        //JB: constexpr.
        return not any_of(primes.begin(), primes.end(), 
            [check](size_t divisor)
            {
                return check % divisor == 0;
            }
        );
    }
    
    void findPrimes(size_t maxPrimes, vector<size_t> &primes, 
                                                    atomic<bool> &running)
    {
        size_t next = 3;
        while (primes.size() < maxPrimes)
        {
            if (isPrime(next, primes))
                primes.push_back(next);
            
            ++next;
        }
        
        running = false;
    }
    
    void showProgress(atomic<bool> &running)
    {
        while (running)
        {
            cerr << '.';
            this_thread::sleep_for(chrono::seconds(1));
        }
        cerr << '\n';
    }
    
    void show
    (
        //JB: This is ok, but you might notice that sizeof(time_point) is 8.
        //JB: That means it's probably passed faster by value than by
        //JB: reference.
        system_clock::time_point const &start, 
        system_clock::time_point const &end, 
        size_t max
    )
    {
        //JB: COCO. 'auto' deduces the type, but not constness, and even if it
        //JB: did, zoned_time would not add it.
        auto localStart = zoned_time{ current_zone(), start };
        auto localEnd = zoned_time{ current_zone(), end };
        auto elapsed = duration_cast<seconds>(
                localEnd.get_local_time() - localStart.get_local_time()
            ).count();
        
        cout << "\n\nStarting time: " << format("{:%c}", localStart)
         << "\nEnding time:   " << format("{:%c}", localEnd)
         << "\nComputation of " << max << " primes took " 
                << elapsed << " seconds\n";
    }
    
}

int main(int argc, char **argv)
try
{
    size_t maxPrimes = stoul(argv[1]);      // already checks input
    vector<size_t> primes{ 2 };
    atomic<bool> running = true;
    
    
    time_point start = system_clock::now();     // the core process

    //JB: Good naming :-)
    thread eratosthenes(findPrimes, maxPrimes, ref(primes), ref(running));
    thread progress(showProgress, ref(running));

    //JB: You could argue that doing nothing in the current thread is a waste.
    //JB: Then again you could argue that threads are cheap and calling join()
    //JB: puts the main thread in wait anyway, so making the code clearer
    //JB: is the more important objective.
    
                                                // refactor these 4?
    eratosthenes.join();                        // seems unnecessary
    progress.join();                            
    
    time_point end = system_clock::now();       // prime finding done
    
    
    copy(primes.begin(), primes.end(), ostream_iterator<size_t>(cout, " "));
    show(start, end, maxPrimes);
}
catch (...)
{
    cerr << "Error parsing input\n";        // probably anyways
    return 1;
}
