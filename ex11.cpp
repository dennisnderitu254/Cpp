// Nested if-Else

#include <iostream>
using namespace std;

void main()
{
	int marks;
	cout<<"Enter your marks:";
	cin>>marks

	if(marks>100)
		// mark greater than 100
		cout<<"Not valid marks";
	else if(marks>=80)
		// marks between 80 & 99
		cout<<"Your grade is A";
	else if(marks>=50)
		// marks between 50 & 69
		cout<<"Your grade is C";
	else if(marks>=35)
		//marks between 35 & 49
		cout<<"your grade is D";

	else
		// marks less than 35
		cout<<"Your grade is E";
}