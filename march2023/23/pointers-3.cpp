/**
 * @file pointers-3.cpp
 *
 * @brief  Write a program to find out the greatest and the smallest among three numbers using pointers.
 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;

int greatest(int *x,int* y,int* z)
{
    int a;
    if((*x>*y)&&(*x>*z))
    {
        a=*x;
       
    }
    if((*y>*x)&&(*y>*z))
    {
        a=*y;
    }
    if((*z>*x)&&(*z>*y))
    {
        a=*z;
    }
    return a;
}
int main()
{
    int a,b,c;
    cout<<"enter any 3 numbers\n";
    cin>>a>>b>>c;
    cout<<"greatest number is : "<< greatest(&a,&b,&c)<<"\n";
    
    return 0;

}