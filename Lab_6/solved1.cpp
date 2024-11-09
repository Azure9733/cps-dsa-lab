#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node*next;
};
void push(Node**head_ref,int new_data)
{
    Node*new_node=new Node();
    new_node->data=new_data;
    new_node->next=(*head_ref);
    (*head_ref)=new_node;
}
void printlist(Node *node)
{
    while(node!=NULL)
    {
        cout<<""<<node->data;
        node=node->next;
    }
}
int main()
{
    Node *head = 0;
    push(&head,7);
    push(&head,1);
    push(&head,8);
    push(&head,4);
    cout<<"Created list is:";
    printlist(head);
    return 0;
}
