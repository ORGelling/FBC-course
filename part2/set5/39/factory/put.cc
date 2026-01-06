#include "factory.ih"

void Factory::put(Stack &to, Stack &from, size_t nCars)
{
    size_t count = 0;
    while (not from.empty() and count != nCars)
    {
        to.push(from.top());
        from.pop();
        ++count;
    }
}
