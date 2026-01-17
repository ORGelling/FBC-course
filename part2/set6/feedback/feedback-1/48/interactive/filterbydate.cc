#include "interactive.ih"

    // by 

namespace {
    bool correctDate(string const &input)
    {
        istringstream iss(input);           // apparently chrono likes this
                                        // init with faulty date on purpose
        year_month_day ymd{ year{0}, month{0}, day{0} };
        iss >> parse("%y-%m-%d", ymd);              // parse date from input
        
        if (iss.fail() or not ymd.ok())             // test validity of date
        {
            cerr << "Invalid input: " << input << '\n';
            return false;
        }
        
        return true;
    }
}

bool Interactive::filterByDate(MailData &tmpData, string const &input) const
{
    if (not correctDate(input))
        return false;
    
    erase_if(tmpData, 
        [&](pair<string, Fields> const &entry)
        {
            return entry.second.date != input;
        }
    );
    
//  for (auto it = tmpData.begin(); it != tmpData.end(); )
//  {
//      if (it->second.date == input)           // we select the given date.
//          ++it;                               // Can also use >= if needed
//      else                                    // as string comparison works
//          it = tmpData.erase(it);             // fine for that (a > b).
//  }
    
    return true;
}
