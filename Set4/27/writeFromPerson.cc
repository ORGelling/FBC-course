#include "helperheader.ih"

void writeFromPerson(Person *personArray, size_t arraySize)
{
    for (size_t index = 0; index != arraySize; ++index)
        personArray[index].insert(cout);
}
