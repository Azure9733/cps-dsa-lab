//Write a C++ program to use scope resolution operator. Display the various values of the same variables declared at different scope levels.
#include <iostream>
using namespace std;
class programming
{
    public: void output(); //function declaration
};
void programming::output()
{
    cout << "Function defined outside the class.\n";
}
int main()
{
    programming x;
    x.output();
    return 0;
}