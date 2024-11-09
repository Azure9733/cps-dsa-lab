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
int sizeOfTree(Node* root) {
    if (root == NULL) {
        return 0;
    }
    return 1 + sizeOfTree(root->left) + sizeOfTree(root->right);
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
    node* root=insertNode(6);
        root->left=insertNode(2);
        root->right=insertNode(1);
        cout<<"size of tree"<<sizeOfTree(root);
        return 0;
}
