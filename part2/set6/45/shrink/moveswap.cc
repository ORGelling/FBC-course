#include "shrink.ih"

    // by 

// static
void Shrink::moveSwap(vector<string> &vect)
{
    vector<string> tmp(
        make_move_iterator(vect.begin()), 
        make_move_iterator(vect.end())
    );
    
    tmp.swap(vect);
}
//  vector<string> tmp;                 // This is the more verbose version.
//  tmp.reserve(vect.size());           // They take equally long, we tested.
//                                      // 2 ms each for d_size = 100'000.
//  move(make_move_iterator(vect.begin()), 
//      make_move_iterator(vect.end()), 
//      back_inserter(tmp)
//  );
//  tmp.swap(vect);
