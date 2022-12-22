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
    while(p != NULL)
    {
        cout<<p->data<<" ";
        p = p->next;
    }
}

Node* searchNode(struct Node *p, int key)
{
    while(p != NULL)
    {
        if(key == p->data)
        {
            // cout<<"\nKey is found!!";
            return p;
        }
        p= p->next;
    }
    // cout<<"\nNot found!!";
    return NULL;
}

Node* searchNodeR(Node *p,int key)
{
    if(p == NULL)
    {
        return NULL;
    }

    if(key == p->data)
    {
        return p;
    }
    else
    {
        return searchNodeR(p->next, key);
    }
}
int main()
{
    int A[] = {10,20,30,60,40,50};
    createNode(A,6);
    displayList(first);

    cout<<"\nNode using Loop :"<<searchNode(first,60);
    cout<<"\nNode using Recursion :"<<searchNodeR(first,60);
    return 0;
}