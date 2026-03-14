template <typename LHS, typename RHS>
concept BasicMath = 
    requires(LHS lhs, RHS rhs)
    {
        lhs + rhs;
        rhs + lhs;
        lhs - rhs;
        rhs - lhs;
        lhs * rhs;
        rhs * lhs;
        lhs / rhs;
        rhs / lhs;
        - lhs;
        - rhs;
    };

template <typename LHS, typename RHS> requires BasicMath<LHS, RHS>
auto math(LHS lhs, RHS rhs)
{
    return lhs + rhs;
}
