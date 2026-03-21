template <typename LHS, typename RHS>
struct Plus                             // Addition operation functor
{
    auto operator()(LHS const &lhs, RHS const &rhs) const
    {
        return lhs + rhs;
    }                                   // function call op executes addition
};
