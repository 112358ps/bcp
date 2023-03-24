/**
 * @file 22march2023-6.cpp
 *
 * @brief   a program that to calculate your tax .
 * 

 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
int min(int a,int b)
{
    if(a>b)
    {
        return b;
    }
    else
    return a;
}
int taxCalculator(int salary,int saving)
{
    int a,b=0,c=0,e=0,tax=0;
    a=salary-min(saving,100000);
    b=a;
    if(a<=100000)
    {
        cout<<"no tax\n";
        return 0;
    }
    
    if((a>100000)&&(a<200000))
    {
        tax=(a-100000)*10/100;
        
      
    }
    if((a>200000)&&(a<500000))
    {
        tax=(100000*10/100)+(a-200000)*20/100;
        
    }
    if(a>=500000)
    {
        tax=(100000*10/100)+(a-500000)*30/100+(300000*20/100);
        cout<<"\n";
    }
    return tax;
}

int main()
{
    int n,m;
    cout<<"enter gross salary and total saving  \n";
    cin>>n>>m;
    cout<<taxCalculator(n,m)<<"\n";
    return 0;

}