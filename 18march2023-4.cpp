/**
 * @file 18march2023-4.cpp
 *
 * @brief   Sort an array of integers in ascending order. 
 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
void inputarray(int n,int* y)
{
    cout<<"enter array values\n";
     for (int i = 0; i < n; i++)
    {
        cin>>*(y+i);
    }
}
int sort(int n,int* y)
{
  int temp=0;
  cout<<"internal changing:  ";
  for(int i = 0;i<n-1;i++)
  {
    for(int j = i+1;j<n;j++)
    {
      if(y[i]>y[j])
      {
        temp = y[i];
        y[i] = y[j];
        y[j] = temp;
      }
       cout<<y[j]<<" ";
    }
    cout<<y[i]<<" ";
  }
  cout<<" \n";
  cout<<"elements in ascending order\n";
  for (int i = 0; i < n; i++)
  {
    cout<<y[i]<<"  ";
  }
  cout<<"\n";
}
int main()
{
    int n,x;
    cin>>n;
    int y[n],o[n];
    inputarray(n,y);
    sort( n,y);
    
    
    return 0;

}