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
