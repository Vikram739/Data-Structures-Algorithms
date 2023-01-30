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
    first->next = first;
    last = first;

    for(int i=1;i<n;i++)
    {
        // t =(struct Node*) malloc(sizeof(Node));
        t = new Node;
        t->data = A[i];
        t->next = last->next;
        last->next = t;
        last = t;

    }
    last->next = first;
}

void displayCircular(struct Node *head)
{
    struct Node *p = head;
    cout<<"\nCircular Linked List: ";
    do
    {
        cout<<p->data<<" ";
        p = p->next;

    }while(p != head);
}

void displayCircularRecursive(struct Node *p)
{
    // struct Node *p = head;
    static int flg = 0;
    
    if(p != first || flg == 0)
    {
        flg = 1;
        cout<<p->data<<" ";
        displayCircularRecursive(p->next);
    }
    flg=0;
}
int main()
{
    int A[] = {10,20,30,40,50,60};

    createList(A,6);
    displayCircular(first);
    cout<<"\nRecursive Circular Linked List: ";
    displayCircularRecursive(first);
    return 0;
}