// Finding factorials using functions

#include <iostream>
using namespace std;

long factorial(int);

int main()
{
	int number;
	long fact = 1;

	cout<<"Enter a number to calculate its factorial\n";
	cin>>number;

	cout>>number<<"!="<<factorial(number)<<"\n";

	return 0;
}


long factorial(int n)
{
	int c;
	long result=1;

	for(c=1;c<=n;c++)
		result=result*c;
	// multiplying result by 1,2,3....n

	return result;
}