template <typename Derived>             // Base<Derived> template level
template <auto Func, typename ...Args>  // member function template types
decltype(auto) Base<Derived>::nc(Args &&...args)
{
    return (static_cast<Derived const *>(this)->*Func)(
                                                std::forward<Args>(args)...);
}
