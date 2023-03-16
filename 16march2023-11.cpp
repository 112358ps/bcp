/**
 * @file 16march2023-11.cpp
 *
 * @brief the subarray lies between the indexes .
 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
int array()
{
    int n,a,b;
    cout<<"enter number of elements\n"<<"enter subarray indexes (a ,b)\n ";
    cin>>n>>a>>b;
    int d[n],f[(b-a)-1];
    for (int i = 0; i < n; i++)
    {
        cout<<"enter elements\n";
        cin>>d[i];
    }
    for (int j = 0,i=0; i<n&&j < (b-a)-1; i++)
    {
         if(a<i&& i<b)
         {
            f[j]=d[i];
            cout<<f[j]<<"  ";
            j++;

         }
    }cout<<"\n";
}
int main()
{
    array();
    return 0;
}