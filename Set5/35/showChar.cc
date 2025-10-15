#include "showChar.ih"

void showChar(CharCount::Char const &charStruct)
{                               // unsigned for isprint and to guard overflow
    unsigned char ch = charStruct.ch;
    cout << "char " << charOutput(ch) << " " << charStruct.count 
            << " times\n";
}
