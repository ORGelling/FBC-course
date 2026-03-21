template <typename Type>
concept Add = 
    requires(Type lhs, Type rhs)
    {
        lhs + rhs;
        rhs + lhs;
        lhs - rhs;
        rhs - lhs;
    };

template <typename Type>
concept Mul = 
    requires(Type lhs, Type rhs)
    {
        lhs * rhs;
        rhs * lhs;
        lhs / rhs;
        rhs / lhs;
    };

template <typename Type>
concept AddMul = Add<Type> || Mul<Type>;

template <typename Type>
concept AddOrMul = (Add<Type> && !Mul<Type>) || (!Add<Type> && Mul<Type>);
