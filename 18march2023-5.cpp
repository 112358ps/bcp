/**
 * @file 18march2023-5.cpp
 *
 * @brief  sum of the digits of the number using a recursive function. 
 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
int sum(int x)
{
    int a;
    if(x/10==0)
    {
        cout<<x<<"\n";
        return x;
    }
    a= x%10+sum(x/10);
    cout<<"final sum:"<<a<<"\n";
    return a;
}

int main()
{
    int n;
    cout<<"enter any number\n";
    cin>>n;
    sum(n);
    return 0;

}