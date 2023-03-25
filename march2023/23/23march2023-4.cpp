/**
 * @file 23march2023-4.cpp
 *
 * @brief Write a program to check whether a entered character is lowercase ( a to z ) or uppercase ( A to Z ).
 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
void check(char ch)
{
  
    if (ch >= 'A' && ch <= 'Z')
        cout << ch << " is an UpperCase character\n";
  
    else if (ch >= 'a' && ch <= 'z')
        cout << ch << " is an LowerCase character\n";
  
    else
        cout << ch << " is not an alphabetic character\n";
}
  

int main()
{
    char s;
    cout<<"enter any character\n";
    cin>>s;
    check(s);
    return 0;

}