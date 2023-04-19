/**
 * @file sturctures-3.cpp
 *
 * @brief Write a program to store and print the roll no., name, age, address and marks of 15 students using structure.

 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;

struct student
  {
    int roll_no;
    string name;
    int age;
    struct address
    {
      string house_no;
      string street;
      string state;
      string country;
    }add;
    int mark;
  };

int main()
{
  
  struct student s[3];
  cout<<"enter 3 students details in series of roll no,name,age\n";
  for (int i = 0; i < 3; i++)
  {
    
  cin>>s[i].roll_no;
  cin>>s[i].name;
  cin>>s[i].age;
  cin>>s[i].add.house_no;
  cin>>s[i].add.street;
  cin>>s[i].add.state;
  cin>>s[i].add.country;
  cin>>s[i].mark;
  }
  cout<<"-----------------------------------------------------------------------\n";
  cout<<"roll no | name |  age | house no | street | state | country | mark\n";
  for (int i = 0; i < 3; i++)
  {
    cout<<s[i].roll_no<<"."<<s[i].name<<" - "<<s[i].age<<" - ";
    cout<<s[i].add.house_no<<","<<s[i].add.street<<",";
    cout<<s[i].add.state<<"-"<<s[i].add.country<<" - "<<s[i].mark<<"\n";
  }
  return 0;
}
