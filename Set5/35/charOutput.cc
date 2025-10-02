#include "showChar.ih"

string charOutput(unsigned char const ch)
{
    switch (ch)
    {
        case ' ':
            return " ";
        case '\n':
            return "\\n";
        case '\t':
            return "\\t";
        default:
            if (isprint(ch))            // Check if printable
                return string(1, ch);
            else                        // Else print numerical ASCII value
                return to_string(static_cast<unsigned int>(ch));
    }
}
