#include<iostream>
using namespace std;
class counter
{
public:
    int x,y,z;
    void getdata(int a,int b,int c)
    {
        x=a;y=b;z=c;
    }
    void display()
    {
        cout<<x<<", "<<y<<", "<<z<<endl;
    }
    void operator--()
    {
        --x;
        --y;
        --z;
    }
    void operator++()
    {
        ++x;
        ++y;
        ++z;
    }
};
int main()
{
    counter count;
    int a,b,c;
    cout<<"Enter value of a:";
    cin>>a;
    cout<<"Enter value for b:";
    cin>>b;
    cout<<"Enter value for c:";
    cin>>c;
    count.getdata(a,b,c);
    count.display();
    cout<<"After -- operator:";
    --count;
    count.display();
    cout<<"After ++ operator:";
    ++count;
    count.display();
    return 0;
}
