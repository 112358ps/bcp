//int x=5,y=6;
//swap x,y;
//cout<<x,y;
//==5,6;
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
     cout << "Before swapping x= " <<x<< " , y=" <<y << endl;
    int a;   
    a = x;
    x=y;
    y = a;
    cout << "After swapping x = " << x <<"  y=" << y << endl;
    
    
    return 0;

}