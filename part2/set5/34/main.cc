#include "main.ih"

int main()                                  // Refactoring either the while 
{                                           // or for loop is possible but
    map<string, size_t> sortList;           // does not seem to be relevant
    string word;                            // to the exercise materials
    
    while (cin >> word)
        ++sortList[word];
  
    for (auto const &[word, count] : sortList)
        cout << word << " : " << count << '\n';
}   
