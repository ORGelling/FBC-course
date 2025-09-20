#include "main.ih"

namespace {
char const usageMessage[] = 
R"(Welcome to this puzzle solver!

This program can solve the puzzle from exercise 22

People have either blue or brown eyes, and have to form a queue that has all
brown-eyed people in the front, and all blue-eyed people in the back.

Execute this program by adding at least a queuesize value to the command line
input. A random number seed and an eye colour chance selector can also be
added if so desired.

Happy puzzling!
)";
}

void usage()
{
    cout << usageMessage;
}
