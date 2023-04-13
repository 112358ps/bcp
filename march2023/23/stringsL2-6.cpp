/**
 * @file stringsL2-6.cpp
 *
 * @brief  Write a program to check if a given string is a Palindrome.

 *  Write down the names of 10 of your friends in an array and then sort those in alphabetically ascending order.

 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
string order(string names[],int a)
{
    string temp;
    cout<<"\n";
    cout<<"\n";
    for (int i = 0; i < a-1; i++)
    {
        for (int j = i+1; j <a ; j++)
        {
            if (names[i]>names[j])
            {
                temp=names[i];
                names[i]=names[j];
                names[j]=temp;
            }
        }
    }
    for (int i = 0; i < a; i++)
    {
        cout<<names[i]<<"\n";
    }
    
    

 return names[a];
}
bool palindrome(string a)
{
    bool r;
    int end=0;
    while (end<=a.length())
    {
        if (a[end]==a[a.length()-(end+1)])
        {
            end++;
            r=true;
            cout<<"true\n";
        }
        else
        {
           cout<<"false\n";
            r=false;
            break;
        }
       
         cout<<"r="<<r<<"\n";
    }
    
    return r;
}
int main()
{
    int p;
    cout<<"enter array of second string:\n";
    cin>>p;
    string n,m[p];
    cout<<"enter required string1:\n";
    cin>>n;
    cout<<palindrome(n)<<"\n";
   
    cout<<"enter required string2:\n";
    //cin>>p;
    for (int i = 0; i < p; i++)
    {
       cin>>m[i];
    }
    order(m,p);
    return 0;

}