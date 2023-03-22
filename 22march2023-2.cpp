/**
 * @file 22march2023-2.cpp
 *
 * @brief print the prime factors of a number.
 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
int prime_factors(int x)
{
    int a=2;
    cout<<"prime factors :";
    for (int i = 1; i <= x; i++)
    {
       if(x%i==0)
       {
            if(i%1==0)
            {
                cout<<i<<" ";
            }
       }
    }    
    cout<<"\n";
    return a;
}

int main()
{
    int n;
    cout<<"enter any number\n";
    cin>>n;
    prime_factors(n);
    return 0;

}