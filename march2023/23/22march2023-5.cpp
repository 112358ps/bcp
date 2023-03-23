/**
 * @file 22march2023-5.cpp
 *
 * @brief  a function to calculate power of a number raised to other 
 * 
 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
int power(int x,int y)
{
    int b=0;
    if(y==1)
    {
        return x;
    }
    else
    {
        b=x*power(x,y-1);
        cout<<"power="<<b<<"\n";
    }
    
    return b;
}

int main()
{
    int n,m;
    cout<<"enter any number\n";
    cin>>n>>m;
    cout<<power(n,m)<<"\n";
    return 0;

}