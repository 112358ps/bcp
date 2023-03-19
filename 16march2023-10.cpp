/**
 * @file 16march2023-10.cpp
 *
 * @brief pair of elements that has the maximum and minimum difference among all element pairs.
 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
/*2147483647
0
0 1 2 3 4
0x7ffcb2d3e870    $$   0  i=0
0x7ffcb2d3e874    $$   1  i=1
0x7ffcb2d3e878    $$   2  i=2
0x7ffcb2d3e87c    $$   3  i=3
0x7ffcb2d3e880    $$   4  i=4


*/
// void takeinputviaptr(int n,int* variablethatstoresArrayaddress)
// {
//     for (int i = 0; i < n; i++)
//     {
//        cin>>*(variablethatstoresArrayaddress+i);
       
//     }
// }
// void takeinput(int n,int a[])//int a[]=== int[] a
// {
//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];//*(a+i);
//     }
//     cout<<a<<"  "<<&a[0]<<"\n";
// }
void input(int n,int* a)
{
     for (int i = 0; i < n; i++)
    {
        cin>>*(a+i);
    }
}
int difference(int n ,int a[])
{
    
    int z=0;
    
    int b[n*(n-1)/2];
    int smallest =2147483647;
    int largest =0;
    cout<<smallest<<"\n"<<largest<<"\n";
    for(int i=0;i<=(n-2);i++){

        for ( int j = i+1; j < n; j++)
        {
            cout<<a[i]<<"  -  "<<a[j]<<"  " <<j<<"  ,  "<<i<<" => "<<"\n";
            int temp =a[i]-a[j];
            if(temp<0){
                temp=temp*(-1);
            }
            b[z]= temp;
            cout<<b[z]<<"  "<<z<<"\n";
            
            if(smallest>b[z])
            {
                smallest =b[z];
            }
            if(largest<b[z])
            {
                largest = b[z];
            }z++;
        }
        cout<<"--------------------------------------------------------------\n";
        
    }
   
    cout<<smallest<<"\n"<<largest<<"\n";
    cout<<"largest  - "<<largest<<"\n"<<"smallest - "<<smallest<<"\n";
} 
   
int main()
{
    int n;
    cin>>n;
    int a[n];
    input(n,a);
   // int b[3]={1,2,9};
    difference(n,a);
    //difference(3,b);
    return 0;
}