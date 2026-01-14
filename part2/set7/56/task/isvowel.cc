#include "task.ih"

    // by 

namespace {             // is Y a vowel? Seems it *can* be but not always
    
    constexpr char vowels[] = "AEIOUaeiou";
    
}

int Task::isvowel(int const ch)
{
    return strchr(vowels, ch) != 0;
}
