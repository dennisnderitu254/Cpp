// Simple Interest

#include <iostream>
using namespace std;

int main()
{
	int amount,rate,time,ans;

	cout<<"\nEnter Principal Amount:";
	cin>>amount;

	cout<<"\nEnter Rate of Interest:";
	cin>>rate;

	cout<<"\nEnter Period of time:";
	cin>>time;

	ans=(amount*rate*time)/100;
	// Simple Interest formula

	cout<<"\nSimple Interest:"<<ans;

	return 0;
}