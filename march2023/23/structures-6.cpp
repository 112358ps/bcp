/**
 * @file sturctures-6.cpp
 *
 * @brief  Write a program to add, subtract and multiply two complex numbers using structures to function.

 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;

struct cN
{
  int rP; //real part of complexNumber
  char i= 'i';
  int iP; // imaginary part of CN
  bool operator==(cN a) const
  {
    if(a.rP==rP && a.iP== iP)
    return true;
    else 
    return false;
  }
};

void print(cN a){ 
  cout<<a.rP<< " + " << a.iP<< a.i<<"\n";
}


void print0(cN a){ // pass by value
  a.rP = 0;
  cout<<a.rP<< " + " << a.iP<< a.i<<"\n";

}

void print1(cN& a){ // pass by reference
  a.rP = 1;
  cout<<a.rP<< " + " << a.iP<< a.i<<"\n";
}

void print2(cN* a){
  a->iP = 2;
  cout<<(*a).rP<< " + " << a->iP<< a->i<<"\n";
}

void test(cN a){
  print(a);
  print0(a);
  print(a);
  print1(a);
  print(a);
  print2(&a);
  print(a);
}

cN add(cN a,cN b)
{
  cN c;
  c.rP=a.rP+b.rP;
  c.iP=a.iP+b.iP;
  return c;
}
cN subtract(cN a,cN b)
{
  cN c;
  c.rP=a.rP-b.rP;
  c.iP=a.iP-b.iP;
  return c;
}
cN multiply(cN a,cN b)
{
  cN c;
  c.rP=(a.rP*b.rP)-(a.iP*b.iP);
  c.iP=(a.rP*b.rP)+(a.iP*b.rP);
  return c;
}
int main()
{
    cN a,x,y;
    a.rP=4;
    a.iP=5;
    x.rP=3;
    x.iP=4;
    y.rP=4;
    y.iP=5;
    cout<<(a==x)<<"\n";
    cout<<(a==y)<<"\n";
    cout<<"addition: ";
    print(add(x,y));
    cout<<"subtraction: ";
    print(subtract(x,y));
    cout<<"multiply: ";
    print(multiply(x,y));
  return 0;
}
