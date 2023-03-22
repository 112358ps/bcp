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
   
    int a;
    if(y != 1)
    {
        table(x,y-1);
        a=x*y;
        cout<<x<<" * "<<y<<" = "<<a<<"\n";
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
