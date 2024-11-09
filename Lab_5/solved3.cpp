#include <iostream>
#include<iomanip>
using namespace std;

int fact(int);
int fact_recur(int);

int main()
{
    int num,a,b;
    cout<<"Enter a number to find it's factorial:";
    cin>>num;
    cout<<"Factorial without using recursive function"<<endl;
    a=fact(num);
    cout<<"Factorial of given number"<<num<<"is"<<a<<endl;
    cout<<"Factorial with using recursive function"<<endl;
    b=fact_recur(num);
    cout<<"Factorial of given number"<<num<<"is"<<b<<endl;
    return 0;
}
int fact(int num)
{
    int i;
    int fac=1;
    for (i=1;i<=num;i++)
        fac=fac*i;
    return fac;
}
int fact_recur(int num)
{
    if (num==1)
        return 1;
    else return (num*fact_recur(num-1));
}
