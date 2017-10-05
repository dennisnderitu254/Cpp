// Program that calculates the HCF:Highest Common Factor and the LCM:least common multiple

#include <iostream>
using namespace std;

long gcd(long,long);

int main()
{
	long x,y,hcf,lcm;

	cout<<"Enter two integers\n";
	cin>>x>>y;

	hcf=gcd(x,y);
	lcm=(x*y)/hcf;

	cout<<"The GCD of"<<x<<" and "<<y<<" = "<<hcf<<"\n";
	cout<<"The LCM of"<< x <<" and "<<y<<" = "<<lcm<<"\n";

	return 0;
}

/*if 1st no is 0 then 2nd no is gcd make 2nd no 0 by subtracting smallest from largest and return 1st no as GCD */

long gcd(long x,long y)
{
	if(x==0)
		return y;

	while(y!=0)
	{
		if(x>y)
			x=x-y;
		else
			y=y-x;
	}

	return x;
}