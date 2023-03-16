/**
 * @file 14march2023-3.cpp
 *
 * @brief 

 *
 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
int array(){
    int r[20];
    int positivenum =0 ;
    int negativenum=0;
    int zeroes= 0;
    int oddnum=0;
    int evennum=0;
    for(int i=0;i<20;i++)
    {
        cout<<"enter any 20 numbers\n";
        cin>>r[i];
        if(r[i]>0){
            positivenum++;
        }
        else if(r[i]<0)
        {
            negativenum++;
        }
        else{
            zeroes++;
        }
        if(r[i]%2 == 0)
        {
            evennum++;

        }else{
            oddnum++;
        }
    }
    cout<<positivenum<<"-+numbers \n"<<negativenum<<" -ve numbers\n"<<zeroes<<" noof zeroes\n"<<oddnum<<"  odd numbers\n"<<evennum<<"  even numbers\n";
    return 0;
}
int main()
{
    array ();
return 0;
}
