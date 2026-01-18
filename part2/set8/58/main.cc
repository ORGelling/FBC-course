#include "main.ih"


namespace {
    
    
    double innerProduct(double const *lhs, double const *rhs, size_t size)
    {
        return inner_product(lhs, lhs + size, rhs, 0.0);
    }                           // wrapper since inner_product is a template
    
    
    void showMatrix(double const (*matrix)[6], size_t const lhSize, 
                                                        size_t const rhSize)
    {
        for (size_t idxI = 0; idxI != lhSize; ++idxI)
        {
            for (size_t idxJ = 0; idxJ != rhSize; ++idxJ)
                cout << matrix[idxI][idxJ] << ' ';
            cout << '\n';           
        }                                   // simple output refactor
    }
    
    
    void multiplyMatrices(
        double const (*lhs)[5], 
        double const (*rhs)[5],
        future<double> fut[][6]
    )
    {
        for (size_t idxI = 0; idxI != 4; ++idxI)
        {
            for (size_t idxJ = 0; idxJ != 6; ++idxJ)
            {
                Task task{ innerProduct };
                fut[idxI][idxJ] = task.get_future();
                thread(move(task), &lhs[idxI][0], &rhs[idxJ][0], 5).detach();
            }
        }
    }
    
    
}   // namespace


int main()
{
    double lhs[4][5];
    double rhs[6][5];                           // already transposed
    
    future<double> fut[4][6];                   // handling results
    double results[4][6];
    
    iota(&lhs[0][0], &lhs[3][4] + 1, 3.14);     // fill with values using
    iota(&rhs[0][0], &rhs[5][4] + 1, 4.2);      // sequential memory layout
    
    
    multiplyMatrices(lhs, rhs, fut);
    
    
    for (size_t idxI = 0; idxI != 4; ++idxI)    // collect futures
    {
        for (size_t idxJ = 0; idxJ != 6; ++idxJ)
            results[idxI][idxJ] = fut[idxI][idxJ].get();
    }                               // considering refactor, but seems ok?
    
    showMatrix(results, 4, 6);
}
