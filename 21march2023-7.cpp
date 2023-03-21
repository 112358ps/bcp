/**
 * @file 21march2023-7.cpp
 *
 * @brief  function to find out if number is prime or not
 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
int num(int x)
{
    for (int i = 2; i < x; i++)
    {
    if(x%1==0)
    {
        cout<<x<<" : is prime number"<<"\n";
        return x;
    }
    else
    cout<<x<<"  : is not prime number"<<"\n"; 
    }
   
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