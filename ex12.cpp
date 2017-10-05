// Switch Case

#include <iostream>
using namespace std;

int main()
{
	// local variable declaration
	char grade ='B';

	switch(grade)
	{
		case 'A':
			cout<<"Excellent"<<endl;
			break;
		case 'B':
			cout<<"Well Done"<<endl;
			break;
		case 'C':
			cout<<"Average"<<endl;
			break;
		case 'D':
			cout<<"You passed"<<endl;
			break;
		case 'E':
			cout<<"Fail"<<endl;
			break;
		default:
			cout<<"Invalid Grade:"<<endl;
	}

	cout<<"Obtained Grade:"<<grade<<endl;

	return 0;
}
