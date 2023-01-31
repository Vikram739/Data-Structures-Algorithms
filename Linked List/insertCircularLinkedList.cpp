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
}*first=NULL;

int Length(struct Node *p)
{
    int len=0;
    do{
        p = p->next;
        len++;
    }while(p != first);
    return len;
}

void createList(int A[],int n)
{
    struct Node *t,*last;
    // first = (struct Node*)malloc(sizeof(Node));
    first = new Node;
    first->data = A[0];
    first->next = first;
    last = first;

    for(int i=1;i<n;i++)
    {
        // t =(struct Node*) malloc(sizeof(Node));
        t = new Node;
        t->data = A[i];
        t->next = last->next;
        last->next = t;
        last = t;

    }
    last->next = first;
}

void insertCircularList(Node *p , int index, int x)
{
    Node *t;
    if(index<0 || index>Length(p))
    {
        cout<<"\nInvalid index...";
        return;
    }
    if(index == 0)
    {
        // t = (struct Node*)malloc(sizeof(struct Node));
        t = new Node;
        t->data = x;
        if(first == NULL)
        {
            first = t;
            first->next = first;
        }
        else
        {
            while(p->next != first)
            {
                p = p->next;
            }
            p->next = t;
            t->next = first;
            first = t;
        }
    }
    else
    {
        for(int i=0;i<index-1;i++)
        {
            p = p->next;
        }
        t = new Node;
        t->data = x;
        t->next = p->next;
        p->next = t;
    }
}

void displayCircular(struct Node *head)
{
    struct Node *p = head;
    cout<<"\nCircular Linked List: ";
    do
    {
        cout<<p->data<<" ";
        p = p->next;

    }while(p != head);
}


int main()
{
    int A[] = {10,20,30,40,50};

    createList(A,5);
    displayCircular(first);

    insertCircularList(first,3,35);
    displayCircular(first);
    return 0;
}