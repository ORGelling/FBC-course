// template for OptInsert insertion operator
// included in optinsert.h

template <typename Tp>
OptInsert &operator<<(OptInsert &out, Tp const &arg)
{
    if (out.d_insert)
        out.d_out << arg;
    return out;
}
