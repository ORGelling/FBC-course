#include "../33/math/basicmath.i"
#include <iostream>

                                                    // Add
template <typename LHS, typename RHS>
struct Add
{
    static void operate(LHS lhs, RHS rhs)
    {
        std::cout << (lhs + rhs) << ' ';
    }
};

                                                    // Sub
template <typename LHS, typename RHS>
struct Sub
{
    static void operate(LHS lhs, RHS rhs)
    {
        std::cout << (lhs - rhs) << ' ';
    }
};

                                                    // Mul
template <typename LHS, typename RHS>
struct Mul
{
    static void operate(LHS lhs, RHS rhs)
    {
        std::cout << (lhs * rhs) << ' ';
    }
};

template <template <typename, typename> class Operator, 
        typename LHS, typename ...Rest> 
    requires(BasicMath<LHS, Rest> && ...)   // fold expr to check all args
void math(LHS const &lhs, Rest const &...rest)
{
     ((Operator<LHS, Rest>::operate(lhs, rest)), ...);
}                                           // we use folding here to cycle
                                            // through all the arguments
                                            // and above in the requirement 
                                            // to test each combination
