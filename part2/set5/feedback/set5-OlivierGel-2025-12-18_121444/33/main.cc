//JB: ?
#include "main.ih"

int main()                                  // Refactoring either the while 
{                                           // or for loop is possible but
    set<string> sortList;                   // does not seem to be relevant
    string word;                            // to the exercise materials
    
    while (cin >> word) //JB: MLR/COCO
        sortList.insert(word);
  
    for (string const &entry : sortList)
        cout << entry << '\n';
}   
/* JB:
 * If you resubmit this as is, full points. Your remark is on point, and the
 * program is short and clear.
 * However, I'd like to draw your attention to how the ease of use of
 * containers and GAs tend to slip in code that could be factored out.
 *
 * So I'm asking for a version where sortList is const and the loops are
 * factored out. It you want it really neat, simply insert sortList into cout
 * instead of coming up with some arbitrary-named function.
 */
