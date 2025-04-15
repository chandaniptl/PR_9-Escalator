#include <iostream>
using namespace std;

class Queue
{
private:
    int front, rear, currentsize;
    int *arr;
    int capacity;

    public:
    Queue(int capacity)
    {
        this -> capacity = capacity;
        this->rear = -1;
        this->front=0;
        this->currentsize=0;
    }

    ~Queue()
    {
        delete[] arr;
    }

    void Enqueue(int data);
    void Dequeue();
    void Peek();
    void getFront();
    void getRear();
    void Display();
    bool isFull();
    bool isEmpty();
    void getsize();
};

void Queue::Enqueue(int data)
{
    if (isFull())
    {
       cout<<"Queue Is Full"<<endl;
       return;
    }
    arr[++rear]=data;
    cout<<data<<" ";

}

void Queue::Dequeue()
{
    if (isEmpty())
    {
        cout<<"Queue Is Empty:"<<endl;
        return;
    }
    
    cout<<"Deque Element:"<<rear --<<endl;
    cout<<endl;
}

void Queue::getFront()
{
    if (isEmpty())
    {
        cout<<"Queue Is Empty:"<<endl;
        return;
    }
    arr[front];
    
}

void Queue::getRear()
{
    if (isEmpty())
    {
        cout<<"Queue Is Empty:"<<endl;
        return;
    }
    cout<<"Rare Element Is:"<<" "<<arr[rear]<<endl;
}

void Queue::Peek()
{
    if (isEmpty())
    {
       cout<<"Queue Is Empty"<<endl;
       return;
    }

    cout<<"Front Element:"<<" "<<arr[front]<<endl;
    
}

bool Queue::isFull()
{
    return rear == capacity -1;
    
    cout<<"Queue Is Full"<<endl;;
}

bool Queue:: isEmpty()
{
    return front == -1;
    cout<<"Queue Is Empty"<<endl;
}

void Queue::getsize()
{
    cout<<"Size:"<<" "<< rear - front + 1;
}

void Queue::Display()
{
    if (isEmpty())
    {
        cout<<"Queue Is Empty"<<endl;
        return;
    }

    cout<<"Queue:";
    for (int i = front; i <= rear; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl; 
}

int main()
{
    Queue queue(5);

    queue.Enqueue(10);
    queue.Enqueue(20);
    queue.Enqueue(30);
    queue.Enqueue(40);
    queue.Enqueue(50);
    queue.Enqueue(60);

    queue.Dequeue();

    queue.Peek();

    queue.getFront();

    queue.getRear();

    queue.getsize();
    
    cout<<endl;


   cout<<endl;

    cout<<"Empty:"<<" "<<queue.isEmpty()<<endl;

    cout<<endl;

    cout<<"Full:"<<" "<<queue.isFull()<<endl;

    cout<<endl;

    queue.Display();
    return 0;
}