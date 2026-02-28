#include "demo.ih"

Demo::Demo()
{
    static size_t count = 0;
    d_name = to_string(count++);
}
