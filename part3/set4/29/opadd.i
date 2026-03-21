                                        // The contents of this file serve
                                        // only to test the Plus functor

template <typename LHS, typename RHS, template <class, class> class Operator>
struct Expr                             // struct to test our Plus op
{
    LHS lhs;                            // operands
    RHS rhs;
    
    auto operator()() const;
};


template <typename LHS, typename RHS, template <class, class> class Operator> 
inline auto Expr<LHS, RHS, Operator>::operator()() const 
{ 
    return Operator<LHS, RHS>{}(lhs, rhs); 
};


template <typename LHS, typename RHS>
auto operator+(LHS const &lhs, RHS const &rhs)
{
    return Expr<LHS, RHS, Plus> { lhs, rhs };
};                                      // Calls the function object
                                        
                                        // We used class rather than typename
                                        // to make it fit on one line
