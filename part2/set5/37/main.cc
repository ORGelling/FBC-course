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
    
    Strings tmp{ list };
    list.swap(tmp);
    
    cout << "size: " << list.size() 
        << "\ncapacity: " << list.capacity() << '\n';

}
