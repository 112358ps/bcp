/**
 * @file 21march2023-1.cpp
 *
 * @brief  sum of two numbers entered .
 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
int sum(int x,int y)
{
    int a;
    a=x+y;
    cout<<"sum of entered numbers :"<<a<<"\n";
    return a;
}

int main()
{
    int n,m;
    cout<<"enter any 2 number\n";
    cin>>n>>m;
    sum(n,m);
    return 0;

}