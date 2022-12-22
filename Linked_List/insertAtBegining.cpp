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

void insertAtBegining(int x)
{
    struct Node *t;
    t = (struct Node*)malloc(sizeof(struct Node));
    t->data = x;
    t->next = first;
    first = t;
}

int main()
{
    int A[] = {10,20,30,60,40,50};
    createNode(A,6);
    
    displayList(first);
    insertAtBegining(5);
    displayList(first);

    return 0;
}