#ifndef INCLUDED_FCH_
#define INCLUDED_FCH_

#include "../enum/enum.h"
#include <iosfwd>
#include <fstream>
#include <string>

class Fch
{
    std::fstream    d_input;
    std::string     d_target;
    std::string     d_replacement;
    std::string     d_line;
    size_t          d_location = 0;
    
    Action d_action = ASK;
    
    static void (Fch::*s_action[])();
    
    public:
        Fch(char const *fname);
        int run();              // reads all lines from d_input
                                // processes changes
    private:
        void ask();
        void changeAll();
        bool findTarget();
        void modify();
        bool openInput(char const *fname);      // Called by constructor
        void process();
        char request() const;
        bool requestedN();
        void searchReplace();
        void showModification() const;
        void insertLine() const;
};
        
#endif
