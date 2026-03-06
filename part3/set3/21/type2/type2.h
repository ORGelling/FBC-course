#ifndef INCLUDED_TYPE_2_
#define INCLUDED_TYPE_2_


template <typename Needle, typename ...Haystack>
struct Type2;

                          // bites a param off
template <typename Needle, typename Hay, typename ...Haystack>  
struct Type2<Needle, Hay, Haystack...>                
{
    enum                                            // finds next count
    {                                   // propagates value up if found
        located = Type<Needle, Haystack...>::located == 0 ? 0 : 
                                    1 + Type<Needle, Haystack...>::located
    };                                  // keeps 0 if not found at all
};


template <typename Needle, typename ...Haystack>    
struct Type2<Needle, Needle, Haystack...>
{
        enum
        {
            located = 1
        };
};                                                  // found here


template <typename Needle>
struct Type2<Needle>
{
        enum
        {
            located = 0
        };
};                                                  // not found at all

#endif
