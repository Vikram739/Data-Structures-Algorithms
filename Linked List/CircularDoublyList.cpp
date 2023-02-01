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
}*first=NULL;

void createList(int A[], int n)
{
    struct Node *t,*last;

    // first = (struct Node*)malloc(sizeof(Node));
    first = new Node;
    first->data = A[0];
    first->prev = first;
    first->next = first;
    last = first;

    for(int i = 1;i < n;i++)
    {
        // t = (struct Node*)malloc(sizeof(Node));
        t = new Node;
        t->data = A[i];
        t->prev = last;
        t->next = first;
        first->prev = t;
        last->next = t;
        last = t;
    }
}
int Length(struct Node *p)
{
    int len=0;
    do{
        len++;
        p = p->next;
    }while(p != first);
    return len;
}
void insertNode(struct Node *p,int pos,int x)
{
    struct Node *t;
    if(pos<0 || pos>Length(p))
    {
        return;
    }
    if(pos == 0)
    {
        t = new Node;
        t->data = x;
        if(first == NULL)
        {
            first = t;
            first->prev = first;
            first->next = first;
        }
        else
        {
            t->prev = first->prev;
            t->next = first;
            first->prev->next = t;
            first->prev = t;
            first = t;
        }
    }
    else
    {
        for(int i=0;i<pos-1;i++)
        {
            p = p->next;
        }
        t = new Node;
        t->data = x;
        t->prev = p;
        t->next = p->next;
        if(p->next)
        {
            p->next->prev = t;
        }
        p->next = t;    
    }
}
void displayList(struct Node *p)
{
    cout<<"Circular Doubly List: ";
    do{
        cout<<p->data<<" ";
        p = p->next;
    }while(p != first);
    cout<<endl;
}

int main()
{
    int A[] = {10,20,30,40,50};

    createList(A,5);
    displayList(first);

    insertNode(first,3,35);
    displayList(first);
    
    
    return 0;
}