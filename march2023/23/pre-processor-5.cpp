/**
 * @file pre-processor-5.cpp
 *
 * @brief  write a macro to calculate simple interest from principal, rate of interest and time.

 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
#define SI(p,t,r) ((p*t*r)/100);
int main()
{
    int a,b,c;
    cout<<"enter principal, rate of interest and time\n";
    cin>>a>>b>>c;
    cout<<"simple interesest ="<<SI(a,b,c);
    cout<<endl;
    
    return 0;

}