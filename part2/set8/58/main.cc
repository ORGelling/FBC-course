#include "main.ih"

int main()
{
    // fill matrices with random values
    double lhs[4][5];
    double rhs[6][5];       // already transposed
    
    iota(&lhs[0][0], &lhs[3][4] + 1, 3.14);
    iota(&rhs[0][0], &rhs[5][4] + 1, 4.2);
    
//  copy(&lhs[0][0], &lhs[3][4] + 1, ostream_iterator<double>(cout, " "));
//  cout << '\n';
//  copy(&rhs[0][0], &rhs[5][4] + 1, ostream_iterator<double>(cout, " "));
//  cout << '\n';
    
    // take inner product of the rows.
    
}
