/**
 * @file 18march2023-7.cpp
 *
 * @brief  program to add and multiply two 3x3 matrices.

 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;


void inputarray(int n,void* t1,void* o1)
{
  int (*t)[n] = (int (*)[n]) t1;
  int (*o)[n] = (int (*)[n]) o1;
    cout<<"enter array t[n] elements\n";
     for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < n; j++)
       {
         cin>>t[i][j];
       }      
    }
    cout<<"enter array o[n] elements\n";
     for (int i = 0; i < n; i++)
    {
       for (int j = 0; j <n; j++)
       {
         cin>>o[i][j];
       } 
     }
}
int add(int n,void* t1,void* o1,void* r1)
{
  int (*t)[n] = (int (*)[n]) t1;
  int (*o)[n] = (int (*)[n]) o1;
  int (*r)[n] = (int (*)[n]) r1;
  cout<<"addition of 2 matrix is\n";
   for (int i = 0; i < n; i++)
      {
         for (int j = 0; j < n; j++)
         {
            r[i][j]=t[i][j]+o[i][j];
            cout<<r[i][j]<<" ";
         } cout<<"\n";
       
      }
}
int mull(int n,void* t1,void* o1,void* r1)
{
  int (*t)[n] = (int (*)[n]) t1;
  int (*o)[n] = (int (*)[n]) o1;
  int (*r)[n] = (int (*)[n]) r1;
  cout<<"multiplication of 2 matrix is\n";
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        int sum=0;
        for (int k = 0; k < n; k++)
        {
            sum=sum +t[i][k]*o[k][j];
        }
      r[i][j]=sum;
      cout<<r[i][j]<<" "; 
      }
        
      cout<<"\n";
       
    }
}
int main()
{
    int n,sum;
    cin>>n;
    int t[n][n],o[n][n],r[n][n];
// 
  inputarray(n,t,o);
  add(n,t,o,r);
  mull(n,t,o,r);
    
    return 0;

}