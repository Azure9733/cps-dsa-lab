// Write a program to illustrate New and Delete Keywords for dynamic memory allocation.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    // Dynamic memory allocation using new
    int* arr = new int[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    cout << "The elements are: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // De-allocating memory using delete
    delete[] arr;
    
    return 0;
}
