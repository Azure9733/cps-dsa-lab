#include<iostream>
using namespace std;
#define SIZE 10
void push(int);
void pop();
void display();
int stack[SIZE],top=-1;
int main()
{
    int value,choice;
    while(1)
    {
        cout<<"\n MENU \n"<<endl;
        cout<<" 1. Push \n 2. Pop \n 3. Display \n 4. Exit"<<endl;
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
    if(top==SIZE-1)
        cout<<"Stack is Full. Insertion not possible"<<endl;
    else
    {
        top++;
        stack[top]=value;
        cout<<"Insertion Success"<<endl;
    }
}
void pop()
{
    if(top==-1)
        cout<<"Stack is Empty. Deletion not possible"<<endl;
    else
    {
        cout<<"Deleted:"<<stack[top]<<endl;
        top--;
    }
}
void display()
{
    if(top==-1)
        cout<<"Stack is Empty"<<endl;
    else
    {
        int i;
        cout<<"Stack elements are:";
        for(i=top;i>=0;i--)
            cout<<stack[i];
    }
}
