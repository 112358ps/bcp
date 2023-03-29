/**
 * @file stringsL1-5.cpp
 *
 * @brief  program to compare if the two strings entered by user are equal or not without using predefined String functions.
 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;


int main()
{
    string a,b;
    cout<<"enter string1 and string2 :\n";
    cin>>a>>b;
    if(a.length()==b.length())
    {
        if(a==b)
        {
            cout<<"two strings are equal\n";
        }
        if(a!=b)
        {
            cout<<"two strings are not equal\n";
        }
    }
    else
    {
        cout<<"two strings are not equal\n";
    }
    return 0;

}