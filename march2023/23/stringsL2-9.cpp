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
string palindrome(string x)
{
    string y,z;
    int end=0,present=0,j=0,a=0;
    for (int i = 0; i <= x.length(); i++)
    {   
        if (x[i]==' '||(x[i]=='\0'))
        {
            present=i;
            y=x.substr(j,present-j);
            end=y.length();
            while(y[a]==y[y.length()-(a+1)])
            {
                x[j]='*';
                //cout<<j<<" ";
                a++;
                j++;
                if(j==end-1)
                {
                    break;
                }
            }
            //cout<<endl;
            j=present+1;
            //cout<<y<<"\n";
            //cout<<(y=x.substr(j,present-j))<<"\n";
            //cout<<"i="<<i<<",j="<<j<<",present="<<present<<"\n";
        }
       
    }
    for (int i = 0; i < x.length(); i++)
    {
        cout<<x[i];
    }
    cout<<endl;
    return y;
}
int main()
{
    string n="bob has a radar plane";
    // cout<<"enter required string1:\n";
    // getline(cin,n);
    palindrome(n);
     return 0;

}