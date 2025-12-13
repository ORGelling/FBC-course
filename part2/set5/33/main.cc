#include "main.ih"

int main()                                  // Refactoring either the while 
{                                           // or for loop is possible but
    set<string> sortList;                   // does not seem to be relevant
    string word;                            // to the exercise materials
    
    while (cin >> word)
        sortList.insert(word);
  
    for (string const &entry : sortList)
        cout << entry << '\n';
}   
