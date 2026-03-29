#include "input.ih"

    // by 

inline size_t ScannerBase::Input::lineNr() const
{
    return d_lineNr;
}

inline size_t ScannerBase::Input::nPending() const
{
    return d_deque.size();
}

inline void ScannerBase::Input::setPending(size_t size)
{
    d_deque.erase(d_deque.begin(), d_deque.end() - size);
}

inline void ScannerBase::Input::close()
{
    delete d_in;
    d_in = 0;                   // switchStreams also closes
}

inline size_t ScannerBase::Input::offset() const
{
    return d_offsets[d_lineNr - 1];
}
