// Write a C++ program to find the sum of individual digits of a positive integer.
#include<iostream>
using namespace std;
int sum_of_digits(int n)
{
	int digit, sum=0;
	while(n!=0)
	{
		digit=n%10;
		sum=sum+digit;
		n=n/10;
	}
	return sum;
}
int main()
{
	int number, digits_sum;
	cout<<"Enter Positive integer within the range:";
	cin>>number;
	digits_sum=sum_of_digits(number);
	cout<<"sum of digts of "<<number<<" is "<<digits_sum;
	return 0;
}