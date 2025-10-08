#include "main.ih"

int main()
{
    CharCount counter;
    counter.count(cin);
    
    CharCount::CharInfo infoData = counter.info();
    size_t const nChars = infoData.nCharObjects;
    
    for (size_t index = 0; index != nChars; ++index)
        showChar(infoData.rawCapacity[index]);

    cout << "capacity is: " << counter.capacity() << '\n';
}
