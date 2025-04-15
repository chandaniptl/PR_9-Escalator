#include <iostream>
using namespace std;

class Stack
{
public:
    int *array;
    int top;
    int capacity;

    Stack(int capacity)
    {
        this->capacity = capacity;
        array = new int[capacity];
        top = -1;
    }

    ~Stack()
    {
        delete[] array;
    }

    void push(int value);
    void pop();
    void peek();
    bool isfull();
    bool isempty();
    void size();
    void display();
};

void Stack::push(int value)
{
    if (isfull())
    {
        cout<<endl;
        cout << "Stack  is Full" << endl;
        return;
    }
    array[++top] = value;

    
    cout << value<<" ";
    
}

void Stack::pop()
{
    if (isempty())
    {
        cout << "Element is Empty" << endl;
        return;
    }

    cout<<"Element Remove:"<<" " <<array[top--];
    cout<<endl;
}

void Stack::peek()
{
    if (isempty())
    {
        cout << "Stack is Empty" << endl;
        return;
    }
    cout<<"Peek Data:"<<" "<<array[top]<<endl;
}

bool Stack::isfull()
{
    return top == capacity - 1;
}

bool Stack::isempty()
{
    return top == -1;
}

void Stack:: size()
{
    cout<<"Size:"<<" "<<top + 1;
}

void Stack::display()
{
    if (isempty())
    {
        cout << "Stack is Empty" << endl;
        return;
    }

    for (int i = top; i >= 0; i--)
    {
        cout<<array[i]<<" ";
    }
    
    cout<<endl;
}

int main()
{
    Stack stack(5);

    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    stack.push(50);
    stack.push(60);

    cout<<endl;

    stack.pop();

    cout<<endl;
    stack.peek();

     cout<<endl;
    // cout<<"Full:"<<" "<<stack.isfull();

    // cout<<endl;
    // cout<<"Empty:"<<" "<<stack.isempty();
    // cout<<endl;

    stack.size();

    cout<<endl;
    stack.display();
    
    return 0;
}