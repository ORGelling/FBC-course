template <typename Derived>
template <auto Func, typename ...Args>
decltype(auto) Base<Derived>::nc(Args &&...args)
{
    return (static_cast<Derived const *>(this)->*Func)(
                                                std::forward<Args>(args)...);
}
