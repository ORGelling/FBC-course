#ifndef INCLUDED_CPU_
#define INCLUDED_CPU_

#include "../base/base.h"
#include <iostream>         // for the inline members

class CPU: public Base<CPU>
{
    public:
        void jmp();
        void jmpFalse();
        void jmpTrue();
        void atoi();
        void exit() const;
        
        static void (CPU::*s_opcode[])();
};

// preferablly these would be in source files to keep iostream out of here

inline void CPU::jmp()
{
    std::cout << "Called jmp\n";
}

inline void CPU::jmpFalse()
{
    std::cout << "Called jmpFalse\n";
}

inline void CPU::jmpTrue()
{
    std::cout << "Called jmpTrue\n";
}

inline void CPU::atoi()
{
    std::cout << "Called atoi\n";
}

inline void CPU::exit() const
{
    std::cout << "Called exit\n";
}
        
#endif
