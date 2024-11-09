#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node*next;
    node(int d)
    {
        data=d;
        node*next=NULL;
    }
};
void insertAtFirst(node*&head,int data)
{
    node*n=new node(data);
    n->next=head;
    head=n;
}
void printNode(node*head)
{
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<endl;
}
void deleteatTail(node*head)
{
    node*prev=NULL;
    node*temp=head;
    while(temp->next!=NULL)
    {
        prev=temp;
        temp=temp->next;
    }
    delete temp;
    prev->next=NULL;
    return;
}
int main()
{
    node* head=NULL;
    insertAtFirst(head,5);
    insertAtFirst(head,4);
    insertAtFirst(head,3);
    insertAtFirst(head,2);
    insertAtFirst(head,1);
    printNode(head);
    deleteatTail(head);
    printNode(head);
    return 0;
}
