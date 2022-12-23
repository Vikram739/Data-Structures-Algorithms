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

void createList(int A[] , int n)
{
    // creating first node...
    struct Node *t, *last;

    first = new Node;
    // first = (struct Node *)malloc(sizeof(struct Node));

    first->data = A[0];
    first->next = NULL;
    last = first;

    // creating multiple nodes...
    for(int i=1;i<n;i++)
    {
        // t =(struct Node *)malloc(sizeof(struct Node));
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void displayList(struct Node *p)
{
    cout<<"\nLinked List: ";
    while(p != NULL)
    {
        cout<<p->data<<" ";
        p = p->next;
    }
}

void insertInSorted(struct Node *p,int x)
{
    struct Node *t,*q=NULL;

    // t = (struct Node*)malloc(sizeof(Node));
    t = new Node;
    t->data = x;
    t->next = NULL;

    if(first == NULL)
    {
        first = t;
    }
    else
    {
        while(p != NULL && p->data < x)
        {
            q = p;
            p = p->next;
        }
        if(p == first)
        {
            t->next = first;
            first = t;
        }
        else
        {
            t->next = q->next;
            q->next = t;
        }
    }
}

int main()
{
    int A[] = {10,20,30,40,50}; 

    createList(A,5);
    displayList(first);

    insertInSorted(first,35);
    insertInSorted(first,5);
    displayList(first);
    return 0;
}