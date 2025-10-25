#include "main.ih"

//extern char const **environ;

int main(int argc, char **argv)
{
    size_t iterations = 0;
    bool copy = true;
    
    if (argc != 1)
        iterations = stoull(argv[1]);
    if (argc == 3)
        copy = false;
    
    Strings stringsEnv{ iterations, copy };
    
    //stringsEnv.display();
}
