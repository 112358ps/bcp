/**
 * @file 14march2023-1.cpp
 *
 * @brief addition and multiplication in array.

 *
 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
int func()
{
    int n;
    cin>>n;
    int sum = 0 ;
    int product = 1 ;
    int c[n];
    for (int i =0;i<n;i++)
    {
        cout<<"enter few numbers\n";
        cin>>c[i];
        sum = sum +c[i];
        product =c[i]*product;
    }
    cout <<sum<<"   "<<product<<"\n";
}
int main()
{
    func();
    return 0;
}