// Temperature Conversions

#include <iostream>
using namespace std;

// check void main
void main()
{
	int from,to;
	float value;

	cout<<"Temperature Conversion\n";
	cout<<"Enter no of Unit to convert to convert from:\n1.Celcius\n2.Farenheit\n3.Kelvin";
	cin>>from;

	cout<<"Enter the value to convert:";
	cin>>value;

	// Converting given value from specified unit to Kelvin

	switch(from){
		case 1:
		value=value+273.15;
		break;

		case 2:
		value=(value+495.67)*5/9;
		break;

		case 3:
		break;

		default:break;
	}

	// Converting value from Kelvin to specified unit

	switch(to){
		case 1:
		value=value-273.15;break;
		case 2:
		value=value*9/5-495.67;break;
		case 3:break;
		default:break;
	}

	cout<<"Converted Value:"<<value;
}
