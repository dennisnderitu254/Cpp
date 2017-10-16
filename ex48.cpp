// Program that converts Binary to Octal

#include <iostream>
using namespace std;

int main()
{
	long int binarynum,octalnum = 0,j = 1,remainder;

	cout<<"Enter the value of binary number: ";
	cin>>binarynum;

	while(binarynum != 0)
	{
		remainder = binarynum % 10;
		octalnum = octalnum + remainder * j;
		j = j * 2;

		binarynum = binarynum / 10;
	}

	cout<<"Equivalent octal value: "<<octalnum;

	return 0;
}