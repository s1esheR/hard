#ifndef TUSKS_H_INCLUDED
#define TUSKS_H_INCLUDED
#include<vector>
#define Vec std::vector<int> vec{2,3,4,5,6};
#include "algoritms.h"
void task65()
{
    Vec;
    int b=10;
    int k=vec[b];
    for_each(vec.begin(), vec.end(),[k](int& a){a+=k;});
    for_each(vec.begin(), vec.end(),[](int a){std::cout<<a<<std::endl;});
}

#endif // TUSKS_H_INCLUDED
