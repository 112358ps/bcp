/**
 * @file 17march2023-3.cpp
 *
 * @brief   2D array of 3*3 matrix. 
 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
void inputarray()
{
    int n, m;
    cin>>n>>m;
    int y[n][m];
    cout<<"void inputarray(int n,int* a)\n";
    for (int k= 0;k<m*n; k++)
    {
        int j=k%m;
        int i=k/m;
        cout<<"k="<<k<<"  "<<"i="<<i<<"   j="<<j<<"  n="<<n<<"  m="<<m<<" condition="<<((i < n)&&(j<m))<<"\n";
         cin>>y[i][j];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
        cout<<y[i][j]<<"  ";

        }
        cout<<"\n";
    }
}

int main()
{
    inputarray();
    
    return 0;

}