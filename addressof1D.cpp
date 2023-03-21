/**
 * @file 18march2023-5.cpp
 *
 * @brief  sum of the digits of the number using a recursive function. 
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
int address(int n,int* y)
{
    for (int i = 0; i <n; i++)
    {
        cout<<"y[i]="<<y[i]<<"\n";
        cout<<"i="<<i<<" , &y[i]="<<&y[i]<<"\n";
    }
    

}

int main()
{
    int n,x=0;
    cin>>n;
    int y[n],o[n];
    inputarray(n,y);
    address(n,y);
    return 0;

}