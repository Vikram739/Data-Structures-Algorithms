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
}*first;


void createNode(int A[],int n)
{
    struct Node *t,*last;
    // first = (struct Node *)malloc(sizeof(struct Node));
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;
    
    for(int i=1;i<n;i++)
    {
        // t = (struct Node *)malloc(sizeof(struct Node));
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

void insertAtPos(struct Node *p, int pos, int x)
{
    struct Node *t;
    // t = (struct Node *)malloc(sizeof(struct Node));
    t = new Node;
    t->data = x;
    for(int i=0;i<pos-1 ;i++)
    {
        p = p->next;
    }
    t->next = p->next;
    p->next = t;
    cout<<"\n Node sucessfully inserted after: "<<pos;
}
int main()
{
    int A[] = {10,20,30,60,40,50};
    createNode(A,6);
    
    displayList(first);
    insertAtPos(first,4,100);
    displayList(first);

    return 0;
}