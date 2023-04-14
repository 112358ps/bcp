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

string replace(string a,string c,string d)
{
    int f=(d.length()-c.length()),j=0;
    for (int i = 0; i <= a.length();)
    {
        int ii=i;
        while (a[ii]==c[j]&&(j<c.length())&&(ii<a.length()))
        {
            j++;
            ii++;
        }
        if (j==c.length())
        {
            for (int iii = 0; iii < c.length(); iii++)
            {
                a[iii+i]=d[iii];
            }
            
            a.insert(i+c.length(), 1, d[d.length()-1]);
            i=i+d.length();
        }
        else
        {
            i=i+1;

        }
        j=0;
        
    }
    return a;
}

int main()
{
    string m,n,o;
    
    cout<<"enter required string:\n";
    getline(cin,m);
    cout<<"enter string word 'n'to replace it with another word 'o '\n";
    cin>>n>>o;
    cout<<replace(m,n,o)<<"\n";
    return 0;

}