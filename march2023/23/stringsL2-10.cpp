/**
 * @file stringsL2-10.cpp
 *
 * @brief Write a program to reverse individual words in a string,
    here each word may be delimited by a dot, comma, space or tab, like www.google.com should become www.elgoog.moc.

 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
string r(string a)
{
    int n=a.length();
    for (int i = 0; i < n/2; i++)
    {
        char temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
    return a;
}
string reverse(string o)
{
    string s="";
    int present=0,j=0,k,end=0;
    for (int i = 0; i <=o.length(); i++)
    {
        k=0;
        if ((o[i]==' ')||(o[i]==',')||(o[i]=='.')||(o[i]=='\0'))
        {
            string p=o.substr(j,i-j);
            j=i+1;
            s=s+r(p)+o[i];
        }
    }
    cout<<"\n";
    
    return s;
}
int main()
{
    string o;
    cout<<"enter required string:\n";
    getline(cin,o);
    cout<<reverse(o)<<"\n";
    return 0;

}