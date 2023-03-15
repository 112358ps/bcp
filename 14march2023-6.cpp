/**
 * @file 14march2023-6.cpp
 *
 * @brief simple 2d array.
 *
 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
int twoD()
{
    int a;
    int b;
    cout<<"enter any 2 number\n";
    cin>>a>>b;
    int x[a][b];
    for (int i =0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            cout<<"enter numbers\n";
           cin>>x[i][j];
           cout<<x[i][j]<<"   ";
        }cout<<"\n";
    }
}
int main()
{
    twoD();
    return 0;
}