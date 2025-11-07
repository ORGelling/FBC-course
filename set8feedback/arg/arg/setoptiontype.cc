#include "arg.ih"

int Arg::setOptionType(string const &optString,
                       LongOption const &longOption)
{
    string::size_type pos = optString.find_first_of(longOption.optionChar());

    if (pos == string::npos)
    {
        cerr << "Arg::setOptionType()" << ": short option `" << 
                static_cast<char>(longOption.optionChar()) << "' not found\n";
        exit(1);
    }

    return optString[pos + 1] == ':' ? Required : None;
}

