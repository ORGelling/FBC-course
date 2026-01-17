// ES: 1
#include "main.ih"

int main(int argc, char **argv)
{
    Shrink shrink{ cout, argc == 1 ? 10'0000 : stoul(argv[1]) };

    shrink.process("copyswap", Shrink::copySwap);
    shrink.process("move failure", Shrink::moveFails);
//  shrink.process("hand-made", Shrink::handmadeMove);
    shrink.process("moveswap", Shrink::moveSwap);
//  shrink.process("moveswap2", Shrink::moveSwap2);
}
