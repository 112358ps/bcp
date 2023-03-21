/**
 * @file 21march2023-9.cpp
 *
 * @brief  print the factorial of a number.
 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
int factorial(int x)
{
    int a=1;
    for (int i = 1; i <= x; i++)
    {
        a=a*i;
    }    
    cout<<"factorial :"<<a<<"\n";
    return a;
}

int main()
{
    int n;
    cout<<"enter any number\n";
    cin>>n;
    factorial(n);
    return 0;

}