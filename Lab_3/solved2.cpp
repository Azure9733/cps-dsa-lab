#include<iostream>
using namespace std;
class base
{
public:
    int x;
    void getdata()
    {
        cout<<"Enter value of x=";
        cin>>x;
    }
};
class derive1:public base
{
public:
    int y;
    void readdata()
    {
        cout<<"Enter value of y =";
        cin >> y;
    }
};
class derive2:public derive1
{
private:
    int z;
public:
    void indata()
    {
        cout<<"Enter value of z=";
        cin>>z;
    }
    void product()
    {
        cout<<"Product="<<x*y*z;
    }
};
int main()
{
    derive2 a;
    a.getdata();
    a.readdata();
    a.indata();
    a.product();
    return 0;
}
