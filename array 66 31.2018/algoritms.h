#ifndef ALGORITMS_H_INCLUDED
#define ALGORITMS_H_INCLUDED
#include "algoritms.h"
template <class Iterator, class Functor>
Functor for_each(Iterator first, Iterator last, Functor f)
{
    for(;first<last; ++first)
    {
        f(*first);
    }
    return f;
}


#endif // ALGORITMS_H_INCLUDED
