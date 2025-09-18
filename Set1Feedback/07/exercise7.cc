// ES: 1
#include <iostream>                     // importing relevant libraries
#include <string>

using namespace std;                    // namespace for ease

int main(int argc, char *argv[])        // using argc and *argv[] now
{
    cout << "hello " <<                 // we use insertion to avoid
    (                                   // concatenation issues
        argc == 1 ?                     // ternary check of argument count
        "world" :                       // set the second part of output
        (
            argc == 2 ?                 // second ternary check for 2 or more
            argv[1] :
            argv[stoul(argv[1])]        // cast argv[1] to usable index value
        )                               // then select that index from argv[]
    )
    << '\n';
}
