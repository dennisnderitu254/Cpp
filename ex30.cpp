// Program that checks a palindrome number

#include <iostream>
using namespace std;

int main()
{
	int n,reverse=0,temp;

	cout<<"Enter a number to check if it is a palindrome or not\n";
	cin>;>;n;

	temp = n;

	while(temp!=0)
	{
		reverse=reverse*10;
		reverse=reverse+temp%10;
		temp=temp/10;
	}
	/* Taking reverse of the given No. see reverse No program */

	if(n==reverse)
		//If reverse is same as n
		cout<<n<<"is a palindrome number.\n";
	else
		cout<<n<<"is not a palindrome number.\n";

	return 0;
}
