#include<iostream>
using namespace std;
class Point
{
public:
    int x,y;
    void getdata(int a,int b)
    {
        x=a;y=b;
    }
    void display()
    {
        cout<<x<<", "<<y<<endl;
    }
    int operator-()
    {
        int diff;
        diff=x-y;
        cout<<diff<<endl;;
    }
    int operator+()
    {
        int add;
        add=x+y;
        cout<<add<<endl;;
    }
};
int main()
{
    Point p;
    int a,b,c;
    cout<<"Enter value of a:";
    cin>>a;
    cout<<"Enter value for b:";
    cin>>b;
    p.getdata(a,b);
    p.display();
    cout<<"Value after addition"<<endl;
    p.operator+();
    cout<<"Difference Value"<<endl;
    p.operator-();
    return 0;
}
