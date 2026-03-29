#include "scanner.ih"

bool Scanner::popStream()               
{                                       
    if (!streamStack().empty())         
        d_includedFiles.erase(streamStack().back().pushedName);
                                        // We override popStream here so that
     return ScannerBase::popStream();   // it can remove the name of any file
 }                                      // done scanning from the included-
                                        // Files set. This way we can check
                                        // against recursion without being
                                        // overzealous and throwing even if
                                        // no recursive loop would arise
