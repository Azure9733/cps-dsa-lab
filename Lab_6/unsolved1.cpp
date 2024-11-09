#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int value) : data(value), next(nullptr) {}
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
void deleteAtPosition(Node*& head, int position) {
    if (head == nullptr) {
        cout << "List is empty. Cannot delete." << endl;
        return;
    }
    Node* temp = head;
    if (position == 0) {
        head = temp->next;
        delete temp;
        return;
    }
    for (int i = 0; temp != nullptr && i < position - 1; i++) {
        temp = temp->next;
    }
    if (temp == nullptr || temp->next == nullptr) {
        cout << "Position is invalid" <<endl;
        return;
    }
    Node* nextNode = temp->next->next;
    delete temp->next;
    temp->next = nextNode;
}
void displayList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " , ";
        current = current->next;
    }
    cout << "null" << endl;
}
int main() {
    Node*head =NULL;
    int n,value;
    cout<<"Enter the number of nodes to insert"<<endl;
    cin>>n;
    for (int i = 0; i < n; i++) {
        cout << "Enter value for node " << (i + 1) << ": ";
        cin >>value;
        insertAtEnd(head, value);
    }
    cout << "Linked List: ";
    displayList(head);
    int position;
    cout << "Enter node deletion position(index starts from 0): ";
    cin >> position;
    deleteAtPosition(head, position);
    cout << "New Linked List: ";
    displayList(head);
    return 0;
}

