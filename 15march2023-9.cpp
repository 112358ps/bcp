/**
 * @file 15march2023-9.cpp
 *
 * @brief split it into middle and store the elements in two dfferent arrays. 
 *
 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
int store()
{

    int c,a;
    cout<<"enter number\n";
    cin>>c;
    int z[c];
    for(int i =0 ; i<c; i++)
    {
        cout<<"enter elements \n";
        cin>>z[i];
    }
    a= c/2;
    int b=c-a;
    int x[a],y[b];
    cout<<"splitted array 1 is \n";

    for (int  i = 0; i < a; i++)
    {
        x[i]=z[i];
        cout<<x[i]<<"   ";
    }cout<<"\n";
    cout<<"splitted array 2 is \n";
    for (int i = a,j=0; i < c&&j<a; i++,j++)
    {
        y[j]= z[i];
        cout<<y[j]<<"   ";
    }
    cout<<"\n";
    
}

int main()
{

    store();
    return 0;
}
