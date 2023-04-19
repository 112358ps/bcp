/**
 * @file sturctures-5.cpp
 *
 * @brief    Enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100)
        using a structure named Marks having elements roll no., name, chem_marks, maths_marks and phy_marks and then 
        display the percentage of each student.
6.
 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
struct marks
{
  int roll_no;
  string name;
  int chem_marks;
  int maths_marks;
  int phy_marks;
};
int main()
{
  struct marks stud[1];
  double percentage[1];
  cout<<" enter required data of roll no , name , chemistry marks , maths marks , physics marks\n";
  for (int i = 0; i < 3; i++)
  {
    cin>>stud[i].roll_no;
    cin>>stud[i].name;
    cin>>stud[i].chem_marks;
    cin>>stud[i].maths_marks;
    cin>>stud[i].phy_marks;
  }
  for (int i = 0; i < 3; i++)
  {
    percentage[i]=(stud[i].chem_marks+stud[i].maths_marks+stud[i].phy_marks)/3;
  }
  for (int i = 1; i <=3; i++)
  {
    cout<<i<<" . "<<percentage[i]<<"\n";
  }
  return 0;
}
