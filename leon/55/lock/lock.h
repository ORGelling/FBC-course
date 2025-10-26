#ifndef INCLUDED_LOCK_
#define INCLUDED_LOCK_

//#include <iosfwd>
#include <string>
#include <filesystem>

class Lock
{
    int d_filedesc = -1;
    public:
        Lock(std::string const &path);
        Lock(std::string const &path, std::string lockDir);
        ~Lock();
        
        int open(std::filesystem::path path);
        bool valid();
        
    private:
        static std::string stringName(std::string const &path1, 
                                            char *(*name)(char* pathPH));
        std::string lockPath(std::string const &path, 
                                    std::string const &lockDir); // const ref?
};
        
#endif
