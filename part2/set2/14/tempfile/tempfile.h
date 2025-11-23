#ifndef INCLUDED_TEMPFILE_
#define INCLUDED_TEMPFILE_

#include <filesystem>
#include <fstream>

class TempFile
{
    std::filesystem::path   d_filename;
    std::fstream            d_file;
public:
    TempFile(std::filesystem::path const &directory
                 = std::filesystem::temp_directory_path(),
             std::filesystem::path const &filename_pattern
                 = "XXXXXXXX.tmp",
             std::filesystem::perms permissions
                 = std::filesystem::perms::owner_read
                 | std::filesystem::perms::owner_write
        );
    TempFile(std::string filename);
    
    ~TempFile();
    
    // Value class ctors and assignment ops

    std::filesystem::path const &name() const;
    std::fstream &stream();

private:
    std::filesystem::path setName(std::filesystem::path const &directory,
                                std::filesystem::path const &pattern) const;
    void randomName(std::string &temp) const;
    char generateChars() const;
};


#endif
