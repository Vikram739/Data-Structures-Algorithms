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
    last->next = first;
}

void displayList(struct Node *p)
{
    cout<<"\nLinked List: ";
    struct Node *q = p;
    while(p != NULL)
    {
        cout<<p->data<<" ";
        p = p->next;
        q = q->next->next;
        if(p == q)
        {
            break;
        }
        
    }
}

// check loop present in linked  list or not...
bool checkLoop(struct Node *p)
{
    struct Node *q = p;
    while(p && p->next)
    {
        p = p->next->next;
        q = q->next;
        if(p == q)
        {
            return true;
        }
    }
    return false;
}


int main()
{
    int A[] = {10,20,30,40,50};

    createList(A,5);
    displayList(first);
    cout<<"\nIs Loop Present: "<<checkLoop(first);

    
    return 0;
}
