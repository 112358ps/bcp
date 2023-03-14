/**
 * @file 14march2023-1.cpp
 *
 * @brief reverse assigning from 1 array to another array.

 *
 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
int series()
{
    int p[10],s[10];
    for(int i=0;i<10;i++)
    {
        cout<<"enter any numbers\n";
        cin>>p[i];
    }
    int x=0;
    for(int i=9;i>=0;i--)
    {
        s[x]=p[i];
        x++;
    }
    for(int i=0;i<10;i++)
    {
        cout<<s[i]<<"\n";
    }
}
int main()
{

    series();
    return 0;
}