#include<iostream>
using namespace std;
class complex2;
class complex1
{
public:
    int x,y;
    complex1()
    {
        x=0;
        y=0;
    }
    complex1(int a, int b);
     friend complex1 sum(complex1 c1,complex2 c2);
     friend complex1 sum(complex1 c1,complex2 c2);
     void display()
     {
         cout<<"The real part: "<<x<<endl;
         cout<<"The img part: "<<y<<endl;
     }
};
class complex2
{
    public:
    int x,y;
    complex2()
    {
    x=0;
    y=0;
    }
    complex2(int a, int b);
    friend complex1 sum(complex1 c1,complex2 c2);
    friend complex1 diff(complex1 c1,complex2 c2);
};

complex1::complex1(int a,int b)
{
    x=a;
    y=b;
}

complex2::complex2(int a,int b)
{
    x=a;
    y=b;
}


complex1 sum(complex1 c1,complex2 c2)
{
    complex1 c;
    c.x=c1.x+c2.x;
    c.y=c1.y+c2.y;
    return c;
}

complex1 diff(complex1 c1,complex2 c2)
{
    complex1 c;
    c.x=c1.x-c2.x;
    c.y=c1.y-c2.y;
    return c;
}
int main()
{
    complex1 c1;
    complex2 c2;
    cout<<"Enter the complex1: ";
    cin>>c1.x>>c1.y;
    cout<<"Enter the complex2: ";
    cin>>c2.x>>c2.y;
    complex1 c;
    c=sum(c1,c2);
    cout<<"Addition: "<<endl;
    c.display();
    c=diff(c1,c2);
    cout<<"Subtraction: "<<endl;
    c.display();
}
