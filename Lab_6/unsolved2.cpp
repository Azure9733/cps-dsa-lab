#include <iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* next;
};
Node* insertAtEnd(Node* head, int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;
    if (head == nullptr) {
        return newNode;
    }
    Node* current = head;
    while (current->next != nullptr) {
        current = current->next;
    }
    current->next = newNode;
    return head;
}
void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    if (num <= 3) {
        return true;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}
Node* deletePrimes(Node* head) {
    Node* current = head;
    Node* prev = nullptr;
    while (current != nullptr) {
        if (isPrime(current->data)) {
            if (prev == nullptr) {
                head = current->next;
            } else {
                prev->next = current->next;
            }
            Node* temp = current;
            current = current->next;
            delete temp;
        } else {
            prev = current;
            current = current->next;
        }
    }
    return head;
}
int main() {
    Node* head = nullptr;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        head = insertAtEnd(head, data);
    }
    cout << "List before deleting primes: ";
    printList(head);
    head = deletePrimes(head);
    cout << "List after deleting primes: ";
    printList(head);
    return 0;
}
