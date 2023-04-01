/**
 * @file stringsL1-11.cpp
 *
 * @brief  Write a program to delete all consonents from the string "Hello, have a good day".
 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
int main()
{
    string x;
   cout<<"enter string  :\n";
    getline(cin,x);
    cout<<"new string is ";
    for (int i = 0, j=0; i <x.length(); i++,j++)
    {
       if((x[i]=='a')||(x[i]=='e')||(x[i]=='i')||(x[i]=='o')||(x[i]=='u')||(x[i]=='A')||(x[i]=='E')||(x[i]=='I')||(x[i]=='O')||(x[i]=='U'))
        {
           cout<<x[i];
           }
    }
    cout<<"\n";
    return 0;

}