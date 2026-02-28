#include "main.ih"

namespace {
    
    void show(vector<unordered_map<int, string>::const_iterator> const &itVec)
    {
        for (auto it : itVec)
            cout << (*it).first << ' ' << (*it).second << '\n';
    }
    
}

int main()
{
    unordered_map<int, string> values{{2, "beta"}, {1, "alpha"}, {3, "gamma"}};
    UnorderedSort<unordered_map<int, string>> sorter(values);
    
    auto const &sorted = sorter.sort(
        [](auto const &left, auto const &right)
        {
            return left->first < right->first;
        });
    
    show(sorted);
    
    show(
        sorter.sort(
            [](auto const &left, auto const &right)
            {
                return left->first > right->first;
            }
        )
    );
}
