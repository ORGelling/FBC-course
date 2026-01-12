// ES: ?
#include "main.ih"

int main()
{
    vector<size_t> vs{ 1, 2, 2, 3, 4, 4, 4, 5, 5, 5, 5, 8, 8, 8 };
    for (size_t idx = 0; idx != 1000000; ++idx)
        multiples(vs);
}
