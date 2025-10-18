#ifndef INCLUDED_FCH_
#define INCLUDED_FCH_

#include "../enum/enum.h"
#include <iosfwd>
#include <fstream>
#include <string>

class Fch
{
    std::ifstream d_input;
    std::string d_target;
    std::string d_replacement;
    Action d_action = ASK;
    
    public:
        Fch(char const *fname);
        int run();              // reads all lines from d_input
                                // processes changes
        static void (Fch::*s_action[])();
        
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
        void noChanges();
};
        
#endif
