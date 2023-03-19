/**
 * @file 17march2023-2.cpp
 *
 * @brief   program to shift every element of an array to circularly right
 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
void inputarray(int n,int* y)
{

    cout<<"void inputarray(int n,int* a)\n";
     for (int i = 0; i < n; i++)
    {
        cin>>*(y+i);
    }
}
int shift_elementsby1(int n,int* y)
{
    int temp=*(y+0);
    for (int i = 0; i < n-1; i++)
    {
        *(y+i)=*(y+i+1);
    }
    *(y+n-1)=temp; 
}
int shifting_elements(int n,int* y,int* o)
{
    for (int i = 0; i < n; i++)
    {
        cout<<i<<" - "<<*(y+i)<<"\n";
    }
    int x;
    cin>>x;
    x=x%n;
    for (int i=0,j=x; i < n && j<n ; i++,j++)
    {
        *(o+j)=*(y+i);
        cout<<o[j]<<"   j  "<<j<<"----"<<y[i]<<"\n";
    }

            for (int k = 0,i=n-x; k<x&&i<n; k++,i++)
            {
                *(o+k)=*(y+i);
                cout<<"k="<<k<<"  "<<"i="<<i<<"  "<<"o[k]"<<*(o+k)<<"   "<<"   y[i]"<<y[i]<<"\n";
                
            }
    for (int i = 0; i < n; i++)
    {
        cout<<"o[i]"<<"----"<<i<<"---"<<o[i]<<"\n";
    }
     cout<<"\n";

}

int main()
{
    int n,x;
    cin>>n;
    int y[n],o[n];
    inputarray(n,y);
    shifting_elements(n,y,o);
    
    return 0;

}