#include<iostream>
#include<cmath>
using namespace std;

double factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}
double sin_recursive(double x_deg,int n)
{
    double radians=(x_deg*M_PI)/180;
    double sum=0.0;
    for(int i=0;i<n;i++)
    {
        double term=pow(-1,i)*pow(radians,2*i+1)/factorial(2*i+1);
        sum+=term;
    }
    return sum;
}
int main()
{
    double x_deg;
    int n;
    cout<<"Enter the value of x in degrees:"<<endl;
    cin>>x_deg;
    cout<<"Enter the number of terms of the series:"<<endl;
    cin>>n;
    double result=sin_recursive(x_deg,n);
    cout<<"sin("<<x_deg<<")="<<result<<endl;
    return 0;
}

