/**
 * @file pre-processor-4.cpp
 *
 * @brief  Write a macro to find absolute value of number.

 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
#define absolute(a) ((a<1)?(-1*a):a);
int main()
{
    int x;
    cout<<"enter any number\n";
    cin>>x;
    cout<<"absolute value is "<<absolute(x);
    cout<<"\n";
    return 0;

}