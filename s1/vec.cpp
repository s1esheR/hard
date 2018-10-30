#include <iostream>
#include<vector>
using namespace std;
struct Sum
{
    int res=0;
    operator()(int a){res+=a;}
};
struct Progression
{
    int a;
    int d;
    int i;
    Progression(int a_,int d_,int i_)
    {
        a=a_;
        d=d_;
        i=i_;
    }
    operator()()
    {
        ++i;
        return a+d*i;
    }
};
template< class Func>
void fill_container(std::vector<int>& vec, int times, Func f)
{
    for(int i=0; i<times; ++i)
    vec.push_back(f());
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
int main()
{
    std::vector<int> v;
    fill_container(v,10,Progression(2,3,10));
    print_container(v.begin(),v.end());
    return 0;
}
