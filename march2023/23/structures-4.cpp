/**
 * @file sturctures-4.cpp
 *
 * @brief  Write a program to add two distances in inch-feet using structure. The values of the distances is to be taken from the user.

 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
struct distance
{
  int inch;
  int feet;
};
int main()
{
  struct distance a,b,c;
  int x;
  cout<<"enter required number\n";
  cin>>a.inch;
  cin>>a.feet;
  cin>>b.inch;
  cin>>b.feet;
  c.inch=a.inch+b.inch;
  if (c.inch>=12)
  {
    x=c.inch/12;
    c.inch=c.inch%12;
    c.feet=a.feet+b.feet+x;
  }
  else
  {
    c.feet=a.feet+b.feet;
  }
  cout<<"c.inch="<<c.inch<<", c.feet="<<c.feet<<"\n";

  return 0;
}
