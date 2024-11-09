#include<iostream>
using namespace std;
class Node
{
public:
    int key;
    Node*left,*right;
};
Node* newNode(int item)
{
    Node* temp=new Node;
    temp->key=item;
    temp->left=temp->right=NULL;
    return temp;
}
void inorder(Node*root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);
    }
}
Node* insert(Node* node,int key)
{
    if(node==NULL)
        return newNode(key);
    if(key<node->key)
        node->left=insert(node->left,key);
    else
        node->right=insert(node->right,key);
    return node;
}
Node* deleteNode(Node* root,int k)
{
    if (root==NULL)
        return root;
    if(root->key>k)
    {
        root->left=deleteNode(root->left,k);
        return root;
    }
    else if(root->key<k)
    {
        root->right=deleteNode(root->right,k);
        return root;
    }
    if(root->left==NULL)
    {
        Node*temp=root->right;
        delete root;
        return temp;
    }
    else if(root->right==NULL)
    {
        Node*temp=root->left;
        delete root;
        return temp;
    }
    else
    {
        Node* succParent=root;
        Node* succ=root->right;
        while(succ->left!=NULL)
              {
                    succParent=succ;
                    succ=succ->left;
              }
    }
//    if(succParent!=root)
//        succParent->left=succ->right;
//    else
//        succParent->right=succ->right;
 //   root->key=succ->key;
 //   delete succ;
  //  return root;
}
int main()
{
    Node*root=NULL;
    root=insert(root,50);
    root=insert(root,30);
    root=insert(root,20);
    root=insert(root,40);
    root=insert(root,70);
    root=insert(root,60);
    cout<<"Original BST:"<<endl;
    inorder(root);
    cout<<endl;
    cout<<"Delete a Leaf Node:20"<<endl;
    root=deleteNode(root,20);
    cout<<"Modified BST tree after deleting Leaf Node:"<<endl;
    inorder(root);
    cout<<endl;
    cout<<"Delete Node with single child:70"<<endl;
    root=deleteNode(root,70);
    cout<<"Modified BST tree after deleting single child Node:"<<endl;
    inorder(root);
    cout<<endl;
    cout<<"Delete Node with both child:50"<<endl;
    root=deleteNode(root,50);
    cout<<"Modified BST tree after deleting both child Node:"<<endl;
    inorder(root);
    cout<<endl;
    return 0;
}
