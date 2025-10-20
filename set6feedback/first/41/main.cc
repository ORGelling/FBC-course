//JB: 1
//JB: Just do see comments.
#include "main.ih"

int main()
{
    CharCount counter;
    counter.count(cin);
    
    CharCount::CharInfo infoData = counter.info();
    size_t const nChars = infoData.nCharObjects;

    //JB: MLR (pedantic mode).
    for (size_t index = 0; index != nChars; ++index)
        showChar(infoData.rawCapacity[index]);

    cout << "capacity is: " << counter.capacity() << '\n';
}
