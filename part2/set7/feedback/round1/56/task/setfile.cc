#include "task.ih"

    // by 

void Task::setFile(char const *filename)
{                                       // for TaskThreads ctor to open
    d_file.open(filename);              // stream to file we're reading
    if (not d_file.is_open())               
        throw runtime_error("Could not open file "s + filename);
}
