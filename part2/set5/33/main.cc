#include "main.ih"

int main()                                  // Refactoring either the while 
{                                           // or for loop is possible but
    set<string> sortList;                   // does not seem to be relevant
    string word;                            // to the exercise materials
    
    // Make sortList const
    while (cin >> word) // MLR/COCO
        sortList.insert(word);
  
    for (string const &entry : sortList)
        cout << entry << '\n';
}   
