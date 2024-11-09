#include<iostream>
using namespace std;
class Shape
{
    float l, w, s, b, h;
public:
    float area(float s)
    {
        return s*s;
    }
    float area(float l, float w)
    {
        return l*w;
    }
    float area(float b,float h,bool isTriangle)
    {
        return 0.5*b*h;
    }
};
    int main()
    {
        Shape myclass;
        float s;
        cout<<"Enter the side of the square : ";
        cin>>s;
        cout<<"Area of the square: "<<myclass.area(s)<<endl;
        float l,w;
        cout<<"Enter rectangle length : ";
        cin>>l;
        cout<<"Enter rectangle width: ";
        cin>>w;
        cout<<"Area of the rectangle is : "<<myclass.area(l,w)<<endl;
        float b,h;
        cout<<"Enter triangle base:";
        cin>>b;
        cout<<"Enter triangle height: ";
        cin>>h;
        cout<<"Area of the triangle:"<<myclass.area(b,h,true)<<endl;
        return 0;
    }

