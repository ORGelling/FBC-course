// HB: rating: 0
// HB: very much overengineered
// HB: try and put some funcitons in anonymous namespaces if you can, that declutters the interface
// HB: some functions also look completely redundant to me

// HB: NOTE BENE:
// HB: 1) dtors call dtors of their subobjects automatically
// HB: 2) lambdas are NC

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
        TempFile(TempFile &&other);
        
        TempFile &operator=(TempFile const &other) = delete;
        TempFile &operator=(TempFile &&other);
        
        ~TempFile();
        
        void swap(TempFile &other);
        
        operator std::fstream() &&;

        std::filesystem::path const &name() const;
        std::fstream &stream();
        
    private:
        std::filesystem::path setName(std::filesystem::path const &directory,
                                std::filesystem::path const &pattern) const;
        void randomName(std::string &temp) const;
        char generateChars() const;
        
        void alreadyExists() const;
        
        void setPerms(std::filesystem::perms permissions);
        
        void closeStream();
        static void removeFile(std::filesystem::path const &filename);
        
        void handleExceptions();
};

#endif
