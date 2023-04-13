/**
 * @file pre-processor-2.cpp
 *
 * @brief  Write a macro to compare two numbers.

3.
 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
#define lessthan(a,b) (a<b);
#define greaterthan(a,b) (a>b);
#define equal(a,b) (a==b);
int main()
{
    cout<<"compareing numbers "<<lessthan(2,3);
    cout<<"\n";
    cout<<"compareing numbers "<<greaterthan(4,3);
    cout<<"\n";
    cout<<"compareing numbers "<<equal(3,3);
    cout<<"\n";
    return 0;

}