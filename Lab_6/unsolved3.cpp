#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node* prev;

    Node(int val) : data(val), next(nullptr), prev(nullptr) {}
};
void insertAtEnd(Node*&head, int value) {
    Node* newNode = new Node(value);
    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}
void deleteEvenNodes(Node*& head) {
    Node* current = head;

    while (current != nullptr) {
        if (current->data % 2 == 0) {
            Node* nodeToDelete = current;

            if (nodeToDelete->prev != nullptr) {
                nodeToDelete->prev->next = nodeToDelete->next;
            } else {

                head = nodeToDelete->next;
            }

            if (nodeToDelete->next != nullptr) {
                nodeToDelete->next->prev = nodeToDelete->prev;
            }

            current = nodeToDelete->next;
            delete nodeToDelete;
        } else {
            current = current->next;
        }
    }
}
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "nullptr" << endl;
}
void append(Node*& head, int value) {
    Node* newNode = new Node(value);
    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}
void cleanupList(Node*& head) {
    Node* current = head;
    while (current != nullptr) {
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }
    head = nullptr;
}
int main() {
    Node* head = nullptr;
    int n,value;
    cout<<"Enter the number of nodes to insert"<<endl;
    cin>>n;
    for (int i = 0; i < n; i++) {
        cout << "Enter value for node " << (i + 1) << ": ";
        cin >>value;
        insertAtEnd(head, value);
    }
    cout << "Original list: ";
    printList(head);
    deleteEvenNodes(head);
    cout << "List after deleting even nodes: ";
    printList(head);
    cleanupList(head);
    return 0;
}

