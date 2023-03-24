/**
 * @file 23march2023-1.cpp
 *
 * @brief  print star from 1 to n in triangle .
 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
int triangle(int x)
{
   for(int i = 0;2*i< (x-1) ;i++)
  {
    for(int j = 0;j< ((x/2)-i) ;j++)
    {
        cout<<"  ";
    }

    for(int j = 0;j< (2*i+1) ;j++)
    {
        cout<<"* ";
    }
    cout<<"\n";
  }  
    for(int i =0;2*i< x;i++)
    {
        for(int j = 0;j<i;j++)
        {
            cout<<"  ";
        }
        for(int j = 0;j<(x-(2*i));j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}
int inverted_triangle(int x)
{

    for (int i = x; i >= 0; i--)
    {
        for (int j = 0; j<i; j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
        
    }
    

}
int right_angle_triangle(int x)
{
   for (int i = 0; i < x; i++)
   {
        for (int j = 0; j <= i; j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
   }
   cout<<"\n";
    return 0;
}

int main()
{
    int n,a=1;
    cout<<"enter any number\n";
    cin>>n;
    inverted_triangle(n);
    right_angle_triangle(n);
    triangle(n);
    return 0;

}