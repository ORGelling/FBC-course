#include "task.ih"

    // by 

void Task::operator()()                 // run counter with already stored
{                                       // params on stream opened by setFile
    d_count = count_if(
        istreambuf_iterator<char>(d_file), 
        istreambuf_iterator<char>(), 
        [&](int const ch)
        {
            return (*d_pred)(ch);
        }
    );
}
