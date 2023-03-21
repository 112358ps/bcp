/**
 * @file 21march2023-2.cpp
 *
 * @brief  function that returns the product of two numbers entered by user.
 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
int product(int x,int y)
{
    int a;
    a=x*y;
    cout<<"final product:"<<a<<"\n";
    return a;
}

int main()
{
    int n,m;
    cout<<"enter any number\n";
    cin>>n>>m;
    product(n,m);
    return 0;

}