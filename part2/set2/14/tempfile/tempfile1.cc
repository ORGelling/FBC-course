#include "tempfile.ih"

    // by 

TempFile::TempFile(fs::path const &directory, 
                   fs::path const &filename_pattern,
                   fs::perms permissions)
:
    d_filename(setName(directory, filename_pattern))
{
    d_file.exceptions(ios::failbit | ios::badbit);  // set stream to throw
    
    // check if directories need to be added?
    
    try
    {
        d_file.open(d_filename, ios::in | ios::out | ios::trunc);
        
        if (d_file.is_open())
        {
            cout << "opened " << d_filename << '\n';
            
            fs::permissions(d_filename, permissions);   // set perms
        }
    
    //create this file and open a stream to it. delegate?
    // check if parent path exists
        // if not either throw or create
    
    // create file in location and open stream to it
        // create with fstream
        // throw if failed to create or open
    
    // set perms
    
    }
    catch (ios_base::failure &streamExcept)
    {
        cerr << "stream error\n";
    }
    catch (fs::filesystem_error &fileExcept)
    {
        cerr << "filesystem error\n";
    }
}
// TempFile must be exception safe
