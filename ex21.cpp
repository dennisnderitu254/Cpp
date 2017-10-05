// Swapping Two Numbers

#include <iostream>
using namespace std;

int main()
{
	int x,y,temp;

	cout<<"Enter the value of x and y \n";
	cin>>x>>y;

	cout<<"Before Swapping\n x="<<x<<"\ny ="<<y<<"\n";

	temp=x;
	x=y;
	y=temp;
	/* Using temp to swap storing x to temp and y then
	moving temp to y */

	cout<<"After Swapping\nx ="<<x<<"\ny ="<<y<<"\n";

	return 0;
}
