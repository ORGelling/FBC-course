#include "main.ih"

int main()                                  // Refactoring either the while 
{                                           // or for loop is possible but
    map<string const, size_t> sortList;     // does not seem to be relevant
    string word;                            // to the exercise materials
    
    while(cin >> word)
        ++sortList[word];
  
//  for (pair<const string, size_t> const &entry : sortList)
    for (auto const &entry : sortList)
        cout << entry.first << " : " << entry.second << '\n';
}   
