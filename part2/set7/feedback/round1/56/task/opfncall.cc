#include "task.ih"

    // by 

void Task::operator()()                     // count operation params already
{                                           // set inside object members
    d_count = count_if(
        istreambuf_iterator<char>(d_file),  // streambuf_iterator to iterate
        istreambuf_iterator<char>(),        // over every single character
        [&](int const ch)
        {
            return (*d_pred)(ch);           // d_predicate is given at ction
        }
    );
}
