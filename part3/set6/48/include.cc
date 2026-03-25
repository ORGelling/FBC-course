#include "scanner.ih"

void Scanner::include()
{
    if (d_includedFiles.count(d_filename))
        throw runtime_error("Circular include detected: " + d_filename);
    
    d_includedFiles.insert(d_filename);
    
    try
    {
        pushStream(d_filename);
    }
    catch (exception const &except)
    {
        d_includedFiles.erase(d_filename);
        throw runtime_error("Cannot open include file: " 
                                        + d_filename + "\n" + except.what());
    }
}
