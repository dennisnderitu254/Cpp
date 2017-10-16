// Decimal to Binary

#include <iostream>
using namespace std;

int main()
{
	long num,decimal_num,remainder,base=1,binary=0;

	cout<<"Enter a decimal integer\n";
	cin>>num;

	decimal_num = num;

	while(num > 0)
	{
		remainder=num % 2;
		binary = binary + remainder*base;
		num = num / 2;
		base = base*10;
	}

	cout<<"Input number is ="<<decimal_num<<"\n";
	cout<<"Int binary equivalent is ="<<binary<<"\n";


	return 0;
}
