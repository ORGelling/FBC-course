#include "main.ih"

int main() 
{
    string word;
    vector<string> sortVec;
    while (cin >> word)
    {
        //JB: WHEEL. Just read into a set and copy/move from it.
        if (find(sortVec.begin(), sortVec.end(), word) == sortVec.end())
            sortVec.push_back(word);
    }
    
    cout << "size: " << sortVec.size() 
        << "\ncapacity: " << sortVec.capacity() << '\n';
    
    sortVec.push_back("Addition");
    
    cout << "size: " << sortVec.size() 
        << "\ncapacity: " << sortVec.capacity() << '\n';
    
//  sortVec.shrink_to_fit();
    vector<string>(sortVec).swap(sortVec);
    
    cout << "size: " << sortVec.size() 
        << "\ncapacity: " << sortVec.capacity() << '\n';
}   
