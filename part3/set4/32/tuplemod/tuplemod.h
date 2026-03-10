#ifndef INCLUDED_TUPLEMOD_
#define INCLUDED_TUPLEMOD_

#include <tuple>
#include <utility>


template <int nr>
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

#include "add_impl1.i"
#include "add_impl2.i"

#include "opadd_impl1.i"
#include "opadd_impl2.i"

#include "tuplemod1.i"
#include "add.i"
#include "opadd.i"

#endif
