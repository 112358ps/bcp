/**
 * @file pointers-2.cpp
 *
 * @brief  Write a program to reverse the digits a number using pointers.
 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
int reverse(int x)
{  
    int *p;
    p=&x; 
    while (true)
    {
       cout<<*p%10;
       *p=*p/10;
       if(*p==0)
       {
        break;
       }
    }
    
    return *p;
}

int main()
{
    int a;
    cin>>a;
    reverse(a);
    cout<<"\n";
    return 0;

}