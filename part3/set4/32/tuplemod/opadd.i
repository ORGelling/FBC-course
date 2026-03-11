template<typename TupL, typename TupR, int nr, typename ...RParams>
auto opadd_imp(TupL const &lhs, TupR const &rhs, Nr<nr>, RParams &&...rParams)
{
    return opadd_imp(                           // We recurse: 
            lhs,                                //  
            rhs,                                // rhs's elements are added
            Nr<nr - 1>{},                       // to the parameter pack
            get<nr - 1>(rhs),                   // 
            std::forward<RParams>(rParams)...   // which is passed down
        );
}


template<typename TupL, typename TupR, typename ...RParams>
auto opadd_imp(TupL const &lhs, TupR const &rhs, Nr<0>, RParams &&...rParams)
{                                           // when all of rhs is added to PP
    return TupleMod<TupL>{ lhs }.add(std::forward<RParams>(rParams)...);
}                                           // we use add to return a tuple
                                            // that holds lhs & rhs elements

template <typename ...Lhs, typename ...Rhs>
auto operator+(std::tuple<Lhs ...> const &lhs, std::tuple<Rhs ...> const &rhs)
{
    return opadd_imp(                       // we call the implementation
            lhs,                            // which converts rhs into a 
            rhs,                            // param pack and adds it to lhs
            Nr<sizeof ...(Rhs)>{}
        );
}
