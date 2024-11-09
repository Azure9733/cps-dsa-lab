#include <iostream>
using namespace std;
class student
{
public:
    int m, e;
    void gdata()
    {
        cout<<"ENTER THY INTERNAL MARKS out of 30"<<endl;;
        cin>>m;
        cout<<"ENTER THY ENDSEM MARKS out of 50"<<endl;;
        cin>>e;
    }
};
class addition:virtual student
{
public:
    int a;
    int add()
    {
        a=m+e;
        cout<<"Addition is:"<<a<<endl;
        return a;
    }
};
class subtraction:virtual student
{
public:
    int s;
    int sub()
    {
        s=m-e;
        cout<<"Subtracted value is:"<<s<<endl;
        return s;
    }
};
class mult:virtual public addition,virtual public subtraction
{
    public:
    int m;
    void multi()
    {
        m=a*s;
    }
};
int main()
{
        student s;
        s.gdata();
        mult n;
        n.multi();
    return 0;
}


