#ifndef INCLUDED_INTERACTIVE_
#define INCLUDED_INTERACTIVE_

#include <unordered_map>
#include <string>
#include <chrono>

class Interactive
{
    struct Fields 
    {
        size_t count;
        std::time_t seconds;
        std::string date;
        //std::chrono::system_clock::time_point date;
    };
    
    std::unordered_map<std::string, Fields> d_data;
    std::string d_filename;
    
    public:
        Interactive(std::string const &file);
        
        void read();            // reads file, stores data in a umap
        void session();         // interactively 
    private:
};
        
#endif
