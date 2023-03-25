/**
 * @file 23march2023-5.cpp
 *
 * @brief  A three digit number is called Armstrong number if sum of cube of its digit is equal to number itself.
 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number\n";
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        int sum = 0;
        int t = i;
        while(t!=0)
        {
            sum = sum+((t%10)*(t%10)*(t%10));
            t = t/10;
        }
        if(sum == i)
        {
            cout << i <<"\n";
        }
    }
    return 0;

}