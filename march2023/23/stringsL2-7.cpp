/**
 * @file stringsL2-7.cpp
 *
 * @brief  a program to check if the two strings entered by user are anagrams or not.
 *  Two words are said to be anagrams if the letters of one word can be rearranged to form the other word.
 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
int main()
{
    string n,m;
    cout<<"enter required string1:\n";
    cin>>n;
    cout<<"enter required string2:\n";
    cin>>m;
    bool anagram=true;
    if (n.length()!=m.length())
    {
        cout<<"two strings are not anagrams\n";
        anagram=false;
    }
    else
    {
        for (int i = 0; i < n.length(); i++)
        {
            bool found=false;
            for (int j = 0; j < m.length(); j++)
            {
                if (n[i]==m[j])
                {
                    m[j]=' ';
                    found =true;
                    break;
                }
            }
            if (!found)
            {
                anagram=false;
                cout<<"two strings are not anagrams\n";
                break;
            }
        }
    }
    cout<<anagram<<"\n";
    if (anagram==true)
    {
       cout<<"2 strings are anagrams\n";
    }
    
    return 0;

}