/**
 * @file sturctures-2.cpp
 *
 * @brief .Write a program to store the roll no. (starting from 1), 
    name and age of 5 students and then print the details of the student with roll no. 2.

 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
int main()
{
  struct student
  {
    int roll_no;
    string name;
    int age;
  };
  struct student s[5];
  cout<<"enter 5 students details in series of roll no,name,age\n";
  for (int i = 0; i < 5; i++)
  {
    
  cin>>s[i].roll_no;
  cin>>s[i].name;
  cin>>s[i].age;
  }
  for (int i = 0; i < 5; i++)
  {
    cout<<s[i].roll_no<<"."<<s[i].name<<" - "<<s[i].age<<"\n";
  }
  return 0;
}
