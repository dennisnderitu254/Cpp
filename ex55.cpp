// Protected Member

#include <iostream>
using namespace std;

class Cube
{
protected:
	double length;
};

class SmallCube:Cube
{
public:
	void setSmallLength(double len);
	double getSmallLength(void);
};

// Member Function of Derived Class (Small Cube)

double SmallCube::getSmallLength(void)
{
	return length;
}

void SmallCube::setSmallLength(double len)
{
	length = len;
}

// The main function

int main()
{
	SmallCube C;

	// Set Cube Length using member function
	C.setSmallLength(5.0);
	cout<<"Length of Cube :"<<C.getSmallLength()<<endl;

	return 0;
}