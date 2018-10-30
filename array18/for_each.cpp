#include <iostream>

using namespace std;
struct F
{
    int value;
    std::vector<int> res;
    operator()(int a)
    {
        if(a<value)
        {
            res.push_back(a);
        }
    }
};
template <class Iterator, class Functor>
Functor for_each(Iterator first, Iterator last, Functor f)
{
    for(;first<last; ++first)
    {
        f(*first);
    }
    return f;
}
struct Sum
{
    int res=0;
    operator()(int a){res+=a;}
};
int main()
{
    int arr[5]{1,2,3,4,5};
    //for_each(arr,arr+5,[](int& a){++a;});
    //for_each(arr,arr+5,[](int a){std::cout<<a<<std::endl;});
    auto a=for_each(arr,arr+5,Sum());
    Sum b;
    b(10);
    b(20);
    std::cout<<a.res;
    //cout << "Hello world!" << endl;
    return 0;
}
