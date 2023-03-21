/**
 * @file 21march2023-8.cpp
 *
 * @brief a program which will ask the user to enter his/her marks.
 * Define a function that will display grades according to the marks entered
 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
int marks(int x)
{  
    if((91<=x)&&(x<=100))
    {
        cout<<"AA\n";;
    }
     if((81<=x)&&(x<=90))
    {
        cout<<"AB\n";;
    }
     if((71<=x)&&(x<=80))
    {
        cout<<"BB\n";;
    }
     if((61<=x)&&(x<=70))
    {
        cout<<"BC\n";;
    }
     if((51<=x)&&(x<=60))
    {
        cout<<"CD\n";;
    }
     if((41<=x)&&(x<=50))
    {
        cout<<"DD\n";;
    }
    if(x<=40)
    {
        cout<<"fail\n";;
    }
    return 0;
}

int main()
{
    int n;
    cout<<"enter your mark for 100 \n";
    cin>>n;
    marks(n);
    return 0;

}