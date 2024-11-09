#include<iostream>
using namespace std;
class Display
{
public:
    void show(int x, int y)
    {
        cout<<"Printing int:"<<x+y<<endl;
    }
    void show(double a, double b)
    {
        cout<<"Printing float:"<<a+b<<endl;
    }
};
int main (void)
{
    Display pd;
    pd.show(5,6);
    pd.show(6.6,9.7);
    return 0;
}
