/**
 * @file stringsL1-12.cpp
 *
 * @brief  Input a string of alphabets. Find out the number of occurrence of all alphabets in that string. 
        Find out the alphabet with maximum occurrence.
 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
int main()
{
    string n;
    cout<<"enter required string\n";
    getline(cin,n);
    int a;
    for (int i = 0; i < n.length(); i++)
    {
        a=0;
        for (int j= 0; j<n.length(); j++)
        {
            if(n[i]==n[j])
            {
                a++;
            }
        }
        cout<<n[i]<<"  occurred "<<a<<" times\n";
        
    }    
    return 0;

}