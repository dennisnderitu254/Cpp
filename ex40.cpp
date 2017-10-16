// Diamond Pattern

#include <iostream>
using namespace std;

int main()
{
	int n,c,k,space=1;

	cout<<"Enter number of rows\n";
	cin>>n;

	space=n-1;
	// Here we will divide diamond in 2 parts: Upper and lower

	// Printing upper part

	for(k=1;k<=n;k++)
	{
		for(c=1;c<=space;c++)
			cout<<" ";
		// leaving space before printing

		space--;

		for(c=1;c<=2*k-1;c++)
			cout<<"*";
		// Printing * by calculating row no.

		cout<<"\n";
	}

	space = 1;

	// Printing lower part

	for(k=1;k<=n;k++)
	{
		for(c=1;c<=space;c++)
			cout<<" ";

		space++;

		for(c=1;c<=2*(n-k)-1;c++)
			cout<<"*";

		cout<<"\n";
	}

	return 0;
}
