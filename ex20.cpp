// Greatest of 3 Numbers

#include <iostream>
using namespace std;

int main()

{
	int a,b,c;

	cout<<"Enter any three numbers:\n";
	cin>>a>>b>>c;

	if(a>b && a>c)
		// if a greater than b & c
		cout<<"The greater number is:"<<a;
	else if(b>c)
		// if not a then if b is greater than c
		cout<<"Greatest number is:"<<b;
	else
		// if a & b are not greater
		cout<<"Greatest number is:"<<c;

    return 0;

}
