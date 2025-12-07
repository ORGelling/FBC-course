// HB: rating: ?
// HB: unfortunately still TC

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
        TempFile(TempFile const &other) = delete;
        TempFile(TempFile &&other) = default;
        
        TempFile &operator=(TempFile const &other) = delete;
        TempFile &operator=(TempFile &&other) = default;
        
        ~TempFile();
        
        void swap(TempFile &other);
        
        operator std::fstream() &&;

        std::filesystem::path const &name() const;
        std::fstream &stream();
        
    private:
        std::filesystem::path setName(std::filesystem::path const &directory,
                                std::filesystem::path const &pattern) const;
        
        void setPerms(std::filesystem::perms permissions);
        
        void removeFile();
};

inline std::filesystem::path const &TempFile::name() const
{
    return d_filename;
}

inline std::fstream &TempFile::stream()
{
    return d_file;
}

inline TempFile::~TempFile()
{
    removeFile();
}

#endif
