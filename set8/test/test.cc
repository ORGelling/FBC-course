#include <unistd.h>
#include <getopt.h>
#include <iostream>

using namespace std;

/*
struct fields field =
{
    char *title[];
    char *artist[];
    char *album[];
    int year;
    char *comment[];
    int track;
};
*/

static struct option long_options[] = 
{
    {"title", required_argument, NULL, 't'},
    {"artist", required_argument, NULL, 'a'},
    {NULL, 0, NULL, 0}
};

int main(int argc, char **argv)
{
    //for(;;)
    char ch = '\0';
    while((ch = getopt_long(argc, argv, "t:a:", long_options, NULL)) != -1)
    {
        //switch(getopt(argc, argv, "ab:h"))  
        switch(ch)
        {               //  colon (:) to indicate that 'b' has a parameter 
        case 'a':
            //field.title = optarg;
            cout << "artist: " << optarg << '\n';
        break;
            //cout << "switch 'a' specified\n";
        //continue;

        case 't':
            cout << "title: " << optarg << '\n';
            //field.artist = optarg;
        break;
        //case 'b':
            
            //cout << "parameter 'b' specified with the value " 
            //    << optarg << '\n';
        //continue;

        case '?':
        case 'h':
        default :
            cout << "Help/Usage Example\n";
        break;

        //case -1:
        //    break;
        }

        //break;
    }
}
