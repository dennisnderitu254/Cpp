// Static Function in C++

#include <iostream>
using namespace std;

class Cube
{
public:
	static int objectCount;
	// Constructor definition
Cube(double l=5.0,double b=5.0,double h=5.0)
{
	cout<<"Constructor called."<<endl;
length l;
breadth =b;
height = h;
// increase every time object is created
objectCount++;

}

double volume()
{
	return length*breadth*height;
}

static int getCount()
{
	return objectCount;
}

private:
	double length;// length of a cube
	double breadth;// Breadth of a cube
	double height;// Height of a cube
};

// Initialize static member of class Cube
int Cube::objectCount = 0;

int main(void)
{
	// Print total number of objects before creating object.

	cout<<"Initially Object Count:"<<Cube::getCount()<<endl;

	Cube C1(2.0,1.2,1.8);// Declare C1
	Cube C2(3.5,2.5,1.9);// Declare C2
	Cube C3(2.4,1.6,6.0);// Declare C3

// Print total number of objects after creating object.

	cout<<"Finally Object Count:"<<Cube::getCount()<<endl;

	return 0;
}