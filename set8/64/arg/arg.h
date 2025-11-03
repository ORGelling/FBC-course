#ifndef INCLUDED_ARG_
#define INCLUDED_ARG_

// include support classes
#include "../argoption/argoption.h"
#include "../arglongoption/arglongoption.h"
#include "../optstructarray/optstructarray.h"

#include <string>

class Arg
{
    static Arg *s_instance;
    
    ArgOption d_option;
    ArgLongOption d_longOption;
    OptStructArray d_optStructArray;
    
    std::string d_basename;
    int d_argc;
    char **d_argv;
    size_t d_nArgs;
    
    public:    
        enum Type
        {
            None,
            Required,
            Optional
        };
        
        // Nested class LongOption
        class LongOption
        {
            std::string d_name;
            Type d_type;
            int d_optionChar;
            
            public:
                LongOption(char const *name, Type type = None);
                LongOption(char const *name, int optionChar);
                
                // Accessors
                std::string const &name() const;
                Type type() const;
                int optionChar() const;
        };
        
        // Arg's own member functions: 
        Arg(Arg const &) = delete;
        ~Arg();
        
        static Arg &initialise(char const *optstring, int argc, char **argv);
        static Arg &initialise
        (
            char const *optstring, 
            LongOption const *const begin, 
            LongOption const *const end, 
            int argc, char **argv
        );
        //static void cleanUp(); // not needed with function local object
        
        Arg &instance();
        
        char const *arg(unsigned idx) const;
        std::string const &basename() const;
        size_t nArgs() const;
        size_t nOptions() const;
        size_t option(int opt) const;
        size_t option(std::string const &options) const;
        size_t option(std::string *value, int option) const;
        size_t option(std::string *value, char const *longOption) const;
        


    private:
        // private constructors since singleton
        Arg(char const *optstring, int argc, char **argv);
        Arg(char const *optstring, LongOption const *begin, 
                        LongOption const *end, int argc, char **argv);
        
        void findLong
        (
            struct option *options,
            size_t const nLongOpts,
            int opt
        );
        bool argError(int opt) const;
        bool argLongError(struct option *options, int const longIdx) const;
        
        static std::string setBaseName(char *argv0);
        static std::string makeOptStr(char const *optstring);
        static void buildLongOptArray
        (
            std::string const &optstring, 
            LongOption const *begin, 
            LongOption const *end, 
            struct option *options
        );
        static int setArgType(Arg::LongOption thisOption, 
                                                std::string const &optstr);
};

// inline accessors:
inline size_t Arg::nArgs() const
{
    return d_nArgs;
}

inline std::string const &Arg::basename() const
{
    return d_basename;
}
//

inline std::string const &Arg::LongOption::name() const
{
    return d_name;
}

inline Arg::Type Arg::LongOption::type() const
{
    return d_type;
}

inline int Arg::LongOption::optionChar() const
{
    return d_optionChar;
}



#endif
