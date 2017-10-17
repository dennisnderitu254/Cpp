// Class member function

#include <iostream>
using namespace std;

class Cube
{
public:
	double length; // Length of a cube
	double breadth; // Breadth of a cube
	double height; // Height of a Cube

	// Member functions declaration
	double getVolume(void);
	void setLength(double l);
	void setBreadth(double b);
	void setHeight(double h);
};

// Member functions definitions

double Cube::getVolume(void)
{
	return length*breadth*height;
}

void Cube::setLength(double l)
{
	length=l;
}

void Cube::setHeight(double h)
{
	height = h;
}

// main function for the program
int main()
{
	Cube C1;
	Cube C2;
	double volume = 0.0;

	// Cube 1 specification
	C1.setLength(3.0);
	C1.setBreadth(10.0);
	C1.setHeight(5.0);

	// Cube 2 Specification
	C2.setLength(20.0);
	C2.setBreadth(4.0);
	C2.setHeight(8.0);

	// Volume of Cube 1
	volume = C1.getVolume();
	cout<<"Volume of Cube 1 :"<<volume<<endl;

	// Volume of Cube 2
	volume = C2.getVolume();
	cout<<"Volume of Cube 2 :"<<volume<<endl;
	return 0;
}
