#include "helperheader.ih"

void readIntoPerson(Person *personArray, size_t arraySize)
{
    cout << "Please give name, address, phone nr, mass\n";
    
    for (size_t index = 0; index != arraySize; ++index)
    {
        cout << "? ";
        personArray[index].extract(cin);
    }
}
