/**
 * @file stringL1-4.cpp
 *
 * @brief  program to enter a string s1 and copy it to another string s2.
 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;


int main()
{
    string s1,s2,s3,s4;
    cout<<"enter string 1\n";
    cin>>s1;
    s2=s1;
    cout<<s2<<"\n";
    cout<<s2.substr(3)<<"\n";
    cout<<"enter string 3:\n";
    cin>>s3;
    getline(cin,s4);
    cout<<"s4="<<s4<<"\n";
    cout<<"s3="<<s3;//<<"\n";
    
    return 0;

}