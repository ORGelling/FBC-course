template <typename LHS, typename RHS, 
                                template <typename, typename> class Operator>
struct Expr
{
    LHS lhs;
    RHS rhs;
    
    auto operator()() const { return Operator<LHS, RHS>{}(lhs, rhs); }
};

template <typename LHS, typename RHS>
auto operator+(LHS const &lhs, RHS const &rhs)
{
    return Expr<LHS, RHS, Plus> { lhs, rhs };
};
