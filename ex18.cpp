//Odd or Even
#include <iostream>
using namespace std;

int main()
{
	int n;

	cout<<"Enter an integer\n";
	cin>>n;
	/* if n is completely divisible by 2 then print
	even otherwise n is odd */
	if(n%2==0)
		cout<<"Even\n";
	else
		cout<<"Odd\n";

	return 0;
}
