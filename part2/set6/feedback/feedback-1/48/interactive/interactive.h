// ES: 1
#ifndef INCLUDED_INTERACTIVE_
#define INCLUDED_INTERACTIVE_

#include "../fields/fields.h"
#include <unordered_map>

using MailData = std::unordered_map<std::string, Fields>;

class Interactive
{
    enum Action
    {
        DATE,
        COUNT
    };
    
    MailData d_data;
    std::string d_filename;
    
    static bool (Interactive::*s_filterData[])(
                        MailData &tmpData, std::string const &input) const;
    
    public:
        Interactive(std::string const &file);
        
        void read();            // reads file, stores data in a umap
        void session();         // interactively 
        
    private:
        Action selectFilter(std::string const &input) const;
        bool filterByDate(MailData &tmpData, std::string const &input) const;
        bool filterByCount(MailData &tmpData, std::string const &input) const;

        void show() const;
};
        
#endif
