#include "main.ih"

namespace {
    
    void parseLines(istream &in, Storage &queue)
    {
        string line;
        while (getline(in, line))
            queue.push(line);
        
        queue.setFinished();
    }
    
    void writeLines(Storage &queue, string const &fileName)
    {
        ofstream out(fileName);
        if (not out.is_open())
            throw "Could not open file."s;
        
        while (not queue.done())
        {
            if (not queue.empty())
            {
                out << queue.front() << endl;
                queue.pop();
            }
            
            this_thread::sleep_for(chrono::seconds(1));
        }
    }
    
}

int main(int argc, char **argv)
try
{
    if (argc != 2)
        throw "Please provide target file."s;
    
    string fileName = argv[1];
    Storage queue;
    
    thread writeThread(writeLines, ref(queue), ref(fileName));
    parseLines(cin, queue);
    
    writeThread.join();
}
catch (string const &errStr)
{
    cerr << "Main: " << errStr << '\n';
    return 1;
}
