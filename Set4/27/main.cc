#include "main.ih"

int main(int argc, char *argv[])
{
    size_t arraySize = (argc == 2 ? stoul(argv[1]) : 5);
    
    Person personArray[arraySize];
    
    readIntoPerson(personArray, arraySize);
    
    writeFromPerson(personArray, arraySize);
}
