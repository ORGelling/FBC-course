#include "indent.ih"

size_t const &indent_status::get_step_size(size_t const setSize)
{
    static size_t const stepSize = setSize;
    
    return stepSize;
}
