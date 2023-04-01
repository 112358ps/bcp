/**
 * @file stringsL1-7.cpp
 *
 * @brief  the string after the first occurrence of ',' and the string after the last occurrence of ','
                in the string "Hello, Good, Morning".
 * 
 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
string firstlast(string x)
{
    string y;
    int j=0,s=0;
    for (int i = 0; i < x.length(); i++)
    {
         if(x[i] == ',')
        {
            j=i;
            break;
        }
    }
    for (int i = x.length(); i >=0; i--)
    {
       if(x[i] == ',')
        {
            s=i;
            s=s-j;
            break;
        }
        cout<<"\n";
    }
    y=x.substr(j+1,s-1);
    return y;
}

int main()
{
    string a;
    cout<<"enter string1 :\n";
    cin>>a;
    cout<<firstlast(a)<<"\ns";
    
    return 0;
}
