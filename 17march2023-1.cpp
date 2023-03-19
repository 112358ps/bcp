/**
 * @file 17march2023-1.cpp
 *
 * @brief  the array where the highest value get splitted into those two parts.
 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
void inputarray(int n,int* f)
{

    cout<<"void inputarray\n";
     for (int i = 0; i < n; i++)
    {
        cin>>*(f+i);
    }
}
int d(int n,int f[],int s[])
{
    int a=0,b,highest=f[0],secondhigher=f[0];
    for (int i = 0; i <n; i++)
    {
        if(highest<f[i])
        {
            highest=f[i];
            a=i;
        }
        if(f[i]<highest && f[i]>secondhigher)
        {
        secondhigher = f[i];
        }
    }
    cout<<"a="<<a<<"  "<<"highest = "<<highest<<"\n"<<"second higher = "<<secondhigher<<"\n";
    for (int k= 0,j=0; k < n&&j<=n; k++,j++)
    {
       
        if(k>=a)
        {
            s[k]=secondhigher;
            s[k+1]=highest-secondhigher;
            break;
        }
        s[j]=f[k];
    }
    for (int i = a+1,j= a+2; i < n&&j<=n; i++,j++)
    {
        s[j]=f[i];
    }
    
    for (int i = 0; i <= n; i++)
    {
        cout<<s[i]<<"   ";
    }
    cout<<"\n";
}
int main()
{
    int n,x;
    cin>>n;
    int f[n],s[n+1];
    inputarray(n,f);
    int highest=f[0];
    int secondhigher=f[0];
    
    d(n,f,s);
    
    return 0;

}