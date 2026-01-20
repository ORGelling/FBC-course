#include "main.ih"

namespace {
    
    void parseLines(istream &in, Storage &queue)
    {
        string line;
        while (getline(in, line))
            queue.push(line);
        
        queue.setFinished();            // signal all lines parsed
    }
    
    void writeLines(Storage &queue, string const &fileName)
    {
        ofstream out(fileName);
        if (not out.is_open())
            throw "Could not open file."s;
        
        while (not queue.done())        // write until finished and empty
        {
            if (not queue.empty())
            {
                out << queue.front() << endl;       // endl to flush stream
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
                                    // we start the writing thread
    thread writeThread(writeLines, ref(queue), ref(fileName));
    parseLines(cin, queue);         // and then we parse the lines from cin
    
    writeThread.join();
}
catch (string const &errStr)
{
    cerr << "Main: " << errStr << '\n';
    return 1;
}
