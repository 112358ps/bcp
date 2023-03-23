/**
 * @file 22march2023-4.cpp
 *
 * @brief  a function  that determines if parameter number is a perfect number. 
 * Use this function in a program that determines and prints all the perfect numbers between 1 and 1000.
[An integer number is said to be "perfect number" if its factors,
 including 1(but not the number itself), sum to the number. E.g., 6 is a perfect number because 6=1+2+3]. 
 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
int  perfect_number(int x)
{
    int a=0;
    for (int i = 1; i < x; i++)
    {
       if(x%i==0)
       {
        a=a+i;
       }
    }    
    if (a==x)
    {
        cout<<"number is a perfect number"<<"\n";
    }
    cout<<a<<"\n";
    return a;
}
int perfect(int a,int b)
{
    int x;
    while (a<=b)
    {
        x=0;
        for (int i = 1; i <=a/2; i++)
        {
            if (a%i==0)
            {
                x=x+i;
            }
            
        }
        if (x==a)
        {
           cout<<a<<" is perfect number\n";
        }
        
        a++;
    }
    
    return x;
    
}

int main()
{
    int n;
    cout<<"enter any number\n";
    cin>>n;
    perfect_number(n);
    int x,y;
    cout<<"enter range\n";
    cin>>x>>y;
    perfect(x,y);
    return 0;

}