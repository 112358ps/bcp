/**
 * @file pre-processor-1.cpp
 *
 * @brief  Write a macro to calculate area and perimeter of a rectangle.

 * @author 112358ps
 *
 */
#include<iostream>
using namespace std;
#define area(length,breadth) (length*breadth)
#define perimeter(length,breadth) (2*(length+breadth))
int main()
{
  cout << "Area is "<<area(5,2)<<"\nperimeter is "<<perimeter(5,2)<<".\n";
  return 0;
}
