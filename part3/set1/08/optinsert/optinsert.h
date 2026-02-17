#ifndef INCLUDED_OPTINSERT_
#define INCLUDED_OPTINSERT_

#include <ostream>

class OptInsert
{
    friend void setVerbose(std::ostream &out);
    
    template <typename Tp>
    friend OptInsert &operator<<(OptInsert &out, Tp const &arg);

    bool d_insert;
    std::ostream d_out;

    public:
        OptInsert();

    private:
        void rdbuf(std::streambuf *buffer);
};

template <typename Tp>
OptInsert &operator<<(OptInsert &out, Tp const &arg)
{
    if (out.d_insert)
        out.d_out << arg;
    return out;
}

void setVerbose(std::ostream &out);
OptInsert &verbose();

#endif
