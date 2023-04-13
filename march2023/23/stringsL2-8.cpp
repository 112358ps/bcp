/**
 * @file stringsL2-8.cpp
 *
 * @brief  Write a program to replace a given substring in a sentence with another string. 
      For example, in the sentence, ” A batman with bat” if we replace ”bat” with ”snow”, 
      the new sentence should be printed as ”A snowman with snow”.

 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;

string replace(string a)
{
    string c="bat",d="snow";
    int f=(d.length()-c.length()),j=0;
    for (int i = 0; i <= a.length(); i++)
    {
        while (a[i]==c[j])
        {
            a[i]=d[j];
            j++;
        }
    }
    for (int i = 0; i <a.length()+f ; i++)
    {
        cout<<a[i];
       
    }
    cout<<"\n";
    return a;
}

int main()
{
    string m="A batman with bat";
    
    // cout<<"enter required string2:\n";
    // getline(cin,m);
    replace(m);
    return 0;

}