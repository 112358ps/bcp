/**
 * @file stringsL1-5.cpp
 *
 * @brief  program to  to check if the letter 'e' is present in the word 'Umbrella'.
 * a program to check if the word 'orange' is present in the "This is orange juice".
 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;


int main()
{
    string u="umbrella",n="This is orange juice",m="orange",o;
    for (int i = 0; i <u.length();i++)
    {
        if (u[i]=='e')
        {
            cout<<"there is e in 1st string\n ";
        }
    }
    for (int j = 0; j <(n.length()-m.length())+1 ; j++)
    {
        o = n.substr(j,m.length());
        if (m==o)
        {
            cout<<"there is orange in 2nd string\n";
            break;
        }
    }
    
    return 0;
}