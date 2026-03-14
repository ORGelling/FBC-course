#include <concepts>
#include <compare>

template <typename LHS, typename RHS>
concept CanOrder =
    requires(LHS lhs, RHS rhs)
    {
        { lhs <=> rhs } -> std::same_as<std::strong_ordering>;
        { rhs <=> lhs } -> std::same_as<std::strong_ordering>;
    };
