#ifndef INCLUDED_TRAITS_
#define INCLUDED_TRAITS_


template <typename Type>
struct TypeTraits
{
    using full_type = Type;                 // probably not needed but eh
    using base_type = Type;
    enum
    {
        typeCode = 1,
        isPointer = false
    };
};

template <typename Type>
struct TypeTraits<Type *>
{
    using full_type = Type *;
    using base_type = Type;
    enum
    {
        typeCode = 2,
        isPointer = true
    };
};

template <typename Type>
struct TypeTraits<Type &>
{
    using full_type = Type &;
    using base_type = Type;
    enum
    {
        typeCode = 3,
        isPointer = false
    };
};

template <typename Type>
struct TypeTraits<Type &&>
{
    using full_type = Type &&;
    using base_type = Type;
    enum
    {
        typeCode = 4,
        isPointer = false
    };
};

template <typename Type>
class Traits
{
    public:
        using PlainType = TypeTraits<Type>::base_type;
        using PtrType = PlainType *;
        using ConstPtrType = PlainType const *;
        
        enum
        {
            value = TypeTraits<Type>::typeCode,
            isPtr = TypeTraits<Type>::isPointer
        };
};

//:

template <typename Type>
typename Traits<Type>::ConstPtrType make_const_ptr(Type value)
{
    return 0;
}


#endif
