/**
 * @file 14march2023-2.cpp
 *
 * @brief In taken 10 numbers checking wheather the new input number exists or not.

 *
 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
int main()
{
    int num[10],x=0;
    for(int i=0;i<10;i++)
    {
        cout << "Enter a number\n";
        cin >> num[i];
    }
    cout << "enter any number\n";
    int n;
    cin>>n;
     for(int i=0;i<10;i++)
        {
          if(num[i] == n )
            {
                cout <<" exists\n";
                break ;
            }
           x++;
        }
        if(x==10)
        {
            cout<<"try again\n";
        }
        
    return 0;
}
