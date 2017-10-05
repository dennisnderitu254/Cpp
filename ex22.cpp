// Calculate Precentage

#include <iostream>
using namespace std;

int main()
{
	int s1,s2,s3,s4,s5,sum,total=500;
	float per;

	cout<<"\nEnter marks of 5 subjects:\n";
	cin>>s1>>s2>>s3>>s4>>s5;

	sum = s1+s2+s3+s4+s5;
	cout<<"\nSum:"<<sum;

	per = (sum*100)/500;
	// Percentage formula
	cout<<"\n Percentage:"<<per;

	return 0;
}
