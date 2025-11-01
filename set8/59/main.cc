#include "main.ih"

extern char **environ;

int main(int argc, char **argv)
{
    size_t iterations = 0;
    bool copy = true;
    
    if (argc != 1)
        iterations = stoull(argv[1]);
    if (argc == 3)
        copy = false;
    
    Strings stringsCin{ cin };
    Strings stringsArgs{ argc, argv };
    Strings stringsEnvs{ environ };
    
    Strings stringsEnv{ iterations, copy };
    
    stringsCin.display();
    stringsArgs.display();
    //stringsEnv.display();
}
