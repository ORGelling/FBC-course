#include "tempfile.ih"

    // by 

// HB: all of this is totally unnecessary: you can assume main will deal with this
// HB: (provided your class is exception safe, of course)
void TempFile::handleExceptions()
{
    try
    {
        rethrow_exception(current_exception());
    }
    catch (fs::filesystem_error const &fileExcept)
    {
        cerr << "TempFile: " << fileExcept.what() << '\n';
    }
    catch (ios_base::failure const &streamExcept)
    {
        cerr << "TempFile: " << streamExcept.what() << '\n';
    }
    catch (runtime_error const &except)
    {
        cerr << "TempFile: " << except.what() << '\n';
    }
    catch (...)
    {
        cerr << "TempFile: unexpected exception\n";
    }
}
