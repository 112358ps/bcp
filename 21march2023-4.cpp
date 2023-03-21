/**
 * @file 18march2023-5.cpp
 *
 * @brief  print the maximum and the minimum number respectively among three numbers entered by user.
 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
int highest(int x,int y,int z)
{
    if((x>y)&&(x>z))
    {
        cout<<"highest number :"<<x<<"\n";
    }
    if((y>x)&&(y>z))
    {
        cout<<"highest number :"<<y<<"\n";
    }
    if((z>y)&&(z>x))
    {
        cout<<"highest number :"<<z<<"\n";
    }
     if((x<y)&&(x<z))
    {
        cout<<"smallest number :"<<x<<"\n";
    }
    if((y<z)&&(y<z))
    {
        cout<<"smallest number :"<<y<<"\n";
    }
    if((z<y)&&(z<x))
    {
        cout<<"smallest number :"<<z<<"\n";
    }

    return 0;
}

int main()
{
    int n,m,o;
    cout<<"enter any 3 numbers\n";
    cin>>n>>m>>o;
    highest(n,m,o);
    return 0;

}