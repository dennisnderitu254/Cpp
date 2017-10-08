// Program that finds Armstrong number

#include <iostream>
using namespace std;

int main()
{
	int number,sum=0,temp,remainder;

	cout<<"Enter an Integer\n";
	cin>>number;

	temp = number;

	/* if sum of cubes of each digit in a number is same as the number then it is called as armstrong number*/

	while(temp!=0)
	{
		remainder=temp%10;
		sum=sum+remainder*remainder*remainder;
		temp=temp/10;
		// taking unit place digits cube and adding into sum 

	}

	if(number==sum)
		cout<<"Entered number is an armstrong number.\n";

	return 0;
} 