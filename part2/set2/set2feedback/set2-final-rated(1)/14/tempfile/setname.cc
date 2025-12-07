#include "tempfile.ih"

    // by 

namespace                                   // for local helpers, here to 
{                                           // unclutter the class interface
    static const char allowed[] =
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz"
        "1234567890"
        "!@#$%&()-_;[]{}~";

    char generateChars()
    {
        return allowed[random() % (sizeof(allowed) - 1)];
    }                                           // placing these here to
                                                // declutter the interface
    void randomName(string &temp)
    {                                               // still kinda TC
        srandom(chrono::steady_clock::now().time_since_epoch().count());
                                                        // seeding rng for 
        for (char &ch : temp)                           // each new object
        {
            if (ch == 'X')
                ch = generateChars();
        }
        temp.replace(0, 3, "TMP");                  // prepend base. Problem
    }                                               // if pattern too short
}   // anonymous namespace

//: The actual function:

fs::path TempFile::setName(fs::path const &directory, 
                           fs::path const &pattern) const
{
    fs::path tempPath = directory;
    
    string temp = pattern.filename();
    randomName(temp);
    
    return tempPath /= temp;            // /-append new randomised filename
}
