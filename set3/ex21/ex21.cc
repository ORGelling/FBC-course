#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <algorithm>

#if defined(_WIN32)
extern "C" { extern char **_environ; }
#define environ _environ
#else
extern "C" { extern char **environ; }
#endif

bool ci_less(const std::string& a, const std::string& b)
{
    size_t i = 0, j = 0;
    while (i < a.size() && j < b.size())
    {
        unsigned char ca = static_cast<unsigned char>(a[i]);
        unsigned char cb = static_cast<unsigned char>(b[j]);
        int la = std::tolower(ca);
        int lb = std::tolower(cb);
        if (la < lb) return true;
        if (la > lb) return false;
        ++i; ++j;
    }
    return a.size() < b.size();
}

size_t partition(std::vector<std::string>& arr, size_t left, size_t right)
{
    const std::string pivot = arr[left];   
    size_t i = left;                       
    for (size_t j = left + 1; j < right; ++j)
    {
        if (ci_less(arr[j], pivot))
        {
            ++i;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[left], arr[i]);         
    return i;                           
}

void quicksort(std::vector<std::string>& arr, size_t left, size_t right)
{
    if (right - left <= 1) return;         
    size_t p = partition(arr, left, right);
    quicksort(arr, left, p);               
    quicksort(arr, p + 1, right);         
}

int main()
{
    std::vector<std::string> envs;
    for (char **e = environ; *e != nullptr; ++e)
        envs.emplace_back(*e);

    quicksort(envs, 0, envs.size());

    for (const auto& s : envs)
        std::cout << s << '\n';
    return 0;
}

