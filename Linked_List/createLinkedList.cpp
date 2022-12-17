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
    cout<<"Linked List: ";
    while(p != NULL)
    {
        cout<<p->data<<" ";
        p = p->next;
    }
}

int main()
{
    int A[] = {3,5,7,11,15};

    createList(A,5);
    displayList(first);

    return 0;
}