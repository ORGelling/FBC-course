#include "main.ih"

int main(int const argc, char const *argv[])
{
    if (argc == 1)
    {
        usage();                            // Correct use validation
        return 0;
    }
    
    if (!structCall(argc, argv))            // return 0 for false, else
        return 0;                           // boundCall will break
    
    boundCall(argc, argv);
}
