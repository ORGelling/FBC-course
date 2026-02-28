// template.i included inside exception.h
// include guards already provided by calling file

template <typename Tp>
Exception &&operator<<(Exception &&in, Tp const &value)
{
    std::ostringstream oss{};
    oss << value;
    in.d_what += oss.str();
    return std::move(in);
}
