// Write a C++ program to check whether a given integer (positive/negative) is ODD or EVEN.
#include <iostream>
#include <cstdlib>
// used for data type conversion, pseudo-random number generation, memory
//.. allocation, searching, sorting, mathematics and dealing with wide or multibyte characters
using namespace std;
int main()
{
	int a, r;
	cout<<"Enter any Positive/Negative integer: ";
	cin>>a;
	r = abs(a)%2;
	if (r==0)
	{
		cout<<"The given integer "<<a<<" is EVEN. \n";
	}
	else
	{
		cout<<"The given integer "<<a<<" is ODD. \n";
	}
	return 0;
}