/**
 * @file 14march2023-1.cpp
 *
 * @brief Take 10 integer inputs from user and store them in an array and print them on screen.

 *
 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
int screen()
{
    int array[10];
    for (int i=0;i<10;i++)
    {
        cin>>array[i];
        cout<<array[i]<<"  ";
    }
    cout<<endl;
}

int main()
{
    screen();
    return 0;
}
