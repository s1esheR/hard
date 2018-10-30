#ifndef TASK_H_INCLUDED
#define TASK_H_INCLUDED
#include <vector>
#include "header_t4.h"
#include <iostream>
#define Vec std::vector<int> vec{1,2,3,4,5,6,7,8,9,10}
void task_1_4()
{
    std::vector<int> task_3;
    fill_vector(task_3,10,1,2,[](int a, int c, int i){return a+c*i;});
    print_container(task_3.begin(), task_3.end());
    std::cout<<std::endl; //task_3.size();
    std::vector<int> task_4;
    fill_vector(task_4,10,1,2,[](int a, int c, int i){return a*c*i;});
    print_container(task_4.begin(), task_4.end());
}
//void task_9()
//{
    //Vec;
    //for_each(vec.begin(),vec.end(), [](int a){
                //if(a%2==0)
                //{
                    //std::cout<<a<<" ";
                //}
                //});
//}
#endif // TASK_H_INCLUDED
