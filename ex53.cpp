// Simple Class Example

#include <iostream>
using namespace std;

class Cube
{
public:
	double length;// Length of a cube
	double breadth;// Breadth of a cube
	double height;// Height of a Cube
};


int main()
{
	Cube C1;//Declare C1 of type Cube
	Cube C2;// Declare C2 of type Cube
	double volume = 0.0;// Store the volume of a cube here


	// Cube 1 specification
	C1.height = 3.0;
	C1.length = 10.0;
	C1.breadth = 5.0;

	// Cube 2 specification
	C2.height = 20.0;
	C2.length = 4.0;
	C2.breadth = 8.0;


	// Volume of Cube 1
	volume = C1.height * C1.length*C1.breadth;
	cout<<"Volume of cube 1:"<<volume<<endl;

	// volume of cube 2
	volume=C2.height*C2.length*C2.breadth;
	cout<<"Volume of cube 2:"<<volume<<endl;

	return 0;


}
