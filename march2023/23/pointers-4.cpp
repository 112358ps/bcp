/**
 * @file pointers-4.cpp
 *
 * @brief   Write a program to find the factorial of a number using pointers.

 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
int fact(int* x)
{
    int a=1;
    if (*x==1)
    {
        return *x;
    }
    for (int i = *x; i > 0; i--)
    {
        a=a*i;
    }
    
    return a;
    
}

int main()
{
    int n;
    cout<<"enter any number"<<"\n";
    cin>>n;
    cout<<" factorial: "<<fact(&n)<<"\n";
    return 0;

}