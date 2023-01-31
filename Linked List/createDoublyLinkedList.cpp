/*
    Created By : Vikram Markali
*/

#include <bits/stdc++.h>
#define print(x) cout<<x<<;
using namespace std;

struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
}*first = NULL;

void createList(int A[], int n)
{
    struct Node *t,*last;

    // first = (struct Node*)malloc(sizeof(struct Node));
    t = new Node;4
    first->data = A[0];
    first->prev = NULL;
    first->next = NULL;
    last = first;

    for(int i=1;i<n;i++)
    {
        // t = (struct Node *)malloc(sizeof(struct Node));
        t = new Node;
        t->data = A[i];
        t->prev = last;
        t->next = last->next;
        last->next = t;
        last = t;
    }
}
int Length(struct Node *p)
{
    int len = 0;
    while(p != NULL)
    {
        len++;
        p = p->next;
    }
    return len;
}

void displayList(struct Node *p)
{
    while(p != NULL)
    {
        cout<<p->data<<" ";
        p = p->next;
    }
}
int main()
{
    int A[] = {10,20,30,40,50};

    createList(A,5);
    displayList(first);
    cout<<"\nLenth of List: "<<Length(first);
    return 0;
}