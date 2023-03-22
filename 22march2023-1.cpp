/**
 * @file 22march2023-1.cpp
 *
 * @brief  multiplication table of any number using recursion. 
 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
int table(int x)
{
    int a=1;
    for (int i = 1; i <= 10; i++)
    {
        a=x*i;
        cout<<x<<" * "<<i<<" = "<<a<<"\n";
    }    
    
    return a;
}

int main()
{
    int n;
    cout<<"enter any number\n";
    cin>>n;
    table(n);
    return 0;

}