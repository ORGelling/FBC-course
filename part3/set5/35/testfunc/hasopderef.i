template <typename Type>
concept HasOpDeref =
    requires(Type tp)
    {
        *tp;
    };
