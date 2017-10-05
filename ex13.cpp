// Nested Switch case

#include <iostream>
using namespace std;

int main()
{
	int a=10;
	int b=20;

	switch(a)
	{
		case 10:
			cout<<"Out Switch case"<<endl;

		switch(b)
		{
			case 20:
				cout<<"Inner Switch case"<<endl;

		}
	}

	cout<<"Value of a is:"<<a<<endl;
	cout<<"Value of b is:"<<b<<endl;

	return 0;
}


