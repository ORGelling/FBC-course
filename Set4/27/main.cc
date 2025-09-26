#include "main.ih"

int main(int argc, char *argv[])
{
    size_t arraySize = (argc == 2 ? stoul(argv[1]) : 5);
    
    Person personArray[arraySize];
    
    // call reader function
    readIntoPerson(personArray, arraySize);
    
    // call writer function
    writeFromPerson(personArray, arraySize);
}
