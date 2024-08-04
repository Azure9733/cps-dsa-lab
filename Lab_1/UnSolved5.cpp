// Write a C++ program to find Max and Min of two given numbers using inline functions.
#include <iostream>
using namespace std;
inline int max(int a, int b) {
    return (a > b) ? a : b;
}
inline int min(int a, int b) {
    return (a < b) ? a : b;
}
int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Maximum: " << max(num1, num2) << endl;
    cout << "Minimum: " << min(num1, num2) << endl;
    return 0;
}
