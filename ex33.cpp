// Generating Armstrong number

#include <iostream>
using namespace std;

int main()
{
	int r;
	long number=0,c,sum=0,temp;

	cout<<"Enter an integer up to which you want to find armstrong numbers\n";
	cin>>number;

	cout<<"Following armstrong numbers are found from 1 to "<<number<<"\n";

	/* if sum of cubes of each digit in a number is same as the number then it is called as armstrong no.*/

	for(c=1;c<=number;c++)
	{
		temp=c;

		while(temp!=0)
		{
			r=temp%10;
			sum=sum+r*r*r;
			temp=temp/10;
			/* taking unit place digits cube and then adding the sum*/
		}

		if(c==sum)
			cout<<c<<"\n";
		// If no is Armstrong no. then print

		sum=0;
	}

	return 0;
}
