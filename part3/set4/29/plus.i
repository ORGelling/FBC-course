template <typename LHS, typename RHS>
struct Plus
{
    auto operator()(LHS const &lhs, RHS const &rhs) const
    {
        return lhs + rhs;
    }
};
