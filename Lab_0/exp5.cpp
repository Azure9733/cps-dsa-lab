// Write a C++ program to display the following image:
// <image of a robot>
#include<iostream>
using namespace std;
void repline();
int main()
{
    cout <<" ||||||||||||"<<endl;
    repline();
    cout<<" |   O  O   | "<<endl;
    cout<<"_|          |_"<<endl;
    cout<<"|_           _|"<<endl;
    cout<<" |  |____|  |"<<endl;
    repline();
    return 0;
}
void repline()
{
    cout<<" |          | "<<endl;
}
