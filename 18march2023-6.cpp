/**
 * @file 18march2023-6.cpp
 *
 * @brief  Pass a 2D array to function and access all its elements. 
 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
void inputarray(int n,int m,void* p1)
{
    int (*p)[n] = (int (*)[n]) p1;
    cout<<"void inputarray\n";
    for (int i = 0; i < n; i++)
    {   
        for (int j = 0; j < n; j++)
        {
            cin>>p[i][j];
        }
    }
}
void outputarray(int n,int m,void* p1)
{
    int (*p)[n] = (int (*)[n]) p1;
    cout<<"void inputarray\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<p[i][j]<<"  ";
        }
        cout<<"\n";
    }
}

int main()
{
    int n,m;
    cin>>n>>m;
    int p[n][m];
    inputarray(n,m,p);
    outputarray(n,m,p);
    return 0;

}