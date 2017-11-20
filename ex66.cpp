// implementing Destructors in C++ OOP

#include <iostream>
using namespace std;

class Cube{
public:
  void setLength(double len);
  double getLength(void);
  Cube(); // Constructor declaration
  ~Cube(); // Destructor declaration

private:
  double length;
};

// definitions of constructors
Cube::Cube(void)
{
  cout <<"Object is being created"<<endl;
}
// definitions of Destructors
Cube::~Cube(void)
{
  cout<<"Object is being deleted"<<endl;
}

// definition of other member functions
void Cube::setLength(double len)
{
  length = len;
}

double Cube::getLength(void)
{
  return length;
}

// Main function
int main()
{
  Cube C;

  // set length of Cube
  C.setLength(5.0);
  cout<<"Length of Cube:" <<C.getLength()<<endl;

  return 0;
}
