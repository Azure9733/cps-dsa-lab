#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
    Node *top=NULL;
    void push(int);
    void pop();
    void display();
int main()
{
    int value,choice;
    cout<<"Stack using Linked List:"<<endl;
    while(1)
    {
        cout<<"\n MENU \n"<<endl;
        cout<<" 1.Push \n 2. Pop \n 3. Display \n 4.Exit";
        cout<<"Enter your choice"<<endl;
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Enter the value to be inserted:"<<endl;
            cin>>value;
            push(value);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            default:cout<<"Wrong Selection. Try Again";
        }
    }
}
void push(int value)
{
    Node *newNode;
    newNode=new Node();
    newNode->data=value;
    if(top==NULL)
        newNode->next=NULL;
    else
        newNode->next=top;
    top=newNode;
    cout<<"Insertion is Successful";
}
void pop()
{
    if(top==NULL)
        cout<<"Stack is Empty"<<endl;
    else
    {
        Node *temp=top;
        cout<<"Deleted Element:",temp->data;
        top=temp->next;
        delete(temp);
    }
}
void display()
{
    if(top==NULL)
        cout<<"Stack is Empty"<<endl;
    else
    {
        Node *temp=top;
        while(temp->next!=NULL)
        {
            cout<<temp->data;
            temp=temp->next;
        }

        cout<<temp->data;
    }
}
