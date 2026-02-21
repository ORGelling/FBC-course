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

void setVerbose(std::ostream &out);
OptInsert &verbose();

#include "template.i"

#endif
