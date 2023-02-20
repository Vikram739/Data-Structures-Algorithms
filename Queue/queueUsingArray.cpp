/*
    Created By : Vikram Markali
*/

#include <bits/stdc++.h>
#define print(x) cout<<x<<;
using namespace std;

struct Queue
{
    int size;
    int front;
    int rear;
    int *Q;
};

void createQueue(struct Queue *q, int size)
{
    q->size = size;
    q->front = q->rear = -1;
    q->Q = (int *)malloc(q->size*sizeof(int));
}
void enqueue(Queue *q, int x)
{
    if(q->rear == q->size-1)
    {
        cout<<"\nQueue is Full!!";
    }
    else
    {
        q->rear++;
        q->Q[q->rear] = x;
        
    }
}

int dqueue(struct Queue *q)
{
    int x=-1;
    if(q->front == q->rear)
    {
        cout<<"\nQueue is Empty!!!";
    }
    else
    {
        q->front++;
        x = q->Q[q->front];
    }
    return x;
}

void displayQueue(struct Queue *q)
{
    for(int i=q->front+1;i<=q->rear;i++)
    {
        cout<<q->Q[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    struct Queue *q;
    createQueue(q, 5);

    enqueue(q,10);
    enqueue(q,20);
    enqueue(q,30);
    displayQueue(q);
    cout<<"\nElement Deleted: "<<dqueue(q);
    displayQueue(q);

    return 0;
}