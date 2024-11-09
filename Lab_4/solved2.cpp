#include<iostream>
using namespace std;
class sample2;
class sample1
{
    int x;
public:
    sample1(int a);
    friend void max(sample1 s1, sample2 s2);
};
sample1::sample1(int a)
{
    x=a;
}
class sample2
{
    int y;
public:
    sample2(int b);
    friend void max(sample1 s1, sample2 s2);
};
sample2::sample2(int b)
{
    y=b;
}
void max(sample1 s1, sample2 s2)
{
    if(s1.x>s2.y)
        cout<<"Data member in Object of class sample1 is larger"<<endl;
    else
        cout<<"Data member in Object of class sample2 is larger"<<endl;
}
int main()
{
    sample1 obj1(3);
    sample2 obj2(5);
    max(obj1, obj2);
    return 0;
}
