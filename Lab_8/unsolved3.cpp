#include <iostream>
using namespace std;
#define MAX 10
class Deque {
    int arr[MAX];
    int front;
    int rear;
public:
    Deque() {
        front = -1;
        rear = -1;
    }
    bool isFull() {
        return (front == 0 && rear == MAX - 1) || (front == rear + 1);
    }
    bool isEmpty() {
        return front == -1;
    }
    void insertFront(int key) {
        if (isFull()) {
            cout << "Overflow: Cannot insert " << key << " at front\n";
            return;
        }
        if (front == -1) {
            front = 0;
            rear = 0;
        } else if (front == 0) {
            front = MAX - 1;
        } else {
            front--;
        }
        arr[front] = key;
        cout << key << " inserted at front\n";
    }
    void deleteRear() {
        if (isEmpty()) {
            cout << "Underflow: Cannot delete from rear\n";
            return;
        }
        cout << arr[rear] << " deleted from rear\n";
        if (front == rear) {
            front = -1;
            rear = -1;
        } else if (rear == 0) {
            rear = MAX - 1;
        } else {
            rear--;
        }
    }
    void display() {
        if (isEmpty()) {
            cout << "Deque is empty\n";
            return;
        }
        cout << "Deque elements: ";
        if (rear >= front) {
            for (int i = front; i <= rear; i++)
                cout << arr[i] << " ";
        } else {
            for (int i = front; i < MAX; i++)
                cout << arr[i] << " ";
            for (int i = 0; i <= rear; i++)
                cout << arr[i] << " ";
        }
        cout << endl;
    }
    void initializeDeque(int n) {
        if (n > MAX) {
            cout << "Cannot initialize more than " << MAX << " elements.\n";
            return;
        }
        cout << "Enter " << n << " elements:\n";
        for (int i = 0; i < n; i++) {
            int value;
            cin >> value;
            insertFront(value);
        }
    }
};
int main() {
    Deque dq;
    int choice, value, n;
    cout << "Enter number of elements to initialize: ";
    cin >> n;
    dq.initializeDeque(n);
    do {
        cout << "Menu:\n";
        cout << "1. Insert at Front\n";
        cout << "2. Delete from Rear\n";
        cout << "3. Display Deque\n";
        cout<<"4. exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice) {
            case 1:
                cout << "Enter value to insert at front: ";
                cin >> value;
                dq.insertFront(value);
                break;
            case 2:
                dq.deleteRear();
                break;
            case 3:
                dq.display();
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while(choice != 4);
    return 0;
}
