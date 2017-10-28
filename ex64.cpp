// Implementing Parametarized constructor

#include <iostream>

using namespace std;

class Cube
{
public:
	void setLength( double len);
	double getLength( void );
	Cube(double len); // Parametarized Constructor declaration

private:
	double length;
};

// Definition of Cunstructor
Cube::Cube(double len)
{
	cout<<"Object is being created, length ="<<len<<endl;
	length = len;
}

void Cube::setLength(double len)
{
	length = len;
}

double Cube::getLength(void)
{
	return length;
}

// Main function for the program
int main()
{
	Cube C(5.0);

	// Get initially set length
	cout<<"Length of Cube :"<<C.getLength()<<endl;

	// Set Cube length again

	C.setLength(10.0);
	cout<<" Length of Cube :"<<C.getLength()<<endl;

	return 0;
}