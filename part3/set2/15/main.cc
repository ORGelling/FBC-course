#include "main.ih"

int main()
{
    CPU cpu;
    
    for (size_t idx = 0; idx != 5; ++idx)
        (cpu.*CPU::s_opcode[idx])();
}
