/*
    Created By : Vikram Markali
*/

#include <bits/stdc++.h>
#define print(x) cout<<x<<;
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*front=NULL,*rear=NULL;

void enqueue(int x)
{
    struct Node *t;
    t = (struct Node*)malloc(sizeof(struct Node));
    
    if(t == NULL)
    {
        cout<<"Queue is Full!!\n";
    }
    else
    {
        t->data = x;
        t->next = NULL;
        if(front == NULL)
        {
            front = t;
            rear = t;
        }
        else
        {
            rear->next = t;
            rear = t;
        }
    }
}

int dqueue()
{
    int x=-1;
    if(front == NULL)
    {
        cout<<"Queue is Empty!!\n";
    }
    else
    {
        struct Node *p = front;
        front = front->next;
        x = p->data;
        delete p;
    }
    return x;
}

void display()
{
    struct Node *p = front;
    cout<<"\nQueue: ";
    while(p)
    {
        cout<<p->data<<" ";
        p = p->next;
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    display();
    cout<<"\nElement Deleted: "<<dqueue();
    display();

    return 0;
}