// Write a C++ program to convert a given 2D cartesian coordinates (x,y) to its equivalent polar coordinate representation (R, Phi). [Note: Angle values should be displayed in degrees]

#include <iostream>
#include <cstdlib>
#include <cmath> // For trigonometric functions
using namespace std;
int main()
{
	float t, x, y, R, a, A;
	cout<<"Enter the X-coordinate value: X = ";
	cin>>x;
	cout<<"Enter the Y-coordinate value: Y = ";
	cin>>y;
	t=x*x+y*y;
	R=sqrt(t);
	a=atan2(y,x);
	A= a*180/(M_PI);
	cout<<"The equivalent Polar Coordinates are: R = "<<R<<" and Angle (in deg.) = ”<<A;
	return 0;
}