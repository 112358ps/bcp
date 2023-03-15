/**
 * @file 15march2023-7.cpp
 *
 * @brief largest and smallest numbers.
 *
 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
int array()
{
    int n;
    cout<<"enter any number\n";
    cin>>n;
    int v[n];
    for (int  i = 0; i < n; i++)
    {
        cout<<"enter array values\n";
        cin>>v[i];
        cout<<v[i]<<"\n";
    }
    
    int smallest =v[0];
    int largest =v[0];
    for(int i =0 ;i<n;i++)
    {
        
        if(smallest>v[i])
        {
            smallest =v[i];
        }
        if(largest<v[i])
        {
            largest = v[i];
        }
    }
    
    cout<<"largest  - "<<largest<<"\n"<<"smallest - "<<smallest<<"\n";
}
int main()
{
    array();
    return 0;
}