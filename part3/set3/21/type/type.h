#ifndef INCLUDED_TYPE_
#define INCLUDED_TYPE_


template <typename Needle, typename ...Haystack>
struct Type;

                          // bites a param off
template <typename Needle, typename Hay, typename ...Haystack>  
class Type<Needle, Hay, Haystack...>                
{
    enum                                // finds next count
    {
        next = Type<Needle, Haystack...>::located
    };
    
    public:                                         
        enum                            // checks if found at all
        {
            located = next == 0 ? 0 : 1 + next
        };                                          // not found yet
};                                                  // iterates recursively


template <typename Needle, typename ...Haystack>    
class Type<Needle, Needle, Haystack...>
{
    public:
        enum
        {
            located = 1
        };
};                                                  // found here


template <typename Needle>
class Type<Needle>
{
    public:
        enum
        {
            located = 0
        };
};                                                  // not found at all

#endif
