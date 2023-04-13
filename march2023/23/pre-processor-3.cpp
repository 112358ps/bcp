/**
 * @file pre-processor-3.cpp
 *
 * @brief  Write a macro to find average of two numbers.

 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
#define average(a,b) ((a+b)/2);
int main()
{
    int x,y;
    cin>>x>>y;
    cout<<"average of 2 numbers is "<<average(x,y);
    cout<<"\n";
    return 0;

}