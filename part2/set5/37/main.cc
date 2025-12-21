#include "main.ih"

int main() 
{
    string word;
    set<string> sortSet;                            // we use set to sort 
    while (cin >> word)                             // and filter duplicates
        sortSet.insert(word);
                                            // and then make a vector from it
    vector<string> sortVec{ sortSet.begin(), sortSet.end() };
    
    cout << "size: " << sortVec.size() 
        << "\ncapacity: " << sortVec.capacity() << '\n';
    
    sortVec.push_back("Addition");
    
    cout << "size: " << sortVec.size() 
        << "\ncapacity: " << sortVec.capacity() << '\n';
    
    vector<string>(sortVec).swap(sortVec);
    
    cout << "size: " << sortVec.size() 
        << "\ncapacity: " << sortVec.capacity() << '\n';
}
