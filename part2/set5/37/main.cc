#include "main.ih"

int main()
{
    Strings list;
    string word;
    while (cin >> word)
        list.addUnique(word);

    cout << "size: " << list.size() 
        << "\ncapacity: " << list.capacity() << '\n';
    
    list += "addition";
    
    cout << "size: " << list.size() 
        << "\ncapacity: " << list.capacity() << '\n';
    
    Strings tmp{ list };            // Avoid named temporary
    list.swap(tmp);                 // other way around?
    
    cout << "size: " << list.size() 
        << "\ncapacity: " << list.capacity() << '\n';

}
