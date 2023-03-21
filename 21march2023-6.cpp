/**
 * @file 21march2023-6.cpp
 *
 * @brief  A person is elligible to vote if his/her age is greater than or equal to 18.
 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
int num(int x)
{
    if(x>=18)
    {
        cout<<x<<" years old person can vote"<<"\n";
        return x;
    }
    else
    cout<<x<<" years old person cannot vote"<<"\n";
    return x;
}
int main()
{
    int n;
    cout<<"enter any number\n";
    cin>>n;
    num(n);
    return 0;

}