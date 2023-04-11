/**
 * @file stringsL2-5.cpp
 *
 * @brief   a program to find out the largest and smallest word in the string "This is an umbrella". 
 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
string maxmin(string a)
{
    string max,min;
    int length=a.length(),start=0,end=0,present;
    int minlength = length, maxlength = 0;
    while (end<=length)
    {
        if ((a[end]!='\0')&&(a[end]!=' '))
        {
            end++;
        }
        else
        {
        present=end-start;
        cout<<"present="<<present<<",end="<<end<<",start="<<start<<"\n";
        if (present<minlength)
        {
            min=a.substr(start,present);
            minlength=present;
        }
        if (present>maxlength)
        {
            max=a.substr(start,present);
            maxlength=present;
        }
        end++;
        start=end;
        }
        
    }
    cout<<"Smallest Word from the string is : "<<min<<"\n";
    cout<<"largest Word from the string is  :"<<max<<"\n";
    return max,min;
}
int main()
{
    string n;
    cout<<"enter required string:\n";
    getline(cin,n);
    cout<<maxmin(n);
    cout<<"\n";
    return 0;

}