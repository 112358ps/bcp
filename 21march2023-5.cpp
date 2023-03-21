/**
 * @file 21march2023-5.cpp
 *
 * @brief  program to find out whether a given number is even or odd.
 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
int num(int x)
{
    if(x%2==0)
    {
        cout<<x<<" :number is even"<<"\n";
        return x;
    }
    else
    cout<<x<<" :number is odd"<<"\n";
    return x;
}

int main()
{
    int n;
    cout<<"enter any number\n";
    cin>>n;
    num(n);
    return 0;

}