#ifndef INCLUDED_OPTIONS_
#define INCLUDED_OPTIONS_
#include "../arg/arg.h"

enum SourceMode
{
    CIN,
    ARGS,
    SOURCEFILE,
    DIRECTORY,
    DIRECTORYR,
};

class Options
{
    Arg &d_arg;
    
    SourceMode d_mode;
    std::string d_source;
    std::string d_output;
    std::string d_tmp;
    //std::string d_cflags;
    size_t d_nThreads;
    
    static Options *s_instance;
    
    public:
        Options(Options const &) = delete;
        Options &operator=(Options const &) = delete;
        
        static void initialise(int argc, char **argv);
        static Options &instance();
        
        SourceMode mode() const;
        std::string const &source() const;
        std::string const &output() const;
        std::string const &tmp() const;
        //std::string const &cflags() const;
        size_t nThreads() const;
        
        size_t nArgs() const;
        char const *operator()(size_t idx) const;
        
    private:
        Options(int argc, char **argv);         // private ctor
        
        void setOptions();
        void setSource();
        void setThreads();
        void setOption(std::string &member, char const ch);
        
        static void usage();
};

inline SourceMode Options::mode() const
{
    return d_mode;
}

inline std::string const &Options::source() const
{
    return d_source;
}

inline std::string const &Options::output() const
{
    return d_output;
}

inline std::string const &Options::tmp() const
{
    return d_tmp;
}

//inline std::string const &Options::cflags() const
//{
//    return d_cflags;
//}

inline size_t Options::nThreads() const
{
    return d_nThreads;
}

inline size_t Options::nArgs() const
{
    return d_arg.nArgs();
}

inline char const *Options::operator()(size_t idx) const
{
    return d_arg.arg(idx);              // no idx op since from part 1
}                                       // will add another time!
        
#endif
