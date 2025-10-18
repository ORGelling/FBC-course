#include "main.ih"

int main(int argc, char *argv[])
{
    if (argc == 1)
        return 1;
    
    Fch file{ argv[1] };
    return file.run();
}
