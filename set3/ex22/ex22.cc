#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <utility>
#include "ferry_eyes.h"

void seedRng(int argc, char* argv[])
{
    if (argc >= 3)
        std::srand(std::atoi(argv[2]));
    else
        std::srand(static_cast<unsigned>(std::time(nullptr)));
}

std::vector<int> makeIds(int n)
{
    std::vector<int> ids(n);
    for (int i = 0; i < n; ++i)
        ids[i] = i + 1;
    return ids;
}

void shuffleIds(std::vector<int>& ids)
{
    for (int i = static_cast<int>(ids.size()) - 1; i > 0; --i)
    {
        int j = std::rand() % (i + 1);
        std::swap(ids[i], ids[j]);
    }
}

int pickNumBrown(int n)
{
    return std::rand() % (n + 1);
}

void printQueue(const std::vector<int>& ids, int numBrown)
{
    for (int pos = 0; pos < static_cast<int>(ids.size()); ++pos)
    {
        bool isBrown = (pos < numBrown);
        std::cout << (pos + 1) << ": " << (isBrown ? "brown" : "blue")
                  << " (" << ids[pos] << ")\n";
    }
}

int main(int argc, char* argv[])
{
    if (argc < 2)
    {
        std::cout << "Usage: " << argv[0] << " <num_subjects> [seed]\n";
        return 1;
    }

    int N = std::atoi(argv[1]);
    if (N <= 0)
    {
        std::cout << "Number of subjects must be positive.\n";
        return 1;
    }

    seedRng(argc, argv);

    std::vector<int> ids = makeIds(N);
    shuffleIds(ids);

    int numBrown = pickNumBrown(N);

    printQueue(ids, numBrown);
    return 0;
}

