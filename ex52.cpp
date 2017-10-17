// Passing an Array into a function

#include <iostream>
using namespace std;

// function declaration:
double getAverage(int arr[], int size);

int main()
{
	// an int array with 8 ages of peaple
	int balance[8]={18,9,51,33,15,24,67,57};
	double avg;

	// Pass pointer to the array as an argument
	avg = getAverage(balance,8);

	//output the returned value
	cout<<"Average of all ages is:"<<avg<<endl;

	return 0;
}

double getAvearge(int arr[],int size)
{
	int i,sum=0;
	double avg;

	for(i=0;i<size;i++)
	{
		sum += arr[i];
	}

	avg = double(sum)/size;

	return avg;
}