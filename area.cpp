// include <math.h>
#include <iostream>
using namespace std;
#define pie 3.14

int main()
{
   double radius;
   cout<<"Enter radius"<<endl;
   cin>>radius;
   // cout<<"The area:"<<(pie*pow(radius,2));
   cout<<"The area:"<<(pie*radius*radius);
   return 0;

}
