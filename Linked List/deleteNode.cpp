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

int countNode(struct Node *p)
{
    int cnt=0;
    while(p != NULL)
    {
        cnt++;
        p = p->next;
    }
    return cnt;
}

int deleteNode(struct Node *p,int pos)
{
    struct Node *q=NULL;
    int x = -1;

    if(pos < 0 || pos > countNode(p))
    {
        return x;
    }
    if(pos == 1)
    {
        q = first;
        x = first->data;
        first = first->next;
        free(q);
        return x;
    }
    else
    {
        for(int i=0;i<pos-1 && p ;i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        x = p->data;
        free(p);
        return x;
    }
}

int main()
{
    int A[] = {10,20,30,40,50};

    createList(A,5);
    displayList(first);
    cout<<"\nNode deleted: "<<deleteNode(first,1);
    displayList(first);
    cout<<"\nNode deleted: "<<deleteNode(first,4);
    displayList(first);
    return 0;
}
