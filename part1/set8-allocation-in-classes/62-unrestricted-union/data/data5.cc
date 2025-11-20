#include "data.ih"

    // by 

Data::Data(Data &&tmp, Type type)
{
    (this->*s_move[type])(move(tmp));
}
