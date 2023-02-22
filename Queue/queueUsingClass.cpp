/*
    Created By : Vikram Markali
*/

#include <bits/stdc++.h>
#define print(x) cout<<x<<;
using namespace std;

class Queue
{
    private:
        int front;
        int rear;
        int size;
        int *Q;
    
    public:
        Queue()
        {
            front=rear = -1;
            size = 10;
            Q = new int[size];
        }
        Queue(int size)
        {
            front=rear = -1;
            size = size;
            Q = new int[size];
        }

        void enqueue(int x);
        int dqueue();
        void displayQueue();
};

void Queue::enqueue(int x)
{
    if(rear == size-1)
    {
        cout<<"Queue is Full!!";
    }
    else
    {
        rear++;
        Q[rear] = x;
    }
}
int Queue::dqueue()
{
    int x = -1;
    if(rear == front)
    {
        cout<<"\nQueue is Empty!!!";
    }
    else
    {
        front++;
        x = Q[front];
    }
    return x;
}

void Queue::displayQueue()
{
    cout<<"\nQueue: ";
    for(int i=front+1;i<=rear;i++)
    {
        cout<<Q[i]<<" ";
    }
}

int main()
{
    Queue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.displayQueue();

    cout<<"\nElement Deleted: "<<q.dqueue();
    q.enqueue(5);
    q.displayQueue();

    return 0;
}