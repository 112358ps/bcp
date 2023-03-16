/**
 * @file 15march2023-8.cpp
 *
 * @brief program to check if elements of an array are same or not it read from front or back. 
 *
 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
int check(int n,int s[])
{
  
    int f =0;
    for(int i=0 ,j=n-1 ;i<n/2;i++ , j--)
    {
        if (s[i] != s[j])
        {
            f++;
        }  
    }
    return f;
}
int main()
{
     int n;
    cin>>n;
    int s[n];
    for(int i =0 ; i<n; i++)
    {
        cin>>s[i];
    }
    int a;
    a= check(n,s);
    if (a== 0)
    {
        cout<<"no need to change\n";
    }
    else{
        cout<<"need to change "<<a<<" elements\n";
    }
    return 0;
}