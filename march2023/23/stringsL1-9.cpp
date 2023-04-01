/**
 * @file stringsL1-1.cpp
 *
 * @brief  Write a program that takes your full name as input and displays the abbreviations 
        of the first and middle names except the last name which is displayed as it is.
        For example, if your name is Robert Brett Roser, then the output should be R.B.Roser.
 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
int main()
{
    string n,m;//="robert brett roser"
    int f;
    cout<<"enter required string\n";
    getline(cin,n);
    for (int i = n.length(); i > 0; i--)
    {
        if(n[i]==' ')
        {
            f=i;
            break;
        }
    }
    cout<<n[0]<<".";
    for (int i = 0; i < f; i++)
    {
        if((n[i]==' ')&&(i+1<f))
        {
            cout<<n[i+1]<<".";
        }
    }
    
    m=n.substr(f+1,n.length());
    cout<<m<<"\n";
    return 0;

}