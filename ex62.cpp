// Calling from outside class

#include <iostream>
using namespace std;

class Rectangle
{
public:
	double length;
	void setWidth(double wid);
	double getWidth(void);

private:
	double width;
};

// Definition of the member Function get width

double Rectangle::getWidth(void)
{
	return width;
}

// Definition of the member function setwidth

void Rectangle::setWidth(double wid)
{
	width = wid;
}

// Main function of the program
int main()
{
	// Can set Length of Rectangle without member function as it is not private
	R.length=5.0;

	cout<<"Length of Rectangle:"<<R.length<<endl;

	// Can not set Width of Rectangle without member function as it private
	R.setWidth(5.0);// Use member function to set it

	cout<<"Width of Rectangle:"<<R.getWidth()<<endl;

	return 0;
}