#include "main.ih"

int main(int const argc, char const *argv[])
{
    if (argc == 1)
    {
        usage();
        return 0;
    }
    
    bool check = structCall(argc, argv);
    if (!check)                         // can just do if (!structCall)?
        return 0;
    
    boundCall(argc, argv);
    
}
