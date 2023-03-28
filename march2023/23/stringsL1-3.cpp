/**
 * @file stringL1-3.cpp
 *
 * @brief  Create an array of characters and then print the address of each of the elements of the array. 
Take difference of two consecutive addresses and compare this with array of integers.

 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;


int main()
{
    int t=0;
    char a[]={'b','c','d'};
    int b[10];
    char* s;
    int* p[3];
    cout<<a<<" ==\n";
    cout<<&a[0]<<" ==\n";
    printf( "You entered: %p %s\n ", a,a);
    printf("%p-%p=%d\n",a+1,a,((a+1)-a));
    printf("char [] %p-%p=%d\n",&a[1],&a[0],(&a[1]-&a[0]));
    printf("int* [] %p-%p=%d\n",&p[1],&p[0],(&p[1]-&p[0]));
    printf("int* [] %p-%p=%d\n",&p[1],&p[0],((long)&p[1]-(long)&p[0]));
    printf("int [] %p-%p=%d\n",&b[1],&b[0],(&b[1]-&b[0]));
    printf("int [] %p-%p=%d\n",&b[1],&b[0],((long)&b[1]-(long)&b[0]));
    cout<<(void*)(a+1)<<" - "<<(void*)(a+0)<<"="<<((char*)(a+1)-(char*)(a+0))<<"\n";
    cout<<"characters array address :";
    for (int i = 0; i < 3; i++)
    {
        p[i]= (int*)(a+i);
        cout<<(int*)(a+i)<<"  ";
    }
    cout<<"\n";
    cout<<"integer array address :";
    for (int i = 0; i < 3; i++)
    {
        cout<<(int*)(b+i)<<"  ";
    }

    cout<<"\n";
    cout<<p[0]<<"  "<<p[1]<<"  "<<p[2];
    cout<<"\n";
    

    return 0;

}