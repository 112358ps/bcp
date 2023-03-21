/**
 * @file addressof2D.cpp
 *
 * @brief  address of each element in 2d array. 
 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
void inputarray(int n,int m,void* y1)
{
    int (*y)[n] = (int (*)[n]) y1;
    cout<<"void inputarray\n";
    for (int i = 0; i < n; i++)
    {   
        for (int j = 0; j < m; j++)
        {
            cin>>y[i][j];
        }
    }
}
int address(int n,int m,void* y1)
{
    int (*y)[n] = (int (*)[n]) y1;
    for (int i = 0; i <n; i++)
    {for (int j = 0; j < m; j++)
    {
        cout<<"y[i][j]="<<y[i][j]<<"\n";
        cout<<"i="<<i<<" , j="<<j<<" , &y[i][j]="<<&y[i][j]<<"\n";
    }
    }
}
int findingaddress(int x,int y,int n,void* h1)
{
    int (*h)[n] = (int (*)[n]) h1;
    cout<<"array element address:";
    cout<<"x="<<x<<" ,y="<<y<<" ,&h[x][y]="<<&h[x][y]<<"\n";
}

int main()
{
    int n,m;
    cin>>n>>m;
    int y[n];
    inputarray(n,m,y);
    address(n,m,y);
    int a,b;
    cin>>a>>b;
    int h[n];
    findingaddress( a,b, n, h);
    return 0;

}