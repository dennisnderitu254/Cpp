// Demonstrating a Pointer to a class

#include <iostream>
using namespace std;

// Class Declaration
class Cube
{
public:
	// Constructor definition
	Cube(doubel l=2.0,double b=2.0,double h=2.0)
	{
		cout<<"Constructor called."<<endl;
		length = l;
		breadth = b;
		height = h;
	}
	
	double Volume()
	{
		return length*breadth*height;
	}


private:
	double length;// Length of a cube
	double breadth;// Breadth of a cube
	double height;// Height of a cube
};

// Main fumction 
int main(void)
{
	Cube C1(2.5,3.0,1.8);// Declare C1
	Cube C2(4.0,1.5,2.4);// Declare C2
	Cube*ptrC;//Declare pointer to a class

	//save the address of first object
	ptrC = &C1;

	// Now try to access a member using member access operator

	cout<<"Volume of Cube 1:"<<ptrC->Volume()<<endl;

	//Save the address of first object
	ptrC = &C2;

	// Now try to access a member using member access operator

	cout<<"Volume of Cube 2:"<<ptrC->Volume()<<endl;

	return 0;
}