/**
 * @file 22march2023-3.cpp
 *
 * @brief  Using recursion, function to know nth term of a Fibonacci series
 * @author 112358ps
 * 
 *
 */
#include<iostream>
using namespace std;			
int Fibonacci_series(int x)
{
    int a=0;
    if((x==0)||(x==1))
    {
        return x;
    }
    a=Fibonacci_series(x-1)+Fibonacci_series(x-2);  
   
    return a;
}

int main()
{
    int n;
    cout<<"enter any number\n";
    cin>>n;
    cout<<"Fibonacci series :";
    for (int i = 0; i <= n; i++)
    {
        cout<<Fibonacci_series(i)<<" ";
    }
     cout<<"\n";
   
    return 0;

}