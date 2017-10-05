// Program that checks vowels

#include <iostream>
using namespace std;

int main()
{
	char ch;

	cout<<"Input a character\n";
	cin>>ch;

	switch(ch)
	{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'I':
		case 'i':
		case 'o':
		case 'O':
		case 'U':
		case 'u':

		cout<<ch<<" is a vowel.\n";
		break;
		/* if ch matches any case then it prints & breaks the execution*/

		default:
		cout<<ch<<" is not a vowel.\n";
		/* if the ch is not from the cases then prints ch is not a vowel */
	}

	return 0;
}
