#include "main.ih"

int main()
{
    CharCount counter;
    counter.count(cin);
    
    CharCount::CharInfo infoData = counter.info();
    size_t nChars = infoData.nCharObjects;
    
    for (size_t index = 0; index != nChars; ++index)
        showChar(infoData.ptr[index]);
}
