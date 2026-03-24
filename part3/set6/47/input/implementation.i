    // Input implementations (non-inline)

ScannerBase::Input::Input()
:
    d_in(0),
    d_lineNr(1), 
    d_offsets{0}                     // push 0 for starting line
{}

ScannerBase::Input::Input(std::istream *in, size_t lineNr)
: 
    d_in(in), 
    d_lineNr(lineNr), 
    d_offsets{static_cast<size_t>(d_in->tellg())}
{}

size_t ScannerBase::Input::get()
{
    switch(size_t ch = next())
    {
        case '\n':
            ++d_lineNr;
            d_offsets.push_back(d_in->tellg());
        [[fallthrough]];
        
        default:
        return ch;
    }
}

void ScannerBase::Input::reRead(size_t ch)
{
    if (ch < 0x100)
    {
        if (ch == '\n')
        {
            --d_lineNr;
            d_offsets.pop_back();
        }
        d_deque.push_front(ch);
    }
}

void ScannerBase::Input::reRead(std::string const &str, size_t fmIdx)
{
    for (size_t idx = str.size(); idx-- > fmIdx;)
        reRead(str[idx]);
}

size_t ScannerBase::Input::next()
{
    size_t ch;

    if (d_deque.empty())                // deque empty: next char fm d_in
    {
        if (d_in == 0)
            return AT_EOF;
        ch = d_in->get();
        return *d_in ? ch : static_cast<size_t>(AT_EOF);
    }

    ch = d_deque.front();
    d_deque.pop_front();

    return ch;
}
