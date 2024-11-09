#include<iostream>
using namespace std;
class Queue
{
public:
    int front, rear, size;
    unsigned capacity;
    int* array;
};
Queue *createQueue(unsigned capacity)
{
    Queue* queue= new Queue();
    queue->capacity=capacity;
    queue->front=queue->size=0;
    queue->rear=capacity-1;
    queue->array=new int[queue->capacity];
    return queue;
}
int isFull(Queue* queue)
{
 return(queue->size == queue->capacity);
}
int isEmpty(Queue* queue)
{
    return(queue->size==0);
}
void enqueue(Queue* queue, int item)
{
    if(isFull(queue))
        return;
    queue-> rear=(queue->rear+1)%queue->capacity;
    queue->array[queue->rear]=item;
    queue->size=queue->size+1;
    cout<<item<<" enqueued to queue\n";
}
int dequeue(Queue* queue)
{
    if(isEmpty(queue))
        return 0;
    int item=queue->array[queue->front];
    queue->front=(queue->front+1)%queue->capacity;
    queue->size=queue->size-1;
    return item;
}
int front(Queue*queue)
{
    if(isEmpty(queue))
        return 0;
    return queue->array[queue->front];
}
int rear(Queue* queue)
{
    if(isEmpty(queue))
        return 0;
    return queue->array[queue->rear];
}
int main()
{
    int i,n,ele;
    Queue* queue=createQueue(1000);
    cout<<"Enter the number of elements to be added to the queue"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for (i=0;i<n;i++)
    {
        cin>>ele;
        enqueue(queue,ele);
    }
    cout<<"Dequeue-ing once..."<<endl;
    cout<<dequeue(queue)<<" dequeued from queue \n";
    cout<<"Front element of que: "<<rear(queue)<<endl;
    cout<<"Rear element of que: "<<front(queue)<<endl;
    return 0;
}
