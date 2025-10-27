#ifndef INCLUDED_ARG_
#define INCLUDED_ARG_

// include support classes

#include <string>
#include <cstddef> // for size_t

class Arg
{
    // private constructors since singleton
    Arg();
    Arg(char const *optstring, int argc, char **argv);
    Arg
    (
        char const *optstring, 
        LongOption const *begin, 
        LongOption const *end, 
        int argc, char **argv
    );
    
    Arg(const &Arg) = delete;
    Arg &operator=(Arg const &other) = delete; // Probably already done
    
    static Arg s_arg;
    
    public:    
        enum Type
        {
            None,
            Required,
            Optional
        };
    
        class LongOption
        {
            std::string d_name;
            Type d_type;
            int d_optionChar;
            
            public:
                LongOption(char const *name, Type type = None);
                // constructor that defines a long option that has no short 
                // equal. name is the unprefixed (--) option call.
                
                LongOption(char const *name, int optionChar);
                // long option that *has* short equivalent.
                
                // Accessors
                std::string const &name() const;
                Type type() const;
                int optionChar() const;
        };
        
        static Arg &initialise(char const *optstring, int argc, char **argv);
        // initialises Arg object. Optstring chars define the single char
        // options. if followed by ":" it must be provided an argument. 
        
        static Arg &initialise
        (
            char const *optstring, 
            LongOption const *const begin, 
            LongOption const *const end, 
            int argc, char **argv
        );
        // oveaload of prev. Takes 2 iterators of an array of Arg::LongOption
        // objects, which hold long-options.
        // Either of these may only be called once. ()
        
        Arg &instance();
        // returns instance of the Arg object which becomes available after an
        // initialise() member is called.
        
        char const *arg(unsigned idx) const;
        // returns argument idx after removing all options. 0 if argument not
        // available. argv[0] not counted!
        
        std::string const &basename() const;
        // returns program basename (keep member's prototype (?))
        // see basename(3)
        
        size_t nArgs() const;
        // returns number of non-option arguments (not prog name)
        
        size_t nOptions() const;
        // returns number of provided options. multiply specified options are
        // counted again!
        
        size_t option(int opt) const;
        // returns number of times option "opt" was specified. 0 for not given
        
        size_t option(std::string const &options) const;
        // returns number of times "one of the options specified in the
        // 'options' arg" were present
        
        size_t option(string *value, int option) const;
        // returns number of times provided option was present. If non-zero
        // then value of first occurrence of this option is stored in *value.
        // If op not present no change to *value. 0 can be set if opt has no
        // value, or if value not to be stored. 
        
        // if multiple same args given, only the first will be retrievable.
        // This is taken as is.
        
        size_t option(string *value, char const *longOption) const;
        // returns number of times provided longOption was present. If
        // non-zero the value of the first occurrence is stored in *value.
        
    private:

};







#endif
