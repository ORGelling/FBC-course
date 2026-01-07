#ifndef INCLUDED_INTERACTIVE_
#define INCLUDED_INTERACTIVE_

#include "../fields/fields.h"
#include <unordered_map>

class Interactive
{
    std::unordered_map<std::string, Fields> d_data;
    std::string d_filename;
    
    public:
        Interactive(std::string const &file);
        
        void read();            // reads file, stores data in a umap
        void session();         // interactively 
        
    private:
        
};
        
#endif
