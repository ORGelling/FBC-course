#include "taskthreads.ih"

    // by 

void TaskThreads::show() const
{
    cout << "Counted:\n";
    for_each(begin(d_tasks), end(d_tasks),
        [&](Task const &tsk)
        {
            cout << tsk.count() << " " << tsk.type() << '\n';
        }
    );
    cout << "in file: " << d_filename << '\n';
}
