#ifndef INCLUDED_TUPLEMOD_
#define INCLUDED_TUPLEMOD_

#include <tuple>
#include <utility>


template <int nr>                           // (op)add recursion index
struct Nr
{};


template <typename Tuple>
class TupleMod
{
    Tuple const &d_tuple;       // the available tuple

    public:
        TupleMod(Tuple const &tuple);

        template <typename ...AddParams>    // returns new tuple to which
        auto add(AddParams &&...addParams); // AddParams elements 
};                                          // were added


template <typename ...Lhs, typename ...Rhs>
auto operator+(std::tuple<Lhs ...> const &lhs, 
               std::tuple<Rhs ...> const &rhs);


#include "tuplemod1.i"
#include "add.i"

#include "opadd1.i"

#endif
