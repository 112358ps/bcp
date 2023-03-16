/**
 * @file 16march2023-12.cpp
 *
 * @brief program to print sum, average of all numbers, smallest and largest element of an array.
 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
int array()
{
    int n,sum=0,avg,smallest=2147483647,largest=0;
    cout<<"enter number of elements\n";
    cin>>n;
    int g[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"enter any n elements \n";
        cin>>g[i];
        sum=sum+g[i];
    }
    avg =sum/n;
    
    for (int i = 0; i < n; i++)
    {
        if(smallest>g[i])
         {
            smallest =g[i];
         }
         if(largest<g[i])
         {
             largest = g[i];
         }
    }

    cout<<"sum = "<<sum<<"\n"<<"average = "<<avg<<"\n"<<"smallest = "<<smallest<<"\n"<<"largest = "<<largest<<"\n";
}

int main()
{
    array();
    return 0;
}