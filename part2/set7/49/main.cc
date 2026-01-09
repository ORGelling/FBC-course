#include "main.ih"

namespace {
    
    bool isPrime(size_t check, vector<size_t> const &primes)
    {
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
    
    void show(system_clock::time_point const &start, 
              system_clock::time_point const &end, 
              size_t max)
    {
        auto localStart = zoned_time{ current_zone(), start };
        auto localEnd = zoned_time{ current_zone(), end };
        auto elapsed = duration_cast<seconds>(
                localEnd.get_local_time() - localStart.get_local_time()
            ).count();
        
        cout << "\n\nStarting time: " << format("{:%c}", localStart) << '\n'
         << "Ending time:   " << format("{:%c}", localEnd) << '\n'
         << "Computation of " << max << " primes took " 
                << elapsed << " seconds\n";
    }
    
}

int main(int argc, char **argv)
try
{
    size_t maxPrimes = stoul(argv[1]);      // already checks input
    
    vector<size_t> primes{ 2 };
    atomic<bool> running = true;
    
    //         //         //         //         //         //         //
    time_point start = system_clock::now();     // the core process
//                                                                          //
    thread eratosthenes(findPrimes, maxPrimes, ref(primes), ref(running));
    thread progress(showProgress, ref(running));
//                                              // refactor these 4?        //
    eratosthenes.join();                        // seems odd
    progress.join();
//                                                                          //
    time_point end = system_clock::now();       // prime finding done
    //         //         //         //         //         //         //
    
    copy(primes.begin(), primes.end(), ostream_iterator<size_t>(cout, " "));
    
    show(start, end, maxPrimes);
}
catch (...)
{
    cerr << "Error parsing input\n";        // probably anyways
    return 1;
}
