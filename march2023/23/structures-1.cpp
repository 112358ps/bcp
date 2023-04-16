/**
 * @file sturctures-1.cpp
 *
 * @brief  Write a program to store and print the roll no., name , age and marks of a student using structures.

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
    int marks;
  };
  struct student p1 = {1,"Brown",14,78};
  cout << p1.roll_no << " " << p1.name << " " << p1.age << " " << p1.marks << "\n";
  return 0;
}