// Add digits in C++

#include <iostream>
using namespace std;

int main()
{
	int n,sum=0,remainder;

	cout<<"Enter an Integer\n";
	cin>>n;

	while(n!=0)
	{
		remainder=n%10;
		// stores unit place digit to remainder
		sum=sum+remainder;
		n=n/10;
		// Dividing no to discard unit place digit
	}

	cout<<"Sum of digits of entered number = \n"<<sum<<endl;

	return 0;
}
