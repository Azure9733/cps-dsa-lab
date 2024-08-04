// Write a C++ program to generate first ‘n’ terms of Tribonacci sequence.
#include <iostream>
using namespace std;

void Tribonacci(int n) {
    if (n <= 0) {
        cout<<"Please enter at least one value";
        return;
    }
    if (n >= 1) {
        cout << 0 << " ";
    }
    if (n >= 2) {
    cout << 1 << " ";
    }
    if (n >= 3) {
        cout << 1 << " ";
    }
    int a = 0, b = 1, c = 1, d;
    for (int i = 4; i <= n; ++i) {
        d = a + b + c;
        cout << d << " ";
        a = b;
        b = c;
        c = d;
    }
    cout << endl;
}
int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    Tribonacci(n);
    return 0;
}
