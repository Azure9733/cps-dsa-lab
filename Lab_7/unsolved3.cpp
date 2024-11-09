#include <iostream>
using namespace std;
class Node {
    public:
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
bool isIdentical(Node* root1, Node* root2) {
    if (root1 == NULL && root2 == NULL) {
        return true;
    }
    if (root1 != NULL && root2 != NULL && root1->data == root2->data) {
        return isIdentical(root1->left, root2->left) && isIdentical(root1->right, root2->right);
    }
    return false;
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
    Node* root1 = NULL;
    Node* root2 = NULL;
    int n, data;
    cout << "Enter the number of nodes for the first tree: ";
    cin >> n;
    cout << "Enter the data for each node: ";
    for (int i = 0; i < n; i++) {
        cin >> data;
        root1 = insert(root1, data);
    }
    cout << "Enter the number of nodes for the second tree: ";
    cin >> n;
    cout << "Enter the data for each node: ";
    for (int i = 0; i < n; i++) {
        cin >> data;
        root2 = insert(root2, data);
    }
    if (isIdentical(root1, root2)) {
        cout << "The two trees are identical." << endl;
    } else {
        cout << "The two trees are not identical." << endl;
    }
    return 0;
}
