#include "scanner.ih"

void Scanner::include()
{
    if (d_includedFiles.count(d_filename))
        throw runtime_error("Circular include detected: " + d_filename);
    
    d_includedFiles.insert(d_filename);     // we keep track of the included 
                                            // files using this set
    try
    {
        pushStream(d_filename);             // use internal mechanics to 
    }                                       // read the included file
    catch (exception const &except)
    {
        d_includedFiles.erase(d_filename);  // failed to open, erase name
        throw runtime_error("Cannot open include file: " 
                                        + d_filename + "\n" + except.what());
    }                                       // throw and end program
}
