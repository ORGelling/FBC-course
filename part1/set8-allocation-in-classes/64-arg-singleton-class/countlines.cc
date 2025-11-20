#include "main.ih"

int countlines(fstream &file)
{
    int lines = 0;
    string temp;
    while (getline(file, temp))
        ++lines;
    return lines;
}                       // well it counts the lines in a file!
