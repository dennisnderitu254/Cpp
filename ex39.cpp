// Print Pattern
#include <iostream>
using namespace std;

int main()
{
	int row,c,n,temp;

	cout<<"Enter the number of rows in pyramid of stars you wish to see";
	cin>>n;

	temp=n;

	for(row=1;row<=n;row++)
	{
		for(c=1;c<temp;c++)
			cout<<" ";
		// leaving spaces before printing
		temp--;

		for(c=1;c<=2*row-1;c++)
			cout<<"*";
		// printing stars by calculating rows

		cout<<"\n";
	}

	return 0;
}