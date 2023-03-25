/**
 * @file pointers-1.cpp
 *
 * @brief  print the address of a variable whose value is input from user.
 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
int* address(int x)
{
    int* a= &x;
    return a;
}

int main()
{
    int n;
    cout<<"enter any number\n";
    cin>>n;
    cout<<address(n)<<"\n";
    return 0;

}