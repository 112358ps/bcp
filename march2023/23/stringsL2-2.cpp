/**
 * @file stringsL2-2.cpp
 *
 * @brief  a program to find the length of a string without using predefined functions. 
 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
int main()
{
    string n;
    int m;
    cout<<"enter required string\n";
    getline(cin,n);
    for (int i = 0; n[i]!= '\0'; i++)
    {
        m=i;
    }    
    printf("%d is length of the string\n",m);
    return 0;

}