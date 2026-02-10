//JB: 1
#include "main.ih"

namespace {
    
    void parseLines(istream &in, Storage &queue)
    {
        size_t lineCount = 0;               // bookkeeping: The reference
        string line;
        while (getline(in, line))
        {
            queue.push(line);
            ++lineCount;
        }
        cout << "File has " << lineCount << " lines\n";
        queue.setFinished();
    }
    
    void finalOutput(vector<Client> const &clients)
    {
        size_t totalCounts = 0;                 // bookkeeping: Checks if
        for (Client const &client : clients)    // threads are duping lines
        {
            totalCounts += client.count();
            cout << "Written " << client.count() << " lines to " 
                                                    << client.name() << '\n';
        }
        cout << "Total lines read: " << totalCounts << '\n';
    }
    
}   // namespace

int main(int argc, char **argv)     // Wrapping the threads inside the CLient
{                                   // objects makes this look *very* tidy!
    Storage queue;
    vector<Client> clients;
    
    size_t argc_t = argc;
    for (size_t idx = 1; idx != argc_t; ++idx)
        clients.emplace_back(argv[idx]);
    
    for (Client &client : clients)
        client.start(queue);
    
    parseLines(cin, queue);
    
    for (Client &client : clients)  // Could go for jthreads instead, but
        client.join();              // joining here is needed for output
    //JB: Why not make Client's destructor join them?
    
    finalOutput(clients);
}
//JB: No catch?

/* JB:
 * Your approach differs a bit from ours, but it has only one vector, of
 * Clients, which I find nice.
 */
