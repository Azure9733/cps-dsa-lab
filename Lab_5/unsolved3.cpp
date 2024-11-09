
#include<iostream>
using namespace std;

bool isPrime(int num,int d=2)
{
    if(num<=1)
    {
        return false;
    }
    if(d*d>num)
    {
        return true;
    }
    if(num%d==0)
    {
        return false;
    }
    return isPrime(num,d+1);
}
int main()
{
    int num;
    cout<<"Enter the NUMBER:"<<endl;
    cin>>num;
    if(isPrime(num))
    {
        cout<<num<<" is PRIME."<<endl;
    }
    else
    {
        cout<<num<<" is NOT PRIME."<<endl;
    }
    return 0;
}
