#include "main.ih"

namespace {
    
    void parseLines(istream &in, Storage &queue)
    {
        size_t lineCount = 0;
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
        size_t totalCounts = 0;
        for (Client const &client : clients) 
        {
            totalCounts += client.count();
            cout << "Written " << client.count() << " lines to " 
                                                    << client.name() << '\n';
        }
        cout << "Total lines read: " << totalCounts << '\n';
    }
    
}

int main(int argc, char **argv)
{
    Storage queue;
    vector<Client> clients;
    
    size_t argc_t = argc;
    for (size_t idx = 1; idx != argc_t; ++idx)
        clients.emplace_back(argv[idx]);
    
    for (Client &client : clients)
        client.start(queue);
    
    parseLines(cin, queue);
    
    for (Client &client : clients)
        client.join();
    
    finalOutput(clients);
}
