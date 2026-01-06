#ifndef INCLUDED_INTERACTIVE_
#define INCLUDED_INTERACTIVE_

#include <unordered_map>
#include <string>
#include <ctime>                // for time_t

class Interactive
{
    struct Fields 
    {
        size_t count;
        std::time_t epoch_seconds;              // full epoch seconds
        std::string date;                       // date only
        std::string time;                       // time only
    };
    
    std::unordered_map<std::string, Fields> d_data;
    std::string d_filename;
    
    public:
        Interactive(std::string const &file);
        
        void read();            // reads file, stores data in a umap
        void session();         // interactively 
        
    private:
        void storeLines(std::string const &line);
        
};
        
#endif
