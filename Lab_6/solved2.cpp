#include<iostream>
using namespace std;
class Node
{
public:
    int key;
    Node*next;
};
void push(Node**head_ref,int new_key)
{
    Node* new_node=new Node();
    new_node->key=new_key;
    new_node->next=(*head_ref);
    (*head_ref)=new_node;
}
bool search(Node*head, int x)
{
    Node* current=head;
    while(current!=NULL)
    {
        if (current->key==x)
            return true;
        current=current->next;
    }
    return false;
}
int main()
{
    Node* head=NULL;
    int x;
    cout<<"enter x"<<endl;
    cin>>x;
    push(&head,10);
    push(&head,30);
    push(&head,11);
    push(&head,21);
    push(&head,14);
    search(head,x)?cout<<"Yes":cout<<"NO";
    return 0;
}
