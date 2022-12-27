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

void createList(int A[],int n)
{
    struct Node *t,*last;
    // first = (struct Node*)malloc(sizeof(Node));
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for(int i=1;i<n;i++)
    {
        // t =(struct Node*) malloc(sizeof(Node));
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

// It removes the duplicates from sorted linked list...
void removeDuplicates(struct Node* p)
{
    struct Node *q = p->next;
    while(q)
    {
        if(p->data == q->data)
        {
            p->next = q->next;
            free(q);
            q = p->next;
        }
        else
        {
            p = q;

        }
            q = q->next;
    }
}

int main()
{
    int A[] = {10,20,20,30,40,40,50};

    createList(A,7);
    displayList(first);

    removeDuplicates(first);
    displayList(first);

    return 0;
}
