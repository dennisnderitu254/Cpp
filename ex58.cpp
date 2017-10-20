// Friend Function

#include <iostream>
using namespace std;

class Rectangle
{
	double length;
public:
	friend void printLength(Rectangle R);
	void setLength(double len);
};

// set Length is the member function of class Rectangle

void Rectangle::setLength(double len)
{
	length = len;
}

// printLength()setLength is the mamber function of any class

void printLength(Rectangle Rectangle)
{
	// Because printLength() is a friend of Rectangle, it can directly access any member of this class

	cout<<"Length of Rectangle :"<<R.Length<<endl;
}

// Main function for the program

int main()
{
	Rectangle R;

	// set Rectangle Length without member function
	R.setLength(10.0);

	// Friend Function is used for printing length
	printLength(R);

	return 0;
}