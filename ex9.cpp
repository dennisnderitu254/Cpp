#include <iostream>
using namespace std;

int main()
{
	// local variable declaration

	int a = 10;
	int b = 20;
	int c = 15;

	//check for condition

	if(a<c)
	{
		// if condition is true then check the following
		if(b>c)
		{
			cout<<"Value of c is greater than a but less than b"<<endl;
		}
	}

	cout <<"Value of a is:"<<a<<endl;
	cout <<"Value of a is:"<<b<<endl;
	cout <<"Value of a is:"<<c<<endl;

	return 0;

}

