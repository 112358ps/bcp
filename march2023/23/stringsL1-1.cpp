/**
 * @file pointers-5.cpp
 *
 * @brief  program  occurence of the letter 'o' and character ',' in "Hello, World". 
 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
int main()
{
    string n;
    char a[n.length()];
    cout<<"enter required string\n";
    cin>>n;
    for (int i = 0; i < n.length(); i++)
    {
        a[i]=n[i];
       cout<<a[i]<<"\n";
       if(a[i]=='o')
       {
            cout<<i<<":'o' place\n";
       }
       if(a[i]==',')
       {
            cout<<i<<":',' place\n";
       }
    }    
    return 0;

}