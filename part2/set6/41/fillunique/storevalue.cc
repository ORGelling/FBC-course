#include "fillunique.ih"

    // by 

void FillUnique::storeValue(vector<size_t> &rVec)
{
    while (true)
    {
        size_t rNum = d_rng();
        if (find(rVec.begin(), rVec.end(), rNum) == rVec.end())
        {
            rVec.push_back(rNum);
            break;
        }
    }
}
