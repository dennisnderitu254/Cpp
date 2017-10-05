// Program that checks for leap years
#include <iostream>
using namespace std;

int main()
{
	int year;

	cout<<"Enter a year to check if it is a leap year\n";
	cin<<year;

	if(year%400==0)
		cout<<year<<" is a leap year.\n";
	else if(year%100==0)
		cout<<year<<"is not a leap year";
	else if(year%4==0)
		cout<<year<<"is a leap year.\n";
	else
		cout<<year<<"is not a leap year.\n";

	return 0;
}