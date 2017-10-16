// Fibonacci series using loop

#include <iostream>
using namespace std;

int main()
{
	int n, first=0,second=1,next,c;

	cout<<"Enter the number of terms\n";
	cin>>n;

	cout<<"First"<<n<<"Terms of the fibonacci series are:-\n";

	for(c=0;c<n;c++)
	{
		if(c<=1)
			next=c;
		else
		{
			next=first+second;
			first=second;
			second=next;
			/*replaced first no by second & second by addition of first & second*/
		}

		cout<<next<<"\n";
	}

	return 0;
}