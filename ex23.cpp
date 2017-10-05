// Calculate the gross salary

#include <iostream>
using namespace std;

int main()
{
	int gross_salary,basic,da,ta;

	cout<<"Enter basic salary:";
	cin>>basic;

	da=(10*basic)/100;
	ta=(12*basic)/100;

	gross_salary=basic+da+ta;
	cout<<"\nGross Salary:"<<gross_salary;
}
