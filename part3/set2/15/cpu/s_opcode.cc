#include "cpu.ih"

void (CPU::*CPU::s_opcode[])() = 
{
    &CPU::jmp,             //     00
    &CPU::jmpFalse,        //     01
    &CPU::jmpTrue,         //     02
    &CPU::atoi,            //     0b
    &CPU::nc<&CPU::exit>   //     1d    a const member
};
