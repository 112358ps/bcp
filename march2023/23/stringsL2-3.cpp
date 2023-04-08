/**
 * @file stringsL2-3.cpp
 *
 * @brief  Check the occurrence of the letter 'e' and the word 'is' in the sentence "This is umbrella" without using predefined functions. 
 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
int main()
{
    string n,m;
    int i,j;
    cout<<"enter required string\n";
    getline(cin,n);
    cout<<"enter substring with before and after spaces\n";
     getline(cin,m);
    
    for (i = 0; n[i]!=NULL; i++)
    {
        if ((n[i]=='e')||(n[i]=='E'))
        {
            printf("e is present in this string\n");
        }
        for (j = 0; n[j]!=NULL ; j++)
        {
            if (n[i+j]!=m[j])
            {
                break;
            }
            if (j==3)
        {
            cout<<i+1<<" is index in input string\n";
        }
        }
        
    }       
    return 0;

}