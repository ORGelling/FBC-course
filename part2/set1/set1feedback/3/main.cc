// ES: 1
#include "main.ih"

int main(int argc, char **argv)
{
    // check inputs
    if (argc < 3)
        cerr << "not enough arguments\n";
    
    // use argv[1] as source and argv[2] as dest
    fs::copy_file(argv[1], argv[2]);
    fs::last_write_time(argv[2], fs::last_write_time(argv[1]));
}
