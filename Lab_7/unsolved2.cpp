#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;
};
Node* newNode(int data) {
    Node* node = new Node;
    node->data = data;
    node->left = node->right = NULL;
    return node;
}
Node* minValue(Node* root) {
    if (root == NULL || root->left == NULL) {
        return root;
    }
    return minValue(root->left);
}
Node* insert(Node* root, int data) {
    if (root == NULL) {
        return newNode(data);
    }
    if (data < root->data) {
        root->left = insert(root->left, data);
    } else {
        root->right = insert(root->right, data);
    }
    return root;
}
int main() {
    Node* root = NULL;
    int n, data;
    cout << "Enter the number of nodes: ";
    cin >> n;
    cout << "Enter the data for each node: ";
    for (int i = 0; i < n; i++) {
        cin >> data;
        root = insert(root, data);
    }
    Node* minNode = minValue(root);
    cout << "Node with minimum value: " << minNode->data << endl;
    return 0;
}
