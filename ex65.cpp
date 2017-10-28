// Implimenting Copy constructor

#include <iostream>
using namespace std;

class Cube
{
public:
	int getLength(void);
	Cube(int len); // Parameterized Constructor
	Cube(const Cube&obj); // Copy Constructor
	~Cube(); // Destructor

private:
	int*ptr;
};

// Member functions definitions including constructor

Cube::Cube(int len)
{
	cout<<"Ptr. allocate by Parameterized constructor"<<endl;
	// allocate memory for the pointer
	ptr = new int;
	*ptr = len;
}

Cube::Cube(const Cube&obj)
{
	cout<<"Deleting Constructor and making Memory free"<<endl;
	delete ptr;
}

int Cube::getLength(void)
{
	return *ptr;
}

void display(Cube obj)
{
	cout<<"Length of Cube :"<<obj.getLength()<<endl;
}

// Main function for the program
int main()
{
	Cube C(5);

	display(C);

	return 0;
}