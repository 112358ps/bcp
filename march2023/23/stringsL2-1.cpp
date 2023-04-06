/**
 * @file stringsL2-1.cpp
 *
 * @brief  a program to reverse a string with and without using any predefined function. 
 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
int main()
{
    string n,m;
    
    cout<<"enter required string\n";
    getline(cin,n);
    for (int i = 0,j=n.length(); i < n.length()&&j>=0; i++,j--)
    {
        m[j]=n[i];
        
    }    
    for (int i = 0; i <=n.length(); i++)
    {
        cout<<m[i];
    }
    
    cout<<"\n";
    cout<<m<<"\n";
    return 0;

}