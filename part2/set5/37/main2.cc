#include "main.ih"

int main() 
{
    string word;

//  set<string> sortSet;
//  while (cin >> word)
//      sortSet.insert(word);               // rather than using find:

//  vector<string> sortVec(sortSet.begin(), sortSet.end());

    vector<string> sortVec;
    while (cin >> word)
    {
        if (find(sortVec.begin(), sortVec.end(), word) == sortVec.end())
            sortVec.push_back(word);
    }
    
//  for (const auto& word : sortVec)
//      cout << word << '\n';

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
