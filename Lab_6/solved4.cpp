#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node*next;
    Node*prev;
};
class LinkedList
{
private:
    Node*head;
public:
    LinkedList()
    {
        head=NULL;
    }
    void push_front(int newElement)
    {
        Node*newNode=new Node();
        newNode->data= newElement;
        newNode->next=NULL;
        newNode->prev=NULL;
        if(head==NULL)
        {
            head =newNode;
        }
        else
        {
            head->prev=newNode;
            newNode->next=head;
            head=newNode;
        }
    }
    void PrintList()
    {
        Node*temp=head;
        if(temp!=NULL)
        {
            cout<<"The list contains:";
            while(temp!=NULL)
            {
                cout<<temp->data<<"";
                temp=temp->next;
            }
            cout<<endl;
        }
        else
        {
            cout<<"The list is empty."<<endl;
        }
    }
};
int main()
{
    LinkedList MyList;
    MyList.push_front(10);
    MyList.push_front(20);
    MyList.push_front(30);
    MyList.PrintList();
    return 0;
}
