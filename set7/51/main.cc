#include "main.ih"

int main(int argc, char *argv[])
{
    if (argc == 1)                      // verify input
        return 1;
    
    if (convert(argv[1]) == 1)          //  verifies file and corrects UC
        cerr << "failed to convert\n";
}
