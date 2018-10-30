#ifndef HEADER_T4_H_INCLUDED
#define HEADER_T4_H_INCLUDED
#include <vector>
#include <iostream>
using TernaryFunction=int(*)(int,int,int);
void fill_vector(std::vector<int>& vec, int times, int a, int c, TernaryFunction f)
{
    for(int i=0; i<times; i++)
    {
        vec.push_back(f(a,c,i));
    }
}
template<class iterator>
void print_container(iterator first, iterator last)
{
    for(; first<last; ++first)
    {
        std::cout<<*first<<" ";
    }
    std::cout<<std::endl;
}

#endif // HEADER_T4_H_INCLUDED
