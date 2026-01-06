#ifndef INCLUDED_INTERACTIVE_
#define INCLUDED_INTERACTIVE_

#include <unordered_map>
#include <string>

class Interactive
{
    unordered_map<std::string> d_data;
    
    public:
        Interactive(std::string const &file);
        
        void read();            // reads file, stores data in a umap
        void session();
    private:
};
        
#endif
