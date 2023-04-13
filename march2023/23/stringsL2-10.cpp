/**
 * @file stringsL2-9.cpp
 *
 * @brief Write a program to reverse individual words in a string,
 w     here each word may be delimited by a dot, comma, space or tab, like www.google.com should become www.elgoog.moc.

 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
string reverse(string o)
{
    string p;
    int present=0,j=0,k,end=0;
    for (int i = 0; i <=o.length(); i++)
    {
        k=0;
        if ((o[i]==' ')||(o[i]==',')||(o[i]=='.')||(o[i]=='\0'))
        {
            present=i;
            p=o.substr(j,present-j);
            end=p.length();
            cout<<(p=o.substr(j,present-j))<<"\n";
        //    o[i]=p[p.length()-k];
        //    k++;
        }
        j=present+1;
    }
    cout<<"\n";
    for (int i = 0; i < o.length(); i++)
    {
        cout<<o[i];
    }
    cout<<"\n";
    return p;
}
int main()
{
    string o="www.google.com";
    // cout<<"enter required string:\n";
    // getline(cin,o);
    reverse(o);
    
    return 0;

}