#include<iostream>
using namespace std;
class base
{
public:
    int a,b;
    void func2()
    {
        cout<<"Enter value of B"<<endl;
        cin>>b;
        cout<<"Arithmetic sum="<<a+b<<endl;
    }
};
class derived:public base
{
public:
    void func1()
    {
        cout<<"Enter value of A"<<endl;
        cin>>a;
    }
};
int main()
{
    base*bptr;
    derived d;
    bptr=&d;
    d.func1();
    bptr->func2();
    return 0;
}
