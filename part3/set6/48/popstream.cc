#include "scanner.ih"

bool Scanner::popStream()
{
    if (!streamStack().empty())
        d_includedFiles.erase(streamStack().back().pushedName);
    
    return ScannerBase::popStream();
}
