// Program that outputs the multiplication tables using arrays

#include <iostream>
using namespace std;

#include <iomanip>
using std::setw;

int main()
{
	int n[15]; // array size is 15

	// initialize elements of array n to 0

	for(int i=1;i<=10;i++)
	{
		n[i] = i*2; // Twice the element
	}

	cout <<"\t Table of two"<<endl;

	// ourput eacharray element value

	for(int j=1;j<=10;j++)
	{
		cout<<setw(7)<<"2*"<<j<<setw(10)<<n[j]<<endl;
		// setw used for formatting output
	}

	return 0;
}
