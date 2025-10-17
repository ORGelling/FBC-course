#include "main.ih"

int main(int argc, char *argv[])
{
    if (argc == 1)              // verify input
        return 1;
    
    convert(argv[1]);           //  verifies file and corrects UC
}
