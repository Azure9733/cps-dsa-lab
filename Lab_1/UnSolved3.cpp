// Write a C++ program to find both the largest and smallest number in a list of integers.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    if (n <= 0) {
        cout << "List must contain at least one element." << endl;
        return 0;
    }
    int num;
    cout << "Enter element 1: ";
    cin >> num;
    int maxNum = num;
    int minNum = num;
    for (int i = 1; i < n; ++i) {
        cout << "Enter element " << i + 1 <<": ";
        cin >> num;
        if (num > maxNum) {
            maxNum = num;
        }
        if (num < minNum) {
            minNum = num;
        }
    }
    cout << "Maximum number is: " << maxNum << endl;
    cout << "Minimum number is: " << minNum << endl;
    return 0;
}
