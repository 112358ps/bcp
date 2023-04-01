/**
 * @file stringsL1-10.cpp
 *
 * @brief  a program to find the number of vowels, consonents, digits and white space characters in a string.
 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
int main()
{
    string n ;
    int a=0,b=0,c=0,d=0;
    cout<<"enter required string\n";
    getline(cin,n);
    for (int i = 0; i < n.length(); i++)
    {
        if((n[i]=='a')||(n[i]=='e')||(n[i]=='i')||(n[i]=='o')||(n[i]=='u'))
        {
            a=a+1;
        }
        if((n[i]>'0')&&(n[i]<'9'))
        {
            c=c+1;
        }
        if(n[i]==' ')
        {
            d=d+1;
        }
        
        b=n.length()-a-c-d;
       
    }    
    cout<<a<<" vowels,"<<b<<" consonents,"<<c<<" digits,"<<d<<" spaces in a string\n";
    return 0;

}