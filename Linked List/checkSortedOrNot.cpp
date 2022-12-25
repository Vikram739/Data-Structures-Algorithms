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

bool checkSorted(struct Node *p)
{
    int x = INT_MIN;
    while(p != NULL)
    {
        if(p->data < x)
        {
            return false;     // false = 0;
        }
        x = p->data;
        p = p->next;
    }
    return true;        //true = 1;
}

int main()
{
    int A[] = {10,20,30,40,50};

    createList(A,5);
    displayList(first);

    cout<<"\nCheck Linked List Sorted Or Not: "<<checkSorted(first);
    

    return 0;
}
