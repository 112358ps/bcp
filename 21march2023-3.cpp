/**
 * @file 21march2023-3.cpp
 *
 * @brief  program to print the circumference and area of a circle of radius entered by user by defining your own function.
 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
double circle(int r)
{
    double p,a;
    p=2*3.14*r;
    cout << "Perimeter : "<<2*3.14*r<<"\n";
    a=3.14*r*r;
    cout << "Area : "<<3.14*r*r<<"\n";
    return 0;
}

int main()
{
    int n;
    cout<<"enter any number\n";
    cin>>n;
    circle(n);
    return 0;

}