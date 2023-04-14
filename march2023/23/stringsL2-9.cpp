/**
 * @file stringsL2-9.cpp
 *
 * @brief Input a string which contains some palindrome substrings.
 *  Find out the position of palindrome substrings if exist and replace it by *.
 *  (For example if input string is “bob has a radar plane” then it should convert in “*** has a ***** plane”.
 * * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
bool palindrome(string a)
{
    if (a.length()<=1)
    {
        return false;
    }
    
    bool r;
    int end=0;
    while (end<=a.length())
    {
        if (a[end]==a[a.length()-(end+1)])
        {
            end++;
            r=true;
        }
        else
        {
            r=false;
            break;
        }
    }
    
    return r;
}
string palindrometostar(string x)
{
    string y,z;
    int present=0,j=0;
    for (int i = 0; i <= x.length(); i++)
    {   
        if (x[i]==' '||(x[i]=='\0'))
        {
            present=i;
            y=x.substr(j,present-j);
            int a=0;
            if (palindrome(y))//palindrome(y)==true
            {
                for (int i = 0; i < y.length(); i++)
                {
                    x[j+i]='*';
                }
            }
            j=present+1;
        }
    }
    return x;
}
int main()
{
    string n;
    cout<<"enter required string1:\n";
    getline(cin,n);
    cout<<palindrometostar(n)<<"\n";
     return 0;

}